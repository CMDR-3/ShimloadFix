#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_minelight

#include "Basic.hpp"


namespace SDK::Params
{

// Function prop_minelight.prop_minelight_C.upd
// 0x0020 (0x0020 - 0x0000)
struct Prop_minelight_C_Upd final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_minelight_C_Upd) == 0x000008, "Wrong alignment on Prop_minelight_C_Upd");
static_assert(sizeof(Prop_minelight_C_Upd) == 0x000020, "Wrong size on Prop_minelight_C_Upd");
static_assert(offsetof(Prop_minelight_C_Upd, Temp_bool_Variable) == 0x000000, "Member 'Prop_minelight_C_Upd::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Prop_minelight_C_Upd, Temp_object_Variable) == 0x000008, "Member 'Prop_minelight_C_Upd::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Prop_minelight_C_Upd, Temp_object_Variable_1) == 0x000010, "Member 'Prop_minelight_C_Upd::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(Prop_minelight_C_Upd, K2Node_Select_Default) == 0x000018, "Member 'Prop_minelight_C_Upd::K2Node_Select_Default' has a wrong offset!");

// Function prop_minelight.prop_minelight_C.ExecuteUbergraph_prop_minelight
// 0x0004 (0x0004 - 0x0000)
struct Prop_minelight_C_ExecuteUbergraph_prop_minelight final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_minelight_C_ExecuteUbergraph_prop_minelight) == 0x000004, "Wrong alignment on Prop_minelight_C_ExecuteUbergraph_prop_minelight");
static_assert(sizeof(Prop_minelight_C_ExecuteUbergraph_prop_minelight) == 0x000004, "Wrong size on Prop_minelight_C_ExecuteUbergraph_prop_minelight");
static_assert(offsetof(Prop_minelight_C_ExecuteUbergraph_prop_minelight, EntryPoint) == 0x000000, "Member 'Prop_minelight_C_ExecuteUbergraph_prop_minelight::EntryPoint' has a wrong offset!");

}
