#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_dingus4ugly

#include "Basic.hpp"

#include "Prop_dingus_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_dingus4ugly.prop_dingus4ugly_C
// 0x0008 (0x0420 - 0x0418)
class AProp_dingus4ugly_C final : public AProp_dingus_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_dingus4ugly_C;                 // 0x0418(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_prop_dingus4ugly(int32 EntryPoint);
	void Kicked(bool Kick);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_dingus4ugly_C">();
	}
	static class AProp_dingus4ugly_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_dingus4ugly_C>();
	}
};
static_assert(alignof(AProp_dingus4ugly_C) == 0x000008, "Wrong alignment on AProp_dingus4ugly_C");
static_assert(sizeof(AProp_dingus4ugly_C) == 0x000420, "Wrong size on AProp_dingus4ugly_C");
static_assert(offsetof(AProp_dingus4ugly_C, UberGraphFrame_Prop_dingus4ugly_C) == 0x000418, "Member 'AProp_dingus4ugly_C::UberGraphFrame_Prop_dingus4ugly_C' has a wrong offset!");

}

