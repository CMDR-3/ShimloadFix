#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_delay

#include "Basic.hpp"


namespace SDK::Params
{

// Function prop_wireComponent_delay.prop_wireComponent_delay_C.ExecuteUbergraph_prop_wireComponent_delay
// 0x0010 (0x0010 - 0x0000)
struct Prop_wireComponent_delay_C_ExecuteUbergraph_prop_wireComponent_delay final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AWire_C*                                K2Node_Event_wire;                                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_wireComponent_delay_C_ExecuteUbergraph_prop_wireComponent_delay) == 0x000008, "Wrong alignment on Prop_wireComponent_delay_C_ExecuteUbergraph_prop_wireComponent_delay");
static_assert(sizeof(Prop_wireComponent_delay_C_ExecuteUbergraph_prop_wireComponent_delay) == 0x000010, "Wrong size on Prop_wireComponent_delay_C_ExecuteUbergraph_prop_wireComponent_delay");
static_assert(offsetof(Prop_wireComponent_delay_C_ExecuteUbergraph_prop_wireComponent_delay, EntryPoint) == 0x000000, "Member 'Prop_wireComponent_delay_C_ExecuteUbergraph_prop_wireComponent_delay::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_delay_C_ExecuteUbergraph_prop_wireComponent_delay, K2Node_Event_wire) == 0x000008, "Member 'Prop_wireComponent_delay_C_ExecuteUbergraph_prop_wireComponent_delay::K2Node_Event_wire' has a wrong offset!");

// Function prop_wireComponent_delay.prop_wireComponent_delay_C.wirePass
// 0x0008 (0x0008 - 0x0000)
struct Prop_wireComponent_delay_C_WirePass final
{
public:
	class AWire_C*                                Wire;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_wireComponent_delay_C_WirePass) == 0x000008, "Wrong alignment on Prop_wireComponent_delay_C_WirePass");
static_assert(sizeof(Prop_wireComponent_delay_C_WirePass) == 0x000008, "Wrong size on Prop_wireComponent_delay_C_WirePass");
static_assert(offsetof(Prop_wireComponent_delay_C_WirePass, Wire) == 0x000000, "Member 'Prop_wireComponent_delay_C_WirePass::Wire' has a wrong offset!");

}

