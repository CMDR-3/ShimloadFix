#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_baskethoop

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Prop_wallAttachable_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_baskethoop.prop_baskethoop_C
// 0x0060 (0x0450 - 0x03F0)
class AProp_baskethoop_C final : public AProp_wallAttachable_C
{
public:
	uint8                                         Pad_3E6[0xA];                                      // 0x03E6(0x000A)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Tr_B_0;                                            // 0x03F0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                             Tr_A_0;                                            // 0x0420(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_baskethoop_C">();
	}
	static class AProp_baskethoop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_baskethoop_C>();
	}
};
static_assert(alignof(AProp_baskethoop_C) == 0x000010, "Wrong alignment on AProp_baskethoop_C");
static_assert(sizeof(AProp_baskethoop_C) == 0x000450, "Wrong size on AProp_baskethoop_C");
static_assert(offsetof(AProp_baskethoop_C, Tr_B_0) == 0x0003F0, "Member 'AProp_baskethoop_C::Tr_B_0' has a wrong offset!");
static_assert(offsetof(AProp_baskethoop_C, Tr_A_0) == 0x000420, "Member 'AProp_baskethoop_C::Tr_A_0' has a wrong offset!");

}
