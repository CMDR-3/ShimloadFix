#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GluePoint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass gluePoint.gluePoint_C
// 0x0050 (0x0270 - 0x0220)
class AGluePoint_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPhysicsConstraintComponent*            PhysicsConstraint;                                 // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Root;                                              // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Glued;                                             // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_241[0x7];                                      // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGluePoint_C*                           GluedTo;                                           // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 GluedA;                                            // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AActor*                                 GluedB;                                            // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    A;                                                 // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    B;                                                 // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_gluePoint(int32 EntryPoint);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Glue(class AGluePoint_C* Point, class AActor* GluedB_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"gluePoint_C">();
	}
	static class AGluePoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGluePoint_C>();
	}
};
static_assert(alignof(AGluePoint_C) == 0x000008, "Wrong alignment on AGluePoint_C");
static_assert(sizeof(AGluePoint_C) == 0x000270, "Wrong size on AGluePoint_C");
static_assert(offsetof(AGluePoint_C, UberGraphFrame) == 0x000220, "Member 'AGluePoint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGluePoint_C, PhysicsConstraint) == 0x000228, "Member 'AGluePoint_C::PhysicsConstraint' has a wrong offset!");
static_assert(offsetof(AGluePoint_C, Sphere) == 0x000230, "Member 'AGluePoint_C::Sphere' has a wrong offset!");
static_assert(offsetof(AGluePoint_C, Root) == 0x000238, "Member 'AGluePoint_C::Root' has a wrong offset!");
static_assert(offsetof(AGluePoint_C, Glued) == 0x000240, "Member 'AGluePoint_C::Glued' has a wrong offset!");
static_assert(offsetof(AGluePoint_C, GluedTo) == 0x000248, "Member 'AGluePoint_C::GluedTo' has a wrong offset!");
static_assert(offsetof(AGluePoint_C, GluedA) == 0x000250, "Member 'AGluePoint_C::GluedA' has a wrong offset!");
static_assert(offsetof(AGluePoint_C, GluedB) == 0x000258, "Member 'AGluePoint_C::GluedB' has a wrong offset!");
static_assert(offsetof(AGluePoint_C, A) == 0x000260, "Member 'AGluePoint_C::A' has a wrong offset!");
static_assert(offsetof(AGluePoint_C, B) == 0x000268, "Member 'AGluePoint_C::B' has a wrong offset!");

}
