#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_achievements

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_achievements.umg_achievements_C
// 0x0068 (0x02C8 - 0x0260)
class UUmg_achievements_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                button_Exit;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_302;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_ach;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_bar;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_ach;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_achDesc;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_ach;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_desc;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_progress;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UUmg_achievementSlot_C*>         Slots;                                             // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UUmg_achievementSlot_C*                 ActiveSlot;                                        // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_umg_achievements(int32 EntryPoint);
	void Resume();
	void BndEvt__button_exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetIndex(int32 Index_0);
	void Upd();
	void Select(class UUmg_achievementSlot_C* ActiveSlot_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_achievements_C">();
	}
	static class UUmg_achievements_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_achievements_C>();
	}
};
static_assert(alignof(UUmg_achievements_C) == 0x000008, "Wrong alignment on UUmg_achievements_C");
static_assert(sizeof(UUmg_achievements_C) == 0x0002C8, "Wrong size on UUmg_achievements_C");
static_assert(offsetof(UUmg_achievements_C, UberGraphFrame) == 0x000260, "Member 'UUmg_achievements_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUmg_achievements_C, button_Exit) == 0x000268, "Member 'UUmg_achievements_C::button_Exit' has a wrong offset!");
static_assert(offsetof(UUmg_achievements_C, Image_302) == 0x000270, "Member 'UUmg_achievements_C::Image_302' has a wrong offset!");
static_assert(offsetof(UUmg_achievements_C, Img_ach) == 0x000278, "Member 'UUmg_achievements_C::Img_ach' has a wrong offset!");
static_assert(offsetof(UUmg_achievements_C, Img_bar) == 0x000280, "Member 'UUmg_achievements_C::Img_bar' has a wrong offset!");
static_assert(offsetof(UUmg_achievements_C, ScrollBox_ach) == 0x000288, "Member 'UUmg_achievements_C::ScrollBox_ach' has a wrong offset!");
static_assert(offsetof(UUmg_achievements_C, ScrollBox_achDesc) == 0x000290, "Member 'UUmg_achievements_C::ScrollBox_achDesc' has a wrong offset!");
static_assert(offsetof(UUmg_achievements_C, Txt_ach) == 0x000298, "Member 'UUmg_achievements_C::Txt_ach' has a wrong offset!");
static_assert(offsetof(UUmg_achievements_C, Txt_desc) == 0x0002A0, "Member 'UUmg_achievements_C::Txt_desc' has a wrong offset!");
static_assert(offsetof(UUmg_achievements_C, Txt_progress) == 0x0002A8, "Member 'UUmg_achievements_C::Txt_progress' has a wrong offset!");
static_assert(offsetof(UUmg_achievements_C, Slots) == 0x0002B0, "Member 'UUmg_achievements_C::Slots' has a wrong offset!");
static_assert(offsetof(UUmg_achievements_C, ActiveSlot) == 0x0002C0, "Member 'UUmg_achievements_C::ActiveSlot' has a wrong offset!");

}

