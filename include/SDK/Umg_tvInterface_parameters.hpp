#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_tvInterface

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "InputCore_structs.hpp"
#include "Enum_tvStatus_structs.hpp"


namespace SDK::Params
{

// Function umg_tvInterface.umg_tvInterface_C.ExecuteUbergraph_umg_tvInterface
// 0x00D0 (0x00D0 - 0x0000)
struct Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const class FString& FailedUrl)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	Enum_tvStatus                                 Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_tvStatus                                 Temp_byte_Variable_1;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	Enum_tvStatus                                 Temp_byte_Variable_2;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_tvStatus                                 Temp_byte_Variable_3;                              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	Enum_tvStatus                                 Temp_byte_Variable_4;                              // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_tvStatus                                 Temp_byte_Variable_5;                              // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_ComponentBoundEvent_Text_1;                 // 0x0020(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod_1;         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_OpenedUrl;                      // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& OpenedUrl)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Pause_ReturnValue;                        // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_OpenUrl_ReturnValue;                      // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72[0x6];                                       // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_FailedUrl;                      // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          CallFunc_getMainPlayer_AsMain_Player;              // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_setActiveInterface_return;                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Pause_ReturnValue_1;                      // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Play_ReturnValue;                         // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	Enum_tvStatus                                 K2Node_Select_Default;                             // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_tvStatus                                 K2Node_Select_Default_1;                           // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_OpenFile_ReturnValue;                     // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96[0x2];                                       // 0x0096(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0098(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_tvStatus                                 K2Node_Select_Default_2;                           // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B2[0x6];                                       // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Value;                  // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface) == 0x000008, "Wrong alignment on Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface");
static_assert(sizeof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface) == 0x0000D0, "Wrong size on Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, EntryPoint) == 0x000000, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::EntryPoint' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, Temp_bool_Variable) == 0x000004, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, Temp_byte_Variable) == 0x000018, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, Temp_byte_Variable_1) == 0x000019, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, Temp_bool_Variable_1) == 0x00001A, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, Temp_byte_Variable_2) == 0x00001B, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, Temp_byte_Variable_3) == 0x00001C, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, Temp_bool_Variable_2) == 0x00001D, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, Temp_byte_Variable_4) == 0x00001E, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, Temp_byte_Variable_5) == 0x00001F, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, K2Node_ComponentBoundEvent_Text_1) == 0x000020, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::K2Node_ComponentBoundEvent_Text_1' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, K2Node_ComponentBoundEvent_CommitMethod_1) == 0x000038, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::K2Node_ComponentBoundEvent_CommitMethod_1' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, CallFunc_Conv_TextToString_ReturnValue) == 0x000040, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, K2Node_CustomEvent_OpenedUrl) == 0x000050, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::K2Node_CustomEvent_OpenedUrl' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, K2Node_CreateDelegate_OutputDelegate_1) == 0x000060, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, CallFunc_Pause_ReturnValue) == 0x000070, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::CallFunc_Pause_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, CallFunc_OpenUrl_ReturnValue) == 0x000071, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::CallFunc_OpenUrl_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, K2Node_CustomEvent_FailedUrl) == 0x000078, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::K2Node_CustomEvent_FailedUrl' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, CallFunc_getMainPlayer_AsMain_Player) == 0x000088, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::CallFunc_getMainPlayer_AsMain_Player' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, CallFunc_setActiveInterface_return) == 0x000090, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::CallFunc_setActiveInterface_return' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, CallFunc_Pause_ReturnValue_1) == 0x000091, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::CallFunc_Pause_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, CallFunc_Play_ReturnValue) == 0x000092, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::CallFunc_Play_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, K2Node_Select_Default) == 0x000093, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, K2Node_Select_Default_1) == 0x000094, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, CallFunc_OpenFile_ReturnValue) == 0x000095, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::CallFunc_OpenFile_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, K2Node_ComponentBoundEvent_Text) == 0x000098, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, K2Node_ComponentBoundEvent_CommitMethod) == 0x0000B0, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, K2Node_Select_Default_2) == 0x0000B1, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0000B8, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface, K2Node_ComponentBoundEvent_Value) == 0x0000C8, "Member 'Umg_tvInterface_C_ExecuteUbergraph_umg_tvInterface::K2Node_ComponentBoundEvent_Value' has a wrong offset!");

// Function umg_tvInterface.umg_tvInterface_C.BndEvt__slider_volume_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct Umg_tvInterface_C_BndEvt__slider_volume_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_tvInterface_C_BndEvt__slider_volume_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on Umg_tvInterface_C_BndEvt__slider_volume_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(Umg_tvInterface_C_BndEvt__slider_volume_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on Umg_tvInterface_C_BndEvt__slider_volume_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(Umg_tvInterface_C_BndEvt__slider_volume_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature, Value) == 0x000000, "Member 'Umg_tvInterface_C_BndEvt__slider_volume_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature::Value' has a wrong offset!");

