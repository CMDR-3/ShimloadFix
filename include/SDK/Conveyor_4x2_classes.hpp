#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Conveyor_4x2

#include "Basic.hpp"

#include "Conveyor_2x2_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass conveyor_4x2.conveyor_4x2_C
// 0x0000 (0x0288 - 0x0288)
class AConveyor_4x2_C final : public AConveyor_2x2_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"conveyor_4x2_C">();
	}
	static class AConveyor_4x2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AConveyor_4x2_C>();
	}
};
static_assert(alignof(AConveyor_4x2_C) == 0x000008, "Wrong alignment on AConveyor_4x2_C");
static_assert(sizeof(AConveyor_4x2_C) == 0x000288, "Wrong size on AConveyor_4x2_C");

}
