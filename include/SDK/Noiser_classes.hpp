#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Noiser

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass noiser.noiser_C
// 0x0070 (0x0530 - 0x04C0)
class ANoiser_C final : public ACharacter
{
public:
	uint8                                         Pad_4B8[0x8];                                      // 0x04B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNavigationInvokerComponent*            NavigationInvoker;                                 // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Step;                                              // 0x04D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LastStep;                                          // 0x04DC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WalkTo;                                            // 0x04E8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F4[0x4];                                      // 0x04F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        WalkPath;                                          // 0x04F8(0x0010)(Edit, BlueprintVisible)
	int32                                         Ind;                                               // 0x0508(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Volume;                                            // 0x050C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                      Att;                                               // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Key;                                               // 0x0518(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Walking;                                           // 0x0528(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Walk;                                              // 0x0529(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_noiser(int32 EntryPoint);
	void Seen();
	void Timer();
	void Despawn();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnSuccess_B0DA3AC64CD2F548A9ECFFB9B8CF0D20(EPathFollowingResult MovementResult);
	void OnFail_B0DA3AC64CD2F548A9ECFFB9B8CF0D20(EPathFollowingResult MovementResult);
	void StepOn();
	void SetPoint();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"noiser_C">();
	}
	static class ANoiser_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANoiser_C>();
	}
};
static_assert(alignof(ANoiser_C) == 0x000010, "Wrong alignment on ANoiser_C");
static_assert(sizeof(ANoiser_C) == 0x000530, "Wrong size on ANoiser_C");
static_assert(offsetof(ANoiser_C, UberGraphFrame) == 0x0004C0, "Member 'ANoiser_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ANoiser_C, StaticMesh) == 0x0004C8, "Member 'ANoiser_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ANoiser_C, NavigationInvoker) == 0x0004D0, "Member 'ANoiser_C::NavigationInvoker' has a wrong offset!");
static_assert(offsetof(ANoiser_C, Step) == 0x0004D8, "Member 'ANoiser_C::Step' has a wrong offset!");
static_assert(offsetof(ANoiser_C, LastStep) == 0x0004DC, "Member 'ANoiser_C::LastStep' has a wrong offset!");
static_assert(offsetof(ANoiser_C, WalkTo) == 0x0004E8, "Member 'ANoiser_C::WalkTo' has a wrong offset!");
static_assert(offsetof(ANoiser_C, WalkPath) == 0x0004F8, "Member 'ANoiser_C::WalkPath' has a wrong offset!");
static_assert(offsetof(ANoiser_C, Ind) == 0x000508, "Member 'ANoiser_C::Ind' has a wrong offset!");
static_assert(offsetof(ANoiser_C, Volume) == 0x00050C, "Member 'ANoiser_C::Volume' has a wrong offset!");
static_assert(offsetof(ANoiser_C, Att) == 0x000510, "Member 'ANoiser_C::Att' has a wrong offset!");
static_assert(offsetof(ANoiser_C, Key) == 0x000518, "Member 'ANoiser_C::Key' has a wrong offset!");
static_assert(offsetof(ANoiser_C, Walking) == 0x000528, "Member 'ANoiser_C::Walking' has a wrong offset!");
static_assert(offsetof(ANoiser_C, Walk) == 0x000529, "Member 'ANoiser_C::Walk' has a wrong offset!");

}

