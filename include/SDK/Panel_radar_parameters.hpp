#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Panel_radar

#include "Basic.hpp"

#include "Enum_interactionActions_structs.hpp"
#include "Struct_save_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function panel_radar.panel_radar_C.ExecuteUbergraph_panel_radar
// 0x00D0 (0x00D0 - 0x0000)
struct Panel_radar_C_ExecuteUbergraph_panel_radar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_getObjectFromKey_Output;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATrigger_alarm_C*                       K2Node_DynamicCast_AsTrigger_Alarm;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInt_ttrigger_C>       K2Node_DynamicCast_AsInt_Ttrigger;                 // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0040(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       K2Node_Event_action;                               // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Panel_radar_C_ExecuteUbergraph_panel_radar) == 0x000008, "Wrong alignment on Panel_radar_C_ExecuteUbergraph_panel_radar");
static_assert(sizeof(Panel_radar_C_ExecuteUbergraph_panel_radar) == 0x0000D0, "Wrong size on Panel_radar_C_ExecuteUbergraph_panel_radar");
static_assert(offsetof(Panel_radar_C_ExecuteUbergraph_panel_radar, EntryPoint) == 0x000000, "Member 'Panel_radar_C_ExecuteUbergraph_panel_radar::EntryPoint' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_ExecuteUbergraph_panel_radar, CallFunc_getObjectFromKey_Output) == 0x000008, "Member 'Panel_radar_C_ExecuteUbergraph_panel_radar::CallFunc_getObjectFromKey_Output' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_ExecuteUbergraph_panel_radar, K2Node_DynamicCast_AsTrigger_Alarm) == 0x000010, "Member 'Panel_radar_C_ExecuteUbergraph_panel_radar::K2Node_DynamicCast_AsTrigger_Alarm' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_ExecuteUbergraph_panel_radar, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'Panel_radar_C_ExecuteUbergraph_panel_radar::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_ExecuteUbergraph_panel_radar, K2Node_DynamicCast_AsInt_Ttrigger) == 0x000020, "Member 'Panel_radar_C_ExecuteUbergraph_panel_radar::K2Node_DynamicCast_AsInt_Ttrigger' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_ExecuteUbergraph_panel_radar, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'Panel_radar_C_ExecuteUbergraph_panel_radar::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_ExecuteUbergraph_panel_radar, K2Node_Event_DeltaSeconds) == 0x000034, "Member 'Panel_radar_C_ExecuteUbergraph_panel_radar::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_ExecuteUbergraph_panel_radar, K2Node_Event_player) == 0x000038, "Member 'Panel_radar_C_ExecuteUbergraph_panel_radar::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_ExecuteUbergraph_panel_radar, K2Node_Event_hit) == 0x000040, "Member 'Panel_radar_C_ExecuteUbergraph_panel_radar::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_ExecuteUbergraph_panel_radar, K2Node_Event_action) == 0x0000C8, "Member 'Panel_radar_C_ExecuteUbergraph_panel_radar::K2Node_Event_action' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_ExecuteUbergraph_panel_radar, K2Node_SwitchEnum_CmpSuccess) == 0x0000C9, "Member 'Panel_radar_C_ExecuteUbergraph_panel_radar::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function panel_radar.panel_radar_C.actionOptionIndex
// 0x0098 (0x0098 - 0x0000)
struct Panel_radar_C_ActionOptionIndex final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       Action;                                            // 0x0090(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Panel_radar_C_ActionOptionIndex) == 0x000008, "Wrong alignment on Panel_radar_C_ActionOptionIndex");
static_assert(sizeof(Panel_radar_C_ActionOptionIndex) == 0x000098, "Wrong size on Panel_radar_C_ActionOptionIndex");
static_assert(offsetof(Panel_radar_C_ActionOptionIndex, Player) == 0x000000, "Member 'Panel_radar_C_ActionOptionIndex::Player' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_ActionOptionIndex, Hit) == 0x000008, "Member 'Panel_radar_C_ActionOptionIndex::Hit' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_ActionOptionIndex, Action) == 0x000090, "Member 'Panel_radar_C_ActionOptionIndex::Action' has a wrong offset!");

