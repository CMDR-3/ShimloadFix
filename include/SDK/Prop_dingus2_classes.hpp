#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_dingus2

#include "Basic.hpp"

#include "Prop_dingus_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_dingus2.prop_dingus2_C
// 0x0008 (0x0420 - 0x0418)
class AProp_dingus2_C final : public AProp_dingus_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_dingus2_C;                     // 0x0418(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_prop_dingus2(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_dingus2_C">();
	}
	static class AProp_dingus2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_dingus2_C>();
	}
};
static_assert(alignof(AProp_dingus2_C) == 0x000008, "Wrong alignment on AProp_dingus2_C");
static_assert(sizeof(AProp_dingus2_C) == 0x000420, "Wrong size on AProp_dingus2_C");
static_assert(offsetof(AProp_dingus2_C, UberGraphFrame_Prop_dingus2_C) == 0x000418, "Member 'AProp_dingus2_C::UberGraphFrame_Prop_dingus2_C' has a wrong offset!");

}
