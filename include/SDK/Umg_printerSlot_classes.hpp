#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_printerSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_printerSlot.umg_printerSlot_C
// 0x0038 (0x0298 - 0x0260)
class UUmg_printerSlot_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_64;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_260;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_name;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 Name_0;                                            // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UUmg_printer_C*                         Owner;                                             // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_umg_printerSlot(int32 EntryPoint);
	void BndEvt__umg_printerSlot_Button_64_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Upd();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_printerSlot_C">();
	}
	static class UUmg_printerSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_printerSlot_C>();
	}
};
static_assert(alignof(UUmg_printerSlot_C) == 0x000008, "Wrong alignment on UUmg_printerSlot_C");
static_assert(sizeof(UUmg_printerSlot_C) == 0x000298, "Wrong size on UUmg_printerSlot_C");
static_assert(offsetof(UUmg_printerSlot_C, UberGraphFrame) == 0x000260, "Member 'UUmg_printerSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUmg_printerSlot_C, Button_64) == 0x000268, "Member 'UUmg_printerSlot_C::Button_64' has a wrong offset!");
static_assert(offsetof(UUmg_printerSlot_C, Image_260) == 0x000270, "Member 'UUmg_printerSlot_C::Image_260' has a wrong offset!");
static_assert(offsetof(UUmg_printerSlot_C, Txt_name) == 0x000278, "Member 'UUmg_printerSlot_C::Txt_name' has a wrong offset!");
static_assert(offsetof(UUmg_printerSlot_C, Name_0) == 0x000280, "Member 'UUmg_printerSlot_C::Name_0' has a wrong offset!");
static_assert(offsetof(UUmg_printerSlot_C, Owner) == 0x000290, "Member 'UUmg_printerSlot_C::Owner' has a wrong offset!");

}
