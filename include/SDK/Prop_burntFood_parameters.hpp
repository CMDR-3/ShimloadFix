#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_burntFood

#include "Basic.hpp"

#include "Struct_dangerProp_structs.hpp"


namespace SDK::Params
{

// Function prop_burntFood.prop_burntFood_C.ExecuteUbergraph_prop_burntFood
// 0x0008 (0x0008 - 0x0000)
struct Prop_burntFood_C_ExecuteUbergraph_prop_burntFood final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_damage;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_burntFood_C_ExecuteUbergraph_prop_burntFood) == 0x000004, "Wrong alignment on Prop_burntFood_C_ExecuteUbergraph_prop_burntFood");
static_assert(sizeof(Prop_burntFood_C_ExecuteUbergraph_prop_burntFood) == 0x000008, "Wrong size on Prop_burntFood_C_ExecuteUbergraph_prop_burntFood");
static_assert(offsetof(Prop_burntFood_C_ExecuteUbergraph_prop_burntFood, EntryPoint) == 0x000000, "Member 'Prop_burntFood_C_ExecuteUbergraph_prop_burntFood::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_burntFood_C_ExecuteUbergraph_prop_burntFood, K2Node_Event_damage) == 0x000004, "Member 'Prop_burntFood_C_ExecuteUbergraph_prop_burntFood::K2Node_Event_damage' has a wrong offset!");

// Function prop_burntFood.prop_burntFood_C.fireDamage
// 0x0004 (0x0004 - 0x0000)
struct Prop_burntFood_C_FireDamage final
{
public:
	float                                         Damage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_burntFood_C_FireDamage) == 0x000004, "Wrong alignment on Prop_burntFood_C_FireDamage");
static_assert(sizeof(Prop_burntFood_C_FireDamage) == 0x000004, "Wrong size on Prop_burntFood_C_FireDamage");
static_assert(offsetof(Prop_burntFood_C_FireDamage, Damage) == 0x000000, "Member 'Prop_burntFood_C_FireDamage::Damage' has a wrong offset!");

// Function prop_burntFood.prop_burntFood_C.Init
// 0x0038 (0x0038 - 0x0000)
struct Prop_burntFood_C_Init final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_dangerProp                     K2Node_MakeStruct_struct_dangerProp;               // 0x000C(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             CallFunc_GetMaterials_ReturnValue;                 // 0x0020(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_burntFood_C_Init) == 0x000008, "Wrong alignment on Prop_burntFood_C_Init");
static_assert(sizeof(Prop_burntFood_C_Init) == 0x000038, "Wrong size on Prop_burntFood_C_Init");
static_assert(offsetof(Prop_burntFood_C_Init, Temp_int_Array_Index_Variable) == 0x000000, "Member 'Prop_burntFood_C_Init::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Prop_burntFood_C_Init, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'Prop_burntFood_C_Init::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Prop_burntFood_C_Init, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'Prop_burntFood_C_Init::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_burntFood_C_Init, K2Node_MakeStruct_struct_dangerProp) == 0x00000C, "Member 'Prop_burntFood_C_Init::K2Node_MakeStruct_struct_dangerProp' has a wrong offset!");
static_assert(offsetof(Prop_burntFood_C_Init, CallFunc_GetMaterials_ReturnValue) == 0x000020, "Member 'Prop_burntFood_C_Init::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_burntFood_C_Init, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'Prop_burntFood_C_Init::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_burntFood_C_Init, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'Prop_burntFood_C_Init::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

