#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Notify_FH_step

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass notify_FH_step.notify_FH_step_C
// 0x0000 (0x0038 - 0x0038)
class UNotify_FH_step_C final : public UAnimNotify
{
public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"notify_FH_step_C">();
	}
	static class UNotify_FH_step_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNotify_FH_step_C>();
	}
};
static_assert(alignof(UNotify_FH_step_C) == 0x000008, "Wrong alignment on UNotify_FH_step_C");
static_assert(sizeof(UNotify_FH_step_C) == 0x000038, "Wrong size on UNotify_FH_step_C");

}

