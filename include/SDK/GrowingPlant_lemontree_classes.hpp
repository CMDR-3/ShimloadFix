#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GrowingPlant_lemontree

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GrowingPlant_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass growingPlant_lemontree.growingPlant_lemontree_C
// 0x0008 (0x0358 - 0x0350)
class AGrowingPlant_lemontree_C final : public AGrowingPlant_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GrowingPlant_lemontree_C;           // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_growingPlant_lemontree(int32 EntryPoint);
	void broken();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"growingPlant_lemontree_C">();
	}
	static class AGrowingPlant_lemontree_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGrowingPlant_lemontree_C>();
	}
};
static_assert(alignof(AGrowingPlant_lemontree_C) == 0x000008, "Wrong alignment on AGrowingPlant_lemontree_C");
static_assert(sizeof(AGrowingPlant_lemontree_C) == 0x000358, "Wrong size on AGrowingPlant_lemontree_C");
static_assert(offsetof(AGrowingPlant_lemontree_C, UberGraphFrame_GrowingPlant_lemontree_C) == 0x000350, "Member 'AGrowingPlant_lemontree_C::UberGraphFrame_GrowingPlant_lemontree_C' has a wrong offset!");

}
