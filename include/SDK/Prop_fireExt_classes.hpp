#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_fireExt

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_fireExt.prop_fireExt_C
// 0x0070 (0x03C8 - 0x0358)
class AProp_fireExt_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_fireExt_C;                     // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Arrow;                                             // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        FireExtFire;                                       // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Eff_ext;                                           // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        FireExtThrust;                                     // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Eff_fireExtThr;                                    // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsThrusterComponent*              PhysicsThruster;                                   // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         FireTimeSound_a_849D892B46E4CD13F748709AC6DF5D06;  // 0x0390(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FireTimeSound__Direction_849D892B46E4CD13F748709AC6DF5D06; // 0x0394(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_395[0x3];                                      // 0x0395(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FireTimeSound;                                     // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Life;                                              // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x03A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Firing;                                            // 0x03A5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A6[0x2];                                      // 0x03A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      Obj;                                               // 0x03A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                         Ignores;                                           // 0x03B8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_prop_fireExt(int32 EntryPoint);
	void FireSound();
	void ReceiveTick(float DeltaSeconds);
	void Shoot();
	void FireTimeSound__UpdateFunc();
	void FireTimeSound__FinishedFunc();
	void Fire(bool Firing_0);
	void ExtinguishRay(const struct FVector& InputPin, const struct FVector& InputPin2, float Radius);
	void FireDamage(float Damage);
	void AddDamage(class AActor* Actor, float Damage, const struct FHitResult& Hit_0, const struct FVector& Impact, bool SkipSetting);
	void PlayerHandRelease_LMB(class AMainPlayer_C* Player);
	void PlayerHandUse_LMB(class AMainPlayer_C* Player);
	void ReceivedPhyiscsDamage(float Damage, const struct FHitResult& Hot);
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_fireExt_C">();
	}
	static class AProp_fireExt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_fireExt_C>();
	}
};
static_assert(alignof(AProp_fireExt_C) == 0x000008, "Wrong alignment on AProp_fireExt_C");
static_assert(sizeof(AProp_fireExt_C) == 0x0003C8, "Wrong size on AProp_fireExt_C");
static_assert(offsetof(AProp_fireExt_C, UberGraphFrame_Prop_fireExt_C) == 0x000358, "Member 'AProp_fireExt_C::UberGraphFrame_Prop_fireExt_C' has a wrong offset!");
static_assert(offsetof(AProp_fireExt_C, Arrow) == 0x000360, "Member 'AProp_fireExt_C::Arrow' has a wrong offset!");
static_assert(offsetof(AProp_fireExt_C, FireExtFire) == 0x000368, "Member 'AProp_fireExt_C::FireExtFire' has a wrong offset!");
static_assert(offsetof(AProp_fireExt_C, Eff_ext) == 0x000370, "Member 'AProp_fireExt_C::Eff_ext' has a wrong offset!");
static_assert(offsetof(AProp_fireExt_C, FireExtThrust) == 0x000378, "Member 'AProp_fireExt_C::FireExtThrust' has a wrong offset!");
static_assert(offsetof(AProp_fireExt_C, Eff_fireExtThr) == 0x000380, "Member 'AProp_fireExt_C::Eff_fireExtThr' has a wrong offset!");
static_assert(offsetof(AProp_fireExt_C, PhysicsThruster) == 0x000388, "Member 'AProp_fireExt_C::PhysicsThruster' has a wrong offset!");
static_assert(offsetof(AProp_fireExt_C, FireTimeSound_a_849D892B46E4CD13F748709AC6DF5D06) == 0x000390, "Member 'AProp_fireExt_C::FireTimeSound_a_849D892B46E4CD13F748709AC6DF5D06' has a wrong offset!");
static_assert(offsetof(AProp_fireExt_C, FireTimeSound__Direction_849D892B46E4CD13F748709AC6DF5D06) == 0x000394, "Member 'AProp_fireExt_C::FireTimeSound__Direction_849D892B46E4CD13F748709AC6DF5D06' has a wrong offset!");
static_assert(offsetof(AProp_fireExt_C, FireTimeSound) == 0x000398, "Member 'AProp_fireExt_C::FireTimeSound' has a wrong offset!");
static_assert(offsetof(AProp_fireExt_C, Life) == 0x0003A0, "Member 'AProp_fireExt_C::Life' has a wrong offset!");
static_assert(offsetof(AProp_fireExt_C, Active) == 0x0003A4, "Member 'AProp_fireExt_C::Active' has a wrong offset!");
static_assert(offsetof(AProp_fireExt_C, Firing) == 0x0003A5, "Member 'AProp_fireExt_C::Firing' has a wrong offset!");
static_assert(offsetof(AProp_fireExt_C, Obj) == 0x0003A8, "Member 'AProp_fireExt_C::Obj' has a wrong offset!");
static_assert(offsetof(AProp_fireExt_C, Ignores) == 0x0003B8, "Member 'AProp_fireExt_C::Ignores' has a wrong offset!");

}

