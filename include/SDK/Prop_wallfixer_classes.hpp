#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wallfixer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_wallfixer.prop_wallfixer_C
// 0x0020 (0x0378 - 0x0358)
class AProp_wallfixer_C : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_wallfixer_C;                   // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AMainPlayer_C*                          Player;                                            // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Timer;                                             // 0x0368(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Cheat;                                             // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_wallfixer(int32 EntryPoint);
	void Fixing();
	void OnCompleted_281BECD94263F241FAF2969DB65721E2(class FName NotifyName);
	void OnBlendOut_281BECD94263F241FAF2969DB65721E2(class FName NotifyName);
	void OnInterrupted_281BECD94263F241FAF2969DB65721E2(class FName NotifyName);
	void OnNotifyBegin_281BECD94263F241FAF2969DB65721E2(class FName NotifyName);
	void OnNotifyEnd_281BECD94263F241FAF2969DB65721E2(class FName NotifyName);
	void PlayerHandRelease_RMB(class AMainPlayer_C* Player_0);
	void PlayerHandUse_RMB(class AMainPlayer_C* Player_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_wallfixer_C">();
	}
	static class AProp_wallfixer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_wallfixer_C>();
	}
};
static_assert(alignof(AProp_wallfixer_C) == 0x000008, "Wrong alignment on AProp_wallfixer_C");
static_assert(sizeof(AProp_wallfixer_C) == 0x000378, "Wrong size on AProp_wallfixer_C");
static_assert(offsetof(AProp_wallfixer_C, UberGraphFrame_Prop_wallfixer_C) == 0x000358, "Member 'AProp_wallfixer_C::UberGraphFrame_Prop_wallfixer_C' has a wrong offset!");
static_assert(offsetof(AProp_wallfixer_C, Player) == 0x000360, "Member 'AProp_wallfixer_C::Player' has a wrong offset!");
static_assert(offsetof(AProp_wallfixer_C, Timer) == 0x000368, "Member 'AProp_wallfixer_C::Timer' has a wrong offset!");
static_assert(offsetof(AProp_wallfixer_C, Cheat) == 0x000370, "Member 'AProp_wallfixer_C::Cheat' has a wrong offset!");

}
