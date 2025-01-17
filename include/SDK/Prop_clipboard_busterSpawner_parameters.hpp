#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_clipboard_busterSpawner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_clipboard_busterSpawner.prop_clipboard_busterSpawner_C.ExecuteUbergraph_prop_clipboard_busterSpawner
// 0x0130 (0x0130 - 0x0000)
struct Prop_clipboard_busterSpawner_C_ExecuteUbergraph_prop_clipboard_busterSpawner final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0048(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       K2Node_Event_action;                               // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x00E0(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AArirSlapper_C*                         CallFunc_FinishSpawningActor_ReturnValue;          // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_clipboard_C*                      CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_clipboard_busterSpawner_C_ExecuteUbergraph_prop_clipboard_busterSpawner) == 0x000010, "Wrong alignment on Prop_clipboard_busterSpawner_C_ExecuteUbergraph_prop_clipboard_busterSpawner");
static_assert(sizeof(Prop_clipboard_busterSpawner_C_ExecuteUbergraph_prop_clipboard_busterSpawner) == 0x000130, "Wrong size on Prop_clipboard_busterSpawner_C_ExecuteUbergraph_prop_clipboard_busterSpawner");
static_assert(offsetof(Prop_clipboard_busterSpawner_C_ExecuteUbergraph_prop_clipboard_busterSpawner, EntryPoint) == 0x000000, "Member 'Prop_clipboard_busterSpawner_C_ExecuteUbergraph_prop_clipboard_busterSpawner::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_clipboard_busterSpawner_C_ExecuteUbergraph_prop_clipboard_busterSpawner, CallFunc_MakeTransform_ReturnValue) == 0x000010, "Member 'Prop_clipboard_busterSpawner_C_ExecuteUbergraph_prop_clipboard_busterSpawner::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_clipboard_busterSpawner_C_ExecuteUbergraph_prop_clipboard_busterSpawner, K2Node_Event_player) == 0x000040, "Member 'Prop_clipboard_busterSpawner_C_ExecuteUbergraph_prop_clipboard_busterSpawner::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_clipboard_busterSpawner_C_ExecuteUbergraph_prop_clipboard_busterSpawner, K2Node_Event_hit) == 0x000048, "Member 'Prop_clipboard_busterSpawner_C_ExecuteUbergraph_prop_clipboard_busterSpawner::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_clipboard_busterSpawner_C_ExecuteUbergraph_prop_clipboard_busterSpawner, K2Node_Event_action) == 0x0000D0, "Member 'Prop_clipboard_busterSpawner_C_ExecuteUbergraph_prop_clipboard_busterSpawner::K2Node_Event_action' has a wrong offset!");
static_assert(offsetof(Prop_clipboard_busterSpawner_C_ExecuteUbergraph_prop_clipboard_busterSpawner, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000D8, "Member 'Prop_clipboard_busterSpawner_C_ExecuteUbergraph_prop_clipboard_busterSpawner::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_clipboard_busterSpawner_C_ExecuteUbergraph_prop_clipboard_busterSpawner, CallFunc_GetTransform_ReturnValue) == 0x0000E0, "Member 'Prop_clipboard_busterSpawner_C_ExecuteUbergraph_prop_clipboard_busterSpawner::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_clipboard_busterSpawner_C_ExecuteUbergraph_prop_clipboard_busterSpawner, CallFunc_FinishSpawningActor_ReturnValue) == 0x000110, "Member 'Prop_clipboard_busterSpawner_C_ExecuteUbergraph_prop_clipboard_busterSpawner::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_clipboard_busterSpawner_C_ExecuteUbergraph_prop_clipboard_busterSpawner, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x000118, "Member 'Prop_clipboard_busterSpawner_C_ExecuteUbergraph_prop_clipboard_busterSpawner::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_clipboard_busterSpawner_C_ExecuteUbergraph_prop_clipboard_busterSpawner, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x000120, "Member 'Prop_clipboard_busterSpawner_C_ExecuteUbergraph_prop_clipboard_busterSpawner::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");

// Function prop_clipboard_busterSpawner.prop_clipboard_busterSpawner_C.actionOptionIndex
// 0x0098 (0x0098 - 0x0000)
struct Prop_clipboard_busterSpawner_C_ActionOptionIndex final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit_0;                                             // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       Action;                                            // 0x0090(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_clipboard_busterSpawner_C_ActionOptionIndex) == 0x000008, "Wrong alignment on Prop_clipboard_busterSpawner_C_ActionOptionIndex");
static_assert(sizeof(Prop_clipboard_busterSpawner_C_ActionOptionIndex) == 0x000098, "Wrong size on Prop_clipboard_busterSpawner_C_ActionOptionIndex");
static_assert(offsetof(Prop_clipboard_busterSpawner_C_ActionOptionIndex, Player) == 0x000000, "Member 'Prop_clipboard_busterSpawner_C_ActionOptionIndex::Player' has a wrong offset!");
static_assert(offsetof(Prop_clipboard_busterSpawner_C_ActionOptionIndex, Hit_0) == 0x000008, "Member 'Prop_clipboard_busterSpawner_C_ActionOptionIndex::Hit_0' has a wrong offset!");
static_assert(offsetof(Prop_clipboard_busterSpawner_C_ActionOptionIndex, Action) == 0x000090, "Member 'Prop_clipboard_busterSpawner_C_ActionOptionIndex::Action' has a wrong offset!");

}

