#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewBlueprint5_0

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass NewBlueprint5.NewBlueprint5_C
// 0x0040 (0x0260 - 0x0220)
class NewBlueprint5_0::ANewBlueprint5_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                  PostProcess;                                       // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Loop;                                              // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          NewVar_0;                                          // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_241[0x3];                                      // 0x0241(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NewVar_1;                                          // 0x0244(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              NewVar_2;                                          // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewVar_3;                                          // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_251[0x3];                                      // 0x0251(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NewVar_4;                                          // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               NewVar_5;                                          // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_NewBlueprint5(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlueprintGeneratedClass NewBlueprint5.NewBlueprint5_C", true, "NewBlueprint5_C">();
	}
	static class NewBlueprint5_0::ANewBlueprint5_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<NewBlueprint5_0::ANewBlueprint5_C>();
	}
};
static_assert(alignof(NewBlueprint5_0::ANewBlueprint5_C) == 0x000008, "Wrong alignment on NewBlueprint5_0::ANewBlueprint5_C");
static_assert(sizeof(NewBlueprint5_0::ANewBlueprint5_C) == 0x000260, "Wrong size on NewBlueprint5_0::ANewBlueprint5_C");
static_assert(offsetof(NewBlueprint5_0::ANewBlueprint5_C, UberGraphFrame) == 0x000220, "Member 'NewBlueprint5_0::ANewBlueprint5_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_0::ANewBlueprint5_C, PostProcess) == 0x000228, "Member 'NewBlueprint5_0::ANewBlueprint5_C::PostProcess' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_0::ANewBlueprint5_C, Loop) == 0x000230, "Member 'NewBlueprint5_0::ANewBlueprint5_C::Loop' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_0::ANewBlueprint5_C, SkeletalMesh) == 0x000238, "Member 'NewBlueprint5_0::ANewBlueprint5_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_0::ANewBlueprint5_C, NewVar_0) == 0x000240, "Member 'NewBlueprint5_0::ANewBlueprint5_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_0::ANewBlueprint5_C, NewVar_1) == 0x000244, "Member 'NewBlueprint5_0::ANewBlueprint5_C::NewVar_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_0::ANewBlueprint5_C, NewVar_2) == 0x000248, "Member 'NewBlueprint5_0::ANewBlueprint5_C::NewVar_2' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_0::ANewBlueprint5_C, NewVar_3) == 0x000250, "Member 'NewBlueprint5_0::ANewBlueprint5_C::NewVar_3' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_0::ANewBlueprint5_C, NewVar_4) == 0x000254, "Member 'NewBlueprint5_0::ANewBlueprint5_C::NewVar_4' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_0::ANewBlueprint5_C, NewVar_5) == 0x000258, "Member 'NewBlueprint5_0::ANewBlueprint5_C::NewVar_5' has a wrong offset!");

}

