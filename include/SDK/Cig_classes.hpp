#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Cig

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Actor_save_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass cig.cig_C
// 0x0048 (0x0298 - 0x0250)
class ACig_C : public AActor_save_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Cig_C;                              // 0x0250(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight1;                                       // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CigMesh;                                           // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm;                                         // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          FirstTick;                                         // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LitUp;                                             // 0x0281(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_282[0x2];                                      // 0x0282(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Life;                                              // 0x0284(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         HuffSpeed;                                         // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxHealthDecrease;                                 // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SleepIncrease;                                     // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_cig(int32 EntryPoint);
	void Destroyed(class AActor* DestroyedActor);
	void Woken();
	void FellAsleep();
	void UsedRMB(bool Pressed);
	void ReceiveTick(float DeltaSeconds);
	void UsedR(bool Pressed);
	void UsedAlt(bool Pressed);
	void ReceiveBeginPlay();
	void Lit(bool LitUp_0);
	void Dropped();
	void SetLife();
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"cig_C">();
	}
	static class ACig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACig_C>();
	}
};
static_assert(alignof(ACig_C) == 0x000008, "Wrong alignment on ACig_C");
static_assert(sizeof(ACig_C) == 0x000298, "Wrong size on ACig_C");
static_assert(offsetof(ACig_C, UberGraphFrame_Cig_C) == 0x000250, "Member 'ACig_C::UberGraphFrame_Cig_C' has a wrong offset!");
static_assert(offsetof(ACig_C, PointLight1) == 0x000258, "Member 'ACig_C::PointLight1' has a wrong offset!");
static_assert(offsetof(ACig_C, ParticleSystem) == 0x000260, "Member 'ACig_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(ACig_C, PointLight) == 0x000268, "Member 'ACig_C::PointLight' has a wrong offset!");
static_assert(offsetof(ACig_C, CigMesh) == 0x000270, "Member 'ACig_C::CigMesh' has a wrong offset!");
static_assert(offsetof(ACig_C, SpringArm) == 0x000278, "Member 'ACig_C::SpringArm' has a wrong offset!");
static_assert(offsetof(ACig_C, FirstTick) == 0x000280, "Member 'ACig_C::FirstTick' has a wrong offset!");
static_assert(offsetof(ACig_C, LitUp) == 0x000281, "Member 'ACig_C::LitUp' has a wrong offset!");
static_assert(offsetof(ACig_C, Life) == 0x000284, "Member 'ACig_C::Life' has a wrong offset!");
static_assert(offsetof(ACig_C, HuffSpeed) == 0x000288, "Member 'ACig_C::HuffSpeed' has a wrong offset!");
static_assert(offsetof(ACig_C, MaxHealthDecrease) == 0x00028C, "Member 'ACig_C::MaxHealthDecrease' has a wrong offset!");
static_assert(offsetof(ACig_C, SleepIncrease) == 0x000290, "Member 'ACig_C::SleepIncrease' has a wrong offset!");

}

