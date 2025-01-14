#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VoidModInstance

#include "Basic.hpp"

#include "VoidMod_CustomVariable_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "SlateCore_structs.hpp"
#include "VoidMod_CustomActor_structs.hpp"
#include "VoidMod_Mod_structs.hpp"
#include "VoidMod_ConfigVariable_structs.hpp"
#include "VoidMod_CustomEvent_structs.hpp"
#include "VoidMod_CustomCommandData_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass VoidModInstance.VoidModInstance_C
// 0x0108 (0x0328 - 0x0220)
class AVoidModInstance_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVoidMod_Mod>                   LoadedMods;                                        // 0x0230(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVoidMod_CustomActor>           LoadedActors;                                      // 0x0240(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVoidMod_CustomEvent>           LoadedEvents;                                      // 0x0250(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVoidMod_CustomCommandData>     LoadedCommands;                                    // 0x0260(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVoidMod_ConfigVariable>        ConfigValues;                                      // 0x0270(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UCustom_menu_C*                         MenuUI;                                            // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 VoidModVersion;                                    // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          LastFramePaused;                                   // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_299[0x7];                                      // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnConfigurationUpdated;                            // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USpawnlist_C*                           SpawnListUI;                                       // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SpawnListOpen;                                     // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnTerminalCommand;                                 // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FString>                         ConsoleLog;                                        // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         EventTimer;                                        // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NextEventTime;                                     // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxEventWeight;                                    // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentCheckEventWeight;                           // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LastWholeTimerNumber;                              // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F4[0x4];                                      // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVoidMod_CustomVariable>        SaveCustomVariables;                               // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsSaving;                                          // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_309[0x7];                                      // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVoidMod_ConfigVariable>        DefaultConfigVals;                                 // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          InterceptTerminalHandler;                          // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void CallNewSaveFunctions();
	void HandleTerminalCommand(const class FText& Text, ETextCommit CommitMethod);
	void CreateCustomMenu(int32 Layer);
	void UpdateLoadedModCount(bool ShowHint);
	void SetDefaultConfigValues();
	void InitializeVoidMod();
	void InpActEvt_Tilde_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Tilde_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_F7_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_F8_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_F9_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void HandleEvents(float DeltaSeconds);
	void OnGameUnpaused();
	void OnGamePaused();
	void DeferModCount(bool ShowHint, float Delay);
	void ReceiveTick(float DeltaSeconds);
	void OnGameSave();
	void ExecuteUbergraph_VoidModInstance(int32 EntryPoint);
	void OnTerminalCommand__DelegateSignature(const class FString& Command, const class FString& Params_0);
	void OnConfigurationUpdated__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VoidModInstance_C">();
	}
	static class AVoidModInstance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVoidModInstance_C>();
	}
};
static_assert(alignof(AVoidModInstance_C) == 0x000008, "Wrong alignment on AVoidModInstance_C");
static_assert(sizeof(AVoidModInstance_C) == 0x000328, "Wrong size on AVoidModInstance_C");
static_assert(offsetof(AVoidModInstance_C, UberGraphFrame) == 0x000220, "Member 'AVoidModInstance_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AVoidModInstance_C, DefaultSceneRoot) == 0x000228, "Member 'AVoidModInstance_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AVoidModInstance_C, LoadedMods) == 0x000230, "Member 'AVoidModInstance_C::LoadedMods' has a wrong offset!");
static_assert(offsetof(AVoidModInstance_C, LoadedActors) == 0x000240, "Member 'AVoidModInstance_C::LoadedActors' has a wrong offset!");
static_assert(offsetof(AVoidModInstance_C, LoadedEvents) == 0x000250, "Member 'AVoidModInstance_C::LoadedEvents' has a wrong offset!");
static_assert(offsetof(AVoidModInstance_C, LoadedCommands) == 0x000260, "Member 'AVoidModInstance_C::LoadedCommands' has a wrong offset!");
static_assert(offsetof(AVoidModInstance_C, ConfigValues) == 0x000270, "Member 'AVoidModInstance_C::ConfigValues' has a wrong offset!");
static_assert(offsetof(AVoidModInstance_C, MenuUI) == 0x000280, "Member 'AVoidModInstance_C::MenuUI' has a wrong offset!");
static_assert(offsetof(AVoidModInstance_C, VoidModVersion) == 0x000288, "Member 'AVoidModInstance_C::VoidModVersion' has a wrong offset!");
static_assert(offsetof(AVoidModInstance_C, LastFramePaused) == 0x000298, "Member 'AVoidModInstance_C::LastFramePaused' has a wrong offset!");
static_assert(offsetof(AVoidModInstance_C, OnConfigurationUpdated) == 0x0002A0, "Member 'AVoidModInstance_C::OnConfigurationUpdated' has a wrong offset!");
static_assert(offsetof(AVoidModInstance_C, SpawnListUI) == 0x0002B0, "Member 'AVoidModInstance_C::SpawnListUI' has a wrong offset!");
static_assert(offsetof(AVoidModInstance_C, SpawnListOpen) == 0x0002B8, "Member 'AVoidModInstance_C::SpawnListOpen' has a wrong offset!");
static_assert(offsetof(AVoidModInstance_C, OnTerminalCommand) == 0x0002C0, "Member 'AVoidModInstance_C::OnTerminalCommand' has a wrong offset!");
static_assert(offsetof(AVoidModInstance_C, ConsoleLog) == 0x0002D0, "Member 'AVoidModInstance_C::ConsoleLog' has a wrong offset!");
static_assert(offsetof(AVoidModInstance_C, EventTimer) == 0x0002E0, "Member 'AVoidModInstance_C::EventTimer' has a wrong offset!");
static_assert(offsetof(AVoidModInstance_C, NextEventTime) == 0x0002E4, "Member 'AVoidModInstance_C::NextEventTime' has a wrong offset!");
static_assert(offsetof(AVoidModInstance_C, MaxEventWeight) == 0x0002E8, "Member 'AVoidModInstance_C::MaxEventWeight' has a wrong offset!");
static_assert(offsetof(AVoidModInstance_C, CurrentCheckEventWeight) == 0x0002EC, "Member 'AVoidModInstance_C::CurrentCheckEventWeight' has a wrong offset!");
static_assert(offsetof(AVoidModInstance_C, LastWholeTimerNumber) == 0x0002F0, "Member 'AVoidModInstance_C::LastWholeTimerNumber' has a wrong offset!");
static_assert(offsetof(AVoidModInstance_C, SaveCustomVariables) == 0x0002F8, "Member 'AVoidModInstance_C::SaveCustomVariables' has a wrong offset!");
static_assert(offsetof(AVoidModInstance_C, IsSaving) == 0x000308, "Member 'AVoidModInstance_C::IsSaving' has a wrong offset!");
static_assert(offsetof(AVoidModInstance_C, DefaultConfigVals) == 0x000310, "Member 'AVoidModInstance_C::DefaultConfigVals' has a wrong offset!");
static_assert(offsetof(AVoidModInstance_C, InterceptTerminalHandler) == 0x000320, "Member 'AVoidModInstance_C::InterceptTerminalHandler' has a wrong offset!");

}

