#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_goldenIngot

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_goldenIngot.prop_goldenIngot_C.ExecuteUbergraph_prop_goldenIngot
// 0x0050 (0x0050 - 0x0000)
struct Prop_goldenIngot_C_ExecuteUbergraph_prop_goldenIngot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VictoryFloatMinusEquals_FloatOut;         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_WasRecentlyRendered_ReturnValue;          // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0010(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_argg_C*                           CallFunc_FinishSpawningActor_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_goldenIngot_C_ExecuteUbergraph_prop_goldenIngot) == 0x000010, "Wrong alignment on Prop_goldenIngot_C_ExecuteUbergraph_prop_goldenIngot");
static_assert(sizeof(Prop_goldenIngot_C_ExecuteUbergraph_prop_goldenIngot) == 0x000050, "Wrong size on Prop_goldenIngot_C_ExecuteUbergraph_prop_goldenIngot");
static_assert(offsetof(Prop_goldenIngot_C_ExecuteUbergraph_prop_goldenIngot, EntryPoint) == 0x000000, "Member 'Prop_goldenIngot_C_ExecuteUbergraph_prop_goldenIngot::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_goldenIngot_C_ExecuteUbergraph_prop_goldenIngot, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'Prop_goldenIngot_C_ExecuteUbergraph_prop_goldenIngot::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Prop_goldenIngot_C_ExecuteUbergraph_prop_goldenIngot, CallFunc_VictoryFloatMinusEquals_FloatOut) == 0x000008, "Member 'Prop_goldenIngot_C_ExecuteUbergraph_prop_goldenIngot::CallFunc_VictoryFloatMinusEquals_FloatOut' has a wrong offset!");
static_assert(offsetof(Prop_goldenIngot_C_ExecuteUbergraph_prop_goldenIngot, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x00000C, "Member 'Prop_goldenIngot_C_ExecuteUbergraph_prop_goldenIngot::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_goldenIngot_C_ExecuteUbergraph_prop_goldenIngot, CallFunc_WasRecentlyRendered_ReturnValue) == 0x00000D, "Member 'Prop_goldenIngot_C_ExecuteUbergraph_prop_goldenIngot::CallFunc_WasRecentlyRendered_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_goldenIngot_C_ExecuteUbergraph_prop_goldenIngot, CallFunc_GetTransform_ReturnValue) == 0x000010, "Member 'Prop_goldenIngot_C_ExecuteUbergraph_prop_goldenIngot::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_goldenIngot_C_ExecuteUbergraph_prop_goldenIngot, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000040, "Member 'Prop_goldenIngot_C_ExecuteUbergraph_prop_goldenIngot::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_goldenIngot_C_ExecuteUbergraph_prop_goldenIngot, CallFunc_FinishSpawningActor_ReturnValue) == 0x000048, "Member 'Prop_goldenIngot_C_ExecuteUbergraph_prop_goldenIngot::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function prop_goldenIngot.prop_goldenIngot_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Prop_goldenIngot_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_goldenIngot_C_ReceiveTick) == 0x000004, "Wrong alignment on Prop_goldenIngot_C_ReceiveTick");
static_assert(sizeof(Prop_goldenIngot_C_ReceiveTick) == 0x000004, "Wrong size on Prop_goldenIngot_C_ReceiveTick");
static_assert(offsetof(Prop_goldenIngot_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Prop_goldenIngot_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

