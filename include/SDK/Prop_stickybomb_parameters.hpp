#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_stickybomb

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function prop_stickybomb.prop_stickybomb_C.ExecuteUbergraph_prop_stickybomb
// 0x0150 (0x0150 - 0x0000)
struct Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class AProp_stickybomb_C*               Temp_object_Variable;                              // 0x0028(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x0054(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DD[0x3];                                       // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_DestroyedActor_1;               // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F4[0xC];                                       // 0x00F4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0100(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 K2Node_CustomEvent_DestroyedActor;                 // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AExplosion_C*                           CallFunc_FinishSpawningActor_ReturnValue;          // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb) == 0x000010, "Wrong alignment on Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb");
static_assert(sizeof(Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb) == 0x000150, "Wrong size on Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb");
static_assert(offsetof(Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb, EntryPoint) == 0x000000, "Member 'Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb, Temp_object_Variable) == 0x000028, "Member 'Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb, K2Node_ComponentBoundEvent_HitComponent) == 0x000030, "Member 'Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb, K2Node_ComponentBoundEvent_OtherActor) == 0x000038, "Member 'Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb, K2Node_ComponentBoundEvent_OtherComp) == 0x000040, "Member 'Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb, K2Node_ComponentBoundEvent_NormalImpulse) == 0x000048, "Member 'Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb, K2Node_ComponentBoundEvent_Hit) == 0x000054, "Member 'Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb, CallFunc_K2_AttachToComponent_ReturnValue) == 0x0000DC, "Member 'Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb, K2Node_CustomEvent_DestroyedActor_1) == 0x0000E0, "Member 'Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb::K2Node_CustomEvent_DestroyedActor_1' has a wrong offset!");
static_assert(offsetof(Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000E8, "Member 'Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb, CallFunc_MakeTransform_ReturnValue) == 0x000100, "Member 'Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb, K2Node_CustomEvent_DestroyedActor) == 0x000130, "Member 'Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb::K2Node_CustomEvent_DestroyedActor' has a wrong offset!");
static_assert(offsetof(Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000138, "Member 'Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb, CallFunc_FinishSpawningActor_ReturnValue) == 0x000140, "Member 'Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb, CallFunc_Array_Find_ReturnValue) == 0x000148, "Member 'Prop_stickybomb_C_ExecuteUbergraph_prop_stickybomb::CallFunc_Array_Find_ReturnValue' has a wrong offset!");

// Function prop_stickybomb.prop_stickybomb_C.CustomEvent
// 0x0008 (0x0008 - 0x0000)
struct Prop_stickybomb_C_CustomEvent final
{
public:
	class AActor*                                 DestroyedActor;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_stickybomb_C_CustomEvent) == 0x000008, "Wrong alignment on Prop_stickybomb_C_CustomEvent");
static_assert(sizeof(Prop_stickybomb_C_CustomEvent) == 0x000008, "Wrong size on Prop_stickybomb_C_CustomEvent");
static_assert(offsetof(Prop_stickybomb_C_CustomEvent, DestroyedActor) == 0x000000, "Member 'Prop_stickybomb_C_CustomEvent::DestroyedActor' has a wrong offset!");

// Function prop_stickybomb.prop_stickybomb_C.Dest
// 0x0008 (0x0008 - 0x0000)
struct Prop_stickybomb_C_Dest final
{
public:
	class AActor*                                 DestroyedActor;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_stickybomb_C_Dest) == 0x000008, "Wrong alignment on Prop_stickybomb_C_Dest");
static_assert(sizeof(Prop_stickybomb_C_Dest) == 0x000008, "Wrong size on Prop_stickybomb_C_Dest");
static_assert(offsetof(Prop_stickybomb_C_Dest, DestroyedActor) == 0x000000, "Member 'Prop_stickybomb_C_Dest::DestroyedActor' has a wrong offset!");

// Function prop_stickybomb.prop_stickybomb_C.BndEvt__prop_stickybomb_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct Prop_stickybomb_C_BndEvt__prop_stickybomb_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit_0;                                             // 0x0024(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Prop_stickybomb_C_BndEvt__prop_stickybomb_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on Prop_stickybomb_C_BndEvt__prop_stickybomb_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(Prop_stickybomb_C_BndEvt__prop_stickybomb_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x0000B0, "Wrong size on Prop_stickybomb_C_BndEvt__prop_stickybomb_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(Prop_stickybomb_C_BndEvt__prop_stickybomb_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'Prop_stickybomb_C_BndEvt__prop_stickybomb_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_stickybomb_C_BndEvt__prop_stickybomb_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Prop_stickybomb_C_BndEvt__prop_stickybomb_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Prop_stickybomb_C_BndEvt__prop_stickybomb_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Prop_stickybomb_C_BndEvt__prop_stickybomb_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_stickybomb_C_BndEvt__prop_stickybomb_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'Prop_stickybomb_C_BndEvt__prop_stickybomb_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(Prop_stickybomb_C_BndEvt__prop_stickybomb_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, Hit_0) == 0x000024, "Member 'Prop_stickybomb_C_BndEvt__prop_stickybomb_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::Hit_0' has a wrong offset!");

}
