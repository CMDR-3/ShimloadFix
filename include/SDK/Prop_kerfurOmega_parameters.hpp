#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_kerfurOmega

#include "Basic.hpp"

#include "Enum_interactionActions_structs.hpp"
#include "Engine_structs.hpp"
#include "Struct_settings_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_kerfurOmega.prop_kerfurOmega_C.ExecuteUbergraph_prop_kerfurOmega
// 0x0280 (0x0280 - 0x0000)
struct Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0010(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       K2Node_Event_action;                               // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x00A0(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0104(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x011C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_settings                       K2Node_Event_settings;                             // 0x0128(0x0100)(HasGetValueTypeHash)
	uint8                                         Pad_228[0x8];                                      // 0x0228(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0230(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKerfurOmega_C*                         CallFunc_FinishSpawningActor_ReturnValue;          // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega) == 0x000010, "Wrong alignment on Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega");
static_assert(sizeof(Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega) == 0x000280, "Wrong size on Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega");
static_assert(offsetof(Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega, EntryPoint) == 0x000000, "Member 'Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega, K2Node_Event_player) == 0x000008, "Member 'Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega, K2Node_Event_hit) == 0x000010, "Member 'Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega, K2Node_Event_action) == 0x000098, "Member 'Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega::K2Node_Event_action' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega, CallFunc_GetTransform_ReturnValue) == 0x0000A0, "Member 'Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega, K2Node_SwitchEnum_CmpSuccess) == 0x0000D0, "Member 'Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega, CallFunc_BreakTransform_Location) == 0x0000D4, "Member 'Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega, CallFunc_BreakTransform_Rotation) == 0x0000E0, "Member 'Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega, CallFunc_BreakTransform_Scale) == 0x0000EC, "Member 'Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega, CallFunc_BreakRotator_Roll) == 0x0000F8, "Member 'Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega, CallFunc_BreakRotator_Pitch) == 0x0000FC, "Member 'Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega, CallFunc_BreakRotator_Yaw) == 0x000100, "Member 'Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega, CallFunc_MakeRotator_ReturnValue) == 0x000104, "Member 'Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000110, "Member 'Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega, CallFunc_Add_VectorVector_ReturnValue) == 0x00011C, "Member 'Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega, K2Node_Event_settings) == 0x000128, "Member 'Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega::K2Node_Event_settings' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega, CallFunc_MakeTransform_ReturnValue) == 0x000230, "Member 'Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000260, "Member 'Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega, CallFunc_FinishSpawningActor_ReturnValue) == 0x000268, "Member 'Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega, CallFunc_IsValid_ReturnValue) == 0x000270, "Member 'Prop_kerfurOmega_C_ExecuteUbergraph_prop_kerfurOmega::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function prop_kerfurOmega.prop_kerfurOmega_C.actionOptionIndex
// 0x0098 (0x0098 - 0x0000)
struct Prop_kerfurOmega_C_ActionOptionIndex final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit_0;                                             // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       Action;                                            // 0x0090(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_kerfurOmega_C_ActionOptionIndex) == 0x000008, "Wrong alignment on Prop_kerfurOmega_C_ActionOptionIndex");
static_assert(sizeof(Prop_kerfurOmega_C_ActionOptionIndex) == 0x000098, "Wrong size on Prop_kerfurOmega_C_ActionOptionIndex");
static_assert(offsetof(Prop_kerfurOmega_C_ActionOptionIndex, Player) == 0x000000, "Member 'Prop_kerfurOmega_C_ActionOptionIndex::Player' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_ActionOptionIndex, Hit_0) == 0x000008, "Member 'Prop_kerfurOmega_C_ActionOptionIndex::Hit_0' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_ActionOptionIndex, Action) == 0x000090, "Member 'Prop_kerfurOmega_C_ActionOptionIndex::Action' has a wrong offset!");

// Function prop_kerfurOmega.prop_kerfurOmega_C.settingsApplied
// 0x0100 (0x0100 - 0x0000)
struct Prop_kerfurOmega_C_SettingsApplied final
{
public:
	struct FStruct_settings                       Settings;                                          // 0x0000(0x0100)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(Prop_kerfurOmega_C_SettingsApplied) == 0x000008, "Wrong alignment on Prop_kerfurOmega_C_SettingsApplied");
static_assert(sizeof(Prop_kerfurOmega_C_SettingsApplied) == 0x000100, "Wrong size on Prop_kerfurOmega_C_SettingsApplied");
static_assert(offsetof(Prop_kerfurOmega_C_SettingsApplied, Settings) == 0x000000, "Member 'Prop_kerfurOmega_C_SettingsApplied::Settings' has a wrong offset!");

// Function prop_kerfurOmega.prop_kerfurOmega_C.getActionOptions
// 0x0060 (0x0060 - 0x0000)
struct Prop_kerfurOmega_C_GetActionOptions final
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
static_assert(alignof(Prop_kerfurOmega_C_GetActionOptions) == 0x000008, "Wrong alignment on Prop_kerfurOmega_C_GetActionOptions");
static_assert(sizeof(Prop_kerfurOmega_C_GetActionOptions) == 0x000060, "Wrong size on Prop_kerfurOmega_C_GetActionOptions");
static_assert(offsetof(Prop_kerfurOmega_C_GetActionOptions, Player) == 0x000000, "Member 'Prop_kerfurOmega_C_GetActionOptions::Player' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_GetActionOptions, Component) == 0x000008, "Member 'Prop_kerfurOmega_C_GetActionOptions::Component' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_GetActionOptions, Actor) == 0x000010, "Member 'Prop_kerfurOmega_C_GetActionOptions::Actor' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_GetActionOptions, Options) == 0x000018, "Member 'Prop_kerfurOmega_C_GetActionOptions::Options' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_GetActionOptions, Options_enum) == 0x000028, "Member 'Prop_kerfurOmega_C_GetActionOptions::Options_enum' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_GetActionOptions, OptionsNamesOverlay) == 0x000038, "Member 'Prop_kerfurOmega_C_GetActionOptions::OptionsNamesOverlay' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_GetActionOptions, Number) == 0x000048, "Member 'Prop_kerfurOmega_C_GetActionOptions::Number' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_C_GetActionOptions, K2Node_MakeArray_Array) == 0x000050, "Member 'Prop_kerfurOmega_C_GetActionOptions::K2Node_MakeArray_Array' has a wrong offset!");

}

