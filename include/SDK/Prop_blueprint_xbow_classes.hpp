#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_blueprint_xbow

#include "Basic.hpp"

#include "Prop_blueprint_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_blueprint_xbow.prop_blueprint_xbow_C
// 0x0000 (0x03A8 - 0x03A8)
class AProp_blueprint_xbow_C final : public AProp_blueprint_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_blueprint_xbow_C">();
	}
	static class AProp_blueprint_xbow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_blueprint_xbow_C>();
	}
};
static_assert(alignof(AProp_blueprint_xbow_C) == 0x000008, "Wrong alignment on AProp_blueprint_xbow_C");
static_assert(sizeof(AProp_blueprint_xbow_C) == 0x0003A8, "Wrong size on AProp_blueprint_xbow_C");

}

