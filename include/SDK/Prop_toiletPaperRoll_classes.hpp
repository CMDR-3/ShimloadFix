#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_toiletPaperRoll

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_toiletPaperRoll.prop_toiletPaperRoll_C
// 0x0010 (0x0368 - 0x0358)
class AProp_toiletPaperRoll_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_toiletPaperRoll_C;             // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         Sheets;                                            // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_toiletPaperRoll(int32 EntryPoint);
	void BndEvt__prop_poo_physicsImpact_K2Node_ComponentBoundEvent_1_hitEvent__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit_0);
	void Player_use(class AMainPlayer_C* Player, const struct FHitResult& Hit_0);
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_toiletPaperRoll_C">();
	}
	static class AProp_toiletPaperRoll_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_toiletPaperRoll_C>();
	}
};
static_assert(alignof(AProp_toiletPaperRoll_C) == 0x000008, "Wrong alignment on AProp_toiletPaperRoll_C");
static_assert(sizeof(AProp_toiletPaperRoll_C) == 0x000368, "Wrong size on AProp_toiletPaperRoll_C");
static_assert(offsetof(AProp_toiletPaperRoll_C, UberGraphFrame_Prop_toiletPaperRoll_C) == 0x000358, "Member 'AProp_toiletPaperRoll_C::UberGraphFrame_Prop_toiletPaperRoll_C' has a wrong offset!");
static_assert(offsetof(AProp_toiletPaperRoll_C, Sheets) == 0x000360, "Member 'AProp_toiletPaperRoll_C::Sheets' has a wrong offset!");

}

