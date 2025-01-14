#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_beacon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_beacon.prop_beacon_C
// 0x0040 (0x0398 - 0x0358)
class AProp_beacon_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_beacon_C;                      // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UComp_radarPoint_C*                     RadarPoint;                                        // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Anim_a_957CDEDB469E1DF1D38E5F85C901F935;           // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Anim__Direction_957CDEDB469E1DF1D38E5F85C901F935;  // 0x037C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37D[0x3];                                      // 0x037D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Anim;                                              // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Ubeacon_Skeleton_AnimBlueprint_C*       AnimInst;                                          // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActive;                                          // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Animat;                                            // 0x0391(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_beacon(int32 EntryPoint);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, Enum_interactionActions Action);
	void Open(bool Condition, bool Instant);
	void Anim__UpdateFunc();
	void Anim__FinishedFunc();
	void GamemodeBeginPlay();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number);
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_beacon_C">();
	}
	static class AProp_beacon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_beacon_C>();
	}
};
static_assert(alignof(AProp_beacon_C) == 0x000008, "Wrong alignment on AProp_beacon_C");
static_assert(sizeof(AProp_beacon_C) == 0x000398, "Wrong size on AProp_beacon_C");
static_assert(offsetof(AProp_beacon_C, UberGraphFrame_Prop_beacon_C) == 0x000358, "Member 'AProp_beacon_C::UberGraphFrame_Prop_beacon_C' has a wrong offset!");
static_assert(offsetof(AProp_beacon_C, Mesh) == 0x000360, "Member 'AProp_beacon_C::Mesh' has a wrong offset!");
static_assert(offsetof(AProp_beacon_C, RadarPoint) == 0x000368, "Member 'AProp_beacon_C::RadarPoint' has a wrong offset!");
static_assert(offsetof(AProp_beacon_C, Capsule) == 0x000370, "Member 'AProp_beacon_C::Capsule' has a wrong offset!");
static_assert(offsetof(AProp_beacon_C, Anim_a_957CDEDB469E1DF1D38E5F85C901F935) == 0x000378, "Member 'AProp_beacon_C::Anim_a_957CDEDB469E1DF1D38E5F85C901F935' has a wrong offset!");
static_assert(offsetof(AProp_beacon_C, Anim__Direction_957CDEDB469E1DF1D38E5F85C901F935) == 0x00037C, "Member 'AProp_beacon_C::Anim__Direction_957CDEDB469E1DF1D38E5F85C901F935' has a wrong offset!");
static_assert(offsetof(AProp_beacon_C, Anim) == 0x000380, "Member 'AProp_beacon_C::Anim' has a wrong offset!");
static_assert(offsetof(AProp_beacon_C, AnimInst) == 0x000388, "Member 'AProp_beacon_C::AnimInst' has a wrong offset!");
static_assert(offsetof(AProp_beacon_C, IsActive) == 0x000390, "Member 'AProp_beacon_C::IsActive' has a wrong offset!");
static_assert(offsetof(AProp_beacon_C, Animat) == 0x000391, "Member 'AProp_beacon_C::Animat' has a wrong offset!");

}

