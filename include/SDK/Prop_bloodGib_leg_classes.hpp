#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_bloodGib_leg

#include "Basic.hpp"

#include "Prop_bloodGib_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_bloodGib_leg.prop_bloodGib_leg_C
// 0x0008 (0x03C0 - 0x03B8)
class AProp_bloodGib_leg_C final : public AProp_bloodGib_C
{
public:
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_bloodGib_leg_C">();
	}
	static class AProp_bloodGib_leg_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_bloodGib_leg_C>();
	}
};
static_assert(alignof(AProp_bloodGib_leg_C) == 0x000008, "Wrong alignment on AProp_bloodGib_leg_C");
static_assert(sizeof(AProp_bloodGib_leg_C) == 0x0003C0, "Wrong size on AProp_bloodGib_leg_C");
static_assert(offsetof(AProp_bloodGib_leg_C, ParticleSystem) == 0x0003B8, "Member 'AProp_bloodGib_leg_C::ParticleSystem' has a wrong offset!");

}

