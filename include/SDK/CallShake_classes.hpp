#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CallShake

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass callShake.callShake_C
// 0x0000 (0x01B0 - 0x01B0)
class UCallShake_C final : public UMatineeCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"callShake_C">();
	}
	static class UCallShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCallShake_C>();
	}
};
static_assert(alignof(UCallShake_C) == 0x000010, "Wrong alignment on UCallShake_C");
static_assert(sizeof(UCallShake_C) == 0x0001B0, "Wrong size on UCallShake_C");

}

