#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SingleRoach

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass singleRoach.singleRoach_C
// 0x0010 (0x0230 - 0x0220)
class ASingleRoach_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_singleRoach(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"singleRoach_C">();
	}
	static class ASingleRoach_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASingleRoach_C>();
	}
};
static_assert(alignof(ASingleRoach_C) == 0x000008, "Wrong alignment on ASingleRoach_C");
static_assert(sizeof(ASingleRoach_C) == 0x000230, "Wrong size on ASingleRoach_C");
static_assert(offsetof(ASingleRoach_C, UberGraphFrame) == 0x000220, "Member 'ASingleRoach_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASingleRoach_C, DefaultSceneRoot) == 0x000228, "Member 'ASingleRoach_C::DefaultSceneRoot' has a wrong offset!");

}

