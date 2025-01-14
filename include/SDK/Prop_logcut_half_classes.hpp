#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_logcut_half

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_logcut_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_logcut_half.prop_logcut_half_C
// 0x0008 (0x0368 - 0x0360)
class AProp_logcut_half_C final : public AProp_logcut_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_logcut_half_C;                 // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_prop_logcut_half(int32 EntryPoint);
	void broken();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_logcut_half_C">();
	}
	static class AProp_logcut_half_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_logcut_half_C>();
	}
};
static_assert(alignof(AProp_logcut_half_C) == 0x000008, "Wrong alignment on AProp_logcut_half_C");
static_assert(sizeof(AProp_logcut_half_C) == 0x000368, "Wrong size on AProp_logcut_half_C");
static_assert(offsetof(AProp_logcut_half_C, UberGraphFrame_Prop_logcut_half_C) == 0x000360, "Member 'AProp_logcut_half_C::UberGraphFrame_Prop_logcut_half_C' has a wrong offset!");

}

