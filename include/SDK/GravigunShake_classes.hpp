#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GravigunShake

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass gravigunShake.gravigunShake_C
// 0x0000 (0x01B0 - 0x01B0)
class UGravigunShake_C final : public UMatineeCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"gravigunShake_C">();
	}
	static class UGravigunShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGravigunShake_C>();
	}
};
static_assert(alignof(UGravigunShake_C) == 0x000010, "Wrong alignment on UGravigunShake_C");
static_assert(sizeof(UGravigunShake_C) == 0x0001B0, "Wrong size on UGravigunShake_C");

}

