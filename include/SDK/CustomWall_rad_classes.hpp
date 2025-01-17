#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomWall_rad

#include "Basic.hpp"

#include "CustomWall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass customWall_rad.customWall_rad_C
// 0x0008 (0x02D8 - 0x02D0)
class ACustomWall_rad_C final : public ACustomWall_C
{
public:
	class UComp_radiation_C*                      RadComp;                                           // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"customWall_rad_C">();
	}
	static class ACustomWall_rad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACustomWall_rad_C>();
	}
};
static_assert(alignof(ACustomWall_rad_C) == 0x000008, "Wrong alignment on ACustomWall_rad_C");
static_assert(sizeof(ACustomWall_rad_C) == 0x0002D8, "Wrong size on ACustomWall_rad_C");
static_assert(offsetof(ACustomWall_rad_C, RadComp) == 0x0002D0, "Member 'ACustomWall_rad_C::RadComp' has a wrong offset!");

}

