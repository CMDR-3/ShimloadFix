#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_padlock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_padlock.prop_padlock_C
// 0x0010 (0x0368 - 0x0358)
class AProp_padlock_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_padlock_C;                     // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPhysicsConstraintComponent*            PhysicsConstraint;                                 // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_padlock(int32 EntryPoint);
	void broken_fire();
	void broken();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_padlock_C">();
	}
	static class AProp_padlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_padlock_C>();
	}
};
static_assert(alignof(AProp_padlock_C) == 0x000008, "Wrong alignment on AProp_padlock_C");
static_assert(sizeof(AProp_padlock_C) == 0x000368, "Wrong size on AProp_padlock_C");
static_assert(offsetof(AProp_padlock_C, UberGraphFrame_Prop_padlock_C) == 0x000358, "Member 'AProp_padlock_C::UberGraphFrame_Prop_padlock_C' has a wrong offset!");
static_assert(offsetof(AProp_padlock_C, PhysicsConstraint) == 0x000360, "Member 'AProp_padlock_C::PhysicsConstraint' has a wrong offset!");

}

