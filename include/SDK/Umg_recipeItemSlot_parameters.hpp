#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_recipeItemSlot

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function umg_recipeItemSlot.umg_recipeItemSlot_C.ExecuteUbergraph_umg_recipeItemSlot
// 0x0058 (0x0058 - 0x0000)
struct Umg_recipeItemSlot_C_ExecuteUbergraph_umg_recipeItemSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_nameToDisplayName_displayName;            // 0x0028(0x0018)()
	class UTexture2D*                             CallFunc_getItemIcon_Output;                       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_recipeItemSlot_C_ExecuteUbergraph_umg_recipeItemSlot) == 0x000008, "Wrong alignment on Umg_recipeItemSlot_C_ExecuteUbergraph_umg_recipeItemSlot");
static_assert(sizeof(Umg_recipeItemSlot_C_ExecuteUbergraph_umg_recipeItemSlot) == 0x000058, "Wrong size on Umg_recipeItemSlot_C_ExecuteUbergraph_umg_recipeItemSlot");
static_assert(offsetof(Umg_recipeItemSlot_C_ExecuteUbergraph_umg_recipeItemSlot, EntryPoint) == 0x000000, "Member 'Umg_recipeItemSlot_C_ExecuteUbergraph_umg_recipeItemSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(Umg_recipeItemSlot_C_ExecuteUbergraph_umg_recipeItemSlot, Temp_byte_Variable) == 0x000004, "Member 'Umg_recipeItemSlot_C_ExecuteUbergraph_umg_recipeItemSlot::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Umg_recipeItemSlot_C_ExecuteUbergraph_umg_recipeItemSlot, Temp_byte_Variable_1) == 0x000005, "Member 'Umg_recipeItemSlot_C_ExecuteUbergraph_umg_recipeItemSlot::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Umg_recipeItemSlot_C_ExecuteUbergraph_umg_recipeItemSlot, Temp_bool_Variable) == 0x000006, "Member 'Umg_recipeItemSlot_C_ExecuteUbergraph_umg_recipeItemSlot::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Umg_recipeItemSlot_C_ExecuteUbergraph_umg_recipeItemSlot, CallFunc_Array_Get_Item) == 0x000008, "Member 'Umg_recipeItemSlot_C_ExecuteUbergraph_umg_recipeItemSlot::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Umg_recipeItemSlot_C_ExecuteUbergraph_umg_recipeItemSlot, CallFunc_Conv_StringToName_ReturnValue) == 0x000018, "Member 'Umg_recipeItemSlot_C_ExecuteUbergraph_umg_recipeItemSlot::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_recipeItemSlot_C_ExecuteUbergraph_umg_recipeItemSlot, K2Node_Select_Default) == 0x000020, "Member 'Umg_recipeItemSlot_C_ExecuteUbergraph_umg_recipeItemSlot::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Umg_recipeItemSlot_C_ExecuteUbergraph_umg_recipeItemSlot, CallFunc_nameToDisplayName_displayName) == 0x000028, "Member 'Umg_recipeItemSlot_C_ExecuteUbergraph_umg_recipeItemSlot::CallFunc_nameToDisplayName_displayName' has a wrong offset!");
static_assert(offsetof(Umg_recipeItemSlot_C_ExecuteUbergraph_umg_recipeItemSlot, CallFunc_getItemIcon_Output) == 0x000040, "Member 'Umg_recipeItemSlot_C_ExecuteUbergraph_umg_recipeItemSlot::CallFunc_getItemIcon_Output' has a wrong offset!");
static_assert(offsetof(Umg_recipeItemSlot_C_ExecuteUbergraph_umg_recipeItemSlot, CallFunc_Conv_TextToString_ReturnValue) == 0x000048, "Member 'Umg_recipeItemSlot_C_ExecuteUbergraph_umg_recipeItemSlot::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function umg_recipeItemSlot.umg_recipeItemSlot_C.select
// 0x0005 (0x0005 - 0x0000)
struct Umg_recipeItemSlot_C_Select final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_recipeItemSlot_C_Select) == 0x000001, "Wrong alignment on Umg_recipeItemSlot_C_Select");
static_assert(sizeof(Umg_recipeItemSlot_C_Select) == 0x000005, "Wrong size on Umg_recipeItemSlot_C_Select");
static_assert(offsetof(Umg_recipeItemSlot_C_Select, Temp_bool_Variable) == 0x000000, "Member 'Umg_recipeItemSlot_C_Select::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Umg_recipeItemSlot_C_Select, Temp_byte_Variable) == 0x000001, "Member 'Umg_recipeItemSlot_C_Select::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Umg_recipeItemSlot_C_Select, Temp_byte_Variable_1) == 0x000002, "Member 'Umg_recipeItemSlot_C_Select::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Umg_recipeItemSlot_C_Select, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000003, "Member 'Umg_recipeItemSlot_C_Select::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_recipeItemSlot_C_Select, K2Node_Select_Default) == 0x000004, "Member 'Umg_recipeItemSlot_C_Select::K2Node_Select_Default' has a wrong offset!");

}
