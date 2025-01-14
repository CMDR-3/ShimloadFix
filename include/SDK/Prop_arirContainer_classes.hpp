#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_arirContainer

#include "Basic.hpp"

#include "Prop_container_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_arirContainer.prop_arirContainer_C
// 0x0008 (0x03E0 - 0x03D8)
class AProp_arirContainer_C : public AProp_container_C
{
public:
	class USlapperSummoner_C*                     SlapperSummoner;                                   // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_arirContainer_C">();
	}
	static class AProp_arirContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_arirContainer_C>();
	}
};
static_assert(alignof(AProp_arirContainer_C) == 0x000008, "Wrong alignment on AProp_arirContainer_C");
static_assert(sizeof(AProp_arirContainer_C) == 0x0003E0, "Wrong size on AProp_arirContainer_C");
static_assert(offsetof(AProp_arirContainer_C, SlapperSummoner) == 0x0003D8, "Member 'AProp_arirContainer_C::SlapperSummoner' has a wrong offset!");

}

