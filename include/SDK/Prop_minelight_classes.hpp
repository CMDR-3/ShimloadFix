#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_minelight

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_minelight.prop_minelight_C
// 0x0028 (0x0380 - 0x0358)
class AProp_minelight_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_minelight_C;                   // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight;                                        // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    Two;                                               // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    One;                                               // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          On;                                                // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void Upd();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_prop_minelight(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_minelight_C">();
	}
	static class AProp_minelight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_minelight_C>();
	}
};
static_assert(alignof(AProp_minelight_C) == 0x000008, "Wrong alignment on AProp_minelight_C");
static_assert(sizeof(AProp_minelight_C) == 0x000380, "Wrong size on AProp_minelight_C");
static_assert(offsetof(AProp_minelight_C, UberGraphFrame_Prop_minelight_C) == 0x000358, "Member 'AProp_minelight_C::UberGraphFrame_Prop_minelight_C' has a wrong offset!");
static_assert(offsetof(AProp_minelight_C, PointLight) == 0x000360, "Member 'AProp_minelight_C::PointLight' has a wrong offset!");
static_assert(offsetof(AProp_minelight_C, Two) == 0x000368, "Member 'AProp_minelight_C::Two' has a wrong offset!");
static_assert(offsetof(AProp_minelight_C, One) == 0x000370, "Member 'AProp_minelight_C::One' has a wrong offset!");
static_assert(offsetof(AProp_minelight_C, On) == 0x000378, "Member 'AProp_minelight_C::On' has a wrong offset!");

}

