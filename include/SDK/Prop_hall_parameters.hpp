#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_hall

#include "Basic.hpp"

#include "Enum_interactionActions_structs.hpp"
#include "Engine_structs.hpp"
#include "Struct_save_structs.hpp"


namespace SDK::Params
{

// Function prop_hall.prop_hall_C.ExecuteUbergraph_prop_hall
// 0x00C8 (0x00C8 - 0x0000)
struct Prop_hall_C_ExecuteUbergraph_prop_hall final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               CallFunc_K2_GetTextureParameterValue_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0030(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       K2Node_Event_action;                               // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_hall_C_ExecuteUbergraph_prop_hall) == 0x000008, "Wrong alignment on Prop_hall_C_ExecuteUbergraph_prop_hall");
static_assert(sizeof(Prop_hall_C_ExecuteUbergraph_prop_hall) == 0x0000C8, "Wrong size on Prop_hall_C_ExecuteUbergraph_prop_hall");
static_assert(offsetof(Prop_hall_C_ExecuteUbergraph_prop_hall, EntryPoint) == 0x000000, "Member 'Prop_hall_C_ExecuteUbergraph_prop_hall::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_hall_C_ExecuteUbergraph_prop_hall, CallFunc_K2_GetTextureParameterValue_ReturnValue) == 0x000008, "Member 'Prop_hall_C_ExecuteUbergraph_prop_hall::CallFunc_K2_GetTextureParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_hall_C_ExecuteUbergraph_prop_hall, CallFunc_GetMaterial_ReturnValue) == 0x000010, "Member 'Prop_hall_C_ExecuteUbergraph_prop_hall::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_hall_C_ExecuteUbergraph_prop_hall, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000018, "Member 'Prop_hall_C_ExecuteUbergraph_prop_hall::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_hall_C_ExecuteUbergraph_prop_hall, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000020, "Member 'Prop_hall_C_ExecuteUbergraph_prop_hall::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_hall_C_ExecuteUbergraph_prop_hall, K2Node_Event_player) == 0x000028, "Member 'Prop_hall_C_ExecuteUbergraph_prop_hall::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_hall_C_ExecuteUbergraph_prop_hall, K2Node_Event_hit) == 0x000030, "Member 'Prop_hall_C_ExecuteUbergraph_prop_hall::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_hall_C_ExecuteUbergraph_prop_hall, K2Node_Event_action) == 0x0000B8, "Member 'Prop_hall_C_ExecuteUbergraph_prop_hall::K2Node_Event_action' has a wrong offset!");
static_assert(offsetof(Prop_hall_C_ExecuteUbergraph_prop_hall, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0000C0, "Member 'Prop_hall_C_ExecuteUbergraph_prop_hall::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");

// Function prop_hall.prop_hall_C.actionOptionIndex
// 0x0098 (0x0098 - 0x0000)
struct Prop_hall_C_ActionOptionIndex final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit_0;                                             // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       Action;                                            // 0x0090(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_hall_C_ActionOptionIndex) == 0x000008, "Wrong alignment on Prop_hall_C_ActionOptionIndex");
static_assert(sizeof(Prop_hall_C_ActionOptionIndex) == 0x000098, "Wrong size on Prop_hall_C_ActionOptionIndex");
static_assert(offsetof(Prop_hall_C_ActionOptionIndex, Player) == 0x000000, "Member 'Prop_hall_C_ActionOptionIndex::Player' has a wrong offset!");
static_assert(offsetof(Prop_hall_C_ActionOptionIndex, Hit_0) == 0x000008, "Member 'Prop_hall_C_ActionOptionIndex::Hit_0' has a wrong offset!");
static_assert(offsetof(Prop_hall_C_ActionOptionIndex, Action) == 0x000090, "Member 'Prop_hall_C_ActionOptionIndex::Action' has a wrong offset!");

// Function prop_hall.prop_hall_C.getData
// 0x00C0 (0x00C0 - 0x0000)
struct Prop_hall_C_GetData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(Parm, OutParm, HasGetValueTypeHash)
};
static_assert(alignof(Prop_hall_C_GetData) == 0x000010, "Wrong alignment on Prop_hall_C_GetData");
static_assert(sizeof(Prop_hall_C_GetData) == 0x0000C0, "Wrong size on Prop_hall_C_GetData");
static_assert(offsetof(Prop_hall_C_GetData, Data) == 0x000000, "Member 'Prop_hall_C_GetData::Data' has a wrong offset!");

// Function prop_hall.prop_hall_C.lookAt
// 0x00E0 (0x00E0 - 0x0000)
struct Prop_hall_C_LookAt final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit_0;                                             // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Return;                                            // 0x0090(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Text;                                              // 0x0098(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    boundObjectReplace;                                // 0x00A8(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Number;                                            // 0x00B0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x00B8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_hall_C_LookAt) == 0x000008, "Wrong alignment on Prop_hall_C_LookAt");
static_assert(sizeof(Prop_hall_C_LookAt) == 0x0000E0, "Wrong size on Prop_hall_C_LookAt");
static_assert(offsetof(Prop_hall_C_LookAt, Player) == 0x000000, "Member 'Prop_hall_C_LookAt::Player' has a wrong offset!");
static_assert(offsetof(Prop_hall_C_LookAt, Hit_0) == 0x000008, "Member 'Prop_hall_C_LookAt::Hit_0' has a wrong offset!");
static_assert(offsetof(Prop_hall_C_LookAt, Return) == 0x000090, "Member 'Prop_hall_C_LookAt::Return' has a wrong offset!");
static_assert(offsetof(Prop_hall_C_LookAt, Text) == 0x000098, "Member 'Prop_hall_C_LookAt::Text' has a wrong offset!");
static_assert(offsetof(Prop_hall_C_LookAt, boundObjectReplace) == 0x0000A8, "Member 'Prop_hall_C_LookAt::boundObjectReplace' has a wrong offset!");
static_assert(offsetof(Prop_hall_C_LookAt, Number) == 0x0000B0, "Member 'Prop_hall_C_LookAt::Number' has a wrong offset!");
static_assert(offsetof(Prop_hall_C_LookAt, CallFunc_MakeLiteralText_ReturnValue) == 0x0000B8, "Member 'Prop_hall_C_LookAt::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_hall_C_LookAt, CallFunc_Conv_TextToString_ReturnValue) == 0x0000D0, "Member 'Prop_hall_C_LookAt::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function prop_hall.prop_hall_C.getActionOptions
// 0x0060 (0x0060 - 0x0000)
struct Prop_hall_C_GetActionOptions final
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
static_assert(alignof(Prop_hall_C_GetActionOptions) == 0x000008, "Wrong alignment on Prop_hall_C_GetActionOptions");
static_assert(sizeof(Prop_hall_C_GetActionOptions) == 0x000060, "Wrong size on Prop_hall_C_GetActionOptions");
static_assert(offsetof(Prop_hall_C_GetActionOptions, Player) == 0x000000, "Member 'Prop_hall_C_GetActionOptions::Player' has a wrong offset!");
static_assert(offsetof(Prop_hall_C_GetActionOptions, Component) == 0x000008, "Member 'Prop_hall_C_GetActionOptions::Component' has a wrong offset!");
static_assert(offsetof(Prop_hall_C_GetActionOptions, Actor) == 0x000010, "Member 'Prop_hall_C_GetActionOptions::Actor' has a wrong offset!");
static_assert(offsetof(Prop_hall_C_GetActionOptions, Options) == 0x000018, "Member 'Prop_hall_C_GetActionOptions::Options' has a wrong offset!");
static_assert(offsetof(Prop_hall_C_GetActionOptions, Options_enum) == 0x000028, "Member 'Prop_hall_C_GetActionOptions::Options_enum' has a wrong offset!");
static_assert(offsetof(Prop_hall_C_GetActionOptions, OptionsNamesOverlay) == 0x000038, "Member 'Prop_hall_C_GetActionOptions::OptionsNamesOverlay' has a wrong offset!");
static_assert(offsetof(Prop_hall_C_GetActionOptions, Number) == 0x000048, "Member 'Prop_hall_C_GetActionOptions::Number' has a wrong offset!");
static_assert(offsetof(Prop_hall_C_GetActionOptions, K2Node_MakeArray_Array) == 0x000050, "Member 'Prop_hall_C_GetActionOptions::K2Node_MakeArray_Array' has a wrong offset!");

// Function prop_hall.prop_hall_C.ignoreSave
// 0x0001 (0x0001 - 0x0000)
struct Prop_hall_C_IgnoreSave final
{
public:
	bool                                          Param_IgnoreSave_0;                                // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_hall_C_IgnoreSave) == 0x000001, "Wrong alignment on Prop_hall_C_IgnoreSave");
static_assert(sizeof(Prop_hall_C_IgnoreSave) == 0x000001, "Wrong size on Prop_hall_C_IgnoreSave");
static_assert(offsetof(Prop_hall_C_IgnoreSave, Param_IgnoreSave_0) == 0x000000, "Member 'Prop_hall_C_IgnoreSave::Param_IgnoreSave_0' has a wrong offset!");

}

