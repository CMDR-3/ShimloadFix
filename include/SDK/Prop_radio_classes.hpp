#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_radio

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_radio.prop_radio_C
// 0x0018 (0x0370 - 0x0358)
class AProp_radio_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_radio_C;                       // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMediaSoundComponent*                   MediaSound;                                        // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          A;                                                 // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_radio(int32 EntryPoint);
	void OpenMedia(const class FString& OpenedUrl);
	void Fail(const class FString& FailedUrl);
	void Player_use(class AMainPlayer_C* Player, const struct FHitResult& Hit_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_radio_C">();
	}
	static class AProp_radio_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_radio_C>();
	}
};
static_assert(alignof(AProp_radio_C) == 0x000008, "Wrong alignment on AProp_radio_C");
static_assert(sizeof(AProp_radio_C) == 0x000370, "Wrong size on AProp_radio_C");
static_assert(offsetof(AProp_radio_C, UberGraphFrame_Prop_radio_C) == 0x000358, "Member 'AProp_radio_C::UberGraphFrame_Prop_radio_C' has a wrong offset!");
static_assert(offsetof(AProp_radio_C, MediaSound) == 0x000360, "Member 'AProp_radio_C::MediaSound' has a wrong offset!");
static_assert(offsetof(AProp_radio_C, A) == 0x000368, "Member 'AProp_radio_C::A' has a wrong offset!");

}

