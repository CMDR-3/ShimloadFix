#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_recipeItemSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Struct_crafting_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_recipeItemSlot.umg_recipeItemSlot_C
// 0x0090 (0x02F0 - 0x0260)
class UUmg_recipeItemSlot_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                button_select;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_selected;                                    // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_item;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_name;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_reverse;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FStruct_crafting                       Data;                                              // 0x0290(0x0048)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class UUmg_playerInventory_C*                 Inv;                                               // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 Name_0;                                            // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_umg_recipeItemSlot(int32 EntryPoint);
	void BndEvt__umg_recipeItemSlot_button_select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Select();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_recipeItemSlot_C">();
	}
	static class UUmg_recipeItemSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_recipeItemSlot_C>();
	}
};
static_assert(alignof(UUmg_recipeItemSlot_C) == 0x000008, "Wrong alignment on UUmg_recipeItemSlot_C");
static_assert(sizeof(UUmg_recipeItemSlot_C) == 0x0002F0, "Wrong size on UUmg_recipeItemSlot_C");
static_assert(offsetof(UUmg_recipeItemSlot_C, UberGraphFrame) == 0x000260, "Member 'UUmg_recipeItemSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUmg_recipeItemSlot_C, button_select) == 0x000268, "Member 'UUmg_recipeItemSlot_C::button_select' has a wrong offset!");
static_assert(offsetof(UUmg_recipeItemSlot_C, Image_selected) == 0x000270, "Member 'UUmg_recipeItemSlot_C::Image_selected' has a wrong offset!");
static_assert(offsetof(UUmg_recipeItemSlot_C, Img_item) == 0x000278, "Member 'UUmg_recipeItemSlot_C::Img_item' has a wrong offset!");
static_assert(offsetof(UUmg_recipeItemSlot_C, Text_name) == 0x000280, "Member 'UUmg_recipeItemSlot_C::Text_name' has a wrong offset!");
static_assert(offsetof(UUmg_recipeItemSlot_C, Text_reverse) == 0x000288, "Member 'UUmg_recipeItemSlot_C::Text_reverse' has a wrong offset!");
static_assert(offsetof(UUmg_recipeItemSlot_C, Data) == 0x000290, "Member 'UUmg_recipeItemSlot_C::Data' has a wrong offset!");
static_assert(offsetof(UUmg_recipeItemSlot_C, Inv) == 0x0002D8, "Member 'UUmg_recipeItemSlot_C::Inv' has a wrong offset!");
static_assert(offsetof(UUmg_recipeItemSlot_C, Name_0) == 0x0002E0, "Member 'UUmg_recipeItemSlot_C::Name_0' has a wrong offset!");

}

