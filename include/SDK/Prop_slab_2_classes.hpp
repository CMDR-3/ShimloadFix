#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_slab_2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_slab_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_slab_2.prop_slab_2_C
// 0x0008 (0x0368 - 0x0360)
class AProp_slab_2_C final : public AProp_slab_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_slab_2_C;                      // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_prop_slab_2(int32 EntryPoint);
	void FireDamage(float Damage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_slab_2_C">();
	}
	static class AProp_slab_2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_slab_2_C>();
	}
};
static_assert(alignof(AProp_slab_2_C) == 0x000008, "Wrong alignment on AProp_slab_2_C");
static_assert(sizeof(AProp_slab_2_C) == 0x000368, "Wrong size on AProp_slab_2_C");
static_assert(offsetof(AProp_slab_2_C, UberGraphFrame_Prop_slab_2_C) == 0x000360, "Member 'AProp_slab_2_C::UberGraphFrame_Prop_slab_2_C' has a wrong offset!");

}
