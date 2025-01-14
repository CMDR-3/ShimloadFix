#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_radArgem_3

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_radArgem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_radArgem_3.prop_radArgem_3_C
// 0x0010 (0x0398 - 0x0388)
class AProp_radArgem_3_C final : public AProp_radArgem_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_radArgem_3_C;                  // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          B;                                                 // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_radArgem_3(int32 EntryPoint);
	void Ht();
	void Set();
	void GamemodeBeginPlay();
	void ReceiveBeginPlay();
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_radArgem_3_C">();
	}
	static class AProp_radArgem_3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_radArgem_3_C>();
	}
};
static_assert(alignof(AProp_radArgem_3_C) == 0x000008, "Wrong alignment on AProp_radArgem_3_C");
static_assert(sizeof(AProp_radArgem_3_C) == 0x000398, "Wrong size on AProp_radArgem_3_C");
static_assert(offsetof(AProp_radArgem_3_C, UberGraphFrame_Prop_radArgem_3_C) == 0x000388, "Member 'AProp_radArgem_3_C::UberGraphFrame_Prop_radArgem_3_C' has a wrong offset!");
static_assert(offsetof(AProp_radArgem_3_C, B) == 0x000390, "Member 'AProp_radArgem_3_C::B' has a wrong offset!");

}

