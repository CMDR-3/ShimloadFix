#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FallingBody

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass fallingBody.fallingBody_C
// 0x0038 (0x0258 - 0x0220)
class AFallingBody_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Hollow1;                                           // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Prev;                                              // 0x0238(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_244[0x4];                                      // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           Drop;                                              // 0x0248(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_fallingBody(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"fallingBody_C">();
	}
	static class AFallingBody_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFallingBody_C>();
	}
};
static_assert(alignof(AFallingBody_C) == 0x000008, "Wrong alignment on AFallingBody_C");
static_assert(sizeof(AFallingBody_C) == 0x000258, "Wrong size on AFallingBody_C");
static_assert(offsetof(AFallingBody_C, UberGraphFrame) == 0x000220, "Member 'AFallingBody_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFallingBody_C, Hollow1) == 0x000228, "Member 'AFallingBody_C::Hollow1' has a wrong offset!");
static_assert(offsetof(AFallingBody_C, Sphere) == 0x000230, "Member 'AFallingBody_C::Sphere' has a wrong offset!");
static_assert(offsetof(AFallingBody_C, Prev) == 0x000238, "Member 'AFallingBody_C::Prev' has a wrong offset!");
static_assert(offsetof(AFallingBody_C, Drop) == 0x000248, "Member 'AFallingBody_C::Drop' has a wrong offset!");

}

