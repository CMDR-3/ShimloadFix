#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_bloodGib

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_food_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_bloodGib.prop_bloodGib_C
// 0x0008 (0x03B8 - 0x03B0)
class AProp_bloodGib_C : public AProp_food_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_bloodGib_C;                    // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_prop_bloodGib(int32 EntryPoint);
	void BndEvt__prop_bloodGib_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit_0);
	void ReceiveBeginPlay();
	void Slice(bool Clean);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_bloodGib_C">();
	}
	static class AProp_bloodGib_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_bloodGib_C>();
	}
};
static_assert(alignof(AProp_bloodGib_C) == 0x000008, "Wrong alignment on AProp_bloodGib_C");
static_assert(sizeof(AProp_bloodGib_C) == 0x0003B8, "Wrong size on AProp_bloodGib_C");
static_assert(offsetof(AProp_bloodGib_C, UberGraphFrame_Prop_bloodGib_C) == 0x0003B0, "Member 'AProp_bloodGib_C::UberGraphFrame_Prop_bloodGib_C' has a wrong offset!");

}
