#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CrossbowBolt

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass crossbowBolt.crossbowBolt_C
// 0x0060 (0x0280 - 0x0220)
class ACrossbowBolt_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               Eff_glowCrossbowBolt;                              // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   bolt;                                              // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Lastloc;                                           // 0x0248(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Velocity;                                          // 0x0254(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      Obj;                                               // 0x0260(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*               Dynmat;                                            // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp;                                              // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Notick;                                            // 0x027C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_crossbowBolt(int32 EntryPoint);
	void Dest(class AActor* DestroyedActor);
	void ResetLoc();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"crossbowBolt_C">();
	}
	static class ACrossbowBolt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACrossbowBolt_C>();
	}
};
static_assert(alignof(ACrossbowBolt_C) == 0x000008, "Wrong alignment on ACrossbowBolt_C");
static_assert(sizeof(ACrossbowBolt_C) == 0x000280, "Wrong size on ACrossbowBolt_C");
static_assert(offsetof(ACrossbowBolt_C, UberGraphFrame) == 0x000220, "Member 'ACrossbowBolt_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ACrossbowBolt_C, Eff_glowCrossbowBolt) == 0x000228, "Member 'ACrossbowBolt_C::Eff_glowCrossbowBolt' has a wrong offset!");
static_assert(offsetof(ACrossbowBolt_C, Audio) == 0x000230, "Member 'ACrossbowBolt_C::Audio' has a wrong offset!");
static_assert(offsetof(ACrossbowBolt_C, bolt) == 0x000238, "Member 'ACrossbowBolt_C::bolt' has a wrong offset!");
static_assert(offsetof(ACrossbowBolt_C, Sphere) == 0x000240, "Member 'ACrossbowBolt_C::Sphere' has a wrong offset!");
static_assert(offsetof(ACrossbowBolt_C, Lastloc) == 0x000248, "Member 'ACrossbowBolt_C::Lastloc' has a wrong offset!");
static_assert(offsetof(ACrossbowBolt_C, Velocity) == 0x000254, "Member 'ACrossbowBolt_C::Velocity' has a wrong offset!");
static_assert(offsetof(ACrossbowBolt_C, Obj) == 0x000260, "Member 'ACrossbowBolt_C::Obj' has a wrong offset!");
static_assert(offsetof(ACrossbowBolt_C, Dynmat) == 0x000270, "Member 'ACrossbowBolt_C::Dynmat' has a wrong offset!");
static_assert(offsetof(ACrossbowBolt_C, Temp) == 0x000278, "Member 'ACrossbowBolt_C::Temp' has a wrong offset!");
static_assert(offsetof(ACrossbowBolt_C, Notick) == 0x00027C, "Member 'ACrossbowBolt_C::Notick' has a wrong offset!");

}
