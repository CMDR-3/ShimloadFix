#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_playerInvContainerSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function umg_playerInvContainerSlot.umg_playerInvContainerSlot_C.ExecuteUbergraph_umg_playerInvContainerSlot
// 0x0040 (0x0040 - 0x0000)
struct Umg_playerInvContainerSlot_C_ExecuteUbergraph_umg_playerInvContainerSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0008(0x0018)()
	class AActor*                                 CallFunc_getObject_OutputPin;                      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_addObject_return;                         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_addObject_err;                            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_playerInvContainerSlot_C_ExecuteUbergraph_umg_playerInvContainerSlot) == 0x000008, "Wrong alignment on Umg_playerInvContainerSlot_C_ExecuteUbergraph_umg_playerInvContainerSlot");
static_assert(sizeof(Umg_playerInvContainerSlot_C_ExecuteUbergraph_umg_playerInvContainerSlot) == 0x000040, "Wrong size on Umg_playerInvContainerSlot_C_ExecuteUbergraph_umg_playerInvContainerSlot");
static_assert(offsetof(Umg_playerInvContainerSlot_C_ExecuteUbergraph_umg_playerInvContainerSlot, EntryPoint) == 0x000000, "Member 'Umg_playerInvContainerSlot_C_ExecuteUbergraph_umg_playerInvContainerSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_ExecuteUbergraph_umg_playerInvContainerSlot, CallFunc_Conv_StringToText_ReturnValue) == 0x000008, "Member 'Umg_playerInvContainerSlot_C_ExecuteUbergraph_umg_playerInvContainerSlot::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_ExecuteUbergraph_umg_playerInvContainerSlot, CallFunc_getObject_OutputPin) == 0x000020, "Member 'Umg_playerInvContainerSlot_C_ExecuteUbergraph_umg_playerInvContainerSlot::CallFunc_getObject_OutputPin' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_ExecuteUbergraph_umg_playerInvContainerSlot, CallFunc_addObject_return) == 0x000028, "Member 'Umg_playerInvContainerSlot_C_ExecuteUbergraph_umg_playerInvContainerSlot::CallFunc_addObject_return' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_ExecuteUbergraph_umg_playerInvContainerSlot, CallFunc_addObject_err) == 0x000030, "Member 'Umg_playerInvContainerSlot_C_ExecuteUbergraph_umg_playerInvContainerSlot::CallFunc_addObject_err' has a wrong offset!");

// Function umg_playerInvContainerSlot.umg_playerInvContainerSlot_C.Init
// 0x00E0 (0x00E0 - 0x0000)
struct Umg_playerInvContainerSlot_C_Init final
{
public:
	class FString                                 ItemToFind;                                        // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	float                                         Weight_0;                                          // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Volume_0;                                          // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_propToName_Output;                        // 0x0020(0x0018)()
	class UTexture2D*                             CallFunc_propToIcon_Output;                        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_SelectString_ReturnValue;                 // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95[0x3];                                       // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Left_ReturnValue;                         // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00C8(0x0018)()
};
static_assert(alignof(Umg_playerInvContainerSlot_C_Init) == 0x000008, "Wrong alignment on Umg_playerInvContainerSlot_C_Init");
static_assert(sizeof(Umg_playerInvContainerSlot_C_Init) == 0x0000E0, "Wrong size on Umg_playerInvContainerSlot_C_Init");
static_assert(offsetof(Umg_playerInvContainerSlot_C_Init, ItemToFind) == 0x000000, "Member 'Umg_playerInvContainerSlot_C_Init::ItemToFind' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_Init, Weight_0) == 0x000010, "Member 'Umg_playerInvContainerSlot_C_Init::Weight_0' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_Init, Volume_0) == 0x000014, "Member 'Umg_playerInvContainerSlot_C_Init::Volume_0' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_Init, Temp_bool_Variable) == 0x000018, "Member 'Umg_playerInvContainerSlot_C_Init::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_Init, CallFunc_propToName_Output) == 0x000020, "Member 'Umg_playerInvContainerSlot_C_Init::CallFunc_propToName_Output' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_Init, CallFunc_propToIcon_Output) == 0x000038, "Member 'Umg_playerInvContainerSlot_C_Init::CallFunc_propToIcon_Output' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_Init, CallFunc_Conv_TextToString_ReturnValue) == 0x000040, "Member 'Umg_playerInvContainerSlot_C_Init::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_Init, CallFunc_Concat_StrStr_ReturnValue) == 0x000050, "Member 'Umg_playerInvContainerSlot_C_Init::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_Init, CallFunc_IsEmpty_ReturnValue) == 0x000060, "Member 'Umg_playerInvContainerSlot_C_Init::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_Init, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000068, "Member 'Umg_playerInvContainerSlot_C_Init::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_Init, CallFunc_SelectString_ReturnValue) == 0x000078, "Member 'Umg_playerInvContainerSlot_C_Init::CallFunc_SelectString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_Init, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000088, "Member 'Umg_playerInvContainerSlot_C_Init::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_Init, CallFunc_Len_ReturnValue) == 0x000090, "Member 'Umg_playerInvContainerSlot_C_Init::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_Init, CallFunc_Greater_IntInt_ReturnValue) == 0x000094, "Member 'Umg_playerInvContainerSlot_C_Init::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_Init, CallFunc_Left_ReturnValue) == 0x000098, "Member 'Umg_playerInvContainerSlot_C_Init::CallFunc_Left_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_Init, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000A8, "Member 'Umg_playerInvContainerSlot_C_Init::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_Init, K2Node_Select_Default) == 0x0000B8, "Member 'Umg_playerInvContainerSlot_C_Init::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_Init, CallFunc_Conv_StringToText_ReturnValue) == 0x0000C8, "Member 'Umg_playerInvContainerSlot_C_Init::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function umg_playerInvContainerSlot.umg_playerInvContainerSlot_C.setAmount
// 0x00B8 (0x00B8 - 0x0000)
struct Umg_playerInvContainerSlot_C_SetAmount final
{
public:
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0008(0x0018)()
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue_1;           // 0x0028(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0040(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0098(0x0018)()
	int32                                         CallFunc_Array_Get_Item;                           // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_playerInvContainerSlot_C_SetAmount) == 0x000008, "Wrong alignment on Umg_playerInvContainerSlot_C_SetAmount");
static_assert(sizeof(Umg_playerInvContainerSlot_C_SetAmount) == 0x0000B8, "Wrong size on Umg_playerInvContainerSlot_C_SetAmount");
static_assert(offsetof(Umg_playerInvContainerSlot_C_SetAmount, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000000, "Member 'Umg_playerInvContainerSlot_C_SetAmount::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_SetAmount, CallFunc_Conv_FloatToText_ReturnValue) == 0x000008, "Member 'Umg_playerInvContainerSlot_C_SetAmount::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_SetAmount, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000020, "Member 'Umg_playerInvContainerSlot_C_SetAmount::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_SetAmount, CallFunc_Conv_FloatToText_ReturnValue_1) == 0x000028, "Member 'Umg_playerInvContainerSlot_C_SetAmount::CallFunc_Conv_FloatToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_SetAmount, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'Umg_playerInvContainerSlot_C_SetAmount::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_SetAmount, K2Node_MakeArray_Array) == 0x000080, "Member 'Umg_playerInvContainerSlot_C_SetAmount::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_SetAmount, CallFunc_Array_Find_ReturnValue) == 0x000090, "Member 'Umg_playerInvContainerSlot_C_SetAmount::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_SetAmount, CallFunc_Format_ReturnValue) == 0x000098, "Member 'Umg_playerInvContainerSlot_C_SetAmount::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_playerInvContainerSlot_C_SetAmount, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'Umg_playerInvContainerSlot_C_SetAmount::CallFunc_Array_Get_Item' has a wrong offset!");

}

