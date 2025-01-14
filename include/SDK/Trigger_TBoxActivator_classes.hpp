#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trigger_TBoxActivator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TriggerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass trigger_TBoxActivator.trigger_TBoxActivator_C
// 0x0020 (0x02B0 - 0x0290)
class ATrigger_TBoxActivator_C final : public ATriggerBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Trigger_TBoxActivator_C;            // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ATrigger_box_C*                         Triggerbox;                                        // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 TriggerBoxKey;                                     // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

public:
	void GetTriggerData(struct FStruct_triggerSave* Data);
	void LoadTriggerData(const struct FStruct_triggerSave& Data, bool* Return);
	void UserConstructionScript();
	void RunTrigger(class AActor* Owner_0, int32 Index_0);
	void GamemodeMakeKeys();
	void ExecuteUbergraph_trigger_TBoxActivator(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"trigger_TBoxActivator_C">();
	}
	static class ATrigger_TBoxActivator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATrigger_TBoxActivator_C>();
	}
};
static_assert(alignof(ATrigger_TBoxActivator_C) == 0x000008, "Wrong alignment on ATrigger_TBoxActivator_C");
static_assert(sizeof(ATrigger_TBoxActivator_C) == 0x0002B0, "Wrong size on ATrigger_TBoxActivator_C");
static_assert(offsetof(ATrigger_TBoxActivator_C, UberGraphFrame_Trigger_TBoxActivator_C) == 0x000290, "Member 'ATrigger_TBoxActivator_C::UberGraphFrame_Trigger_TBoxActivator_C' has a wrong offset!");
static_assert(offsetof(ATrigger_TBoxActivator_C, Triggerbox) == 0x000298, "Member 'ATrigger_TBoxActivator_C::Triggerbox' has a wrong offset!");
static_assert(offsetof(ATrigger_TBoxActivator_C, TriggerBoxKey) == 0x0002A0, "Member 'ATrigger_TBoxActivator_C::TriggerBoxKey' has a wrong offset!");

}

