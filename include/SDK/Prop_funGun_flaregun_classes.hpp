#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_funGun_flaregun

#include "Basic.hpp"

#include "Prop_funGun_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_funGun_flaregun.prop_funGun_flaregun_C
// 0x0000 (0x0440 - 0x0440)
class AProp_funGun_flaregun_C final : public AProp_funGun_C
{
public:
	void FireBulletPrimary();
	void FireBulletSecondary();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_funGun_flaregun_C">();
	}
	static class AProp_funGun_flaregun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_funGun_flaregun_C>();
	}
};
static_assert(alignof(AProp_funGun_flaregun_C) == 0x000008, "Wrong alignment on AProp_funGun_flaregun_C");
static_assert(sizeof(AProp_funGun_flaregun_C) == 0x000440, "Wrong size on AProp_funGun_flaregun_C");

}
