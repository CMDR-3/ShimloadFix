#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_safeDoor

#include "Basic.hpp"

#include "Enum_interactionActions_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function prop_safeDoor.prop_safeDoor_C.checkNum
// 0x0080 (0x0080 - 0x0000)
struct Prop_safeDoor_C_CheckNum final
{
public:
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSubstring_ReturnValue;                 // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_BoolToString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_safeDoor_C_CheckNum) == 0x000008, "Wrong alignment on Prop_safeDoor_C_CheckNum");
static_assert(sizeof(Prop_safeDoor_C_CheckNum) == 0x000080, "Wrong size on Prop_safeDoor_C_CheckNum");
static_assert(offsetof(Prop_safeDoor_C_CheckNum, CallFunc_Conv_IntToString_ReturnValue) == 0x000000, "Member 'Prop_safeDoor_C_CheckNum::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_CheckNum, CallFunc_Len_ReturnValue) == 0x000010, "Member 'Prop_safeDoor_C_CheckNum::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_CheckNum, CallFunc_GetSubstring_ReturnValue) == 0x000018, "Member 'Prop_safeDoor_C_CheckNum::CallFunc_GetSubstring_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_CheckNum, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000028, "Member 'Prop_safeDoor_C_CheckNum::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_CheckNum, CallFunc_Concat_StrStr_ReturnValue) == 0x000030, "Member 'Prop_safeDoor_C_CheckNum::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_CheckNum, CallFunc_Conv_BoolToString_ReturnValue) == 0x000040, "Member 'Prop_safeDoor_C_CheckNum::CallFunc_Conv_BoolToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_CheckNum, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000050, "Member 'Prop_safeDoor_C_CheckNum::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_CheckNum, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000060, "Member 'Prop_safeDoor_C_CheckNum::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_CheckNum, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000070, "Member 'Prop_safeDoor_C_CheckNum::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");

// Function prop_safeDoor.prop_safeDoor_C.addNum
// 0x0028 (0x0028 - 0x0000)
struct Prop_safeDoor_C_AddNum final
{
public:
	int32                                         Add;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_VictoryIntPlusEquals_IntOut;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_safeDoor_C_AddNum) == 0x000008, "Wrong alignment on Prop_safeDoor_C_AddNum");
static_assert(sizeof(Prop_safeDoor_C_AddNum) == 0x000028, "Wrong size on Prop_safeDoor_C_AddNum");
static_assert(offsetof(Prop_safeDoor_C_AddNum, Add) == 0x000000, "Member 'Prop_safeDoor_C_AddNum::Add' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_AddNum, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'Prop_safeDoor_C_AddNum::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_AddNum, CallFunc_VictoryIntPlusEquals_IntOut) == 0x000018, "Member 'Prop_safeDoor_C_AddNum::CallFunc_VictoryIntPlusEquals_IntOut' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_AddNum, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'Prop_safeDoor_C_AddNum::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_AddNum, CallFunc_Percent_IntInt_ReturnValue) == 0x000020, "Member 'Prop_safeDoor_C_AddNum::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");

// Function prop_safeDoor.prop_safeDoor_C.checkPass
// 0x000C (0x000C - 0x0000)
struct Prop_safeDoor_C_CheckPass final
{
public:
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue_1;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_safeDoor_C_CheckPass) == 0x000004, "Wrong alignment on Prop_safeDoor_C_CheckPass");
static_assert(sizeof(Prop_safeDoor_C_CheckPass) == 0x00000C, "Wrong size on Prop_safeDoor_C_CheckPass");
static_assert(offsetof(Prop_safeDoor_C_CheckPass, CallFunc_Len_ReturnValue) == 0x000000, "Member 'Prop_safeDoor_C_CheckPass::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_CheckPass, CallFunc_Len_ReturnValue_1) == 0x000004, "Member 'Prop_safeDoor_C_CheckPass::CallFunc_Len_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_CheckPass, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000008, "Member 'Prop_safeDoor_C_CheckPass::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_CheckPass, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000009, "Member 'Prop_safeDoor_C_CheckPass::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function prop_safeDoor.prop_safeDoor_C.getActionOptions
// 0x00A8 (0x00A8 - 0x0000)
struct Prop_safeDoor_C_GetActionOptions final
{
public:
	class AMainPlayer_C*                          Player_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    Component;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Actor;                                             // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         Options;                                           // 0x0018(0x0010)(Parm, OutParm)
	TArray<Enum_interactionActions>               Options_enum;                                      // 0x0028(0x0010)(Parm, OutParm)
	TArray<class FText>                           OptionsNamesOverlay;                               // 0x0038(0x0010)(Parm, OutParm)
	uint8                                         Number_0;                                          // 0x0048(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_getActionOptions_options;                 // 0x0050(0x0010)(ReferenceParm)
	TArray<Enum_interactionActions>               CallFunc_getActionOptions_options_enum;            // 0x0060(0x0010)(ReferenceParm)
	TArray<class FText>                           CallFunc_getActionOptions_optionsNamesOverlay;     // 0x0070(0x0010)(ReferenceParm)
	uint8                                         CallFunc_getActionOptions_number;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<Enum_interactionActions>               K2Node_MakeArray_Array;                            // 0x0088(0x0010)(ReferenceParm)
	TArray<Enum_interactionActions>               K2Node_Select_Default;                             // 0x0098(0x0010)(ReferenceParm)
};
static_assert(alignof(Prop_safeDoor_C_GetActionOptions) == 0x000008, "Wrong alignment on Prop_safeDoor_C_GetActionOptions");
static_assert(sizeof(Prop_safeDoor_C_GetActionOptions) == 0x0000A8, "Wrong size on Prop_safeDoor_C_GetActionOptions");
static_assert(offsetof(Prop_safeDoor_C_GetActionOptions, Player_0) == 0x000000, "Member 'Prop_safeDoor_C_GetActionOptions::Player_0' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_GetActionOptions, Component) == 0x000008, "Member 'Prop_safeDoor_C_GetActionOptions::Component' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_GetActionOptions, Actor) == 0x000010, "Member 'Prop_safeDoor_C_GetActionOptions::Actor' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_GetActionOptions, Options) == 0x000018, "Member 'Prop_safeDoor_C_GetActionOptions::Options' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_GetActionOptions, Options_enum) == 0x000028, "Member 'Prop_safeDoor_C_GetActionOptions::Options_enum' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_GetActionOptions, OptionsNamesOverlay) == 0x000038, "Member 'Prop_safeDoor_C_GetActionOptions::OptionsNamesOverlay' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_GetActionOptions, Number_0) == 0x000048, "Member 'Prop_safeDoor_C_GetActionOptions::Number_0' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_GetActionOptions, Temp_bool_Variable) == 0x000049, "Member 'Prop_safeDoor_C_GetActionOptions::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_GetActionOptions, CallFunc_getActionOptions_options) == 0x000050, "Member 'Prop_safeDoor_C_GetActionOptions::CallFunc_getActionOptions_options' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_GetActionOptions, CallFunc_getActionOptions_options_enum) == 0x000060, "Member 'Prop_safeDoor_C_GetActionOptions::CallFunc_getActionOptions_options_enum' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_GetActionOptions, CallFunc_getActionOptions_optionsNamesOverlay) == 0x000070, "Member 'Prop_safeDoor_C_GetActionOptions::CallFunc_getActionOptions_optionsNamesOverlay' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_GetActionOptions, CallFunc_getActionOptions_number) == 0x000080, "Member 'Prop_safeDoor_C_GetActionOptions::CallFunc_getActionOptions_number' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_GetActionOptions, K2Node_MakeArray_Array) == 0x000088, "Member 'Prop_safeDoor_C_GetActionOptions::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_GetActionOptions, K2Node_Select_Default) == 0x000098, "Member 'Prop_safeDoor_C_GetActionOptions::K2Node_Select_Default' has a wrong offset!");

