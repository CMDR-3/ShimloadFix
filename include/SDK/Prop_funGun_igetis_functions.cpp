#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_funGun_igetis

#include "Basic.hpp"

#include "Prop_funGun_igetis_classes.hpp"
#include "Prop_funGun_igetis_parameters.hpp"


namespace SDK
{

// Function prop_funGun_igetis.prop_funGun_igetis_C.fireBulletPrimary
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProp_funGun_igetis_C::FireBulletPrimary()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_funGun_igetis_C", "fireBulletPrimary");

	UObject::ProcessEvent(Func, nullptr);
}

}
