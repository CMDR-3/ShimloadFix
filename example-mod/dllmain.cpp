// dllmain.cpp : Defines the entry point for the DLL application.
#define _WIN32_LEAN_AND_MEAN
#include "Windows.h"

#include "CoreMod.h"

class ExampleMod : public CoreMod
{
    void LoadMod() override {
        std::cout << "ExampleMod loaded!" << std::endl;
    }

    void OnLevelChange(UWorld* World) override {
        std::cout << "Level changed!" << std::endl;
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