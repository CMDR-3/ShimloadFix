#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Int_save1

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass int_save1.int_save1_C
// 0x0000 (0x0028 - 0x0028)
class IInt_save1_C final : public IInterface
{
public:
	void GetData(struct FStruct_save* Data);
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void IgnoreSave(bool* IgnoreSave_0);
	void SetIgnoreSave(bool Ignore);
	void SkipPreDelete(bool* Skip);
	void GatherDataFromKey(bool* Gather);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"int_save1_C">();
	}
	static class IInt_save1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IInt_save1_C>();
	}
};
static_assert(alignof(IInt_save1_C) == 0x000008, "Wrong alignment on IInt_save1_C");
static_assert(sizeof(IInt_save1_C) == 0x000028, "Wrong size on IInt_save1_C");

}
