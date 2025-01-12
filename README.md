# ShimloadFix
A extension to [VoidMod2](https://thunderstore.io/c/voices-of-the-void/p/Gatohost/VoidMod/) and [unreal-shimloader](https://thunderstore.io/c/voices-of-the-void/p/Thunderstore/unreal_shimloader/) to support C++ code mods based on a SDK from Dumper-7.

# Foreword
unreal-shimloader is supposed to support C++ mods by default, but it's a bit finnicky. This extension aims to provide not only a library but a more permenant and reliable fix to unreal-shimloader's shenanigans.

# Why might one want to use this library? Aren't Lua/BP mods easier?
yes those formats are easier.<br>
However, these modding formats are REALLY limited and restricted. If you're willing to deal with a lot of C++ stupidity, virtually anything is possible from the C++ end.

# Alright, now how do I make a mod compatible with this library?
First things first, understand that the UE API is a bit... messed up.. with Dumper-7. Their repository has some nice information on using the SDK which you can find [here](https://github.com/Encryqed/Dumper-7/blob/main/UsingTheSDK.md#using-the-sdk)<br>
I recommend looking at the example-mod dllmain.cpp to get atleast a vague idea of how to make a mod.<br><br>

Tl;dr, you need three things to utilize the VM2 API.<br>
1. You need a class structured like this:
```c++
#include "CoreMod.h"
#include <VoidModAPI.hpp>

class YourCoolMod : public CoreMod
{
    std::string QueryModName() override {
        return "Awesome Mod!!";
    }
    
    void OnLoadMod() override {
        // you don't need any code in these
        std::cout << "Awesome Mod Loaded!!!" << std::endl;
    }

    void OnLevelChange(UWorld* World) override {
        // you don't need any code in these
    }
};
```

2. A skeleton entrypoint<br>
```c++
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
```
<br>
3. A exported function for the ML to get your class<br>

```c++
extern "C" __declspec(dllexport) CoreMod* CreateCoreMod() {
    return new YourCoolMod();
}
```
<br>
With all of these wrapped together, you've successfully created a mod!<br>
To test it, I recommend manually installing the modloader, and here's how:<br>

1. Download the latest release's .pak files

2. Download [VoidMod2](https://thunderstore.io/c/voices-of-the-void/p/Gatohost/VoidMod/)
 
3. Download UE4SS and install it to a unmodified Voices of the Void install

4. Run VotV once then close it to let UE4SS generate it's folders

5. From the same directory as VotV.exe, go to VotV->Content->Paks->LogicMods

6. Place both of ShimloadFix's pak files and VoidMod2's pak files into LogicMods
    
7. Place your compiled DLL into LogicMods
<br>
And now you've set everything up! ShimloadFix will automagically find your dll and load it.<br>

# Packaging your new C++ mod
Gatohost has thankfully given us the structure for packaging mods and you can find it [here](https://modding.ariral.space/docs/tutorials/packaging-mods/).<br>
There should be a README.md, a icon.png, a manifest.json, a pak folder, and your .dll file in that pak folder. All of this should be zipped together and then you can upload it to Thunderstore!<br>
I recommend just manually downloading a mod (i.e. VM2) and looking at how it's structured.

# Checklist
- [x] Basic support for mods
- [x] Fixing r2modman/Thunderstore Mod Manager to search for shimloaded dll files by profile name (from config)
- [ ] More in-depth VoidMod2-compatible API
- [ ] Working logging console
- [ ] Fixing unreal-shimloader's detour hacks by detaching the process and DLL injecting something (or just make my own shimloader)
- [ ] Switching to UEPseudo instead of Dumper-7 not only to make it game-agnostic but also just to have a better API in general
- [ ] Fixing IsParentProcessAlive so I don't overpopulate the end user's filesystem with *oh so many* log files
- [ ] C++ -> BP hooking/function calls

And I'm sure there's much much more I'm forgetting...
