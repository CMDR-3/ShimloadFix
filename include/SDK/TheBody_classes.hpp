#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheBody

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass theBody.theBody_C
// 0x0028 (0x0248 - 0x0220)
class ATheBody_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UComp_radarPoint_C*                     Comp_radarPoint;                                   // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_theBody(int32 EntryPoint);
	void BndEvt__theBody_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"theBody_C">();
	}
	static class ATheBody_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATheBody_C>();
	}
};
static_assert(alignof(ATheBody_C) == 0x000008, "Wrong alignment on ATheBody_C");
static_assert(sizeof(ATheBody_C) == 0x000248, "Wrong size on ATheBody_C");
static_assert(offsetof(ATheBody_C, UberGraphFrame) == 0x000220, "Member 'ATheBody_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATheBody_C, Comp_radarPoint) == 0x000228, "Member 'ATheBody_C::Comp_radarPoint' has a wrong offset!");
static_assert(offsetof(ATheBody_C, Sphere) == 0x000230, "Member 'ATheBody_C::Sphere' has a wrong offset!");
static_assert(offsetof(ATheBody_C, StaticMesh) == 0x000238, "Member 'ATheBody_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ATheBody_C, DefaultSceneRoot) == 0x000240, "Member 'ATheBody_C::DefaultSceneRoot' has a wrong offset!");

}

