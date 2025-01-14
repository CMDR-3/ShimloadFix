#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HoelUfo

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass HoelUfo.HoelUfo_C
// 0x00E8 (0x0308 - 0x0220)
class AHoelUfo_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere1;                                           // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Sphere;                                            // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   RootSphere;                                        // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UComp_radarPoint_C*                     Comp_radarPoint;                                   // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UComp_radiation_C*                      Comp_radiation;                                    // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Speed;                                             // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>           Meshes;                                            // 0x0278(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<float>                                 Speeds;                                            // 0x0288(0x0010)(Edit, BlueprintVisible)
	TArray<float>                                 Angles;                                            // 0x0298(0x0010)(Edit, BlueprintVisible)
	TArray<float>                                 Distances;                                         // 0x02A8(0x0010)(Edit, BlueprintVisible)
	TArray<struct FVector>                        Vectors;                                           // 0x02B8(0x0010)(Edit, BlueprintVisible)
	TArray<class UPointLightComponent*>           Lights;                                            // 0x02C8(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	struct FVector                                Velocity;                                          // 0x02D8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatSpringState                      Spring;                                            // 0x02E4(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                         TurnAt;                                            // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Angle;                                             // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Prev;                                              // 0x02F4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   A;                                                 // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_HoelUfo(int32 EntryPoint);
	void ChangeSpeed();
	void Attack();
	void ChangeSpringDir();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void Gen();
	void AttackBeam();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HoelUfo_C">();
	}
	static class AHoelUfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHoelUfo_C>();
	}
};
static_assert(alignof(AHoelUfo_C) == 0x000008, "Wrong alignment on AHoelUfo_C");
static_assert(sizeof(AHoelUfo_C) == 0x000308, "Wrong size on AHoelUfo_C");
static_assert(offsetof(AHoelUfo_C, UberGraphFrame) == 0x000220, "Member 'AHoelUfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AHoelUfo_C, Sphere1) == 0x000228, "Member 'AHoelUfo_C::Sphere1' has a wrong offset!");
static_assert(offsetof(AHoelUfo_C, Audio) == 0x000230, "Member 'AHoelUfo_C::Audio' has a wrong offset!");
static_assert(offsetof(AHoelUfo_C, PointLight) == 0x000238, "Member 'AHoelUfo_C::PointLight' has a wrong offset!");
static_assert(offsetof(AHoelUfo_C, Sphere) == 0x000240, "Member 'AHoelUfo_C::Sphere' has a wrong offset!");
static_assert(offsetof(AHoelUfo_C, Billboard) == 0x000248, "Member 'AHoelUfo_C::Billboard' has a wrong offset!");
static_assert(offsetof(AHoelUfo_C, RootSphere) == 0x000250, "Member 'AHoelUfo_C::RootSphere' has a wrong offset!");
static_assert(offsetof(AHoelUfo_C, Comp_radarPoint) == 0x000258, "Member 'AHoelUfo_C::Comp_radarPoint' has a wrong offset!");
static_assert(offsetof(AHoelUfo_C, Comp_radiation) == 0x000260, "Member 'AHoelUfo_C::Comp_radiation' has a wrong offset!");
static_assert(offsetof(AHoelUfo_C, Arrow) == 0x000268, "Member 'AHoelUfo_C::Arrow' has a wrong offset!");
static_assert(offsetof(AHoelUfo_C, Amount) == 0x000270, "Member 'AHoelUfo_C::Amount' has a wrong offset!");
static_assert(offsetof(AHoelUfo_C, Speed) == 0x000274, "Member 'AHoelUfo_C::Speed' has a wrong offset!");
static_assert(offsetof(AHoelUfo_C, Meshes) == 0x000278, "Member 'AHoelUfo_C::Meshes' has a wrong offset!");
static_assert(offsetof(AHoelUfo_C, Speeds) == 0x000288, "Member 'AHoelUfo_C::Speeds' has a wrong offset!");
static_assert(offsetof(AHoelUfo_C, Angles) == 0x000298, "Member 'AHoelUfo_C::Angles' has a wrong offset!");
static_assert(offsetof(AHoelUfo_C, Distances) == 0x0002A8, "Member 'AHoelUfo_C::Distances' has a wrong offset!");
static_assert(offsetof(AHoelUfo_C, Vectors) == 0x0002B8, "Member 'AHoelUfo_C::Vectors' has a wrong offset!");
static_assert(offsetof(AHoelUfo_C, Lights) == 0x0002C8, "Member 'AHoelUfo_C::Lights' has a wrong offset!");
static_assert(offsetof(AHoelUfo_C, Velocity) == 0x0002D8, "Member 'AHoelUfo_C::Velocity' has a wrong offset!");
static_assert(offsetof(AHoelUfo_C, Spring) == 0x0002E4, "Member 'AHoelUfo_C::Spring' has a wrong offset!");
static_assert(offsetof(AHoelUfo_C, TurnAt) == 0x0002EC, "Member 'AHoelUfo_C::TurnAt' has a wrong offset!");
static_assert(offsetof(AHoelUfo_C, Angle) == 0x0002F0, "Member 'AHoelUfo_C::Angle' has a wrong offset!");
static_assert(offsetof(AHoelUfo_C, Prev) == 0x0002F4, "Member 'AHoelUfo_C::Prev' has a wrong offset!");
static_assert(offsetof(AHoelUfo_C, A) == 0x000300, "Member 'AHoelUfo_C::A' has a wrong offset!");

}

