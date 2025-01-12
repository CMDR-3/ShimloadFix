#include <iostream>
#include <filesystem>
#define _WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include "CoreMod.h"
#include <fstream>
#include <tlhelp32.h>
#include <VoidModAPI.hpp>

void LoadMod(const std::string& dllPath) {
    HMODULE hMod = LoadLibraryA(dllPath.c_str());
    if (!hMod) {
        std::cerr << "Failed to load mod \"" << dllPath << "\"\nError: " << GetLastError() << std::endl;
        return;
    }

    auto CreateCoreMod = reinterpret_cast<CreateCoreModFunc>(GetProcAddress(hMod, "CreateCoreMod"));
    if (!CreateCoreMod) {
        std::cout << "Failed to find CreateCoreMod in mod \"" << dllPath << "\", it might be using an unsupported API." << std::endl;
        FreeLibrary(hMod);
        return;
    }

    CoreMod* mod{};
    try
    {
        mod = CreateCoreMod();
    }
    catch (...)
    {
        std::cout << "Errored while creating new CoreMod. CoreMod Name: \"" << std::filesystem::path(dllPath).filename() << "\"\n";
        goto exit;
    }
    
    if (mod) {
        try
        {
            mod->OnLoadMod();
            CoreModList.push_back(mod);
            std::cout << "Mod loaded successfully!" << std::endl;
            goto exit;
        }
        catch (...)
        {
            std::cout << "Errored while calling OnLoadMod from \"" << mod->QueryModName() << "\"" << std::endl;
            goto exit;
        }
    }

exit:
    FreeLibrary(hMod);
    return;
}

bool IsParentProcessAlive(DWORD parentProcessId) {
    HANDLE hProcess = OpenProcess(PROCESS_QUERY_INFORMATION, FALSE, parentProcessId);
    if (hProcess == NULL) {
        std::cerr << "OpenProcess failed for process ID " << parentProcessId << ", error: " << GetLastError() << std::endl;
        return false;
    }
    CloseHandle(hProcess);
    return true;
}

DWORD GetProcessIdByName(const std::wstring& processName) {
    PROCESSENTRY32W entry;
    entry.dwSize = sizeof(PROCESSENTRY32W);

    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);
    if (snapshot == INVALID_HANDLE_VALUE) {
        return 0;
    }

    if (Process32FirstW(snapshot, &entry)) {
        do {
            if (_wcsicmp(entry.szExeFile, processName.c_str()) == 0) {
                CloseHandle(snapshot);
                return entry.th32ProcessID;
            }
        } while (Process32NextW(snapshot, &entry));
    }

    CloseHandle(snapshot);
    return 0;
}

int main(int argc, char* argv[])
{
    FILE* f;
    AllocConsole();
    freopen_s(&f, "CONOUT$", "w", stdout);
    freopen_s(&f, "CONIN$", "r", stdin);

    /* ideally argc would only be 1, 
    * but these fancy modloaders support
    * profile names with spaces in them
    */
    if (argc <= 0)
    {
        std::cerr << "argc was 0, profile name incorrectly passed!" << std::endl;
        return 1;
    }

    std::wstring procName = L"VotV-Win64-Shipping.exe";
    DWORD procId = GetProcessIdByName(procName);
    if (procId == 0)
    {
        std::cerr << "FAILED to find VotV process! Exiting..." << std::endl;
        return 1;
    }

    std::string FileName = "ShimloadFix-Log-" + std::to_string(procId) + ".txt";
    std::ifstream fin(FileName);

    VoidMod::Setup();

    if (fin) {
        std::cout << "ShimloadFix is already running, skipping." << std::endl;
        /*
        * this is probably from a level change as vm2 automatically re-loads mods on level change
        * so call OnLevelChange and pass the new UWorld
        */

        for (auto& mod : CoreModList)
        {
            try
            {
                mod->OnLevelChange(SDK::UWorld::GetWorld());
            }
            catch (...)
            {
                std::cout << "Errored while changing level for mod \"" << mod->QueryModName() << "\"" << std::endl;
                continue;
            }
        }

        return 0;
    }

    std::cout << "Loading mods..." << std::endl;

    std::filesystem::path modPath = std::filesystem::current_path().parent_path().parent_path() / "Content" / "Paks" / "LogicMods";
    std::cout << "Loading from path \"" << modPath.string() << "\"" << std::endl;
    if (!std::filesystem::exists(modPath)) {
        std::cerr << "Directory does not exist: " << modPath << std::endl;
        modPath = std::filesystem::current_path().parent_path();
        std::cout << "Loading from path \"" << modPath.string() << "\"" << std::endl;
        return 1;
    }
    if (!std::filesystem::is_directory(modPath)) {
        std::cerr << "Loading path is not a directory: " << modPath << std::endl;
        return 1;
    }

    for (const auto& entry : std::filesystem::recursive_directory_iterator(modPath)) {
        if (entry.is_regular_file() && entry.path().has_extension() && entry.path().extension() == ".dll") {
            std::cout << "Loading mod \"" << entry.path().filename().string() << "\"" << std::endl;
            LoadMod(entry.path().string());
        }
    }

    while (true)
    {
        Sleep(50);
        /* BUG: for some reason, this func ALWAYS returns true? */
        if (!IsParentProcessAlive(procId))
        {
            std::cout << "Closing the file and exiting..." << std::endl;
            std::remove(FileName.c_str());
            break;
        }
    }

	return 0;
}