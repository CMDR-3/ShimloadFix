#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_helpButton

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function umg_helpButton.umg_helpButton_C.ExecuteUbergraph_umg_helpButton
// 0x0040 (0x0040 - 0x0000)
struct Umg_helpButton_C_ExecuteUbergraph_umg_helpButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0018(0x0028)()
};
static_assert(alignof(Umg_helpButton_C_ExecuteUbergraph_umg_helpButton) == 0x000008, "Wrong alignment on Umg_helpButton_C_ExecuteUbergraph_umg_helpButton");
static_assert(sizeof(Umg_helpButton_C_ExecuteUbergraph_umg_helpButton) == 0x000040, "Wrong size on Umg_helpButton_C_ExecuteUbergraph_umg_helpButton");
static_assert(offsetof(Umg_helpButton_C_ExecuteUbergraph_umg_helpButton, EntryPoint) == 0x000000, "Member 'Umg_helpButton_C_ExecuteUbergraph_umg_helpButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(Umg_helpButton_C_ExecuteUbergraph_umg_helpButton, CallFunc_SelectColor_ReturnValue) == 0x000004, "Member 'Umg_helpButton_C_ExecuteUbergraph_umg_helpButton::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_helpButton_C_ExecuteUbergraph_umg_helpButton, K2Node_MakeStruct_SlateColor) == 0x000018, "Member 'Umg_helpButton_C_ExecuteUbergraph_umg_helpButton::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function umg_helpButton.umg_helpButton_C.Search
// 0x0030 (0x0030 - 0x0000)
struct Umg_helpButton_C_Search final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_helpButton_C_Search) == 0x000008, "Wrong alignment on Umg_helpButton_C_Search");
static_assert(sizeof(Umg_helpButton_C_Search) == 0x000030, "Wrong size on Umg_helpButton_C_Search");
static_assert(offsetof(Umg_helpButton_C_Search, Temp_bool_Variable) == 0x000000, "Member 'Umg_helpButton_C_Search::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Umg_helpButton_C_Search, Temp_byte_Variable) == 0x000001, "Member 'Umg_helpButton_C_Search::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Umg_helpButton_C_Search, Temp_byte_Variable_1) == 0x000002, "Member 'Umg_helpButton_C_Search::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Umg_helpButton_C_Search, CallFunc_Conv_TextToString_ReturnValue) == 0x000008, "Member 'Umg_helpButton_C_Search::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_helpButton_C_Search, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000018, "Member 'Umg_helpButton_C_Search::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_helpButton_C_Search, CallFunc_TextIsEmpty_ReturnValue) == 0x000028, "Member 'Umg_helpButton_C_Search::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_helpButton_C_Search, CallFunc_Contains_ReturnValue) == 0x000029, "Member 'Umg_helpButton_C_Search::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_helpButton_C_Search, CallFunc_BooleanOR_ReturnValue) == 0x00002A, "Member 'Umg_helpButton_C_Search::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_helpButton_C_Search, K2Node_Select_Default) == 0x00002B, "Member 'Umg_helpButton_C_Search::K2Node_Select_Default' has a wrong offset!");

// Function umg_helpButton.umg_helpButton_C.upd
// 0x0009 (0x0009 - 0x0000)
struct Umg_helpButton_C_Upd final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_helpButton_C_Upd) == 0x000001, "Wrong alignment on Umg_helpButton_C_Upd");
static_assert(sizeof(Umg_helpButton_C_Upd) == 0x000009, "Wrong size on Umg_helpButton_C_Upd");
static_assert(offsetof(Umg_helpButton_C_Upd, Temp_bool_Variable) == 0x000000, "Member 'Umg_helpButton_C_Upd::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Umg_helpButton_C_Upd, Temp_byte_Variable) == 0x000001, "Member 'Umg_helpButton_C_Upd::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Umg_helpButton_C_Upd, Temp_byte_Variable_1) == 0x000002, "Member 'Umg_helpButton_C_Upd::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Umg_helpButton_C_Upd, Temp_bool_Variable_1) == 0x000003, "Member 'Umg_helpButton_C_Upd::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Umg_helpButton_C_Upd, Temp_byte_Variable_2) == 0x000004, "Member 'Umg_helpButton_C_Upd::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(Umg_helpButton_C_Upd, Temp_byte_Variable_3) == 0x000005, "Member 'Umg_helpButton_C_Upd::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(Umg_helpButton_C_Upd, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000006, "Member 'Umg_helpButton_C_Upd::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_helpButton_C_Upd, K2Node_Select_Default) == 0x000007, "Member 'Umg_helpButton_C_Upd::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Umg_helpButton_C_Upd, K2Node_Select_Default_1) == 0x000008, "Member 'Umg_helpButton_C_Upd::K2Node_Select_Default_1' has a wrong offset!");

}
