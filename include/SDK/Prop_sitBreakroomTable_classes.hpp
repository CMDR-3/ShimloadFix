#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_sitBreakroomTable

#include "Basic.hpp"

#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_sitBreakroomTable.prop_sitBreakroomTable_C
// 0x0020 (0x0378 - 0x0358)
class AProp_sitBreakroomTable_C final : public AProp_C
{
public:
	class UChildActorComponent*                   ChildActor;                                        // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor3;                                       // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor2;                                       // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor1;                                       // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_sitBreakroomTable_C">();
	}
	static class AProp_sitBreakroomTable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_sitBreakroomTable_C>();
	}
};
static_assert(alignof(AProp_sitBreakroomTable_C) == 0x000008, "Wrong alignment on AProp_sitBreakroomTable_C");
static_assert(sizeof(AProp_sitBreakroomTable_C) == 0x000378, "Wrong size on AProp_sitBreakroomTable_C");
static_assert(offsetof(AProp_sitBreakroomTable_C, ChildActor) == 0x000358, "Member 'AProp_sitBreakroomTable_C::ChildActor' has a wrong offset!");
static_assert(offsetof(AProp_sitBreakroomTable_C, ChildActor3) == 0x000360, "Member 'AProp_sitBreakroomTable_C::ChildActor3' has a wrong offset!");
static_assert(offsetof(AProp_sitBreakroomTable_C, ChildActor2) == 0x000368, "Member 'AProp_sitBreakroomTable_C::ChildActor2' has a wrong offset!");
static_assert(offsetof(AProp_sitBreakroomTable_C, ChildActor1) == 0x000370, "Member 'AProp_sitBreakroomTable_C::ChildActor1' has a wrong offset!");

}
