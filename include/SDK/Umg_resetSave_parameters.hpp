#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_resetSave

#include "Basic.hpp"


namespace SDK::Params
{

// Function umg_resetSave.umg_resetSave_C.ExecuteUbergraph_umg_resetSave
// 0x0048 (0x0048 - 0x0000)
struct Umg_resetSave_C_ExecuteUbergraph_umg_resetSave final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USaveGame*                              CallFunc_LoadGameFromSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USaveSlot_C*                            K2Node_DynamicCast_AsSave_Slot;                    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SaveGameToSlot_ReturnValue;               // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChecked_ReturnValue_1;                  // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChecked_ReturnValue_2;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChecked_ReturnValue_3;                  // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChecked_ReturnValue_4;                  // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F[0x1];                                       // 0x001F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsChecked_ReturnValue_5;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_VictoryIntPlusEquals_IntOut;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_VictoryIntPlusEquals_IntOut_1;            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue_1;                      // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_index;                                // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsChecked_ReturnValue_6;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChecked_ReturnValue_7;                  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChecked_ReturnValue_8;                  // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChecked_ReturnValue_9;                  // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Umg_resetSave_C_ExecuteUbergraph_umg_resetSave) == 0x000008, "Wrong alignment on Umg_resetSave_C_ExecuteUbergraph_umg_resetSave");
static_assert(sizeof(Umg_resetSave_C_ExecuteUbergraph_umg_resetSave) == 0x000048, "Wrong size on Umg_resetSave_C_ExecuteUbergraph_umg_resetSave");
static_assert(offsetof(Umg_resetSave_C_ExecuteUbergraph_umg_resetSave, EntryPoint) == 0x000000, "Member 'Umg_resetSave_C_ExecuteUbergraph_umg_resetSave::EntryPoint' has a wrong offset!");
static_assert(offsetof(Umg_resetSave_C_ExecuteUbergraph_umg_resetSave, CallFunc_LoadGameFromSlot_ReturnValue) == 0x000008, "Member 'Umg_resetSave_C_ExecuteUbergraph_umg_resetSave::CallFunc_LoadGameFromSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_resetSave_C_ExecuteUbergraph_umg_resetSave, K2Node_DynamicCast_AsSave_Slot) == 0x000010, "Member 'Umg_resetSave_C_ExecuteUbergraph_umg_resetSave::K2Node_DynamicCast_AsSave_Slot' has a wrong offset!");
static_assert(offsetof(Umg_resetSave_C_ExecuteUbergraph_umg_resetSave, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'Umg_resetSave_C_ExecuteUbergraph_umg_resetSave::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Umg_resetSave_C_ExecuteUbergraph_umg_resetSave, CallFunc_IsChecked_ReturnValue) == 0x000019, "Member 'Umg_resetSave_C_ExecuteUbergraph_umg_resetSave::CallFunc_IsChecked_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_resetSave_C_ExecuteUbergraph_umg_resetSave, CallFunc_SaveGameToSlot_ReturnValue) == 0x00001A, "Member 'Umg_resetSave_C_ExecuteUbergraph_umg_resetSave::CallFunc_SaveGameToSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_resetSave_C_ExecuteUbergraph_umg_resetSave, CallFunc_IsChecked_ReturnValue_1) == 0x00001B, "Member 'Umg_resetSave_C_ExecuteUbergraph_umg_resetSave::CallFunc_IsChecked_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_resetSave_C_ExecuteUbergraph_umg_resetSave, CallFunc_IsChecked_ReturnValue_2) == 0x00001C, "Member 'Umg_resetSave_C_ExecuteUbergraph_umg_resetSave::CallFunc_IsChecked_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Umg_resetSave_C_ExecuteUbergraph_umg_resetSave, CallFunc_IsChecked_ReturnValue_3) == 0x00001D, "Member 'Umg_resetSave_C_ExecuteUbergraph_umg_resetSave::CallFunc_IsChecked_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Umg_resetSave_C_ExecuteUbergraph_umg_resetSave, CallFunc_IsChecked_ReturnValue_4) == 0x00001E, "Member 'Umg_resetSave_C_ExecuteUbergraph_umg_resetSave::CallFunc_IsChecked_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Umg_resetSave_C_ExecuteUbergraph_umg_resetSave, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000020, "Member 'Umg_resetSave_C_ExecuteUbergraph_umg_resetSave::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Umg_resetSave_C_ExecuteUbergraph_umg_resetSave, CallFunc_IsChecked_ReturnValue_5) == 0x000028, "Member 'Umg_resetSave_C_ExecuteUbergraph_umg_resetSave::CallFunc_IsChecked_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Umg_resetSave_C_ExecuteUbergraph_umg_resetSave, CallFunc_VictoryIntPlusEquals_IntOut) == 0x00002C, "Member 'Umg_resetSave_C_ExecuteUbergraph_umg_resetSave::CallFunc_VictoryIntPlusEquals_IntOut' has a wrong offset!");
static_assert(offsetof(Umg_resetSave_C_ExecuteUbergraph_umg_resetSave, CallFunc_Clamp_ReturnValue) == 0x000030, "Member 'Umg_resetSave_C_ExecuteUbergraph_umg_resetSave::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_resetSave_C_ExecuteUbergraph_umg_resetSave, CallFunc_VictoryIntPlusEquals_IntOut_1) == 0x000034, "Member 'Umg_resetSave_C_ExecuteUbergraph_umg_resetSave::CallFunc_VictoryIntPlusEquals_IntOut_1' has a wrong offset!");
static_assert(offsetof(Umg_resetSave_C_ExecuteUbergraph_umg_resetSave, CallFunc_Clamp_ReturnValue_1) == 0x000038, "Member 'Umg_resetSave_C_ExecuteUbergraph_umg_resetSave::CallFunc_Clamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_resetSave_C_ExecuteUbergraph_umg_resetSave, K2Node_Event_index) == 0x00003C, "Member 'Umg_resetSave_C_ExecuteUbergraph_umg_resetSave::K2Node_Event_index' has a wrong offset!");
static_assert(offsetof(Umg_resetSave_C_ExecuteUbergraph_umg_resetSave, CallFunc_IsChecked_ReturnValue_6) == 0x000040, "Member 'Umg_resetSave_C_ExecuteUbergraph_umg_resetSave::CallFunc_IsChecked_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Umg_resetSave_C_ExecuteUbergraph_umg_resetSave, CallFunc_IsChecked_ReturnValue_7) == 0x000041, "Member 'Umg_resetSave_C_ExecuteUbergraph_umg_resetSave::CallFunc_IsChecked_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(Umg_resetSave_C_ExecuteUbergraph_umg_resetSave, CallFunc_IsChecked_ReturnValue_8) == 0x000042, "Member 'Umg_resetSave_C_ExecuteUbergraph_umg_resetSave::CallFunc_IsChecked_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(Umg_resetSave_C_ExecuteUbergraph_umg_resetSave, CallFunc_IsChecked_ReturnValue_9) == 0x000043, "Member 'Umg_resetSave_C_ExecuteUbergraph_umg_resetSave::CallFunc_IsChecked_ReturnValue_9' has a wrong offset!");

// Function umg_resetSave.umg_resetSave_C.setIndex
// 0x0004 (0x0004 - 0x0000)
struct Umg_resetSave_C_SetIndex final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_resetSave_C_SetIndex) == 0x000004, "Wrong alignment on Umg_resetSave_C_SetIndex");
static_assert(sizeof(Umg_resetSave_C_SetIndex) == 0x000004, "Wrong size on Umg_resetSave_C_SetIndex");
static_assert(offsetof(Umg_resetSave_C_SetIndex, Index_0) == 0x000000, "Member 'Umg_resetSave_C_SetIndex::Index_0' has a wrong offset!");

// Function umg_resetSave.umg_resetSave_C.updTxt
// 0x0060 (0x0060 - 0x0000)
struct Umg_resetSave_C_UpdTxt final
{
public:
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
};
static_assert(alignof(Umg_resetSave_C_UpdTxt) == 0x000008, "Wrong alignment on Umg_resetSave_C_UpdTxt");
static_assert(sizeof(Umg_resetSave_C_UpdTxt) == 0x000060, "Wrong size on Umg_resetSave_C_UpdTxt");
static_assert(offsetof(Umg_resetSave_C_UpdTxt, CallFunc_Add_IntInt_ReturnValue) == 0x000000, "Member 'Umg_resetSave_C_UpdTxt::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_resetSave_C_UpdTxt, CallFunc_Add_IntInt_ReturnValue_1) == 0x000004, "Member 'Umg_resetSave_C_UpdTxt::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_resetSave_C_UpdTxt, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'Umg_resetSave_C_UpdTxt::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_resetSave_C_UpdTxt, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000018, "Member 'Umg_resetSave_C_UpdTxt::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_resetSave_C_UpdTxt, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'Umg_resetSave_C_UpdTxt::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_resetSave_C_UpdTxt, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000038, "Member 'Umg_resetSave_C_UpdTxt::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_resetSave_C_UpdTxt, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'Umg_resetSave_C_UpdTxt::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

