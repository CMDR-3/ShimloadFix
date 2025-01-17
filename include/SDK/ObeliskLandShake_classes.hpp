#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ObeliskLandShake

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass obeliskLandShake.obeliskLandShake_C
// 0x0000 (0x01B0 - 0x01B0)
class UObeliskLandShake_C final : public UMatineeCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"obeliskLandShake_C">();
	}
	static class UObeliskLandShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UObeliskLandShake_C>();
	}
};
static_assert(alignof(UObeliskLandShake_C) == 0x000010, "Wrong alignment on UObeliskLandShake_C");
static_assert(sizeof(UObeliskLandShake_C) == 0x0001B0, "Wrong size on UObeliskLandShake_C");

}

