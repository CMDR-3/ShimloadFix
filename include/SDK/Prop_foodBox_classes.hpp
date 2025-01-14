#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_foodBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_food_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_foodBox.prop_foodBox_C
// 0x0008 (0x03B8 - 0x03B0)
class AProp_foodBox_C final : public AProp_food_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_foodBox_C;                     // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_prop_foodBox(int32 EntryPoint);
	void Eaten();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_foodBox_C">();
	}
	static class AProp_foodBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_foodBox_C>();
	}
};
static_assert(alignof(AProp_foodBox_C) == 0x000008, "Wrong alignment on AProp_foodBox_C");
static_assert(sizeof(AProp_foodBox_C) == 0x0003B8, "Wrong size on AProp_foodBox_C");
static_assert(offsetof(AProp_foodBox_C, UberGraphFrame_Prop_foodBox_C) == 0x0003B0, "Member 'AProp_foodBox_C::UberGraphFrame_Prop_foodBox_C' has a wrong offset!");

}

