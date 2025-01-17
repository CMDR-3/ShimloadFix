#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_carKeys

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_carKeys.prop_carKeys_C
// 0x0008 (0x0360 - 0x0358)
class AProp_carKeys_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_carKeys_C;                     // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_prop_carKeys(int32 EntryPoint);
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_carKeys_C">();
	}
	static class AProp_carKeys_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_carKeys_C>();
	}
};
static_assert(alignof(AProp_carKeys_C) == 0x000008, "Wrong alignment on AProp_carKeys_C");
static_assert(sizeof(AProp_carKeys_C) == 0x000360, "Wrong size on AProp_carKeys_C");
static_assert(offsetof(AProp_carKeys_C, UberGraphFrame_Prop_carKeys_C) == 0x000358, "Member 'AProp_carKeys_C::UberGraphFrame_Prop_carKeys_C' has a wrong offset!");

}

