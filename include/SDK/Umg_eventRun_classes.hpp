#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_eventRun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_eventRun.umg_eventRun_C
// 0x0028 (0x0288 - 0x0260)
class UUmg_eventRun_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_0;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Tex_name;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 Name_0;                                            // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_umg_eventRun(int32 EntryPoint);
	void Construct();
	void BndEvt__umg_placeTp_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_eventRun_C">();
	}
	static class UUmg_eventRun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_eventRun_C>();
	}
};
static_assert(alignof(UUmg_eventRun_C) == 0x000008, "Wrong alignment on UUmg_eventRun_C");
static_assert(sizeof(UUmg_eventRun_C) == 0x000288, "Wrong size on UUmg_eventRun_C");
static_assert(offsetof(UUmg_eventRun_C, UberGraphFrame) == 0x000260, "Member 'UUmg_eventRun_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUmg_eventRun_C, Button_0) == 0x000268, "Member 'UUmg_eventRun_C::Button_0' has a wrong offset!");
static_assert(offsetof(UUmg_eventRun_C, Tex_name) == 0x000270, "Member 'UUmg_eventRun_C::Tex_name' has a wrong offset!");
static_assert(offsetof(UUmg_eventRun_C, Name_0) == 0x000278, "Member 'UUmg_eventRun_C::Name_0' has a wrong offset!");

}

