#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_sponge_p

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function prop_sponge_p.prop_sponge_p_C.ExecuteUbergraph_prop_sponge_p
// 0x02A0 (0x02A0 - 0x0000)
struct Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0010(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x0088(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x0094(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x011D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11E[0x2];                                      // 0x011E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0128(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0134(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0140(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x014C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0184(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0190(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19C[0x4];                                      // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x01A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B4[0x4];                                      // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsProp_Sponge_P;           // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C1[0x7];                                      // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue_1;     // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x01D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_Origin;                // 0x01DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_BoxExtent;             // 0x01E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetComponentBounds_SphereRadius;          // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x01F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0204(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddActorLocalOffset_SweepHitResult;    // 0x0210(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p) == 0x000010, "Wrong alignment on Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p");
static_assert(sizeof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p) == 0x0002A0, "Wrong size on Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, EntryPoint) == 0x000000, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_GetTransform_ReturnValue) == 0x000010, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_BreakTransform_Location) == 0x000040, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_BreakTransform_Rotation) == 0x00004C, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_BreakTransform_Scale) == 0x000058, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000068, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, K2Node_ComponentBoundEvent_HitComponent) == 0x000070, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, K2Node_ComponentBoundEvent_OtherActor) == 0x000078, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, K2Node_ComponentBoundEvent_OtherComp) == 0x000080, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, K2Node_ComponentBoundEvent_NormalImpulse) == 0x000088, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, K2Node_ComponentBoundEvent_Hit) == 0x000094, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_BreakHitResult_bBlockingHit) == 0x00011C, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_BreakHitResult_bInitialOverlap) == 0x00011D, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_BreakHitResult_Time) == 0x000120, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_BreakHitResult_Distance) == 0x000124, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_BreakHitResult_Location) == 0x000128, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_BreakHitResult_ImpactPoint) == 0x000134, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_BreakHitResult_Normal) == 0x000140, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_BreakHitResult_ImpactNormal) == 0x00014C, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_BreakHitResult_PhysMat) == 0x000158, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_BreakHitResult_HitActor) == 0x000160, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_BreakHitResult_HitComponent) == 0x000168, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_BreakHitResult_HitBoneName) == 0x000170, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_BreakHitResult_HitItem) == 0x000178, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_BreakHitResult_ElementIndex) == 0x00017C, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_BreakHitResult_FaceIndex) == 0x000180, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_BreakHitResult_TraceStart) == 0x000184, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_BreakHitResult_TraceEnd) == 0x000190, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_GetObjectClass_ReturnValue) == 0x0001A0, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x0001A8, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, K2Node_ClassDynamicCast_AsProp_Sponge_P) == 0x0001B8, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::K2Node_ClassDynamicCast_AsProp_Sponge_P' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, K2Node_ClassDynamicCast_bSuccess) == 0x0001C0, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_SpawnEmitterAtLocation_ReturnValue_1) == 0x0001C8, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_SpawnEmitterAtLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0001D0, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_GetComponentBounds_Origin) == 0x0001DC, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_GetComponentBounds_Origin' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_GetComponentBounds_BoxExtent) == 0x0001E8, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_GetComponentBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_GetComponentBounds_SphereRadius) == 0x0001F4, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_GetComponentBounds_SphereRadius' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0001F8, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000204, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p, CallFunc_K2_AddActorLocalOffset_SweepHitResult) == 0x000210, "Member 'Prop_sponge_p_C_ExecuteUbergraph_prop_sponge_p::CallFunc_K2_AddActorLocalOffset_SweepHitResult' has a wrong offset!");

// Function prop_sponge_p.prop_sponge_p_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct Prop_sponge_p_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit_0;                                             // 0x0024(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Prop_sponge_p_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on Prop_sponge_p_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(Prop_sponge_p_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x0000B0, "Wrong size on Prop_sponge_p_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(Prop_sponge_p_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'Prop_sponge_p_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Prop_sponge_p_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Prop_sponge_p_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'Prop_sponge_p_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(Prop_sponge_p_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, Hit_0) == 0x000024, "Member 'Prop_sponge_p_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::Hit_0' has a wrong offset!");

}