// Function prop_safeDoor.prop_safeDoor_C.lookAt
// 0x0118 (0x0118 - 0x0000)
struct Prop_safeDoor_C_LookAt final
{
public:
	class AMainPlayer_C*                          Player_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit_0;                                             // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Return;                                            // 0x0090(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Text;                                              // 0x0098(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    boundObjectReplace;                                // 0x00A8(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Number_0;                                          // 0x00B0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x00B8(0x0018)()
	bool                                          CallFunc_lookAt_return;                            // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_lookAt_text;                              // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_lookAt_boundObjectReplace;                // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_lookAt_number;                            // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_SelectString_ReturnValue;                 // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_safeDoor_C_LookAt) == 0x000008, "Wrong alignment on Prop_safeDoor_C_LookAt");
static_assert(sizeof(Prop_safeDoor_C_LookAt) == 0x000118, "Wrong size on Prop_safeDoor_C_LookAt");
static_assert(offsetof(Prop_safeDoor_C_LookAt, Player_0) == 0x000000, "Member 'Prop_safeDoor_C_LookAt::Player_0' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_LookAt, Hit_0) == 0x000008, "Member 'Prop_safeDoor_C_LookAt::Hit_0' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_LookAt, Return) == 0x000090, "Member 'Prop_safeDoor_C_LookAt::Return' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_LookAt, Text) == 0x000098, "Member 'Prop_safeDoor_C_LookAt::Text' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_LookAt, boundObjectReplace) == 0x0000A8, "Member 'Prop_safeDoor_C_LookAt::boundObjectReplace' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_LookAt, Number_0) == 0x0000B0, "Member 'Prop_safeDoor_C_LookAt::Number_0' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_LookAt, CallFunc_MakeLiteralText_ReturnValue) == 0x0000B8, "Member 'Prop_safeDoor_C_LookAt::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_LookAt, CallFunc_lookAt_return) == 0x0000D0, "Member 'Prop_safeDoor_C_LookAt::CallFunc_lookAt_return' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_LookAt, CallFunc_lookAt_text) == 0x0000D8, "Member 'Prop_safeDoor_C_LookAt::CallFunc_lookAt_text' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_LookAt, CallFunc_lookAt_boundObjectReplace) == 0x0000E8, "Member 'Prop_safeDoor_C_LookAt::CallFunc_lookAt_boundObjectReplace' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_LookAt, CallFunc_lookAt_number) == 0x0000F0, "Member 'Prop_safeDoor_C_LookAt::CallFunc_lookAt_number' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_LookAt, CallFunc_Conv_TextToString_ReturnValue) == 0x0000F8, "Member 'Prop_safeDoor_C_LookAt::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_LookAt, CallFunc_SelectString_ReturnValue) == 0x000108, "Member 'Prop_safeDoor_C_LookAt::CallFunc_SelectString_ReturnValue' has a wrong offset!");

