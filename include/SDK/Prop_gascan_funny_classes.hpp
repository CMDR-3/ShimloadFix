#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_gascan_funny

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_gascan_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_gascan_funny.prop_gascan_funny_C
// 0x0008 (0x0390 - 0x0388)
class AProp_gascan_funny_C final : public AProp_gascan_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_gascan_funny_C;                // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_prop_gascan_funny(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_gascan_funny_C">();
	}
	static class AProp_gascan_funny_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_gascan_funny_C>();
	}
};
static_assert(alignof(AProp_gascan_funny_C) == 0x000008, "Wrong alignment on AProp_gascan_funny_C");
static_assert(sizeof(AProp_gascan_funny_C) == 0x000390, "Wrong size on AProp_gascan_funny_C");
static_assert(offsetof(AProp_gascan_funny_C, UberGraphFrame_Prop_gascan_funny_C) == 0x000388, "Member 'AProp_gascan_funny_C::UberGraphFrame_Prop_gascan_funny_C' has a wrong offset!");

}
