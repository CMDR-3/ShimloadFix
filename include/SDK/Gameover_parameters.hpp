#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Gameover

#include "Basic.hpp"


namespace SDK::Params
{

// Function gameover.gameover_C.ExecuteUbergraph_gameover
// 0x0088 (0x0088 - 0x0000)
struct Gameover_C_ExecuteUbergraph_gameover final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetGamePaused_ReturnValue;                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUmg_gameoverScreen_C*                  CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VictoryFloatMinusEquals_FloatOut;         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSubstring_ReturnValue;                 // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_2;          // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_3;          // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_4;          // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x005E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x005F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62[0x2];                                       // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VictoryFloatPlusEquals_FloatOut;          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Gameover_C_ExecuteUbergraph_gameover) == 0x000008, "Wrong alignment on Gameover_C_ExecuteUbergraph_gameover");
static_assert(sizeof(Gameover_C_ExecuteUbergraph_gameover) == 0x000088, "Wrong size on Gameover_C_ExecuteUbergraph_gameover");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, EntryPoint) == 0x000000, "Member 'Gameover_C_ExecuteUbergraph_gameover::EntryPoint' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'Gameover_C_ExecuteUbergraph_gameover::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_SetGamePaused_ReturnValue) == 0x000008, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_SetGamePaused_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_Create_ReturnValue) == 0x000010, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_VictoryFloatMinusEquals_FloatOut) == 0x000018, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_VictoryFloatMinusEquals_FloatOut' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x00001C, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_Replace_ReturnValue) == 0x000020, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_Conv_TextToString_ReturnValue) == 0x000030, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_FTrunc_ReturnValue) == 0x000040, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000044, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_GetSubstring_ReturnValue) == 0x000048, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_GetSubstring_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000058, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000059, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_EqualEqual_StrStr_ReturnValue_2) == 0x00005A, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_EqualEqual_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_EqualEqual_StrStr_ReturnValue_3) == 0x00005B, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_EqualEqual_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_EqualEqual_StrStr_ReturnValue_4) == 0x00005C, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_EqualEqual_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_BooleanOR_ReturnValue) == 0x00005D, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00005E, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_BooleanOR_ReturnValue_1) == 0x00005F, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_BooleanOR_ReturnValue_2) == 0x000060, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_BooleanOR_ReturnValue_3) == 0x000061, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000064, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_RandomFloatInRange_ReturnValue) == 0x000068, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x00006C, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_VictoryFloatPlusEquals_FloatOut) == 0x000070, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_VictoryFloatPlusEquals_FloatOut' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_Not_PreBool_ReturnValue) == 0x000074, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_Len_ReturnValue) == 0x000078, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x00007C, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Gameover_C_ExecuteUbergraph_gameover, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000080, "Member 'Gameover_C_ExecuteUbergraph_gameover::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function gameover.gameover_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Gameover_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Gameover_C_ReceiveTick) == 0x000004, "Wrong alignment on Gameover_C_ReceiveTick");
static_assert(sizeof(Gameover_C_ReceiveTick) == 0x000004, "Wrong size on Gameover_C_ReceiveTick");
static_assert(offsetof(Gameover_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Gameover_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function gameover.gameover_C.conv
// 0x0050 (0x0050 - 0x0000)
struct Gameover_C_Conv final
{
public:
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Left_ReturnValue;                         // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_SelectString_ReturnValue;                 // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
};
static_assert(alignof(Gameover_C_Conv) == 0x000008, "Wrong alignment on Gameover_C_Conv");
static_assert(sizeof(Gameover_C_Conv) == 0x000050, "Wrong size on Gameover_C_Conv");
static_assert(offsetof(Gameover_C_Conv, CallFunc_BooleanAND_ReturnValue) == 0x000000, "Member 'Gameover_C_Conv::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gameover_C_Conv, CallFunc_Left_ReturnValue) == 0x000008, "Member 'Gameover_C_Conv::CallFunc_Left_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gameover_C_Conv, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'Gameover_C_Conv::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gameover_C_Conv, CallFunc_SelectString_ReturnValue) == 0x000028, "Member 'Gameover_C_Conv::CallFunc_SelectString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gameover_C_Conv, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'Gameover_C_Conv::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}
