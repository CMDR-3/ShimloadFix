#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Int_animEvents

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass int_animEvents.int_animEvents_C
// 0x0000 (0x0028 - 0x0028)
class IInt_animEvents_C final : public IInterface
{
public:
	void Step();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"int_animEvents_C">();
	}
	static class IInt_animEvents_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IInt_animEvents_C>();
	}
};
static_assert(alignof(IInt_animEvents_C) == 0x000008, "Wrong alignment on IInt_animEvents_C");
static_assert(sizeof(IInt_animEvents_C) == 0x000028, "Wrong size on IInt_animEvents_C");

}
