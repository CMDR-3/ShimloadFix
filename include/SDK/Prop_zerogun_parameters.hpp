#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_zerogun

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function prop_zerogun.prop_zerogun_C.ExecuteUbergraph_prop_zerogun
// 0x01C0 (0x01C0 - 0x0000)
struct Prop_zerogun_C_ExecuteUbergraph_prop_zerogun final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable;                              // 0x0010(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      CallFunc_obj_statDynPhys_obj;                      // 0x0048(0x0010)(ReferenceParm)
	struct FVector                                CallFunc_arm_start;                                // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_arm_end;                                  // 0x0064(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_arm_rotation;                             // 0x0070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0080(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;         // 0x0090(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11B[0x1];                                      // 0x011B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0124(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0130(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x013C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0148(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_154[0x4];                                      // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0184(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0190(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSimulatingPhysics_ReturnValue;          // 0x019D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19E[0x2];                                      // 0x019E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UComp_zerog_C*                          CallFunc_GetComponentByClass_ReturnValue;          // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UComp_zerog_C*                          CallFunc_AddComponent_ReturnValue;                 // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun) == 0x000010, "Wrong alignment on Prop_zerogun_C_ExecuteUbergraph_prop_zerogun");
static_assert(sizeof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun) == 0x0001C0, "Wrong size on Prop_zerogun_C_ExecuteUbergraph_prop_zerogun");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, EntryPoint) == 0x000000, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, Temp_struct_Variable) == 0x000010, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, K2Node_Event_player) == 0x000040, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_obj_statDynPhys_obj) == 0x000048, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_obj_statDynPhys_obj' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_arm_start) == 0x000058, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_arm_start' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_arm_end) == 0x000064, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_arm_end' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_arm_rotation) == 0x000070, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_arm_rotation' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, Temp_object_Variable) == 0x000080, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_LineTraceSingleForObjects_OutHit) == 0x000090, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x000118, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_BreakHitResult_bBlockingHit) == 0x000119, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_BreakHitResult_bInitialOverlap) == 0x00011A, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_BreakHitResult_Time) == 0x00011C, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_BreakHitResult_Distance) == 0x000120, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_BreakHitResult_Location) == 0x000124, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_BreakHitResult_ImpactPoint) == 0x000130, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_BreakHitResult_Normal) == 0x00013C, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_BreakHitResult_ImpactNormal) == 0x000148, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_BreakHitResult_PhysMat) == 0x000158, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_BreakHitResult_HitActor) == 0x000160, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_BreakHitResult_HitComponent) == 0x000168, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_BreakHitResult_HitBoneName) == 0x000170, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_BreakHitResult_HitItem) == 0x000178, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_BreakHitResult_ElementIndex) == 0x00017C, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_BreakHitResult_FaceIndex) == 0x000180, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_BreakHitResult_TraceStart) == 0x000184, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_BreakHitResult_TraceEnd) == 0x000190, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_IsValid_ReturnValue) == 0x00019C, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_IsSimulatingPhysics_ReturnValue) == 0x00019D, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_IsSimulatingPhysics_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_GetComponentByClass_ReturnValue) == 0x0001A0, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_AddComponent_ReturnValue) == 0x0001A8, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_zerogun_C_ExecuteUbergraph_prop_zerogun, CallFunc_IsValid_ReturnValue_1) == 0x0001B0, "Member 'Prop_zerogun_C_ExecuteUbergraph_prop_zerogun::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function prop_zerogun.prop_zerogun_C.playerHandUse_LMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_zerogun_C_PlayerHandUse_LMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_zerogun_C_PlayerHandUse_LMB) == 0x000008, "Wrong alignment on Prop_zerogun_C_PlayerHandUse_LMB");
static_assert(sizeof(Prop_zerogun_C_PlayerHandUse_LMB) == 0x000008, "Wrong size on Prop_zerogun_C_PlayerHandUse_LMB");
static_assert(offsetof(Prop_zerogun_C_PlayerHandUse_LMB, Player) == 0x000000, "Member 'Prop_zerogun_C_PlayerHandUse_LMB::Player' has a wrong offset!");

}
