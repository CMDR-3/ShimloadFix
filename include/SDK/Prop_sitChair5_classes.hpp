#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_sitChair5

#include "Basic.hpp"

#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_sitChair5.prop_sitChair5_C
// 0x0008 (0x0360 - 0x0358)
class AProp_sitChair5_C final : public AProp_C
{
public:
	class UChildActorComponent*                   ChildActor;                                        // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_sitChair5_C">();
	}
	static class AProp_sitChair5_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_sitChair5_C>();
	}
};
static_assert(alignof(AProp_sitChair5_C) == 0x000008, "Wrong alignment on AProp_sitChair5_C");
static_assert(sizeof(AProp_sitChair5_C) == 0x000360, "Wrong size on AProp_sitChair5_C");
static_assert(offsetof(AProp_sitChair5_C, ChildActor) == 0x000358, "Member 'AProp_sitChair5_C::ChildActor' has a wrong offset!");

}

