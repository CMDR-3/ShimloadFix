#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mann

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass mann.mann_C
// 0x0030 (0x04F0 - 0x04C0)
class AMann_C final : public ACharacter
{
public:
	uint8                                         Pad_4B8[0x8];                                      // 0x04B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USpringArmComponent*                    SpringArm;                                         // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      A;                                                 // 0x04D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Dist;                                              // 0x04E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_mann(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"mann_C">();
	}
	static class AMann_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMann_C>();
	}
};
static_assert(alignof(AMann_C) == 0x000010, "Wrong alignment on AMann_C");
static_assert(sizeof(AMann_C) == 0x0004F0, "Wrong size on AMann_C");
static_assert(offsetof(AMann_C, UberGraphFrame) == 0x0004C0, "Member 'AMann_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AMann_C, SpringArm) == 0x0004C8, "Member 'AMann_C::SpringArm' has a wrong offset!");
static_assert(offsetof(AMann_C, A) == 0x0004D0, "Member 'AMann_C::A' has a wrong offset!");
static_assert(offsetof(AMann_C, Dist) == 0x0004E0, "Member 'AMann_C::Dist' has a wrong offset!");

}

