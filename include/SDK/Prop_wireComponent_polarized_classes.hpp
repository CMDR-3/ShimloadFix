#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_polarized

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_wireComponent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_wireComponent_polarized.prop_wireComponent_polarized_C
// 0x0010 (0x0370 - 0x0360)
class AProp_wireComponent_polarized_C final : public AProp_wireComponent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_wireComponent_polarized_C;     // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AWire_C*                                Wire;                                              // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_wireComponent_polarized(int32 EntryPoint);
	void WirePass(class AWire_C* Wire_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_wireComponent_polarized_C">();
	}
	static class AProp_wireComponent_polarized_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_wireComponent_polarized_C>();
	}
};
static_assert(alignof(AProp_wireComponent_polarized_C) == 0x000008, "Wrong alignment on AProp_wireComponent_polarized_C");
static_assert(sizeof(AProp_wireComponent_polarized_C) == 0x000370, "Wrong size on AProp_wireComponent_polarized_C");
static_assert(offsetof(AProp_wireComponent_polarized_C, UberGraphFrame_Prop_wireComponent_polarized_C) == 0x000360, "Member 'AProp_wireComponent_polarized_C::UberGraphFrame_Prop_wireComponent_polarized_C' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_polarized_C, Wire) == 0x000368, "Member 'AProp_wireComponent_polarized_C::Wire' has a wrong offset!");

}

