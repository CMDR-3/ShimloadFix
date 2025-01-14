#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VoidMod_Terminal

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass VoidMod_Terminal.VoidMod_Terminal_C
// 0x0000 (0x0028 - 0x0028)
class UVoidMod_Terminal_C final : public UBlueprintFunctionLibrary
{
public:
	static void RegisterHelpCommand(const class FString& CommandUsage, const class FString& CommandDescription, class UObject* __WorldContext);
	static void GetHelpCommandOutput(class UObject* __WorldContext, class FString* HelpCommandOutput);
	static void WriteConsoleLine(const class FString& NewLine, class UObject* __WorldContext);
	static void DeleteLastLine(class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VoidMod_Terminal_C">();
	}
	static class UVoidMod_Terminal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVoidMod_Terminal_C>();
	}
};
static_assert(alignof(UVoidMod_Terminal_C) == 0x000008, "Wrong alignment on UVoidMod_Terminal_C");
static_assert(sizeof(UVoidMod_Terminal_C) == 0x000028, "Wrong size on UVoidMod_Terminal_C");

}

