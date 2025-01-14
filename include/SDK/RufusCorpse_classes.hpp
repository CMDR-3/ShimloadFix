#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RufusCorpse

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass rufusCorpse.rufusCorpse_C
// 0x0010 (0x0230 - 0x0220)
class ARufusCorpse_C final : public AActor
{
public:
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"rufusCorpse_C">();
	}
	static class ARufusCorpse_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARufusCorpse_C>();
	}
};
static_assert(alignof(ARufusCorpse_C) == 0x000008, "Wrong alignment on ARufusCorpse_C");
static_assert(sizeof(ARufusCorpse_C) == 0x000230, "Wrong size on ARufusCorpse_C");
static_assert(offsetof(ARufusCorpse_C, SkeletalMesh) == 0x000220, "Member 'ARufusCorpse_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ARufusCorpse_C, Scene) == 0x000228, "Member 'ARufusCorpse_C::Scene' has a wrong offset!");

}

