#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: burningDebris

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass burningDebris.burningDebris_C
// 0x0010 (0x0368 - 0x0358)
class AburningDebris_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_burningDebris_C;                    // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Fuel;                                              // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Force;                                             // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_burningDebris(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"burningDebris_C">();
	}
	static class AburningDebris_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AburningDebris_C>();
	}
};
static_assert(alignof(AburningDebris_C) == 0x000008, "Wrong alignment on AburningDebris_C");
static_assert(sizeof(AburningDebris_C) == 0x000368, "Wrong size on AburningDebris_C");
static_assert(offsetof(AburningDebris_C, UberGraphFrame_burningDebris_C) == 0x000358, "Member 'AburningDebris_C::UberGraphFrame_burningDebris_C' has a wrong offset!");
static_assert(offsetof(AburningDebris_C, Fuel) == 0x000360, "Member 'AburningDebris_C::Fuel' has a wrong offset!");
static_assert(offsetof(AburningDebris_C, Force) == 0x000364, "Member 'AburningDebris_C::Force' has a wrong offset!");

}
