#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_nailgun

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_nailgun.prop_nailgun_C.ExecuteUbergraph_prop_nailgun
// 0x00D0 (0x00D0 - 0x0000)
struct Prop_nailgun_C_ExecuteUbergraph_prop_nailgun final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_tryGetNail_success;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_tryGetNail_nailClass;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0090(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANailProjectile_C*                      CallFunc_FinishSpawningActor_ReturnValue;          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_nailgun_C_ExecuteUbergraph_prop_nailgun) == 0x000010, "Wrong alignment on Prop_nailgun_C_ExecuteUbergraph_prop_nailgun");
static_assert(sizeof(Prop_nailgun_C_ExecuteUbergraph_prop_nailgun) == 0x0000D0, "Wrong size on Prop_nailgun_C_ExecuteUbergraph_prop_nailgun");
static_assert(offsetof(Prop_nailgun_C_ExecuteUbergraph_prop_nailgun, EntryPoint) == 0x000000, "Member 'Prop_nailgun_C_ExecuteUbergraph_prop_nailgun::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_nailgun_C_ExecuteUbergraph_prop_nailgun, K2Node_Event_player) == 0x000008, "Member 'Prop_nailgun_C_ExecuteUbergraph_prop_nailgun::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_nailgun_C_ExecuteUbergraph_prop_nailgun, CallFunc_tryGetNail_success) == 0x000010, "Member 'Prop_nailgun_C_ExecuteUbergraph_prop_nailgun::CallFunc_tryGetNail_success' has a wrong offset!");
static_assert(offsetof(Prop_nailgun_C_ExecuteUbergraph_prop_nailgun, CallFunc_tryGetNail_nailClass) == 0x000018, "Member 'Prop_nailgun_C_ExecuteUbergraph_prop_nailgun::CallFunc_tryGetNail_nailClass' has a wrong offset!");
static_assert(offsetof(Prop_nailgun_C_ExecuteUbergraph_prop_nailgun, CallFunc_GetForwardVector_ReturnValue) == 0x000020, "Member 'Prop_nailgun_C_ExecuteUbergraph_prop_nailgun::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_nailgun_C_ExecuteUbergraph_prop_nailgun, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000030, "Member 'Prop_nailgun_C_ExecuteUbergraph_prop_nailgun::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_nailgun_C_ExecuteUbergraph_prop_nailgun, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000060, "Member 'Prop_nailgun_C_ExecuteUbergraph_prop_nailgun::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_nailgun_C_ExecuteUbergraph_prop_nailgun, CallFunc_BreakTransform_Location) == 0x00006C, "Member 'Prop_nailgun_C_ExecuteUbergraph_prop_nailgun::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(Prop_nailgun_C_ExecuteUbergraph_prop_nailgun, CallFunc_BreakTransform_Rotation) == 0x000078, "Member 'Prop_nailgun_C_ExecuteUbergraph_prop_nailgun::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(Prop_nailgun_C_ExecuteUbergraph_prop_nailgun, CallFunc_BreakTransform_Scale) == 0x000084, "Member 'Prop_nailgun_C_ExecuteUbergraph_prop_nailgun::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(Prop_nailgun_C_ExecuteUbergraph_prop_nailgun, CallFunc_MakeTransform_ReturnValue) == 0x000090, "Member 'Prop_nailgun_C_ExecuteUbergraph_prop_nailgun::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_nailgun_C_ExecuteUbergraph_prop_nailgun, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000C0, "Member 'Prop_nailgun_C_ExecuteUbergraph_prop_nailgun::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_nailgun_C_ExecuteUbergraph_prop_nailgun, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000C8, "Member 'Prop_nailgun_C_ExecuteUbergraph_prop_nailgun::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function prop_nailgun.prop_nailgun_C.playerHandUse_RMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_nailgun_C_PlayerHandUse_RMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_nailgun_C_PlayerHandUse_RMB) == 0x000008, "Wrong alignment on Prop_nailgun_C_PlayerHandUse_RMB");
static_assert(sizeof(Prop_nailgun_C_PlayerHandUse_RMB) == 0x000008, "Wrong size on Prop_nailgun_C_PlayerHandUse_RMB");
static_assert(offsetof(Prop_nailgun_C_PlayerHandUse_RMB, Player) == 0x000000, "Member 'Prop_nailgun_C_PlayerHandUse_RMB::Player' has a wrong offset!");

}
