#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_signalMenuSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_signalMenuSlot.umg_signalMenuSlot_C
// 0x0058 (0x02B8 - 0x0260)
class UUmg_signalMenuSlot_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_lvl0;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_lvl1;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_lvl2;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_lvl3;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_116;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_ind;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_name;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_prob;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   Sig;                                               // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Prob;                                              // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_umg_signalMenuSlot(int32 EntryPoint);
	void BndEvt__Button_lvl3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_lvl2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_lvl1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_lvl0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Spawn(int32 Decoded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_signalMenuSlot_C">();
	}
	static class UUmg_signalMenuSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_signalMenuSlot_C>();
	}
};
static_assert(alignof(UUmg_signalMenuSlot_C) == 0x000008, "Wrong alignment on UUmg_signalMenuSlot_C");
static_assert(sizeof(UUmg_signalMenuSlot_C) == 0x0002B8, "Wrong size on UUmg_signalMenuSlot_C");
static_assert(offsetof(UUmg_signalMenuSlot_C, UberGraphFrame) == 0x000260, "Member 'UUmg_signalMenuSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUmg_signalMenuSlot_C, Button_lvl0) == 0x000268, "Member 'UUmg_signalMenuSlot_C::Button_lvl0' has a wrong offset!");
static_assert(offsetof(UUmg_signalMenuSlot_C, Button_lvl1) == 0x000270, "Member 'UUmg_signalMenuSlot_C::Button_lvl1' has a wrong offset!");
static_assert(offsetof(UUmg_signalMenuSlot_C, Button_lvl2) == 0x000278, "Member 'UUmg_signalMenuSlot_C::Button_lvl2' has a wrong offset!");
static_assert(offsetof(UUmg_signalMenuSlot_C, Button_lvl3) == 0x000280, "Member 'UUmg_signalMenuSlot_C::Button_lvl3' has a wrong offset!");
static_assert(offsetof(UUmg_signalMenuSlot_C, Image_116) == 0x000288, "Member 'UUmg_signalMenuSlot_C::Image_116' has a wrong offset!");
static_assert(offsetof(UUmg_signalMenuSlot_C, TextBlock_ind) == 0x000290, "Member 'UUmg_signalMenuSlot_C::TextBlock_ind' has a wrong offset!");
static_assert(offsetof(UUmg_signalMenuSlot_C, TextBlock_name) == 0x000298, "Member 'UUmg_signalMenuSlot_C::TextBlock_name' has a wrong offset!");
static_assert(offsetof(UUmg_signalMenuSlot_C, TextBlock_prob) == 0x0002A0, "Member 'UUmg_signalMenuSlot_C::TextBlock_prob' has a wrong offset!");
static_assert(offsetof(UUmg_signalMenuSlot_C, Sig) == 0x0002A8, "Member 'UUmg_signalMenuSlot_C::Sig' has a wrong offset!");
static_assert(offsetof(UUmg_signalMenuSlot_C, Index_0) == 0x0002B0, "Member 'UUmg_signalMenuSlot_C::Index_0' has a wrong offset!");
static_assert(offsetof(UUmg_signalMenuSlot_C, Prob) == 0x0002B4, "Member 'UUmg_signalMenuSlot_C::Prob' has a wrong offset!");

}
