#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_goldenIngot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_goldenIngot.prop_goldenIngot_C
// 0x0010 (0x0368 - 0x0358)
class AProp_goldenIngot_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_goldenIngot_C;                 // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Time;                                              // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_goldenIngot(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_goldenIngot_C">();
	}
	static class AProp_goldenIngot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_goldenIngot_C>();
	}
};
static_assert(alignof(AProp_goldenIngot_C) == 0x000008, "Wrong alignment on AProp_goldenIngot_C");
static_assert(sizeof(AProp_goldenIngot_C) == 0x000368, "Wrong size on AProp_goldenIngot_C");
static_assert(offsetof(AProp_goldenIngot_C, UberGraphFrame_Prop_goldenIngot_C) == 0x000358, "Member 'AProp_goldenIngot_C::UberGraphFrame_Prop_goldenIngot_C' has a wrong offset!");
static_assert(offsetof(AProp_goldenIngot_C, Time) == 0x000360, "Member 'AProp_goldenIngot_C::Time' has a wrong offset!");

}
