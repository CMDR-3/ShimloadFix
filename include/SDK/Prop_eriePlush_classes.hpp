#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_eriePlush

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_eriePlush.prop_eriePlush_C
// 0x0050 (0x03A8 - 0x0358)
class AProp_eriePlush_C : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_eriePlush_C;                   // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight;                                        // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   FoodM;                                             // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        ShovelDig_2;                                       // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Pencil;                                            // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Paper;                                             // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          HasPaper;                                          // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HasPencil;                                         // 0x0389(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38A[0x2];                                      // 0x038A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Food;                                              // 0x038C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Eating;                                            // 0x0394(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SuperEater;                                        // 0x0395(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_396[0x2];                                      // 0x0396(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Angying;                                           // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MORBING;                                           // 0x039C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39D[0x3];                                      // 0x039D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Fullness;                                          // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_eriePlush(int32 EntryPoint);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, Enum_interactionActions Action);
	void Fuck();
	void Write();
	void BndEvt__prop_eriePlush_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit_0);
	void ReceiveTick(float DeltaSeconds);
	void Upd();
	void SetFood();
	void Munch();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_eriePlush_C">();
	}
	static class AProp_eriePlush_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_eriePlush_C>();
	}
};
static_assert(alignof(AProp_eriePlush_C) == 0x000008, "Wrong alignment on AProp_eriePlush_C");
static_assert(sizeof(AProp_eriePlush_C) == 0x0003A8, "Wrong size on AProp_eriePlush_C");
static_assert(offsetof(AProp_eriePlush_C, UberGraphFrame_Prop_eriePlush_C) == 0x000358, "Member 'AProp_eriePlush_C::UberGraphFrame_Prop_eriePlush_C' has a wrong offset!");
static_assert(offsetof(AProp_eriePlush_C, PointLight) == 0x000360, "Member 'AProp_eriePlush_C::PointLight' has a wrong offset!");
static_assert(offsetof(AProp_eriePlush_C, FoodM) == 0x000368, "Member 'AProp_eriePlush_C::FoodM' has a wrong offset!");
static_assert(offsetof(AProp_eriePlush_C, ShovelDig_2) == 0x000370, "Member 'AProp_eriePlush_C::ShovelDig_2' has a wrong offset!");
static_assert(offsetof(AProp_eriePlush_C, Pencil) == 0x000378, "Member 'AProp_eriePlush_C::Pencil' has a wrong offset!");
static_assert(offsetof(AProp_eriePlush_C, Paper) == 0x000380, "Member 'AProp_eriePlush_C::Paper' has a wrong offset!");
static_assert(offsetof(AProp_eriePlush_C, HasPaper) == 0x000388, "Member 'AProp_eriePlush_C::HasPaper' has a wrong offset!");
static_assert(offsetof(AProp_eriePlush_C, HasPencil) == 0x000389, "Member 'AProp_eriePlush_C::HasPencil' has a wrong offset!");
static_assert(offsetof(AProp_eriePlush_C, Food) == 0x00038C, "Member 'AProp_eriePlush_C::Food' has a wrong offset!");
static_assert(offsetof(AProp_eriePlush_C, Eating) == 0x000394, "Member 'AProp_eriePlush_C::Eating' has a wrong offset!");
static_assert(offsetof(AProp_eriePlush_C, SuperEater) == 0x000395, "Member 'AProp_eriePlush_C::SuperEater' has a wrong offset!");
static_assert(offsetof(AProp_eriePlush_C, Angying) == 0x000398, "Member 'AProp_eriePlush_C::Angying' has a wrong offset!");
static_assert(offsetof(AProp_eriePlush_C, MORBING) == 0x00039C, "Member 'AProp_eriePlush_C::MORBING' has a wrong offset!");
static_assert(offsetof(AProp_eriePlush_C, Fullness) == 0x0003A0, "Member 'AProp_eriePlush_C::Fullness' has a wrong offset!");

}

