#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_floatie

#include "Basic.hpp"


namespace SDK::Params
{

// Function prop_wireComponent_floatie.prop_wireComponent_floatie_C.ExecuteUbergraph_prop_wireComponent_floatie
// 0x0038 (0x0038 - 0x0000)
struct Prop_wireComponent_floatie_C_ExecuteUbergraph_prop_wireComponent_floatie final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AWaterVolume_C*                         K2Node_Event_water_1;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWaterVolume_C*                         K2Node_Event_water;                                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_GetPhysicalMaterial_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_getBoyoancy_Value;                        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AWire_C*                                K2Node_Event_wire;                                 // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_wireComponent_floatie_C_ExecuteUbergraph_prop_wireComponent_floatie) == 0x000008, "Wrong alignment on Prop_wireComponent_floatie_C_ExecuteUbergraph_prop_wireComponent_floatie");
static_assert(sizeof(Prop_wireComponent_floatie_C_ExecuteUbergraph_prop_wireComponent_floatie) == 0x000038, "Wrong size on Prop_wireComponent_floatie_C_ExecuteUbergraph_prop_wireComponent_floatie");
static_assert(offsetof(Prop_wireComponent_floatie_C_ExecuteUbergraph_prop_wireComponent_floatie, EntryPoint) == 0x000000, "Member 'Prop_wireComponent_floatie_C_ExecuteUbergraph_prop_wireComponent_floatie::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_floatie_C_ExecuteUbergraph_prop_wireComponent_floatie, K2Node_Event_water_1) == 0x000008, "Member 'Prop_wireComponent_floatie_C_ExecuteUbergraph_prop_wireComponent_floatie::K2Node_Event_water_1' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_floatie_C_ExecuteUbergraph_prop_wireComponent_floatie, CallFunc_GetMaterial_ReturnValue) == 0x000010, "Member 'Prop_wireComponent_floatie_C_ExecuteUbergraph_prop_wireComponent_floatie::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_floatie_C_ExecuteUbergraph_prop_wireComponent_floatie, K2Node_Event_water) == 0x000018, "Member 'Prop_wireComponent_floatie_C_ExecuteUbergraph_prop_wireComponent_floatie::K2Node_Event_water' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_floatie_C_ExecuteUbergraph_prop_wireComponent_floatie, CallFunc_GetPhysicalMaterial_ReturnValue) == 0x000020, "Member 'Prop_wireComponent_floatie_C_ExecuteUbergraph_prop_wireComponent_floatie::CallFunc_GetPhysicalMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_floatie_C_ExecuteUbergraph_prop_wireComponent_floatie, CallFunc_getBoyoancy_Value) == 0x000028, "Member 'Prop_wireComponent_floatie_C_ExecuteUbergraph_prop_wireComponent_floatie::CallFunc_getBoyoancy_Value' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_floatie_C_ExecuteUbergraph_prop_wireComponent_floatie, K2Node_Event_wire) == 0x000030, "Member 'Prop_wireComponent_floatie_C_ExecuteUbergraph_prop_wireComponent_floatie::K2Node_Event_wire' has a wrong offset!");

// Function prop_wireComponent_floatie.prop_wireComponent_floatie_C.wirePass
// 0x0008 (0x0008 - 0x0000)
struct Prop_wireComponent_floatie_C_WirePass final
{
public:
	class AWire_C*                                Wire;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_wireComponent_floatie_C_WirePass) == 0x000008, "Wrong alignment on Prop_wireComponent_floatie_C_WirePass");
static_assert(sizeof(Prop_wireComponent_floatie_C_WirePass) == 0x000008, "Wrong size on Prop_wireComponent_floatie_C_WirePass");
static_assert(offsetof(Prop_wireComponent_floatie_C_WirePass, Wire) == 0x000000, "Member 'Prop_wireComponent_floatie_C_WirePass::Wire' has a wrong offset!");

// Function prop_wireComponent_floatie.prop_wireComponent_floatie_C.updFloat
// 0x000C (0x000C - 0x0000)
struct Prop_wireComponent_floatie_C_UpdFloat final
{
public:
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_wireComponent_floatie_C_UpdFloat) == 0x000004, "Wrong alignment on Prop_wireComponent_floatie_C_UpdFloat");
static_assert(sizeof(Prop_wireComponent_floatie_C_UpdFloat) == 0x00000C, "Wrong size on Prop_wireComponent_floatie_C_UpdFloat");
static_assert(offsetof(Prop_wireComponent_floatie_C_UpdFloat, CallFunc_SelectFloat_ReturnValue) == 0x000000, "Member 'Prop_wireComponent_floatie_C_UpdFloat::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_floatie_C_UpdFloat, CallFunc_Array_Find_ReturnValue) == 0x000004, "Member 'Prop_wireComponent_floatie_C_UpdFloat::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_floatie_C_UpdFloat, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000008, "Member 'Prop_wireComponent_floatie_C_UpdFloat::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function prop_wireComponent_floatie.prop_wireComponent_floatie_C.leaveWater
// 0x0008 (0x0008 - 0x0000)
struct Prop_wireComponent_floatie_C_LeaveWater final
{
public:
	class AWaterVolume_C*                         Water;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_wireComponent_floatie_C_LeaveWater) == 0x000008, "Wrong alignment on Prop_wireComponent_floatie_C_LeaveWater");
static_assert(sizeof(Prop_wireComponent_floatie_C_LeaveWater) == 0x000008, "Wrong size on Prop_wireComponent_floatie_C_LeaveWater");
static_assert(offsetof(Prop_wireComponent_floatie_C_LeaveWater, Water) == 0x000000, "Member 'Prop_wireComponent_floatie_C_LeaveWater::Water' has a wrong offset!");

// Function prop_wireComponent_floatie.prop_wireComponent_floatie_C.enterWater
// 0x0008 (0x0008 - 0x0000)
struct Prop_wireComponent_floatie_C_EnterWater final
{
public:
	class AWaterVolume_C*                         Water;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_wireComponent_floatie_C_EnterWater) == 0x000008, "Wrong alignment on Prop_wireComponent_floatie_C_EnterWater");
static_assert(sizeof(Prop_wireComponent_floatie_C_EnterWater) == 0x000008, "Wrong size on Prop_wireComponent_floatie_C_EnterWater");
static_assert(offsetof(Prop_wireComponent_floatie_C_EnterWater, Water) == 0x000000, "Member 'Prop_wireComponent_floatie_C_EnterWater::Water' has a wrong offset!");

}

