#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Panel_coords

#include "Basic.hpp"

#include "Enum_interactionActions_structs.hpp"
#include "Struct_save_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function panel_coords.panel_coords_C.ExecuteUbergraph_panel_coords
// 0x00F0 (0x00F0 - 0x0000)
struct Panel_coords_C_ExecuteUbergraph_panel_coords final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          CallFunc_getMainPlayer_AsMain_Player;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_2;    // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_3;    // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0058(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       K2Node_Event_action;                               // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E2[0x2];                                       // 0x00E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Panel_coords_C_ExecuteUbergraph_panel_coords) == 0x000008, "Wrong alignment on Panel_coords_C_ExecuteUbergraph_panel_coords");
static_assert(sizeof(Panel_coords_C_ExecuteUbergraph_panel_coords) == 0x0000F0, "Wrong size on Panel_coords_C_ExecuteUbergraph_panel_coords");
static_assert(offsetof(Panel_coords_C_ExecuteUbergraph_panel_coords, EntryPoint) == 0x000000, "Member 'Panel_coords_C_ExecuteUbergraph_panel_coords::EntryPoint' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_ExecuteUbergraph_panel_coords, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000008, "Member 'Panel_coords_C_ExecuteUbergraph_panel_coords::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_ExecuteUbergraph_panel_coords, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'Panel_coords_C_ExecuteUbergraph_panel_coords::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_ExecuteUbergraph_panel_coords, CallFunc_getMainPlayer_AsMain_Player) == 0x000018, "Member 'Panel_coords_C_ExecuteUbergraph_panel_coords::CallFunc_getMainPlayer_AsMain_Player' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_ExecuteUbergraph_panel_coords, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000020, "Member 'Panel_coords_C_ExecuteUbergraph_panel_coords::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_ExecuteUbergraph_panel_coords, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x00002C, "Member 'Panel_coords_C_ExecuteUbergraph_panel_coords::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_ExecuteUbergraph_panel_coords, CallFunc_K2_GetComponentLocation_ReturnValue_2) == 0x000038, "Member 'Panel_coords_C_ExecuteUbergraph_panel_coords::CallFunc_K2_GetComponentLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_ExecuteUbergraph_panel_coords, CallFunc_K2_GetComponentLocation_ReturnValue_3) == 0x000044, "Member 'Panel_coords_C_ExecuteUbergraph_panel_coords::CallFunc_K2_GetComponentLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_ExecuteUbergraph_panel_coords, K2Node_Event_player) == 0x000050, "Member 'Panel_coords_C_ExecuteUbergraph_panel_coords::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_ExecuteUbergraph_panel_coords, K2Node_Event_hit) == 0x000058, "Member 'Panel_coords_C_ExecuteUbergraph_panel_coords::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_ExecuteUbergraph_panel_coords, K2Node_Event_action) == 0x0000E0, "Member 'Panel_coords_C_ExecuteUbergraph_panel_coords::K2Node_Event_action' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_ExecuteUbergraph_panel_coords, K2Node_SwitchEnum_CmpSuccess) == 0x0000E1, "Member 'Panel_coords_C_ExecuteUbergraph_panel_coords::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_ExecuteUbergraph_panel_coords, K2Node_Event_DeltaSeconds) == 0x0000E4, "Member 'Panel_coords_C_ExecuteUbergraph_panel_coords::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_ExecuteUbergraph_panel_coords, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000E8, "Member 'Panel_coords_C_ExecuteUbergraph_panel_coords::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function panel_coords.panel_coords_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Panel_coords_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Panel_coords_C_ReceiveTick) == 0x000004, "Wrong alignment on Panel_coords_C_ReceiveTick");
static_assert(sizeof(Panel_coords_C_ReceiveTick) == 0x000004, "Wrong size on Panel_coords_C_ReceiveTick");
static_assert(offsetof(Panel_coords_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Panel_coords_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function panel_coords.panel_coords_C.actionOptionIndex
// 0x0098 (0x0098 - 0x0000)
struct Panel_coords_C_ActionOptionIndex final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       Action;                                            // 0x0090(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Panel_coords_C_ActionOptionIndex) == 0x000008, "Wrong alignment on Panel_coords_C_ActionOptionIndex");
static_assert(sizeof(Panel_coords_C_ActionOptionIndex) == 0x000098, "Wrong size on Panel_coords_C_ActionOptionIndex");
static_assert(offsetof(Panel_coords_C_ActionOptionIndex, Player) == 0x000000, "Member 'Panel_coords_C_ActionOptionIndex::Player' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_ActionOptionIndex, Hit) == 0x000008, "Member 'Panel_coords_C_ActionOptionIndex::Hit' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_ActionOptionIndex, Action) == 0x000090, "Member 'Panel_coords_C_ActionOptionIndex::Action' has a wrong offset!");

// Function panel_coords.panel_coords_C.isButtonUsed
// 0x0001 (0x0001 - 0x0000)
struct Panel_coords_C_IsButtonUsed final
{
public:
	bool                                          Failed;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Panel_coords_C_IsButtonUsed) == 0x000001, "Wrong alignment on Panel_coords_C_IsButtonUsed");
static_assert(sizeof(Panel_coords_C_IsButtonUsed) == 0x000001, "Wrong size on Panel_coords_C_IsButtonUsed");
static_assert(offsetof(Panel_coords_C_IsButtonUsed, Failed) == 0x000000, "Member 'Panel_coords_C_IsButtonUsed::Failed' has a wrong offset!");

