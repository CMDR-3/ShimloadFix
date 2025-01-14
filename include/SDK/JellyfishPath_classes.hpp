#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JellyfishPath

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass jellyfishPath.jellyfishPath_C
// 0x0068 (0x0288 - 0x0220)
class AJellyfishPath_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Target;                                            // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Root;                                              // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Loc;                                               // 0x0248(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Lastloc;                                           // 0x0254(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        Locs;                                              // 0x0260(0x0010)(Edit, BlueprintVisible)
	TArray<class AJellyfish_C*>                   Fishes;                                            // 0x0270(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          IsActive;                                          // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_jellyfishPath(int32 EntryPoint);
	void Spawn();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"jellyfishPath_C">();
	}
	static class AJellyfishPath_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AJellyfishPath_C>();
	}
};
static_assert(alignof(AJellyfishPath_C) == 0x000008, "Wrong alignment on AJellyfishPath_C");
static_assert(sizeof(AJellyfishPath_C) == 0x000288, "Wrong size on AJellyfishPath_C");
static_assert(offsetof(AJellyfishPath_C, UberGraphFrame) == 0x000220, "Member 'AJellyfishPath_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AJellyfishPath_C, Target) == 0x000228, "Member 'AJellyfishPath_C::Target' has a wrong offset!");
static_assert(offsetof(AJellyfishPath_C, Root) == 0x000230, "Member 'AJellyfishPath_C::Root' has a wrong offset!");
static_assert(offsetof(AJellyfishPath_C, Spline) == 0x000238, "Member 'AJellyfishPath_C::Spline' has a wrong offset!");
static_assert(offsetof(AJellyfishPath_C, DefaultSceneRoot) == 0x000240, "Member 'AJellyfishPath_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AJellyfishPath_C, Loc) == 0x000248, "Member 'AJellyfishPath_C::Loc' has a wrong offset!");
static_assert(offsetof(AJellyfishPath_C, Lastloc) == 0x000254, "Member 'AJellyfishPath_C::Lastloc' has a wrong offset!");
static_assert(offsetof(AJellyfishPath_C, Locs) == 0x000260, "Member 'AJellyfishPath_C::Locs' has a wrong offset!");
static_assert(offsetof(AJellyfishPath_C, Fishes) == 0x000270, "Member 'AJellyfishPath_C::Fishes' has a wrong offset!");
static_assert(offsetof(AJellyfishPath_C, IsActive) == 0x000280, "Member 'AJellyfishPath_C::IsActive' has a wrong offset!");

}

