#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_poog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_poog.prop_poog_C
// 0x0008 (0x0360 - 0x0358)
class AProp_poog_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_poog_C;                        // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_prop_poog(int32 EntryPoint);
	void PlayerHandUse_LMB(class AMainPlayer_C* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_poog_C">();
	}
	static class AProp_poog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_poog_C>();
	}
};
static_assert(alignof(AProp_poog_C) == 0x000008, "Wrong alignment on AProp_poog_C");
static_assert(sizeof(AProp_poog_C) == 0x000360, "Wrong size on AProp_poog_C");
static_assert(offsetof(AProp_poog_C, UberGraphFrame_Prop_poog_C) == 0x000358, "Member 'AProp_poog_C::UberGraphFrame_Prop_poog_C' has a wrong offset!");

}
