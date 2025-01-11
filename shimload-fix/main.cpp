#include <iostream>
#include <filesystem>
#define _WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include "CoreMod.h"
#include <fstream>
#include <tlhelp32.h>

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

    CoreMod* mod = CreateCoreMod();
    if (mod) {
        std::cout << "Mod loaded successfully!" << std::endl;
        mod->LoadMod();
        CoreModList.push_back(mod);
    }

    FreeLibrary(hMod);
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

int main()
{
    std::wstring procName = L"VotV-Win64-Shipping.exe";
    DWORD procId = GetProcessIdByName(procName);
    if (procId == 0)
    {
        std::cerr << "FAILED to find VotV process! Exiting..." << std::endl;
        return 1;
    }

    std::string FileName = "ShimloadFix-Log-" + std::to_string(procId) + ".txt";
    std::ifstream fin(FileName);

    if (fin) {
        std::cout << "ShimloadFix is already running, skipping." << std::endl;
        return 0;
    }

    FILE* f;
    freopen_s(&f, FileName.c_str(), "w", stdout);

    std::cout << "Loading mods..." << std::endl;

    std::filesystem::path modPath = std::filesystem::current_path().parent_path().parent_path() / "Content" / "Paks" / "LogicMods";
    std::cout << "Loading from path \"" << modPath.string() << "\"" << std::endl;
    if (!std::filesystem::exists(modPath)) {
        std::cerr << "Directory does not exist: " << modPath << std::endl;
        return 1;
    }
    if (!std::filesystem::is_directory(modPath)) {
        std::cerr << "Loading path is not a directory: " << modPath << std::endl;
        return 1;
    }

    for (const auto& entry : std::filesystem::directory_iterator(modPath)) {
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