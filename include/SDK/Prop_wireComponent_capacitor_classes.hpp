#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_capacitor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_wireComponent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_wireComponent_capacitor.prop_wireComponent_capacitor_C
// 0x0020 (0x0380 - 0x0360)
class AProp_wireComponent_capacitor_C final : public AProp_wireComponent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_wireComponent_capacitor_C;     // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Billboard;                                         // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Delay;                                             // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_374[0x4];                                      // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AWire_C*                                PassTo;                                            // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_wireComponent_capacitor(int32 EntryPoint);
	void WirePass(class AWire_C* Wire);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_wireComponent_capacitor_C">();
	}
	static class AProp_wireComponent_capacitor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_wireComponent_capacitor_C>();
	}
};
static_assert(alignof(AProp_wireComponent_capacitor_C) == 0x000008, "Wrong alignment on AProp_wireComponent_capacitor_C");
static_assert(sizeof(AProp_wireComponent_capacitor_C) == 0x000380, "Wrong size on AProp_wireComponent_capacitor_C");
static_assert(offsetof(AProp_wireComponent_capacitor_C, UberGraphFrame_Prop_wireComponent_capacitor_C) == 0x000360, "Member 'AProp_wireComponent_capacitor_C::UberGraphFrame_Prop_wireComponent_capacitor_C' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_capacitor_C, Billboard) == 0x000368, "Member 'AProp_wireComponent_capacitor_C::Billboard' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_capacitor_C, Delay) == 0x000370, "Member 'AProp_wireComponent_capacitor_C::Delay' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_capacitor_C, PassTo) == 0x000378, "Member 'AProp_wireComponent_capacitor_C::PassTo' has a wrong offset!");

}