// Function panel_radar.panel_radar_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Panel_radar_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Panel_radar_C_ReceiveTick) == 0x000004, "Wrong alignment on Panel_radar_C_ReceiveTick");
static_assert(sizeof(Panel_radar_C_ReceiveTick) == 0x000004, "Wrong size on Panel_radar_C_ReceiveTick");
static_assert(offsetof(Panel_radar_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Panel_radar_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function panel_radar.panel_radar_C.isButtonUsed
// 0x0001 (0x0001 - 0x0000)
struct Panel_radar_C_IsButtonUsed final
{
public:
	bool                                          Failed;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Panel_radar_C_IsButtonUsed) == 0x000001, "Wrong alignment on Panel_radar_C_IsButtonUsed");
static_assert(sizeof(Panel_radar_C_IsButtonUsed) == 0x000001, "Wrong size on Panel_radar_C_IsButtonUsed");
static_assert(offsetof(Panel_radar_C_IsButtonUsed, Failed) == 0x000000, "Member 'Panel_radar_C_IsButtonUsed::Failed' has a wrong offset!");

// Function panel_radar.panel_radar_C.lookAt
// 0x0178 (0x0178 - 0x0000)
struct Panel_radar_C_LookAt final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Return;                                            // 0x0090(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Text;                                              // 0x0098(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    boundObjectReplace;                                // 0x00A8(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Number;                                            // 0x00B0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B3[0x1];                                       // 0x00B3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x00BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x00D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x00E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EC[0x4];                                       // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x011C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0128(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_134[0x4];                                      // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPrimitiveComponent*>            K2Node_MakeArray_Array;                            // 0x0138(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0148(0x0018)()
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Panel_radar_C_LookAt) == 0x000008, "Wrong alignment on Panel_radar_C_LookAt");
static_assert(sizeof(Panel_radar_C_LookAt) == 0x000178, "Wrong size on Panel_radar_C_LookAt");
static_assert(offsetof(Panel_radar_C_LookAt, Player) == 0x000000, "Member 'Panel_radar_C_LookAt::Player' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_LookAt, Hit) == 0x000008, "Member 'Panel_radar_C_LookAt::Hit' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_LookAt, Return) == 0x000090, "Member 'Panel_radar_C_LookAt::Return' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_LookAt, Text) == 0x000098, "Member 'Panel_radar_C_LookAt::Text' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_LookAt, boundObjectReplace) == 0x0000A8, "Member 'Panel_radar_C_LookAt::boundObjectReplace' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_LookAt, Number) == 0x0000B0, "Member 'Panel_radar_C_LookAt::Number' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_LookAt, CallFunc_BreakHitResult_bBlockingHit) == 0x0000B1, "Member 'Panel_radar_C_LookAt::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_LookAt, CallFunc_BreakHitResult_bInitialOverlap) == 0x0000B2, "Member 'Panel_radar_C_LookAt::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_LookAt, CallFunc_BreakHitResult_Time) == 0x0000B4, "Member 'Panel_radar_C_LookAt::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_LookAt, CallFunc_BreakHitResult_Distance) == 0x0000B8, "Member 'Panel_radar_C_LookAt::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_LookAt, CallFunc_BreakHitResult_Location) == 0x0000BC, "Member 'Panel_radar_C_LookAt::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_LookAt, CallFunc_BreakHitResult_ImpactPoint) == 0x0000C8, "Member 'Panel_radar_C_LookAt::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_LookAt, CallFunc_BreakHitResult_Normal) == 0x0000D4, "Member 'Panel_radar_C_LookAt::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_LookAt, CallFunc_BreakHitResult_ImpactNormal) == 0x0000E0, "Member 'Panel_radar_C_LookAt::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_LookAt, CallFunc_BreakHitResult_PhysMat) == 0x0000F0, "Member 'Panel_radar_C_LookAt::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_LookAt, CallFunc_BreakHitResult_HitActor) == 0x0000F8, "Member 'Panel_radar_C_LookAt::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_LookAt, CallFunc_BreakHitResult_HitComponent) == 0x000100, "Member 'Panel_radar_C_LookAt::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_LookAt, CallFunc_BreakHitResult_HitBoneName) == 0x000108, "Member 'Panel_radar_C_LookAt::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_LookAt, CallFunc_BreakHitResult_HitItem) == 0x000110, "Member 'Panel_radar_C_LookAt::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_LookAt, CallFunc_BreakHitResult_ElementIndex) == 0x000114, "Member 'Panel_radar_C_LookAt::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_LookAt, CallFunc_BreakHitResult_FaceIndex) == 0x000118, "Member 'Panel_radar_C_LookAt::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_LookAt, CallFunc_BreakHitResult_TraceStart) == 0x00011C, "Member 'Panel_radar_C_LookAt::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_LookAt, CallFunc_BreakHitResult_TraceEnd) == 0x000128, "Member 'Panel_radar_C_LookAt::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_LookAt, K2Node_MakeArray_Array) == 0x000138, "Member 'Panel_radar_C_LookAt::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_LookAt, CallFunc_MakeLiteralText_ReturnValue) == 0x000148, "Member 'Panel_radar_C_LookAt::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_LookAt, CallFunc_Array_Contains_ReturnValue) == 0x000160, "Member 'Panel_radar_C_LookAt::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_LookAt, CallFunc_Conv_TextToString_ReturnValue) == 0x000168, "Member 'Panel_radar_C_LookAt::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function panel_radar.panel_radar_C.dreamInv
// 0x0018 (0x0018 - 0x0000)
struct Panel_radar_C_DreamInv final
{
public:
	TArray<struct FStruct_save>                   Invv;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ADreamBase_C*                           Base;                                              // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Panel_radar_C_DreamInv) == 0x000008, "Wrong alignment on Panel_radar_C_DreamInv");
static_assert(sizeof(Panel_radar_C_DreamInv) == 0x000018, "Wrong size on Panel_radar_C_DreamInv");
static_assert(offsetof(Panel_radar_C_DreamInv, Invv) == 0x000000, "Member 'Panel_radar_C_DreamInv::Invv' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_DreamInv, Base) == 0x000010, "Member 'Panel_radar_C_DreamInv::Base' has a wrong offset!");

// Function panel_radar.panel_radar_C.getActionOptions
// 0x0060 (0x0060 - 0x0000)
struct Panel_radar_C_GetActionOptions final
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
static_assert(alignof(Panel_radar_C_GetActionOptions) == 0x000008, "Wrong alignment on Panel_radar_C_GetActionOptions");
static_assert(sizeof(Panel_radar_C_GetActionOptions) == 0x000060, "Wrong size on Panel_radar_C_GetActionOptions");
static_assert(offsetof(Panel_radar_C_GetActionOptions, Player) == 0x000000, "Member 'Panel_radar_C_GetActionOptions::Player' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_GetActionOptions, Component) == 0x000008, "Member 'Panel_radar_C_GetActionOptions::Component' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_GetActionOptions, Actor) == 0x000010, "Member 'Panel_radar_C_GetActionOptions::Actor' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_GetActionOptions, Options) == 0x000018, "Member 'Panel_radar_C_GetActionOptions::Options' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_GetActionOptions, Options_enum) == 0x000028, "Member 'Panel_radar_C_GetActionOptions::Options_enum' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_GetActionOptions, OptionsNamesOverlay) == 0x000038, "Member 'Panel_radar_C_GetActionOptions::OptionsNamesOverlay' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_GetActionOptions, Number) == 0x000048, "Member 'Panel_radar_C_GetActionOptions::Number' has a wrong offset!");
static_assert(offsetof(Panel_radar_C_GetActionOptions, K2Node_MakeArray_Array) == 0x000050, "Member 'Panel_radar_C_GetActionOptions::K2Node_MakeArray_Array' has a wrong offset!");

}
