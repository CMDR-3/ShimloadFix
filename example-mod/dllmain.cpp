// dllmain.cpp : Defines the entry point for the DLL application.
#define _WIN32_LEAN_AND_MEAN
#include "Windows.h"

#include "CoreMod.h"
#include <VoidModAPI.hpp>

class ExampleMod : public CoreMod
{
    std::string QueryModName() override {
        return "Zeta's Example Mod";
    }
    
    void OnLoadMod() override {
        std::cout << "ExampleMod loaded!" << std::endl;
    }

    void OnLevelChange(UWorld* World) override {
        std::cout << "Level changed!" << std::endl;
        VoidMod::Hint("Changed into level \"" + World->GetName() + "\"!", SDK::Enum_notifyType::INFO);
    }
};

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    /* Skeleton entry point. You may add code here if you want to, but you're generally
     * expected to use the provided CoreMod API. (it's compatible with VoidMod2)
    */
    return TRUE;
}

extern "C" __declspec(dllexport) CoreMod* CreateCoreMod() {
    return new ExampleMod();
}