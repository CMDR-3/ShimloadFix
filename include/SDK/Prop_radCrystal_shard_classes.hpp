#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_radCrystal_shard

#include "Basic.hpp"

#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_radCrystal_shard.prop_radCrystal_shard_C
// 0x0018 (0x0370 - 0x0358)
class AProp_radCrystal_shard_C final : public AProp_C
{
public:
	class UComp_radiation_C*                      RadComp;                                           // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Hits;                                              // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Crystals;                                          // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_radCrystal_shard_C">();
	}
	static class AProp_radCrystal_shard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_radCrystal_shard_C>();
	}
};
static_assert(alignof(AProp_radCrystal_shard_C) == 0x000008, "Wrong alignment on AProp_radCrystal_shard_C");
static_assert(sizeof(AProp_radCrystal_shard_C) == 0x000370, "Wrong size on AProp_radCrystal_shard_C");
static_assert(offsetof(AProp_radCrystal_shard_C, RadComp) == 0x000358, "Member 'AProp_radCrystal_shard_C::RadComp' has a wrong offset!");
static_assert(offsetof(AProp_radCrystal_shard_C, PointLight) == 0x000360, "Member 'AProp_radCrystal_shard_C::PointLight' has a wrong offset!");
static_assert(offsetof(AProp_radCrystal_shard_C, Hits) == 0x000368, "Member 'AProp_radCrystal_shard_C::Hits' has a wrong offset!");
static_assert(offsetof(AProp_radCrystal_shard_C, Crystals) == 0x00036C, "Member 'AProp_radCrystal_shard_C::Crystals' has a wrong offset!");

}
