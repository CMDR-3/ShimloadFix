#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_puffballMature

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_food_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_puffballMature.prop_puffballMature_C
// 0x0010 (0x03C0 - 0x03B0)
class AProp_puffballMature_C final : public AProp_food_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_puffballMature_C;              // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Nuclear;                                           // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_puffballMature(int32 EntryPoint);
	void AttemptExplode();
	void ToggleNuclear(bool Nuclear_0);
	void ReceiveBeginPlay();
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, Enum_interactionActions Action);
	void broken();
	void broken_fire();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_puffballMature_C">();
	}
	static class AProp_puffballMature_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_puffballMature_C>();
	}
};
static_assert(alignof(AProp_puffballMature_C) == 0x000008, "Wrong alignment on AProp_puffballMature_C");
static_assert(sizeof(AProp_puffballMature_C) == 0x0003C0, "Wrong size on AProp_puffballMature_C");
static_assert(offsetof(AProp_puffballMature_C, UberGraphFrame_Prop_puffballMature_C) == 0x0003B0, "Member 'AProp_puffballMature_C::UberGraphFrame_Prop_puffballMature_C' has a wrong offset!");
static_assert(offsetof(AProp_puffballMature_C, Nuclear) == 0x0003B8, "Member 'AProp_puffballMature_C::Nuclear' has a wrong offset!");

}

