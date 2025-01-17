#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PreLoad

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass preLoad.preLoad_C
// 0x0008 (0x0230 - 0x0228)
class APreLoad_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_preLoad(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"preLoad_C">();
	}
	static class APreLoad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APreLoad_C>();
	}
};
static_assert(alignof(APreLoad_C) == 0x000008, "Wrong alignment on APreLoad_C");
static_assert(sizeof(APreLoad_C) == 0x000230, "Wrong size on APreLoad_C");
static_assert(offsetof(APreLoad_C, UberGraphFrame) == 0x000228, "Member 'APreLoad_C::UberGraphFrame' has a wrong offset!");

}

