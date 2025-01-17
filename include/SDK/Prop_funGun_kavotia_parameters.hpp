#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_funGun_kavotia

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_funGun_kavotia.prop_funGun_kavotia_C.fireBulletPrimary
// 0x01C0 (0x01C0 - 0x0000)
struct Prop_funGun_kavotia_C_FireBulletPrimary final
{
public:
	TArray<EObjectTypeQuery>                      CallFunc_obj_static_obj;                           // 0x0000(0x0010)(ReferenceParm)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0010(0x0010)(ConstParm, ReferenceParm)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_arm_start;                                // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_arm_end;                                  // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_arm_rotation;                             // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;         // 0x004C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D5[0x3];                                       // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x00E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E6[0x2];                                       // 0x00E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x00F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x00FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0108(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0114(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x014C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0158(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0164(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_SelectVector_ReturnValue;                 // 0x0170(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_17C[0x4];                                      // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0180(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKavotiaShot_C*                         CallFunc_FinishSpawningActor_ReturnValue;          // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_funGun_kavotia_C_FireBulletPrimary) == 0x000010, "Wrong alignment on Prop_funGun_kavotia_C_FireBulletPrimary");
static_assert(sizeof(Prop_funGun_kavotia_C_FireBulletPrimary) == 0x0001C0, "Wrong size on Prop_funGun_kavotia_C_FireBulletPrimary");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_obj_static_obj) == 0x000000, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_obj_static_obj' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, Temp_object_Variable) == 0x000010, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000020, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_arm_start) == 0x000028, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_arm_start' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_arm_end) == 0x000034, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_arm_end' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_arm_rotation) == 0x000040, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_arm_rotation' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_LineTraceSingleForObjects_OutHit) == 0x00004C, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x0000D4, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_GetForwardVector_ReturnValue) == 0x0000D8, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_BreakHitResult_bBlockingHit) == 0x0000E4, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_BreakHitResult_bInitialOverlap) == 0x0000E5, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_BreakHitResult_Time) == 0x0000E8, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_BreakHitResult_Distance) == 0x0000EC, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_BreakHitResult_Location) == 0x0000F0, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_BreakHitResult_ImpactPoint) == 0x0000FC, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_BreakHitResult_Normal) == 0x000108, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_BreakHitResult_ImpactNormal) == 0x000114, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_BreakHitResult_PhysMat) == 0x000120, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_BreakHitResult_HitActor) == 0x000128, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_BreakHitResult_HitComponent) == 0x000130, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_BreakHitResult_HitBoneName) == 0x000138, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_BreakHitResult_HitItem) == 0x000140, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_BreakHitResult_ElementIndex) == 0x000144, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_BreakHitResult_FaceIndex) == 0x000148, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_BreakHitResult_TraceStart) == 0x00014C, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_BreakHitResult_TraceEnd) == 0x000158, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000164, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_SelectVector_ReturnValue) == 0x000170, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_MakeTransform_ReturnValue) == 0x000180, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0001B0, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_funGun_kavotia_C_FireBulletPrimary, CallFunc_FinishSpawningActor_ReturnValue) == 0x0001B8, "Member 'Prop_funGun_kavotia_C_FireBulletPrimary::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}

