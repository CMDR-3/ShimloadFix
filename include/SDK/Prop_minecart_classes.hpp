#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_minecart

#include "Basic.hpp"

#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_minecart.prop_minecart_C
// 0x0040 (0x0398 - 0x0358)
class AProp_minecart_C final : public AProp_C
{
public:
	class UPhysicsConstraintComponent*            Nocoll2;                                           // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            Nocoll1;                                           // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Wh_2;                                              // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            Pc_wh2;                                            // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Wh_1;                                              // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            Pc_wh1;                                            // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Body;                                              // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            PhysicsConstraint;                                 // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_minecart_C">();
	}
	static class AProp_minecart_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_minecart_C>();
	}
};
static_assert(alignof(AProp_minecart_C) == 0x000008, "Wrong alignment on AProp_minecart_C");
static_assert(sizeof(AProp_minecart_C) == 0x000398, "Wrong size on AProp_minecart_C");
static_assert(offsetof(AProp_minecart_C, Nocoll2) == 0x000358, "Member 'AProp_minecart_C::Nocoll2' has a wrong offset!");
static_assert(offsetof(AProp_minecart_C, Nocoll1) == 0x000360, "Member 'AProp_minecart_C::Nocoll1' has a wrong offset!");
static_assert(offsetof(AProp_minecart_C, Wh_2) == 0x000368, "Member 'AProp_minecart_C::Wh_2' has a wrong offset!");
static_assert(offsetof(AProp_minecart_C, Pc_wh2) == 0x000370, "Member 'AProp_minecart_C::Pc_wh2' has a wrong offset!");
static_assert(offsetof(AProp_minecart_C, Wh_1) == 0x000378, "Member 'AProp_minecart_C::Wh_1' has a wrong offset!");
static_assert(offsetof(AProp_minecart_C, Pc_wh1) == 0x000380, "Member 'AProp_minecart_C::Pc_wh1' has a wrong offset!");
static_assert(offsetof(AProp_minecart_C, Body) == 0x000388, "Member 'AProp_minecart_C::Body' has a wrong offset!");
static_assert(offsetof(AProp_minecart_C, PhysicsConstraint) == 0x000390, "Member 'AProp_minecart_C::PhysicsConstraint' has a wrong offset!");

}