// Function panel_coords.panel_coords_C.lookAt
// 0x0108 (0x0108 - 0x0000)
struct Panel_coords_C_LookAt final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Return;                                            // 0x0090(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Text;                                              // 0x0098(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    boundObjectReplace;                                // 0x00A8(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Number;                                            // 0x00B0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x00B8(0x0018)()
	bool                                          CallFunc_lookAt_return;                            // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_lookAt_text;                              // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_lookAt_boundObjectReplace;                // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_lookAt_number;                            // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Panel_coords_C_LookAt) == 0x000008, "Wrong alignment on Panel_coords_C_LookAt");
static_assert(sizeof(Panel_coords_C_LookAt) == 0x000108, "Wrong size on Panel_coords_C_LookAt");
static_assert(offsetof(Panel_coords_C_LookAt, Player) == 0x000000, "Member 'Panel_coords_C_LookAt::Player' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_LookAt, Hit) == 0x000008, "Member 'Panel_coords_C_LookAt::Hit' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_LookAt, Return) == 0x000090, "Member 'Panel_coords_C_LookAt::Return' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_LookAt, Text) == 0x000098, "Member 'Panel_coords_C_LookAt::Text' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_LookAt, boundObjectReplace) == 0x0000A8, "Member 'Panel_coords_C_LookAt::boundObjectReplace' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_LookAt, Number) == 0x0000B0, "Member 'Panel_coords_C_LookAt::Number' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_LookAt, CallFunc_MakeLiteralText_ReturnValue) == 0x0000B8, "Member 'Panel_coords_C_LookAt::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_LookAt, CallFunc_lookAt_return) == 0x0000D0, "Member 'Panel_coords_C_LookAt::CallFunc_lookAt_return' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_LookAt, CallFunc_lookAt_text) == 0x0000D8, "Member 'Panel_coords_C_LookAt::CallFunc_lookAt_text' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_LookAt, CallFunc_lookAt_boundObjectReplace) == 0x0000E8, "Member 'Panel_coords_C_LookAt::CallFunc_lookAt_boundObjectReplace' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_LookAt, CallFunc_lookAt_number) == 0x0000F0, "Member 'Panel_coords_C_LookAt::CallFunc_lookAt_number' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_LookAt, CallFunc_Conv_TextToString_ReturnValue) == 0x0000F8, "Member 'Panel_coords_C_LookAt::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function panel_coords.panel_coords_C.dreamInv
// 0x0018 (0x0018 - 0x0000)
struct Panel_coords_C_DreamInv final
{
public:
	TArray<struct FStruct_save>                   Invv;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ADreamBase_C*                           Base;                                              // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Panel_coords_C_DreamInv) == 0x000008, "Wrong alignment on Panel_coords_C_DreamInv");
static_assert(sizeof(Panel_coords_C_DreamInv) == 0x000018, "Wrong size on Panel_coords_C_DreamInv");
static_assert(offsetof(Panel_coords_C_DreamInv, Invv) == 0x000000, "Member 'Panel_coords_C_DreamInv::Invv' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_DreamInv, Base) == 0x000010, "Member 'Panel_coords_C_DreamInv::Base' has a wrong offset!");

// Function panel_coords.panel_coords_C.getActionOptions
// 0x0060 (0x0060 - 0x0000)
struct Panel_coords_C_GetActionOptions final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    Component;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Actor;                                             // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         Options;                                           // 0x0018(0x0010)(Parm, OutParm)
	TArray<Enum_interactionActions>               Options_enum;                                      // 0x0028(0x0010)(Parm, OutParm)
	TArray<class FText>                           OptionsNamesOverlay;                               // 0x0038(0x0010)(Parm, OutParm)
	uint8                                         Number;                                            // 0x0048(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<Enum_interactionActions>               K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ReferenceParm)
};
static_assert(alignof(Panel_coords_C_GetActionOptions) == 0x000008, "Wrong alignment on Panel_coords_C_GetActionOptions");
static_assert(sizeof(Panel_coords_C_GetActionOptions) == 0x000060, "Wrong size on Panel_coords_C_GetActionOptions");
static_assert(offsetof(Panel_coords_C_GetActionOptions, Player) == 0x000000, "Member 'Panel_coords_C_GetActionOptions::Player' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_GetActionOptions, Component) == 0x000008, "Member 'Panel_coords_C_GetActionOptions::Component' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_GetActionOptions, Actor) == 0x000010, "Member 'Panel_coords_C_GetActionOptions::Actor' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_GetActionOptions, Options) == 0x000018, "Member 'Panel_coords_C_GetActionOptions::Options' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_GetActionOptions, Options_enum) == 0x000028, "Member 'Panel_coords_C_GetActionOptions::Options_enum' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_GetActionOptions, OptionsNamesOverlay) == 0x000038, "Member 'Panel_coords_C_GetActionOptions::OptionsNamesOverlay' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_GetActionOptions, Number) == 0x000048, "Member 'Panel_coords_C_GetActionOptions::Number' has a wrong offset!");
static_assert(offsetof(Panel_coords_C_GetActionOptions, K2Node_MakeArray_Array) == 0x000050, "Member 'Panel_coords_C_GetActionOptions::K2Node_MakeArray_Array' has a wrong offset!");

}
