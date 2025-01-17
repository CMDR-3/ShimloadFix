#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SignalCam

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass signalCam.signalCam_C
// 0x0030 (0x0250 - 0x0220)
class ASignalCam_C final : public AActor
{
public:
	class UArrowComponent*                        Arrow;                                             // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera;                                            // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                   Signal;                                            // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FOV;                                               // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          breath;                                            // 0x0244(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_245[0x3];                                      // 0x0245(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Trigger;                                           // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"signalCam_C">();
	}
	static class ASignalCam_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASignalCam_C>();
	}
};
static_assert(alignof(ASignalCam_C) == 0x000008, "Wrong alignment on ASignalCam_C");
static_assert(sizeof(ASignalCam_C) == 0x000250, "Wrong size on ASignalCam_C");
static_assert(offsetof(ASignalCam_C, Arrow) == 0x000220, "Member 'ASignalCam_C::Arrow' has a wrong offset!");
static_assert(offsetof(ASignalCam_C, Camera) == 0x000228, "Member 'ASignalCam_C::Camera' has a wrong offset!");
static_assert(offsetof(ASignalCam_C, DefaultSceneRoot) == 0x000230, "Member 'ASignalCam_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ASignalCam_C, Signal) == 0x000238, "Member 'ASignalCam_C::Signal' has a wrong offset!");
static_assert(offsetof(ASignalCam_C, FOV) == 0x000240, "Member 'ASignalCam_C::FOV' has a wrong offset!");
static_assert(offsetof(ASignalCam_C, breath) == 0x000244, "Member 'ASignalCam_C::breath' has a wrong offset!");
static_assert(offsetof(ASignalCam_C, Trigger) == 0x000248, "Member 'ASignalCam_C::Trigger' has a wrong offset!");

}

