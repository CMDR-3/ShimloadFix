#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_pipebomb_sticky

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_pipebomb_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_pipebomb_sticky.prop_pipebomb_sticky_C
// 0x0008 (0x0380 - 0x0378)
class AProp_pipebomb_sticky_C final : public AProp_pipebomb_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_pipebomb_sticky_C;             // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_prop_pipebomb_sticky(int32 EntryPoint);
	void BndEvt__prop_pipebomb_sticky_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit_0);
	void Activate();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_pipebomb_sticky_C">();
	}
	static class AProp_pipebomb_sticky_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_pipebomb_sticky_C>();
	}
};
static_assert(alignof(AProp_pipebomb_sticky_C) == 0x000008, "Wrong alignment on AProp_pipebomb_sticky_C");
static_assert(sizeof(AProp_pipebomb_sticky_C) == 0x000380, "Wrong size on AProp_pipebomb_sticky_C");
static_assert(offsetof(AProp_pipebomb_sticky_C, UberGraphFrame_Prop_pipebomb_sticky_C) == 0x000378, "Member 'AProp_pipebomb_sticky_C::UberGraphFrame_Prop_pipebomb_sticky_C' has a wrong offset!");

}