// Function umg_tvInterface.umg_tvInterface_C.BndEvt__etb_offlinePath_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct Umg_tvInterface_C_BndEvt__etb_offlinePath_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_tvInterface_C_BndEvt__etb_offlinePath_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on Umg_tvInterface_C_BndEvt__etb_offlinePath_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(Umg_tvInterface_C_BndEvt__etb_offlinePath_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on Umg_tvInterface_C_BndEvt__etb_offlinePath_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(Umg_tvInterface_C_BndEvt__etb_offlinePath_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'Umg_tvInterface_C_BndEvt__etb_offlinePath_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_BndEvt__etb_offlinePath_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'Umg_tvInterface_C_BndEvt__etb_offlinePath_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function umg_tvInterface.umg_tvInterface_C.openFail
// 0x0010 (0x0010 - 0x0000)
struct Umg_tvInterface_C_OpenFail final
{
public:
	class FString                                 FailedUrl;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_tvInterface_C_OpenFail) == 0x000008, "Wrong alignment on Umg_tvInterface_C_OpenFail");
static_assert(sizeof(Umg_tvInterface_C_OpenFail) == 0x000010, "Wrong size on Umg_tvInterface_C_OpenFail");
static_assert(offsetof(Umg_tvInterface_C_OpenFail, FailedUrl) == 0x000000, "Member 'Umg_tvInterface_C_OpenFail::FailedUrl' has a wrong offset!");

// Function umg_tvInterface.umg_tvInterface_C.openeddUrl
// 0x0010 (0x0010 - 0x0000)
struct Umg_tvInterface_C_OpeneddUrl final
{
public:
	class FString                                 OpenedUrl;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_tvInterface_C_OpeneddUrl) == 0x000008, "Wrong alignment on Umg_tvInterface_C_OpeneddUrl");
static_assert(sizeof(Umg_tvInterface_C_OpeneddUrl) == 0x000010, "Wrong size on Umg_tvInterface_C_OpeneddUrl");
static_assert(offsetof(Umg_tvInterface_C_OpeneddUrl, OpenedUrl) == 0x000000, "Member 'Umg_tvInterface_C_OpeneddUrl::OpenedUrl' has a wrong offset!");

// Function umg_tvInterface.umg_tvInterface_C.BndEvt__etb_url_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct Umg_tvInterface_C_BndEvt__etb_url_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_tvInterface_C_BndEvt__etb_url_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on Umg_tvInterface_C_BndEvt__etb_url_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(Umg_tvInterface_C_BndEvt__etb_url_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on Umg_tvInterface_C_BndEvt__etb_url_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(Umg_tvInterface_C_BndEvt__etb_url_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'Umg_tvInterface_C_BndEvt__etb_url_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_BndEvt__etb_url_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'Umg_tvInterface_C_BndEvt__etb_url_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function umg_tvInterface.umg_tvInterface_C.OnKeyDown
// 0x0200 (0x0200 - 0x0000)
struct Umg_tvInterface_C_OnKeyDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0070(0x00B8)(Parm, OutParm, ReturnParm)
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x0128(0x0018)(HasGetValueTypeHash)
	struct FEventReply                            K2Node_MakeStruct_EventReply;                      // 0x0140(0x00B8)()
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Umg_tvInterface_C_OnKeyDown) == 0x000008, "Wrong alignment on Umg_tvInterface_C_OnKeyDown");
static_assert(sizeof(Umg_tvInterface_C_OnKeyDown) == 0x000200, "Wrong size on Umg_tvInterface_C_OnKeyDown");
static_assert(offsetof(Umg_tvInterface_C_OnKeyDown, MyGeometry) == 0x000000, "Member 'Umg_tvInterface_C_OnKeyDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_OnKeyDown, InKeyEvent) == 0x000038, "Member 'Umg_tvInterface_C_OnKeyDown::InKeyEvent' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_OnKeyDown, ReturnValue) == 0x000070, "Member 'Umg_tvInterface_C_OnKeyDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_OnKeyDown, CallFunc_GetKey_ReturnValue) == 0x000128, "Member 'Umg_tvInterface_C_OnKeyDown::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_OnKeyDown, K2Node_MakeStruct_EventReply) == 0x000140, "Member 'Umg_tvInterface_C_OnKeyDown::K2Node_MakeStruct_EventReply' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_OnKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x0001F8, "Member 'Umg_tvInterface_C_OnKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");

// Function umg_tvInterface.umg_tvInterface_C.upd
// 0x0060 (0x0060 - 0x0000)
struct Umg_tvInterface_C_Upd final
{
public:
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0008(0x0018)()
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	class FText                                   CallFunc_Conv_BoolToText_ReturnValue;              // 0x0048(0x0018)()
};
static_assert(alignof(Umg_tvInterface_C_Upd) == 0x000008, "Wrong alignment on Umg_tvInterface_C_Upd");
static_assert(sizeof(Umg_tvInterface_C_Upd) == 0x000060, "Wrong size on Umg_tvInterface_C_Upd");
static_assert(offsetof(Umg_tvInterface_C_Upd, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000000, "Member 'Umg_tvInterface_C_Upd::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_Upd, CallFunc_Conv_FloatToText_ReturnValue) == 0x000008, "Member 'Umg_tvInterface_C_Upd::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_Upd, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000020, "Member 'Umg_tvInterface_C_Upd::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_Upd, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'Umg_tvInterface_C_Upd::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_tvInterface_C_Upd, CallFunc_Conv_BoolToText_ReturnValue) == 0x000048, "Member 'Umg_tvInterface_C_Upd::CallFunc_Conv_BoolToText_ReturnValue' has a wrong offset!");

}
