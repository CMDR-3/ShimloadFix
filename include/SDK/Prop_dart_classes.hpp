#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_dart

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_dart.prop_dart_C
// 0x0018 (0x0370 - 0x0358)
class AProp_dart_C : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_dart_C;                        // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVelocityStuck_C*                       VelocityStuck;                                     // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_dart(int32 EntryPoint);
	void BndEvt__prop_dart_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit_0);
	void Throw();
	void Thrown(class AMainPlayer_C* Player);
	void Afterplay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_dart_C">();
	}
	static class AProp_dart_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_dart_C>();
	}
};
static_assert(alignof(AProp_dart_C) == 0x000008, "Wrong alignment on AProp_dart_C");
static_assert(sizeof(AProp_dart_C) == 0x000370, "Wrong size on AProp_dart_C");
static_assert(offsetof(AProp_dart_C, UberGraphFrame_Prop_dart_C) == 0x000358, "Member 'AProp_dart_C::UberGraphFrame_Prop_dart_C' has a wrong offset!");
static_assert(offsetof(AProp_dart_C, VelocityStuck) == 0x000360, "Member 'AProp_dart_C::VelocityStuck' has a wrong offset!");
static_assert(offsetof(AProp_dart_C, Active) == 0x000368, "Member 'AProp_dart_C::Active' has a wrong offset!");

}
