#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_bananaHusk

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_bananaHusk.prop_bananaHusk_C
// 0x0010 (0x0368 - 0x0358)
class AProp_bananaHusk_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_bananaHusk_C;                  // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_bananaHusk(int32 EntryPoint);
	void SteppedOn(class AMainPlayer_C* Player, const struct FHitResult& Hit_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_bananaHusk_C">();
	}
	static class AProp_bananaHusk_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_bananaHusk_C>();
	}
};
static_assert(alignof(AProp_bananaHusk_C) == 0x000008, "Wrong alignment on AProp_bananaHusk_C");
static_assert(sizeof(AProp_bananaHusk_C) == 0x000368, "Wrong size on AProp_bananaHusk_C");
static_assert(offsetof(AProp_bananaHusk_C, UberGraphFrame_Prop_bananaHusk_C) == 0x000358, "Member 'AProp_bananaHusk_C::UberGraphFrame_Prop_bananaHusk_C' has a wrong offset!");
static_assert(offsetof(AProp_bananaHusk_C, Sphere) == 0x000360, "Member 'AProp_bananaHusk_C::Sphere' has a wrong offset!");

}
