#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_fungunAmmo

#include "Basic.hpp"

#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_fungunAmmo.prop_fungunAmmo_C
// 0x0008 (0x0360 - 0x0358)
class AProp_fungunAmmo_C : public AProp_C
{
public:
	int32                                         Amount;                                            // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetData(struct FStruct_save* Data);
	void LoadData(const struct FStruct_save& Data, bool* Return);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_fungunAmmo_C">();
	}
	static class AProp_fungunAmmo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_fungunAmmo_C>();
	}
};
static_assert(alignof(AProp_fungunAmmo_C) == 0x000008, "Wrong alignment on AProp_fungunAmmo_C");
static_assert(sizeof(AProp_fungunAmmo_C) == 0x000360, "Wrong size on AProp_fungunAmmo_C");
static_assert(offsetof(AProp_fungunAmmo_C, Amount) == 0x000358, "Member 'AProp_fungunAmmo_C::Amount' has a wrong offset!");

}

