#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Int_wire

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass int_wire.int_wire_C
// 0x0000 (0x0028 - 0x0028)
class IInt_wire_C final : public IInterface
{
public:
	void WirePass(class AWire_C* Wire);
	void WireConnected(class AWire_C* Wire, bool Side);
	void WireDisconnected(class AWire_C* Wire, bool Side);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"int_wire_C">();
	}
	static class IInt_wire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IInt_wire_C>();
	}
};
static_assert(alignof(IInt_wire_C) == 0x000008, "Wrong alignment on IInt_wire_C");
static_assert(sizeof(IInt_wire_C) == 0x000028, "Wrong size on IInt_wire_C");

}
