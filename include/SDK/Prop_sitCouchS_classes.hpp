#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_sitCouchS

#include "Basic.hpp"

#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_sitCouchS.prop_sitCouchS_C
// 0x0008 (0x0360 - 0x0358)
class AProp_sitCouchS_C final : public AProp_C
{
public:
	class UChildActorComponent*                   ChildActor;                                        // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_sitCouchS_C">();
	}
	static class AProp_sitCouchS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_sitCouchS_C>();
	}
};
static_assert(alignof(AProp_sitCouchS_C) == 0x000008, "Wrong alignment on AProp_sitCouchS_C");
static_assert(sizeof(AProp_sitCouchS_C) == 0x000360, "Wrong size on AProp_sitCouchS_C");
static_assert(offsetof(AProp_sitCouchS_C, ChildActor) == 0x000358, "Member 'AProp_sitCouchS_C::ChildActor' has a wrong offset!");

}

