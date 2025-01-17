#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_rope

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_rope.prop_rope_C
// 0x00A8 (0x0400 - 0x0358)
class AProp_rope_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_rope_C;                        // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 Connect_A;                                         // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Connect_B;                                         // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit_A;                                             // 0x0370(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class ARope_C*                                ActiveRope;                                        // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_rope(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void PlayerHandUse_LMB(class AMainPlayer_C* Player);
	void PlayerHandRelease_LMB(class AMainPlayer_C* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_rope_C">();
	}
	static class AProp_rope_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_rope_C>();
	}
};
static_assert(alignof(AProp_rope_C) == 0x000008, "Wrong alignment on AProp_rope_C");
static_assert(sizeof(AProp_rope_C) == 0x000400, "Wrong size on AProp_rope_C");
static_assert(offsetof(AProp_rope_C, UberGraphFrame_Prop_rope_C) == 0x000358, "Member 'AProp_rope_C::UberGraphFrame_Prop_rope_C' has a wrong offset!");
static_assert(offsetof(AProp_rope_C, Connect_A) == 0x000360, "Member 'AProp_rope_C::Connect_A' has a wrong offset!");
static_assert(offsetof(AProp_rope_C, Connect_B) == 0x000368, "Member 'AProp_rope_C::Connect_B' has a wrong offset!");
static_assert(offsetof(AProp_rope_C, Hit_A) == 0x000370, "Member 'AProp_rope_C::Hit_A' has a wrong offset!");
static_assert(offsetof(AProp_rope_C, ActiveRope) == 0x0003F8, "Member 'AProp_rope_C::ActiveRope' has a wrong offset!");

}

