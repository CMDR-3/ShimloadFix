#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_explodVehicle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_explodVehicle.prop_explodVehicle_C.ExecuteUbergraph_prop_explodVehicle
// 0x01C0 (0x01C0 - 0x0000)
struct Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_static;                               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_frozen;                               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_active;                               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_damage;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit_1;                                // 0x000C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_actor;                                // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_impact;                               // 0x00A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x00B0(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AExplosion_C*                           CallFunc_FinishSpawningActor_ReturnValue;          // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_MyComp;                               // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_Other;                                // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_OtherComp;                            // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bSelfMoved;                           // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_109[0x3];                                      // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Event_HitLocation;                          // 0x010C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_HitNormal;                            // 0x0118(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_NormalImpulse;                        // 0x0124(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0130(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsSimulatingPhysics_ReturnValue;          // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle) == 0x000010, "Wrong alignment on Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle");
static_assert(sizeof(Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle) == 0x0001C0, "Wrong size on Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle");
static_assert(offsetof(Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle, EntryPoint) == 0x000000, "Member 'Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle, K2Node_Event_static) == 0x000004, "Member 'Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle::K2Node_Event_static' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle, K2Node_Event_frozen) == 0x000005, "Member 'Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle::K2Node_Event_frozen' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle, K2Node_Event_active) == 0x000006, "Member 'Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle::K2Node_Event_active' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle, K2Node_Event_damage) == 0x000008, "Member 'Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle::K2Node_Event_damage' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle, K2Node_Event_hit_1) == 0x00000C, "Member 'Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle::K2Node_Event_hit_1' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle, K2Node_Event_actor) == 0x000098, "Member 'Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle::K2Node_Event_actor' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle, K2Node_Event_impact) == 0x0000A0, "Member 'Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle::K2Node_Event_impact' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle, CallFunc_GetTransform_ReturnValue) == 0x0000B0, "Member 'Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000E0, "Member 'Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000E8, "Member 'Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle, K2Node_Event_MyComp) == 0x0000F0, "Member 'Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle::K2Node_Event_MyComp' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle, K2Node_Event_Other) == 0x0000F8, "Member 'Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle::K2Node_Event_Other' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle, K2Node_Event_OtherComp) == 0x000100, "Member 'Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle::K2Node_Event_OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle, K2Node_Event_bSelfMoved) == 0x000108, "Member 'Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle::K2Node_Event_bSelfMoved' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle, K2Node_Event_HitLocation) == 0x00010C, "Member 'Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle::K2Node_Event_HitLocation' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle, K2Node_Event_HitNormal) == 0x000118, "Member 'Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle::K2Node_Event_HitNormal' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle, K2Node_Event_NormalImpulse) == 0x000124, "Member 'Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle::K2Node_Event_NormalImpulse' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle, K2Node_Event_hit) == 0x000130, "Member 'Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle, CallFunc_IsSimulatingPhysics_ReturnValue) == 0x0001B8, "Member 'Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle::CallFunc_IsSimulatingPhysics_ReturnValue' has a wrong offset!");

// Function prop_explodVehicle.prop_explodVehicle_C.ReceiveHit
// 0x00C8 (0x00C8 - 0x0000)
struct Prop_explodVehicle_C_ReceiveHit final
{
public:
	class UPrimitiveComponent*                    MyComp;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Other;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSelfMoved;                                        // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                HitLocation;                                       // 0x001C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x0028(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0034(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit_0;                                             // 0x0040(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Prop_explodVehicle_C_ReceiveHit) == 0x000008, "Wrong alignment on Prop_explodVehicle_C_ReceiveHit");
static_assert(sizeof(Prop_explodVehicle_C_ReceiveHit) == 0x0000C8, "Wrong size on Prop_explodVehicle_C_ReceiveHit");
static_assert(offsetof(Prop_explodVehicle_C_ReceiveHit, MyComp) == 0x000000, "Member 'Prop_explodVehicle_C_ReceiveHit::MyComp' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ReceiveHit, Other) == 0x000008, "Member 'Prop_explodVehicle_C_ReceiveHit::Other' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ReceiveHit, OtherComp) == 0x000010, "Member 'Prop_explodVehicle_C_ReceiveHit::OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ReceiveHit, bSelfMoved) == 0x000018, "Member 'Prop_explodVehicle_C_ReceiveHit::bSelfMoved' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ReceiveHit, HitLocation) == 0x00001C, "Member 'Prop_explodVehicle_C_ReceiveHit::HitLocation' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ReceiveHit, HitNormal) == 0x000028, "Member 'Prop_explodVehicle_C_ReceiveHit::HitNormal' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ReceiveHit, NormalImpulse) == 0x000034, "Member 'Prop_explodVehicle_C_ReceiveHit::NormalImpulse' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ReceiveHit, Hit_0) == 0x000040, "Member 'Prop_explodVehicle_C_ReceiveHit::Hit_0' has a wrong offset!");

// Function prop_explodVehicle.prop_explodVehicle_C.impactDamageCPP
// 0x00A8 (0x00A8 - 0x0000)
struct Prop_explodVehicle_C_ImpactDamageCPP final
{
public:
	float                                         Damage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit_0;                                             // 0x0004(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Actor;                                             // 0x0090(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Impact;                                            // 0x0098(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_explodVehicle_C_ImpactDamageCPP) == 0x000008, "Wrong alignment on Prop_explodVehicle_C_ImpactDamageCPP");
static_assert(sizeof(Prop_explodVehicle_C_ImpactDamageCPP) == 0x0000A8, "Wrong size on Prop_explodVehicle_C_ImpactDamageCPP");
static_assert(offsetof(Prop_explodVehicle_C_ImpactDamageCPP, Damage) == 0x000000, "Member 'Prop_explodVehicle_C_ImpactDamageCPP::Damage' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ImpactDamageCPP, Hit_0) == 0x000004, "Member 'Prop_explodVehicle_C_ImpactDamageCPP::Hit_0' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ImpactDamageCPP, Actor) == 0x000090, "Member 'Prop_explodVehicle_C_ImpactDamageCPP::Actor' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_ImpactDamageCPP, Impact) == 0x000098, "Member 'Prop_explodVehicle_C_ImpactDamageCPP::Impact' has a wrong offset!");

// Function prop_explodVehicle.prop_explodVehicle_C.setPropProps
// 0x0003 (0x0003 - 0x0000)
struct Prop_explodVehicle_C_SetPropProps final
{
public:
	bool                                          Static_0;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Frozen_0;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Active;                                            // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_explodVehicle_C_SetPropProps) == 0x000001, "Wrong alignment on Prop_explodVehicle_C_SetPropProps");
static_assert(sizeof(Prop_explodVehicle_C_SetPropProps) == 0x000003, "Wrong size on Prop_explodVehicle_C_SetPropProps");
static_assert(offsetof(Prop_explodVehicle_C_SetPropProps, Static_0) == 0x000000, "Member 'Prop_explodVehicle_C_SetPropProps::Static_0' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_SetPropProps, Frozen_0) == 0x000001, "Member 'Prop_explodVehicle_C_SetPropProps::Frozen_0' has a wrong offset!");
static_assert(offsetof(Prop_explodVehicle_C_SetPropProps, Active) == 0x000002, "Member 'Prop_explodVehicle_C_SetPropProps::Active' has a wrong offset!");

}

