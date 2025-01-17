#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_flipflop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_wireComponent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_wireComponent_flipflop.prop_wireComponent_flipflop_C
// 0x0020 (0x0380 - 0x0360)
class AProp_wireComponent_flipflop_C final : public AProp_wireComponent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_wireComponent_flipflop_C;      // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Billboard;                                         // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Activated;                                         // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_371[0x7];                                      // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AWire_C*                                Wire;                                              // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_wireComponent_flipflop(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void WireDisconnected(class AWire_C* Wire_0, bool Side);
	void WireConnected(class AWire_C* Wire_0, bool Side);
	void WirePass(class AWire_C* Wire_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_wireComponent_flipflop_C">();
	}
	static class AProp_wireComponent_flipflop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_wireComponent_flipflop_C>();
	}
};
static_assert(alignof(AProp_wireComponent_flipflop_C) == 0x000008, "Wrong alignment on AProp_wireComponent_flipflop_C");
static_assert(sizeof(AProp_wireComponent_flipflop_C) == 0x000380, "Wrong size on AProp_wireComponent_flipflop_C");
static_assert(offsetof(AProp_wireComponent_flipflop_C, UberGraphFrame_Prop_wireComponent_flipflop_C) == 0x000360, "Member 'AProp_wireComponent_flipflop_C::UberGraphFrame_Prop_wireComponent_flipflop_C' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_flipflop_C, Billboard) == 0x000368, "Member 'AProp_wireComponent_flipflop_C::Billboard' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_flipflop_C, Activated) == 0x000370, "Member 'AProp_wireComponent_flipflop_C::Activated' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_flipflop_C, Wire) == 0x000378, "Member 'AProp_wireComponent_flipflop_C::Wire' has a wrong offset!");

}

