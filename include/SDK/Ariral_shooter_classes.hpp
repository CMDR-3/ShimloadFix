#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ariral_shooter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ariral_shooter.ariral_shooter_C
// 0x0060 (0x0520 - 0x04C0)
class AAriral_shooter_C final : public ACharacter
{
public:
	uint8                                         Pad_4B8[0x8];                                      // 0x04B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        Scene;                                             // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Gun;                                               // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       ShootRange;                                        // 0x04D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       SenseRange;                                        // 0x04E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        ShootDir;                                          // 0x04E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Target;                                            // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Moving;                                            // 0x04F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F9[0x7];                                      // 0x04F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_funGun_C*                         Fungun;                                            // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RunAway;                                           // 0x0508(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_509[0x7];                                      // 0x0509(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 LockTarget;                                        // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ATreehouse_C*                           Treehouse;                                         // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ariral_shooter(int32 EntryPoint);
	void Step();
	void ReceiveDestroyed();
	void Dest(class AActor* DestroyedActor);
	void ReceiveTick(float DeltaSeconds);
	void CustomEvent();
	void Sense();
	void ReceiveBeginPlay();
	void OnSuccess_97521B184370B362B6F0F29B77285D28(EPathFollowingResult MovementResult);
	void OnFail_97521B184370B362B6F0F29B77285D28(EPathFollowingResult MovementResult);
	void OnSuccess_32391C0A458BC83640C1FFB19837E472(EPathFollowingResult MovementResult);
	void OnFail_32391C0A458BC83640C1FFB19837E472(EPathFollowingResult MovementResult);
	void See(const class AActor* Item, class AActor** Detected);
	struct FVector FindLookVector();
	void Ariral_shooter_AutoGenFunc(class UObject* ObjectA, class UObject* ObjectB, bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ariral_shooter_C">();
	}
	static class AAriral_shooter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAriral_shooter_C>();
	}
};
static_assert(alignof(AAriral_shooter_C) == 0x000010, "Wrong alignment on AAriral_shooter_C");
static_assert(sizeof(AAriral_shooter_C) == 0x000520, "Wrong size on AAriral_shooter_C");
static_assert(offsetof(AAriral_shooter_C, UberGraphFrame) == 0x0004C0, "Member 'AAriral_shooter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAriral_shooter_C, Scene) == 0x0004C8, "Member 'AAriral_shooter_C::Scene' has a wrong offset!");
static_assert(offsetof(AAriral_shooter_C, Gun) == 0x0004D0, "Member 'AAriral_shooter_C::Gun' has a wrong offset!");
static_assert(offsetof(AAriral_shooter_C, ShootRange) == 0x0004D8, "Member 'AAriral_shooter_C::ShootRange' has a wrong offset!");
static_assert(offsetof(AAriral_shooter_C, SenseRange) == 0x0004E0, "Member 'AAriral_shooter_C::SenseRange' has a wrong offset!");
static_assert(offsetof(AAriral_shooter_C, ShootDir) == 0x0004E8, "Member 'AAriral_shooter_C::ShootDir' has a wrong offset!");
static_assert(offsetof(AAriral_shooter_C, Target) == 0x0004F0, "Member 'AAriral_shooter_C::Target' has a wrong offset!");
static_assert(offsetof(AAriral_shooter_C, Moving) == 0x0004F8, "Member 'AAriral_shooter_C::Moving' has a wrong offset!");
static_assert(offsetof(AAriral_shooter_C, Fungun) == 0x000500, "Member 'AAriral_shooter_C::Fungun' has a wrong offset!");
static_assert(offsetof(AAriral_shooter_C, RunAway) == 0x000508, "Member 'AAriral_shooter_C::RunAway' has a wrong offset!");
static_assert(offsetof(AAriral_shooter_C, LockTarget) == 0x000510, "Member 'AAriral_shooter_C::LockTarget' has a wrong offset!");
static_assert(offsetof(AAriral_shooter_C, Treehouse) == 0x000518, "Member 'AAriral_shooter_C::Treehouse' has a wrong offset!");

}
