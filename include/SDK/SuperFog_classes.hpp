#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SuperFog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass superFog.superFog_C
// 0x0030 (0x0250 - 0x0220)
class ASuperFog_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ADaynightCycle_C*                       Cyc;                                               // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Alpha;                                             // 0x0238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Duration;                                          // 0x023C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Thickness;                                         // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_244[0x4];                                      // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHoelUfo_C*                             UFO;                                               // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_superFog(int32 EntryPoint);
	void SpawnUfo();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Point(const struct FVector* OutputPin);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"superFog_C">();
	}
	static class ASuperFog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASuperFog_C>();
	}
};
static_assert(alignof(ASuperFog_C) == 0x000008, "Wrong alignment on ASuperFog_C");
static_assert(sizeof(ASuperFog_C) == 0x000250, "Wrong size on ASuperFog_C");
static_assert(offsetof(ASuperFog_C, UberGraphFrame) == 0x000220, "Member 'ASuperFog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASuperFog_C, DefaultSceneRoot) == 0x000228, "Member 'ASuperFog_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ASuperFog_C, Cyc) == 0x000230, "Member 'ASuperFog_C::Cyc' has a wrong offset!");
static_assert(offsetof(ASuperFog_C, Alpha) == 0x000238, "Member 'ASuperFog_C::Alpha' has a wrong offset!");
static_assert(offsetof(ASuperFog_C, Duration) == 0x00023C, "Member 'ASuperFog_C::Duration' has a wrong offset!");
static_assert(offsetof(ASuperFog_C, Thickness) == 0x000240, "Member 'ASuperFog_C::Thickness' has a wrong offset!");
static_assert(offsetof(ASuperFog_C, UFO) == 0x000248, "Member 'ASuperFog_C::UFO' has a wrong offset!");

}

