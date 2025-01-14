#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ufo_joel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ufo_joel.ufo_joel_C
// 0x0088 (0x02A8 - 0x0220)
class AUfo_joel_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                  PostProcess;                                       // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    AnchorUfo_1;                                       // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Point_A1;                                          // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Point_A2;                                          // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Center_1;                                          // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    AnchorRotUfo_1;                                    // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Point_B;                                           // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Point_A;                                           // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Uforot1;                                           // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Ufo1;                                              // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         MoveUfo_a_1ADDEF40457D10F0DB2035899F19E9E2;        // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            MoveUfo__Direction_1ADDEF40457D10F0DB2035899F19E9E2; // 0x028C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28D[0x3];                                      // 0x028D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     MoveUfo;                                           // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Dir;                                               // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Debug;                                             // 0x0299(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29A[0x6];                                      // 0x029A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Dynmat_dizzy;                                      // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ufo_joel(int32 EntryPoint);
	void Move();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void MoveUfo__switch__EventFunc();
	void MoveUfo__UpdateFunc();
	void MoveUfo__FinishedFunc();
	void Gen();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ufo_joel_C">();
	}
	static class AUfo_joel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AUfo_joel_C>();
	}
};
static_assert(alignof(AUfo_joel_C) == 0x000008, "Wrong alignment on AUfo_joel_C");
static_assert(sizeof(AUfo_joel_C) == 0x0002A8, "Wrong size on AUfo_joel_C");
static_assert(offsetof(AUfo_joel_C, UberGraphFrame) == 0x000220, "Member 'AUfo_joel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AUfo_joel_C, PostProcess) == 0x000228, "Member 'AUfo_joel_C::PostProcess' has a wrong offset!");
static_assert(offsetof(AUfo_joel_C, Audio) == 0x000230, "Member 'AUfo_joel_C::Audio' has a wrong offset!");
static_assert(offsetof(AUfo_joel_C, AnchorUfo_1) == 0x000238, "Member 'AUfo_joel_C::AnchorUfo_1' has a wrong offset!");
static_assert(offsetof(AUfo_joel_C, Point_A1) == 0x000240, "Member 'AUfo_joel_C::Point_A1' has a wrong offset!");
static_assert(offsetof(AUfo_joel_C, Point_A2) == 0x000248, "Member 'AUfo_joel_C::Point_A2' has a wrong offset!");
static_assert(offsetof(AUfo_joel_C, Center_1) == 0x000250, "Member 'AUfo_joel_C::Center_1' has a wrong offset!");
static_assert(offsetof(AUfo_joel_C, AnchorRotUfo_1) == 0x000258, "Member 'AUfo_joel_C::AnchorRotUfo_1' has a wrong offset!");
static_assert(offsetof(AUfo_joel_C, Point_B) == 0x000260, "Member 'AUfo_joel_C::Point_B' has a wrong offset!");
static_assert(offsetof(AUfo_joel_C, Point_A) == 0x000268, "Member 'AUfo_joel_C::Point_A' has a wrong offset!");
static_assert(offsetof(AUfo_joel_C, Uforot1) == 0x000270, "Member 'AUfo_joel_C::Uforot1' has a wrong offset!");
static_assert(offsetof(AUfo_joel_C, Ufo1) == 0x000278, "Member 'AUfo_joel_C::Ufo1' has a wrong offset!");
static_assert(offsetof(AUfo_joel_C, DefaultSceneRoot) == 0x000280, "Member 'AUfo_joel_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AUfo_joel_C, MoveUfo_a_1ADDEF40457D10F0DB2035899F19E9E2) == 0x000288, "Member 'AUfo_joel_C::MoveUfo_a_1ADDEF40457D10F0DB2035899F19E9E2' has a wrong offset!");
static_assert(offsetof(AUfo_joel_C, MoveUfo__Direction_1ADDEF40457D10F0DB2035899F19E9E2) == 0x00028C, "Member 'AUfo_joel_C::MoveUfo__Direction_1ADDEF40457D10F0DB2035899F19E9E2' has a wrong offset!");
static_assert(offsetof(AUfo_joel_C, MoveUfo) == 0x000290, "Member 'AUfo_joel_C::MoveUfo' has a wrong offset!");
static_assert(offsetof(AUfo_joel_C, Dir) == 0x000298, "Member 'AUfo_joel_C::Dir' has a wrong offset!");
static_assert(offsetof(AUfo_joel_C, Debug) == 0x000299, "Member 'AUfo_joel_C::Debug' has a wrong offset!");
static_assert(offsetof(AUfo_joel_C, Dynmat_dizzy) == 0x0002A0, "Member 'AUfo_joel_C::Dynmat_dizzy' has a wrong offset!");

}

