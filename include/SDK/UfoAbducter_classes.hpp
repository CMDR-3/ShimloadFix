#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UfoAbducter

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ufoAbducter.ufoAbducter_C
// 0x00C8 (0x02E8 - 0x0220)
class AUfoAbducter_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   VolumeBeam;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Eff_ufobeam;                                       // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    AbductLoc;                                         // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 GrayUfoSk;                                         // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Timeline_0_vec_80F53A1D417FAF54F08F71A22B6CBF78;   // 0x0270(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_abduct_80F53A1D417FAF54F08F71A22B6CBF78; // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_blinkWeight_80F53A1D417FAF54F08F71A22B6CBF78; // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_80F53A1D417FAF54F08F71A22B6CBF78; // 0x0284(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_285[0x3];                                      // 0x0285(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      O;                                                 // 0x0290(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          FlyAway;                                           // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A1[0x3];                                      // 0x02A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Init;                                              // 0x02A4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Fly;                                               // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B1[0x3];                                      // 0x02B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Weight;                                            // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        GameMode;                                          // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Abduct;                                            // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                Loc_A;                                             // 0x02C8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Abducting;                                         // 0x02D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D5[0x3];                                      // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Height;                                            // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                Add;                                               // 0x02DC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ufoAbducter(int32 EntryPoint);
	void KillKerfur();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ForceDeploy();
	void Timeline_0__abducted__EventFunc();
	void Timeline_0__startAbduct__EventFunc();
	void Timeline_0__preAbduct__EventFunc();
	void Timeline_0__afterAbduct__EventFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Activated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ufoAbducter_C">();
	}
	static class AUfoAbducter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AUfoAbducter_C>();
	}
};
static_assert(alignof(AUfoAbducter_C) == 0x000008, "Wrong alignment on AUfoAbducter_C");
static_assert(sizeof(AUfoAbducter_C) == 0x0002E8, "Wrong size on AUfoAbducter_C");
static_assert(offsetof(AUfoAbducter_C, UberGraphFrame) == 0x000220, "Member 'AUfoAbducter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AUfoAbducter_C, VolumeBeam) == 0x000228, "Member 'AUfoAbducter_C::VolumeBeam' has a wrong offset!");
static_assert(offsetof(AUfoAbducter_C, Eff_ufobeam) == 0x000230, "Member 'AUfoAbducter_C::Eff_ufobeam' has a wrong offset!");
static_assert(offsetof(AUfoAbducter_C, AbductLoc) == 0x000238, "Member 'AUfoAbducter_C::AbductLoc' has a wrong offset!");
static_assert(offsetof(AUfoAbducter_C, ParticleSystem) == 0x000240, "Member 'AUfoAbducter_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(AUfoAbducter_C, PointLight) == 0x000248, "Member 'AUfoAbducter_C::PointLight' has a wrong offset!");
static_assert(offsetof(AUfoAbducter_C, GrayUfoSk) == 0x000250, "Member 'AUfoAbducter_C::GrayUfoSk' has a wrong offset!");
static_assert(offsetof(AUfoAbducter_C, Billboard) == 0x000258, "Member 'AUfoAbducter_C::Billboard' has a wrong offset!");
static_assert(offsetof(AUfoAbducter_C, Audio) == 0x000260, "Member 'AUfoAbducter_C::Audio' has a wrong offset!");
static_assert(offsetof(AUfoAbducter_C, DefaultSceneRoot) == 0x000268, "Member 'AUfoAbducter_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AUfoAbducter_C, Timeline_0_vec_80F53A1D417FAF54F08F71A22B6CBF78) == 0x000270, "Member 'AUfoAbducter_C::Timeline_0_vec_80F53A1D417FAF54F08F71A22B6CBF78' has a wrong offset!");
static_assert(offsetof(AUfoAbducter_C, Timeline_0_abduct_80F53A1D417FAF54F08F71A22B6CBF78) == 0x00027C, "Member 'AUfoAbducter_C::Timeline_0_abduct_80F53A1D417FAF54F08F71A22B6CBF78' has a wrong offset!");
static_assert(offsetof(AUfoAbducter_C, Timeline_0_blinkWeight_80F53A1D417FAF54F08F71A22B6CBF78) == 0x000280, "Member 'AUfoAbducter_C::Timeline_0_blinkWeight_80F53A1D417FAF54F08F71A22B6CBF78' has a wrong offset!");
static_assert(offsetof(AUfoAbducter_C, Timeline_0__Direction_80F53A1D417FAF54F08F71A22B6CBF78) == 0x000284, "Member 'AUfoAbducter_C::Timeline_0__Direction_80F53A1D417FAF54F08F71A22B6CBF78' has a wrong offset!");
static_assert(offsetof(AUfoAbducter_C, Timeline_0) == 0x000288, "Member 'AUfoAbducter_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AUfoAbducter_C, O) == 0x000290, "Member 'AUfoAbducter_C::O' has a wrong offset!");
static_assert(offsetof(AUfoAbducter_C, FlyAway) == 0x0002A0, "Member 'AUfoAbducter_C::FlyAway' has a wrong offset!");
static_assert(offsetof(AUfoAbducter_C, Init) == 0x0002A4, "Member 'AUfoAbducter_C::Init' has a wrong offset!");
static_assert(offsetof(AUfoAbducter_C, Fly) == 0x0002B0, "Member 'AUfoAbducter_C::Fly' has a wrong offset!");
static_assert(offsetof(AUfoAbducter_C, Weight) == 0x0002B4, "Member 'AUfoAbducter_C::Weight' has a wrong offset!");
static_assert(offsetof(AUfoAbducter_C, GameMode) == 0x0002B8, "Member 'AUfoAbducter_C::GameMode' has a wrong offset!");
static_assert(offsetof(AUfoAbducter_C, Abduct) == 0x0002C0, "Member 'AUfoAbducter_C::Abduct' has a wrong offset!");
static_assert(offsetof(AUfoAbducter_C, Loc_A) == 0x0002C8, "Member 'AUfoAbducter_C::Loc_A' has a wrong offset!");
static_assert(offsetof(AUfoAbducter_C, Abducting) == 0x0002D4, "Member 'AUfoAbducter_C::Abducting' has a wrong offset!");
static_assert(offsetof(AUfoAbducter_C, Height) == 0x0002D8, "Member 'AUfoAbducter_C::Height' has a wrong offset!");
static_assert(offsetof(AUfoAbducter_C, Add) == 0x0002DC, "Member 'AUfoAbducter_C::Add' has a wrong offset!");

}