// Function prop_safeDoor.prop_safeDoor_C.actionOptionIndex
// 0x0098 (0x0098 - 0x0000)
struct Prop_safeDoor_C_ActionOptionIndex final
{
public:
	class AMainPlayer_C*                          Player_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit_0;                                             // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       Action;                                            // 0x0090(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_safeDoor_C_ActionOptionIndex) == 0x000008, "Wrong alignment on Prop_safeDoor_C_ActionOptionIndex");
static_assert(sizeof(Prop_safeDoor_C_ActionOptionIndex) == 0x000098, "Wrong size on Prop_safeDoor_C_ActionOptionIndex");
static_assert(offsetof(Prop_safeDoor_C_ActionOptionIndex, Player_0) == 0x000000, "Member 'Prop_safeDoor_C_ActionOptionIndex::Player_0' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_ActionOptionIndex, Hit_0) == 0x000008, "Member 'Prop_safeDoor_C_ActionOptionIndex::Hit_0' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_ActionOptionIndex, Action) == 0x000090, "Member 'Prop_safeDoor_C_ActionOptionIndex::Action' has a wrong offset!");

// Function prop_safeDoor.prop_safeDoor_C.usedE
// 0x0001 (0x0001 - 0x0000)
struct Prop_safeDoor_C_UsedE final
{
public:
	bool                                          Pressed;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_safeDoor_C_UsedE) == 0x000001, "Wrong alignment on Prop_safeDoor_C_UsedE");
static_assert(sizeof(Prop_safeDoor_C_UsedE) == 0x000001, "Wrong size on Prop_safeDoor_C_UsedE");
static_assert(offsetof(Prop_safeDoor_C_UsedE, Pressed) == 0x000000, "Member 'Prop_safeDoor_C_UsedE::Pressed' has a wrong offset!");

// Function prop_safeDoor.prop_safeDoor_C.ExecuteUbergraph_prop_safeDoor
// 0x0138 (0x0138 - 0x0000)
struct Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Pressed)>                 K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetParentActor_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0028(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       K2Node_Event_action;                               // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_safe_C*                           K2Node_DynamicCast_AsProp_Safe;                    // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x2];                                       // 0x00C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00C4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_pressed;                        // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D5[0x3];                                       // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00D8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor) == 0x000008, "Wrong alignment on Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor");
static_assert(sizeof(Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor) == 0x000138, "Wrong size on Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor");
static_assert(offsetof(Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor, EntryPoint) == 0x000000, "Member 'Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor, CallFunc_GetParentActor_ReturnValue) == 0x000018, "Member 'Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor::CallFunc_GetParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor, K2Node_Event_player) == 0x000020, "Member 'Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor, K2Node_Event_hit) == 0x000028, "Member 'Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor, K2Node_Event_action) == 0x0000B0, "Member 'Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor::K2Node_Event_action' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor, K2Node_DynamicCast_AsProp_Safe) == 0x0000B8, "Member 'Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor::K2Node_DynamicCast_AsProp_Safe' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor, K2Node_SwitchEnum_CmpSuccess) == 0x0000C1, "Member 'Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000C4, "Member 'Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor, K2Node_CustomEvent_pressed) == 0x0000D4, "Member 'Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor::K2Node_CustomEvent_pressed' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000D8, "Member 'Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x0000E8, "Member 'Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor, CallFunc_Conv_IntToString_ReturnValue) == 0x0000F0, "Member 'Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor, CallFunc_Concat_StrStr_ReturnValue) == 0x000100, "Member 'Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000110, "Member 'Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000120, "Member 'Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor, CallFunc_EqualEqual_BoolBool_ReturnValue_1) == 0x000130, "Member 'Prop_safeDoor_C_ExecuteUbergraph_prop_safeDoor::CallFunc_EqualEqual_BoolBool_ReturnValue_1' has a wrong offset!");

}

