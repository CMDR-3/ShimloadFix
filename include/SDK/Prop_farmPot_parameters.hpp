#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_farmPot

#include "Basic.hpp"

#include "Struct_farmPlant_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_farmPot.prop_farmPot_C.ExecuteUbergraph_prop_farmPot
// 0x0180 (0x0180 - 0x0000)
struct Prop_farmPot_C_ExecuteUbergraph_prop_farmPot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0010(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_98[0x8];                                       // 0x0098(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x00A0(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_safeAsProp_isValid;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_C*                                CallFunc_safeAsProp_prop;                          // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_farmPlant                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x00E0(0x0080)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGrowingPlant_C*                        CallFunc_FinishSpawningActor_ReturnValue;          // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_farmPot_C_ExecuteUbergraph_prop_farmPot) == 0x000010, "Wrong alignment on Prop_farmPot_C_ExecuteUbergraph_prop_farmPot");
static_assert(sizeof(Prop_farmPot_C_ExecuteUbergraph_prop_farmPot) == 0x000180, "Wrong size on Prop_farmPot_C_ExecuteUbergraph_prop_farmPot");
static_assert(offsetof(Prop_farmPot_C_ExecuteUbergraph_prop_farmPot, EntryPoint) == 0x000000, "Member 'Prop_farmPot_C_ExecuteUbergraph_prop_farmPot::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_farmPot_C_ExecuteUbergraph_prop_farmPot, K2Node_Event_player) == 0x000008, "Member 'Prop_farmPot_C_ExecuteUbergraph_prop_farmPot::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_farmPot_C_ExecuteUbergraph_prop_farmPot, K2Node_Event_hit) == 0x000010, "Member 'Prop_farmPot_C_ExecuteUbergraph_prop_farmPot::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_farmPot_C_ExecuteUbergraph_prop_farmPot, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x0000A0, "Member 'Prop_farmPot_C_ExecuteUbergraph_prop_farmPot::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_farmPot_C_ExecuteUbergraph_prop_farmPot, CallFunc_safeAsProp_isValid) == 0x0000D0, "Member 'Prop_farmPot_C_ExecuteUbergraph_prop_farmPot::CallFunc_safeAsProp_isValid' has a wrong offset!");
static_assert(offsetof(Prop_farmPot_C_ExecuteUbergraph_prop_farmPot, CallFunc_safeAsProp_prop) == 0x0000D8, "Member 'Prop_farmPot_C_ExecuteUbergraph_prop_farmPot::CallFunc_safeAsProp_prop' has a wrong offset!");
static_assert(offsetof(Prop_farmPot_C_ExecuteUbergraph_prop_farmPot, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000E0, "Member 'Prop_farmPot_C_ExecuteUbergraph_prop_farmPot::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(Prop_farmPot_C_ExecuteUbergraph_prop_farmPot, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000160, "Member 'Prop_farmPot_C_ExecuteUbergraph_prop_farmPot::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_farmPot_C_ExecuteUbergraph_prop_farmPot, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000168, "Member 'Prop_farmPot_C_ExecuteUbergraph_prop_farmPot::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_farmPot_C_ExecuteUbergraph_prop_farmPot, CallFunc_FinishSpawningActor_ReturnValue) == 0x000170, "Member 'Prop_farmPot_C_ExecuteUbergraph_prop_farmPot::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_farmPot_C_ExecuteUbergraph_prop_farmPot, CallFunc_IsValid_ReturnValue) == 0x000178, "Member 'Prop_farmPot_C_ExecuteUbergraph_prop_farmPot::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function prop_farmPot.prop_farmPot_C.playerUsedOn
// 0x0090 (0x0090 - 0x0000)
struct Prop_farmPot_C_PlayerUsedOn final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit_0;                                             // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Prop_farmPot_C_PlayerUsedOn) == 0x000008, "Wrong alignment on Prop_farmPot_C_PlayerUsedOn");
static_assert(sizeof(Prop_farmPot_C_PlayerUsedOn) == 0x000090, "Wrong size on Prop_farmPot_C_PlayerUsedOn");
static_assert(offsetof(Prop_farmPot_C_PlayerUsedOn, Player) == 0x000000, "Member 'Prop_farmPot_C_PlayerUsedOn::Player' has a wrong offset!");
static_assert(offsetof(Prop_farmPot_C_PlayerUsedOn, Hit_0) == 0x000008, "Member 'Prop_farmPot_C_PlayerUsedOn::Hit_0' has a wrong offset!");

}

