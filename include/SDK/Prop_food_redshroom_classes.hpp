#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_food_redshroom

#include "Basic.hpp"

#include "Prop_food_mushroom_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_food_redshroom.prop_food_redshroom_C
// 0x0000 (0x03B8 - 0x03B8)
class AProp_food_redshroom_C final : public AProp_food_mushroom_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_food_redshroom_C">();
	}
	static class AProp_food_redshroom_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_food_redshroom_C>();
	}
};
static_assert(alignof(AProp_food_redshroom_C) == 0x000008, "Wrong alignment on AProp_food_redshroom_C");
static_assert(sizeof(AProp_food_redshroom_C) == 0x0003B8, "Wrong size on AProp_food_redshroom_C");

}

