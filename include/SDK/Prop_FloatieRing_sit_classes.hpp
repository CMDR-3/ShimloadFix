#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_FloatieRing_sit

#include "Basic.hpp"

#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_FloatieRing_sit.prop_FloatieRing_sit_C
// 0x0008 (0x0360 - 0x0358)
class AProp_FloatieRing_sit_C : public AProp_C
{
public:
	class UChildActorComponent*                   ChildActor;                                        // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_FloatieRing_sit_C">();
	}
	static class AProp_FloatieRing_sit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_FloatieRing_sit_C>();
	}
};
static_assert(alignof(AProp_FloatieRing_sit_C) == 0x000008, "Wrong alignment on AProp_FloatieRing_sit_C");
static_assert(sizeof(AProp_FloatieRing_sit_C) == 0x000360, "Wrong size on AProp_FloatieRing_sit_C");
static_assert(offsetof(AProp_FloatieRing_sit_C, ChildActor) == 0x000358, "Member 'AProp_FloatieRing_sit_C::ChildActor' has a wrong offset!");

}
