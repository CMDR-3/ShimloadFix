#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VoidMod_Config

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass VoidMod_Config.VoidMod_Config_C
// 0x0000 (0x0028 - 0x0028)
class UVoidMod_Config_C final : public UBlueprintFunctionLibrary
{
public:
	static void Get_Config_Variable_Default_Value(const class FString& Mod_Id, const class FString& Variable_Id, class UObject* __WorldContext, class FString* Default_Value, bool* Exists);
	static void Get_Config_Variable_Description(const class FString& Mod_Id, const class FString& Variable_Id, class UObject* __WorldContext, class FString* Description, bool* Exists);
	static void Get_Config_Variable_Pure(const class FString& ModID, const class FString& VariableId, class UObject* __WorldContext, class FString* Value, bool* Exists);
	static void Get_Config_Variable(const class FString& ModID, const class FString& VariableId, class UObject* __WorldContext, class FString* Value, bool* Exists);
	static void Set_Config_Variable(const class FString& ModID, const class FString& VariableId, const class FString& Value, class UObject* __WorldContext);
	static void Write_Config_Variables(class UObject* __WorldContext);
	static void Reload_Config_Variables(class UObject* __WorldContext, TArray<struct FVoidMod_ConfigVariable>* LoadedConfigVars);
	static void Set_Config_Default(const class FString& ModID, const class FString& VariableId, const class FString& Default_Value, const class FString& Description, class UObject* __WorldContext, bool* AlreadyExists);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VoidMod_Config_C">();
	}
	static class UVoidMod_Config_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVoidMod_Config_C>();
	}
};
static_assert(alignof(UVoidMod_Config_C) == 0x000008, "Wrong alignment on UVoidMod_Config_C");
static_assert(sizeof(UVoidMod_Config_C) == 0x000028, "Wrong size on UVoidMod_Config_C");

}

