#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_neonSign

#include "Basic.hpp"

#include "Prop_wallAttachable_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_neonSign.prop_neonSign_C
// 0x0000 (0x03F0 - 0x03F0)
class AProp_neonSign_C : public AProp_wallAttachable_C
{
public:
	uint8                                         Pad_3E6[0x2];                                      // 0x03E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class URectLightComponent*                    RectLight;                                         // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_neonSign_C">();
	}
	static class AProp_neonSign_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_neonSign_C>();
	}
};
static_assert(alignof(AProp_neonSign_C) == 0x000010, "Wrong alignment on AProp_neonSign_C");
static_assert(sizeof(AProp_neonSign_C) == 0x0003F0, "Wrong size on AProp_neonSign_C");
static_assert(offsetof(AProp_neonSign_C, RectLight) == 0x0003E8, "Member 'AProp_neonSign_C::RectLight' has a wrong offset!");

}
