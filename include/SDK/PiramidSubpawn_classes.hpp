#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PiramidSubpawn

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass piramidSubpawn.piramidSubpawn_C
// 0x0018 (0x0298 - 0x0280)
class APiramidSubpawn_C final : public APawn
{
public:
	class UStaticMeshComponent*                   Sphere;                                            // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFloatingPawnMovement*                  FloatingPawnMovement;                              // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"piramidSubpawn_C">();
	}
	static class APiramidSubpawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APiramidSubpawn_C>();
	}
};
static_assert(alignof(APiramidSubpawn_C) == 0x000008, "Wrong alignment on APiramidSubpawn_C");
static_assert(sizeof(APiramidSubpawn_C) == 0x000298, "Wrong size on APiramidSubpawn_C");
static_assert(offsetof(APiramidSubpawn_C, Sphere) == 0x000280, "Member 'APiramidSubpawn_C::Sphere' has a wrong offset!");
static_assert(offsetof(APiramidSubpawn_C, FloatingPawnMovement) == 0x000288, "Member 'APiramidSubpawn_C::FloatingPawnMovement' has a wrong offset!");
static_assert(offsetof(APiramidSubpawn_C, DefaultSceneRoot) == 0x000290, "Member 'APiramidSubpawn_C::DefaultSceneRoot' has a wrong offset!");

}
