#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_cookingFood_doughBurger

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_cookingFood_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_cookingFood_doughBurger.prop_cookingFood_doughBurger_C
// 0x0008 (0x03E8 - 0x03E0)
class AProp_cookingFood_doughBurger_C final : public AProp_cookingFood_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_cookingFood_doughBurger_C;     // 0x03E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_prop_cookingFood_doughBurger(int32 EntryPoint);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, Enum_interactionActions Action);
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_cookingFood_doughBurger_C">();
	}
	static class AProp_cookingFood_doughBurger_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_cookingFood_doughBurger_C>();
	}
};
static_assert(alignof(AProp_cookingFood_doughBurger_C) == 0x000008, "Wrong alignment on AProp_cookingFood_doughBurger_C");
static_assert(sizeof(AProp_cookingFood_doughBurger_C) == 0x0003E8, "Wrong size on AProp_cookingFood_doughBurger_C");
static_assert(offsetof(AProp_cookingFood_doughBurger_C, UberGraphFrame_Prop_cookingFood_doughBurger_C) == 0x0003E0, "Member 'AProp_cookingFood_doughBurger_C::UberGraphFrame_Prop_cookingFood_doughBurger_C' has a wrong offset!");

}
