#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SkyFallingEvent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass skyFallingEvent.skyFallingEvent_C
// 0x0048 (0x0268 - 0x0220)
class ASkyFallingEvent_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UComp_radarPoint_C*                     Comp_radarPoint;                                   // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow1;                                            // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Eff_glow_tardis;                                   // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_skyFallingEvent(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"skyFallingEvent_C">();
	}
	static class ASkyFallingEvent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASkyFallingEvent_C>();
	}
};
static_assert(alignof(ASkyFallingEvent_C) == 0x000008, "Wrong alignment on ASkyFallingEvent_C");
static_assert(sizeof(ASkyFallingEvent_C) == 0x000268, "Wrong size on ASkyFallingEvent_C");
static_assert(offsetof(ASkyFallingEvent_C, UberGraphFrame) == 0x000220, "Member 'ASkyFallingEvent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASkyFallingEvent_C, Comp_radarPoint) == 0x000228, "Member 'ASkyFallingEvent_C::Comp_radarPoint' has a wrong offset!");
static_assert(offsetof(ASkyFallingEvent_C, Billboard) == 0x000230, "Member 'ASkyFallingEvent_C::Billboard' has a wrong offset!");
static_assert(offsetof(ASkyFallingEvent_C, Arrow1) == 0x000238, "Member 'ASkyFallingEvent_C::Arrow1' has a wrong offset!");
static_assert(offsetof(ASkyFallingEvent_C, Audio) == 0x000240, "Member 'ASkyFallingEvent_C::Audio' has a wrong offset!");
static_assert(offsetof(ASkyFallingEvent_C, PointLight) == 0x000248, "Member 'ASkyFallingEvent_C::PointLight' has a wrong offset!");
static_assert(offsetof(ASkyFallingEvent_C, Eff_glow_tardis) == 0x000250, "Member 'ASkyFallingEvent_C::Eff_glow_tardis' has a wrong offset!");
static_assert(offsetof(ASkyFallingEvent_C, Arrow) == 0x000258, "Member 'ASkyFallingEvent_C::Arrow' has a wrong offset!");
static_assert(offsetof(ASkyFallingEvent_C, DefaultSceneRoot) == 0x000260, "Member 'ASkyFallingEvent_C::DefaultSceneRoot' has a wrong offset!");

}

