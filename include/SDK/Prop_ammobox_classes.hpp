#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_ammobox

#include "Basic.hpp"

#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_ammobox.prop_ammobox_C
// 0x0000 (0x0358 - 0x0358)
class AProp_ammobox_C final : public AProp_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_ammobox_C">();
	}
	static class AProp_ammobox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_ammobox_C>();
	}
};
static_assert(alignof(AProp_ammobox_C) == 0x000008, "Wrong alignment on AProp_ammobox_C");
static_assert(sizeof(AProp_ammobox_C) == 0x000358, "Wrong size on AProp_ammobox_C");

}
