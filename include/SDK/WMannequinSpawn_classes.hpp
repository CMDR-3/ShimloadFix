#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WMannequinSpawn

#include "Basic.hpp"

#include "Actor_save_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass wMannequinSpawn.wMannequinSpawn_C
// 0x0008 (0x0258 - 0x0250)
class AWMannequinSpawn_C final : public AActor_save_C
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void Spawn(bool* Return);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"wMannequinSpawn_C">();
	}
	static class AWMannequinSpawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWMannequinSpawn_C>();
	}
};
static_assert(alignof(AWMannequinSpawn_C) == 0x000008, "Wrong alignment on AWMannequinSpawn_C");
static_assert(sizeof(AWMannequinSpawn_C) == 0x000258, "Wrong size on AWMannequinSpawn_C");
static_assert(offsetof(AWMannequinSpawn_C, StaticMesh) == 0x000250, "Member 'AWMannequinSpawn_C::StaticMesh' has a wrong offset!");

}
