#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_garbageBag

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_garbageBag.prop_garbageBag_C
// 0x0010 (0x0368 - 0x0358)
class AProp_garbageBag_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_garbageBag_C;                  // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         Type;                                              // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_garbageBag(int32 EntryPoint);
	void broken();
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);
	void GetPriceMultiplier(float* PriceMult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_garbageBag_C">();
	}
	static class AProp_garbageBag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_garbageBag_C>();
	}
};
static_assert(alignof(AProp_garbageBag_C) == 0x000008, "Wrong alignment on AProp_garbageBag_C");
static_assert(sizeof(AProp_garbageBag_C) == 0x000368, "Wrong size on AProp_garbageBag_C");
static_assert(offsetof(AProp_garbageBag_C, UberGraphFrame_Prop_garbageBag_C) == 0x000358, "Member 'AProp_garbageBag_C::UberGraphFrame_Prop_garbageBag_C' has a wrong offset!");
static_assert(offsetof(AProp_garbageBag_C, Type) == 0x000360, "Member 'AProp_garbageBag_C::Type' has a wrong offset!");

}
