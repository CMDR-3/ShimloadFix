#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_equipmentSlot

#include "Basic.hpp"

#include "Struct_equipment_structs.hpp"


namespace SDK::Params
{

// Function umg_equipmentSlot.umg_equipmentSlot_C.ExecuteUbergraph_umg_equipmentSlot
// 0x0020 (0x0020 - 0x0000)
struct Umg_equipmentSlot_C_ExecuteUbergraph_umg_equipmentSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveEquipment_return;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Umg_equipmentSlot_C_ExecuteUbergraph_umg_equipmentSlot) == 0x000008, "Wrong alignment on Umg_equipmentSlot_C_ExecuteUbergraph_umg_equipmentSlot");
static_assert(sizeof(Umg_equipmentSlot_C_ExecuteUbergraph_umg_equipmentSlot) == 0x000020, "Wrong size on Umg_equipmentSlot_C_ExecuteUbergraph_umg_equipmentSlot");
static_assert(offsetof(Umg_equipmentSlot_C_ExecuteUbergraph_umg_equipmentSlot, EntryPoint) == 0x000000, "Member 'Umg_equipmentSlot_C_ExecuteUbergraph_umg_equipmentSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(Umg_equipmentSlot_C_ExecuteUbergraph_umg_equipmentSlot, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'Umg_equipmentSlot_C_ExecuteUbergraph_umg_equipmentSlot::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_equipmentSlot_C_ExecuteUbergraph_umg_equipmentSlot, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000010, "Member 'Umg_equipmentSlot_C_ExecuteUbergraph_umg_equipmentSlot::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Umg_equipmentSlot_C_ExecuteUbergraph_umg_equipmentSlot, CallFunc_RemoveEquipment_return) == 0x000018, "Member 'Umg_equipmentSlot_C_ExecuteUbergraph_umg_equipmentSlot::CallFunc_RemoveEquipment_return' has a wrong offset!");

// Function umg_equipmentSlot.umg_equipmentSlot_C.Init
// 0x0020 (0x0020 - 0x0000)
struct Umg_equipmentSlot_C_Init final
{
public:
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_propToIcon_Output;                        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_equipmentSlot_C_Init) == 0x000008, "Wrong alignment on Umg_equipmentSlot_C_Init");
static_assert(sizeof(Umg_equipmentSlot_C_Init) == 0x000020, "Wrong size on Umg_equipmentSlot_C_Init");
static_assert(offsetof(Umg_equipmentSlot_C_Init, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000000, "Member 'Umg_equipmentSlot_C_Init::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_equipmentSlot_C_Init, CallFunc_Conv_NameToString_ReturnValue) == 0x000008, "Member 'Umg_equipmentSlot_C_Init::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_equipmentSlot_C_Init, CallFunc_propToIcon_Output) == 0x000018, "Member 'Umg_equipmentSlot_C_Init::CallFunc_propToIcon_Output' has a wrong offset!");

// Function umg_equipmentSlot.umg_equipmentSlot_C.upd
// 0x0110 (0x0110 - 0x0000)
struct Umg_equipmentSlot_C_Upd final
{
public:
	class USaveSlot_C*                            CallFunc_getSaveSlot_saveSlot;                     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_equipment                      CallFunc_Array_Get_Item;                           // 0x0010(0x0100)(HasGetValueTypeHash)
};
static_assert(alignof(Umg_equipmentSlot_C_Upd) == 0x000010, "Wrong alignment on Umg_equipmentSlot_C_Upd");
static_assert(sizeof(Umg_equipmentSlot_C_Upd) == 0x000110, "Wrong size on Umg_equipmentSlot_C_Upd");
static_assert(offsetof(Umg_equipmentSlot_C_Upd, CallFunc_getSaveSlot_saveSlot) == 0x000000, "Member 'Umg_equipmentSlot_C_Upd::CallFunc_getSaveSlot_saveSlot' has a wrong offset!");
static_assert(offsetof(Umg_equipmentSlot_C_Upd, CallFunc_Array_Get_Item) == 0x000010, "Member 'Umg_equipmentSlot_C_Upd::CallFunc_Array_Get_Item' has a wrong offset!");

}

