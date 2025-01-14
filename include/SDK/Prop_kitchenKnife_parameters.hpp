#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_kitchenKnife

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_kitchenKnife.prop_kitchenKnife_C.ExecuteUbergraph_prop_kitchenKnife
// 0x00B8 (0x00B8 - 0x0000)
struct Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player_1;                             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInt_objects_C>        K2Node_DynamicCast_AsInt_Objects;                  // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife) == 0x000008, "Wrong alignment on Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife");
static_assert(sizeof(Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife) == 0x0000B8, "Wrong size on Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife");
static_assert(offsetof(Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife, EntryPoint) == 0x000000, "Member 'Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife, K2Node_Event_player) == 0x000008, "Member 'Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife, K2Node_Event_player_1) == 0x000010, "Member 'Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife::K2Node_Event_player_1' has a wrong offset!");
static_assert(offsetof(Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife, CallFunc_BreakHitResult_bBlockingHit) == 0x000018, "Member 'Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife, CallFunc_BreakHitResult_bInitialOverlap) == 0x000019, "Member 'Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife, CallFunc_BreakHitResult_Time) == 0x00001C, "Member 'Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife, CallFunc_BreakHitResult_Distance) == 0x000020, "Member 'Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife, CallFunc_BreakHitResult_Location) == 0x000024, "Member 'Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife, CallFunc_BreakHitResult_ImpactPoint) == 0x000030, "Member 'Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife, CallFunc_BreakHitResult_Normal) == 0x00003C, "Member 'Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife, CallFunc_BreakHitResult_ImpactNormal) == 0x000048, "Member 'Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife, CallFunc_BreakHitResult_PhysMat) == 0x000058, "Member 'Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife, CallFunc_BreakHitResult_HitActor) == 0x000060, "Member 'Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife, CallFunc_BreakHitResult_HitComponent) == 0x000068, "Member 'Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife, CallFunc_BreakHitResult_HitBoneName) == 0x000070, "Member 'Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife, CallFunc_BreakHitResult_HitItem) == 0x000078, "Member 'Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife, CallFunc_BreakHitResult_ElementIndex) == 0x00007C, "Member 'Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife, CallFunc_BreakHitResult_FaceIndex) == 0x000080, "Member 'Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife, CallFunc_BreakHitResult_TraceStart) == 0x000084, "Member 'Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife, CallFunc_BreakHitResult_TraceEnd) == 0x000090, "Member 'Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife, K2Node_DynamicCast_AsInt_Objects) == 0x0000A0, "Member 'Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife::K2Node_DynamicCast_AsInt_Objects' has a wrong offset!");
static_assert(offsetof(Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife, K2Node_DynamicCast_bSuccess) == 0x0000B0, "Member 'Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function prop_kitchenKnife.prop_kitchenKnife_C.playerHandUse_LMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_kitchenKnife_C_PlayerHandUse_LMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_kitchenKnife_C_PlayerHandUse_LMB) == 0x000008, "Wrong alignment on Prop_kitchenKnife_C_PlayerHandUse_LMB");
static_assert(sizeof(Prop_kitchenKnife_C_PlayerHandUse_LMB) == 0x000008, "Wrong size on Prop_kitchenKnife_C_PlayerHandUse_LMB");
static_assert(offsetof(Prop_kitchenKnife_C_PlayerHandUse_LMB, Player) == 0x000000, "Member 'Prop_kitchenKnife_C_PlayerHandUse_LMB::Player' has a wrong offset!");

// Function prop_kitchenKnife.prop_kitchenKnife_C.playerHandUse_RMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_kitchenKnife_C_PlayerHandUse_RMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_kitchenKnife_C_PlayerHandUse_RMB) == 0x000008, "Wrong alignment on Prop_kitchenKnife_C_PlayerHandUse_RMB");
static_assert(sizeof(Prop_kitchenKnife_C_PlayerHandUse_RMB) == 0x000008, "Wrong size on Prop_kitchenKnife_C_PlayerHandUse_RMB");
static_assert(offsetof(Prop_kitchenKnife_C_PlayerHandUse_RMB, Player) == 0x000000, "Member 'Prop_kitchenKnife_C_PlayerHandUse_RMB::Player' has a wrong offset!");

}

