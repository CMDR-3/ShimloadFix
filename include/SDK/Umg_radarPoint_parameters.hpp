#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_radarPoint

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function umg_radarPoint.umg_radarPoint_C.ExecuteUbergraph_umg_radarPoint
// 0x0128 (0x0128 - 0x0000)
struct Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Divide_VectorInt_ReturnValue;             // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0068(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue_1;           // 0x0090(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00D8(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00F0(0x0028)()
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VictoryFloatMinusEquals_FloatOut;         // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint) == 0x000008, "Wrong alignment on Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint");
static_assert(sizeof(Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint) == 0x000128, "Wrong size on Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint");
static_assert(offsetof(Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint, EntryPoint) == 0x000000, "Member 'Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint::EntryPoint' has a wrong offset!");
static_assert(offsetof(Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint, Temp_bool_Variable) == 0x000004, "Member 'Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint, Temp_byte_Variable) == 0x000005, "Member 'Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint, Temp_byte_Variable_1) == 0x000006, "Member 'Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint, K2Node_Event_MyGeometry) == 0x000008, "Member 'Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint, K2Node_Event_InDeltaTime) == 0x000040, "Member 'Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint, K2Node_Select_Default) == 0x000044, "Member 'Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x000048, "Member 'Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint, CallFunc_Divide_VectorInt_ReturnValue) == 0x00004C, "Member 'Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint::CallFunc_Divide_VectorInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint, CallFunc_BreakVector_X) == 0x000058, "Member 'Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint, CallFunc_BreakVector_Y) == 0x00005C, "Member 'Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint, CallFunc_BreakVector_Z) == 0x000060, "Member 'Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint, CallFunc_Conv_FloatToText_ReturnValue) == 0x000068, "Member 'Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint, CallFunc_Conv_TextToString_ReturnValue) == 0x000080, "Member 'Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint, CallFunc_Conv_FloatToText_ReturnValue_1) == 0x000090, "Member 'Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint::CallFunc_Conv_FloatToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0000A8, "Member 'Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint, CallFunc_Concat_StrStr_ReturnValue) == 0x0000B8, "Member 'Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000C8, "Member 'Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint, CallFunc_Conv_StringToText_ReturnValue) == 0x0000D8, "Member 'Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint, K2Node_MakeStruct_SlateColor) == 0x0000F0, "Member 'Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000118, "Member 'Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint, CallFunc_VictoryFloatMinusEquals_FloatOut) == 0x00011C, "Member 'Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint::CallFunc_VictoryFloatMinusEquals_FloatOut' has a wrong offset!");
static_assert(offsetof(Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint, CallFunc_Less_FloatFloat_ReturnValue) == 0x000120, "Member 'Umg_radarPoint_C_ExecuteUbergraph_umg_radarPoint::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");

// Function umg_radarPoint.umg_radarPoint_C.Tick
// 0x003C (0x003C - 0x0000)
struct Umg_radarPoint_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_radarPoint_C_Tick) == 0x000004, "Wrong alignment on Umg_radarPoint_C_Tick");
static_assert(sizeof(Umg_radarPoint_C_Tick) == 0x00003C, "Wrong size on Umg_radarPoint_C_Tick");
static_assert(offsetof(Umg_radarPoint_C_Tick, MyGeometry) == 0x000000, "Member 'Umg_radarPoint_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(Umg_radarPoint_C_Tick, InDeltaTime) == 0x000038, "Member 'Umg_radarPoint_C_Tick::InDeltaTime' has a wrong offset!");

}

