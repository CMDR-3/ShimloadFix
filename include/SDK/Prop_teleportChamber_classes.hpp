#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_teleportChamber

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_teleportChamber.prop_teleportChamber_C
// 0x0050 (0x03A8 - 0x0358)
class AProp_teleportChamber_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_teleportChamber_C;             // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Sign2_s;                                           // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Sign1;                                             // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SpawnGrav;                                         // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UComp_radarPoint_C*                     RadarPoint;                                        // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        Decal;                                             // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor2;                                       // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor1;                                       // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor;                                        // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug;                                             // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void Spawned();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_prop_teleportChamber(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_teleportChamber_C">();
	}
	static class AProp_teleportChamber_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_teleportChamber_C>();
	}
};
static_assert(alignof(AProp_teleportChamber_C) == 0x000008, "Wrong alignment on AProp_teleportChamber_C");
static_assert(sizeof(AProp_teleportChamber_C) == 0x0003A8, "Wrong size on AProp_teleportChamber_C");
static_assert(offsetof(AProp_teleportChamber_C, UberGraphFrame_Prop_teleportChamber_C) == 0x000358, "Member 'AProp_teleportChamber_C::UberGraphFrame_Prop_teleportChamber_C' has a wrong offset!");
static_assert(offsetof(AProp_teleportChamber_C, Sign2_s) == 0x000360, "Member 'AProp_teleportChamber_C::Sign2_s' has a wrong offset!");
static_assert(offsetof(AProp_teleportChamber_C, Sign1) == 0x000368, "Member 'AProp_teleportChamber_C::Sign1' has a wrong offset!");
static_assert(offsetof(AProp_teleportChamber_C, SpawnGrav) == 0x000370, "Member 'AProp_teleportChamber_C::SpawnGrav' has a wrong offset!");
static_assert(offsetof(AProp_teleportChamber_C, RadarPoint) == 0x000378, "Member 'AProp_teleportChamber_C::RadarPoint' has a wrong offset!");
static_assert(offsetof(AProp_teleportChamber_C, Decal) == 0x000380, "Member 'AProp_teleportChamber_C::Decal' has a wrong offset!");
static_assert(offsetof(AProp_teleportChamber_C, ChildActor2) == 0x000388, "Member 'AProp_teleportChamber_C::ChildActor2' has a wrong offset!");
static_assert(offsetof(AProp_teleportChamber_C, ChildActor1) == 0x000390, "Member 'AProp_teleportChamber_C::ChildActor1' has a wrong offset!");
static_assert(offsetof(AProp_teleportChamber_C, ChildActor) == 0x000398, "Member 'AProp_teleportChamber_C::ChildActor' has a wrong offset!");
static_assert(offsetof(AProp_teleportChamber_C, Debug) == 0x0003A0, "Member 'AProp_teleportChamber_C::Debug' has a wrong offset!");

}
