#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CentipedeSegmet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass centipedeSegmet.centipedeSegmet_C
// 0x0038 (0x0258 - 0x0220)
class ACentipedeSegmet_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UComp_radarPoint_C*                     RadarPoint;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Speed;                                             // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Pos;                                               // 0x024C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Neck;                                              // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_251[0x3];                                      // 0x0251(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         I;                                                 // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_centipedeSegmet(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Set();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"centipedeSegmet_C">();
	}
	static class ACentipedeSegmet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACentipedeSegmet_C>();
	}
};
static_assert(alignof(ACentipedeSegmet_C) == 0x000008, "Wrong alignment on ACentipedeSegmet_C");
static_assert(sizeof(ACentipedeSegmet_C) == 0x000258, "Wrong size on ACentipedeSegmet_C");
static_assert(offsetof(ACentipedeSegmet_C, UberGraphFrame) == 0x000220, "Member 'ACentipedeSegmet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ACentipedeSegmet_C, RadarPoint) == 0x000228, "Member 'ACentipedeSegmet_C::RadarPoint' has a wrong offset!");
static_assert(offsetof(ACentipedeSegmet_C, Box) == 0x000230, "Member 'ACentipedeSegmet_C::Box' has a wrong offset!");
static_assert(offsetof(ACentipedeSegmet_C, SkeletalMesh) == 0x000238, "Member 'ACentipedeSegmet_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ACentipedeSegmet_C, StaticMesh) == 0x000240, "Member 'ACentipedeSegmet_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ACentipedeSegmet_C, Speed) == 0x000248, "Member 'ACentipedeSegmet_C::Speed' has a wrong offset!");
static_assert(offsetof(ACentipedeSegmet_C, Pos) == 0x00024C, "Member 'ACentipedeSegmet_C::Pos' has a wrong offset!");
static_assert(offsetof(ACentipedeSegmet_C, Neck) == 0x000250, "Member 'ACentipedeSegmet_C::Neck' has a wrong offset!");
static_assert(offsetof(ACentipedeSegmet_C, I) == 0x000254, "Member 'ACentipedeSegmet_C::I' has a wrong offset!");

}
