#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_funGun_flaregun

#include "Basic.hpp"

#include "Prop_funGun_flaregun_classes.hpp"
#include "Prop_funGun_flaregun_parameters.hpp"


namespace SDK
{

// Function prop_funGun_flaregun.prop_funGun_flaregun_C.fireBulletPrimary
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProp_funGun_flaregun_C::FireBulletPrimary()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_funGun_flaregun_C", "fireBulletPrimary");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_funGun_flaregun.prop_funGun_flaregun_C.fireBulletSecondary
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProp_funGun_flaregun_C::FireBulletSecondary()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_funGun_flaregun_C", "fireBulletSecondary");

	UObject::ProcessEvent(Func, nullptr);
}

}

