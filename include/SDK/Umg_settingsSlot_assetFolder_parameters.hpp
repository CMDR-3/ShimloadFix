#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_settingsSlot_assetFolder

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function umg_settingsSlot_assetFolder.umg_settingsSlot_assetFolder_C.ExecuteUbergraph_umg_settingsSlot_assetFolder
// 0x0040 (0x0040 - 0x0000)
struct Umg_settingsSlot_assetFolder_C_ExecuteUbergraph_umg_settingsSlot_assetFolder final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0008(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_DirectoryExists_ReturnValue;              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Umg_settingsSlot_assetFolder_C_ExecuteUbergraph_umg_settingsSlot_assetFolder) == 0x000008, "Wrong alignment on Umg_settingsSlot_assetFolder_C_ExecuteUbergraph_umg_settingsSlot_assetFolder");
static_assert(sizeof(Umg_settingsSlot_assetFolder_C_ExecuteUbergraph_umg_settingsSlot_assetFolder) == 0x000040, "Wrong size on Umg_settingsSlot_assetFolder_C_ExecuteUbergraph_umg_settingsSlot_assetFolder");
static_assert(offsetof(Umg_settingsSlot_assetFolder_C_ExecuteUbergraph_umg_settingsSlot_assetFolder, EntryPoint) == 0x000000, "Member 'Umg_settingsSlot_assetFolder_C_ExecuteUbergraph_umg_settingsSlot_assetFolder::EntryPoint' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_assetFolder_C_ExecuteUbergraph_umg_settingsSlot_assetFolder, K2Node_ComponentBoundEvent_Text) == 0x000008, "Member 'Umg_settingsSlot_assetFolder_C_ExecuteUbergraph_umg_settingsSlot_assetFolder::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_assetFolder_C_ExecuteUbergraph_umg_settingsSlot_assetFolder, K2Node_ComponentBoundEvent_CommitMethod) == 0x000020, "Member 'Umg_settingsSlot_assetFolder_C_ExecuteUbergraph_umg_settingsSlot_assetFolder::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_assetFolder_C_ExecuteUbergraph_umg_settingsSlot_assetFolder, CallFunc_Conv_TextToString_ReturnValue) == 0x000028, "Member 'Umg_settingsSlot_assetFolder_C_ExecuteUbergraph_umg_settingsSlot_assetFolder::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_assetFolder_C_ExecuteUbergraph_umg_settingsSlot_assetFolder, CallFunc_DirectoryExists_ReturnValue) == 0x000038, "Member 'Umg_settingsSlot_assetFolder_C_ExecuteUbergraph_umg_settingsSlot_assetFolder::CallFunc_DirectoryExists_ReturnValue' has a wrong offset!");

// Function umg_settingsSlot_assetFolder.umg_settingsSlot_assetFolder_C.BndEvt__umg_settingsSlot_assetFolder_textbox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct Umg_settingsSlot_assetFolder_C_BndEvt__umg_settingsSlot_assetFolder_textbox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_settingsSlot_assetFolder_C_BndEvt__umg_settingsSlot_assetFolder_textbox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on Umg_settingsSlot_assetFolder_C_BndEvt__umg_settingsSlot_assetFolder_textbox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(Umg_settingsSlot_assetFolder_C_BndEvt__umg_settingsSlot_assetFolder_textbox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on Umg_settingsSlot_assetFolder_C_BndEvt__umg_settingsSlot_assetFolder_textbox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(Umg_settingsSlot_assetFolder_C_BndEvt__umg_settingsSlot_assetFolder_textbox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'Umg_settingsSlot_assetFolder_C_BndEvt__umg_settingsSlot_assetFolder_textbox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_assetFolder_C_BndEvt__umg_settingsSlot_assetFolder_textbox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'Umg_settingsSlot_assetFolder_C_BndEvt__umg_settingsSlot_assetFolder_textbox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function umg_settingsSlot_assetFolder.umg_settingsSlot_assetFolder_C.upd
// 0x0018 (0x0018 - 0x0000)
struct Umg_settingsSlot_assetFolder_C_Upd final
{
public:
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0000(0x0018)()
};
static_assert(alignof(Umg_settingsSlot_assetFolder_C_Upd) == 0x000008, "Wrong alignment on Umg_settingsSlot_assetFolder_C_Upd");
static_assert(sizeof(Umg_settingsSlot_assetFolder_C_Upd) == 0x000018, "Wrong size on Umg_settingsSlot_assetFolder_C_Upd");
static_assert(offsetof(Umg_settingsSlot_assetFolder_C_Upd, CallFunc_Conv_StringToText_ReturnValue) == 0x000000, "Member 'Umg_settingsSlot_assetFolder_C_Upd::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}
