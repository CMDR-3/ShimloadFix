#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_playerInvSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_playerInvSlot.umg_playerInvSlot_C
// 0x0090 (0x02F0 - 0x0260)
class UUmg_playerInvSlot_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_action;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_d;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_u;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_421;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_prop;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_am;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_nm;                                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_v;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_w;                                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         ID;                                                // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         IdList;                                            // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UUmg_playerInventory_C*                 Owner;                                             // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 Prop;                                              // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 Tag;                                               // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         IdLast;                                            // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Weight;                                            // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Volume;                                            // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_umg_playerInvSlot(int32 EntryPoint);
	void BndEvt__umg_propInvSlor_Button_action_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__umg_propInvSlor_Button_action_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_u_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_d_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_103_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Init_slot(const class FString& ItemToFind, float Weight_0, float Volume_0);
	void Sel();
	void SetAmount();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_playerInvSlot_C">();
	}
	static class UUmg_playerInvSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_playerInvSlot_C>();
	}
};
static_assert(alignof(UUmg_playerInvSlot_C) == 0x000008, "Wrong alignment on UUmg_playerInvSlot_C");
static_assert(sizeof(UUmg_playerInvSlot_C) == 0x0002F0, "Wrong size on UUmg_playerInvSlot_C");
static_assert(offsetof(UUmg_playerInvSlot_C, UberGraphFrame) == 0x000260, "Member 'UUmg_playerInvSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUmg_playerInvSlot_C, Button_action) == 0x000268, "Member 'UUmg_playerInvSlot_C::Button_action' has a wrong offset!");
static_assert(offsetof(UUmg_playerInvSlot_C, Button_d) == 0x000270, "Member 'UUmg_playerInvSlot_C::Button_d' has a wrong offset!");
static_assert(offsetof(UUmg_playerInvSlot_C, Button_u) == 0x000278, "Member 'UUmg_playerInvSlot_C::Button_u' has a wrong offset!");
static_assert(offsetof(UUmg_playerInvSlot_C, Image_421) == 0x000280, "Member 'UUmg_playerInvSlot_C::Image_421' has a wrong offset!");
static_assert(offsetof(UUmg_playerInvSlot_C, Img_prop) == 0x000288, "Member 'UUmg_playerInvSlot_C::Img_prop' has a wrong offset!");
static_assert(offsetof(UUmg_playerInvSlot_C, Txt_am) == 0x000290, "Member 'UUmg_playerInvSlot_C::Txt_am' has a wrong offset!");
static_assert(offsetof(UUmg_playerInvSlot_C, Txt_nm) == 0x000298, "Member 'UUmg_playerInvSlot_C::Txt_nm' has a wrong offset!");
static_assert(offsetof(UUmg_playerInvSlot_C, Txt_v) == 0x0002A0, "Member 'UUmg_playerInvSlot_C::Txt_v' has a wrong offset!");
static_assert(offsetof(UUmg_playerInvSlot_C, Txt_w) == 0x0002A8, "Member 'UUmg_playerInvSlot_C::Txt_w' has a wrong offset!");
static_assert(offsetof(UUmg_playerInvSlot_C, ID) == 0x0002B0, "Member 'UUmg_playerInvSlot_C::ID' has a wrong offset!");
static_assert(offsetof(UUmg_playerInvSlot_C, IdList) == 0x0002B4, "Member 'UUmg_playerInvSlot_C::IdList' has a wrong offset!");
static_assert(offsetof(UUmg_playerInvSlot_C, Owner) == 0x0002B8, "Member 'UUmg_playerInvSlot_C::Owner' has a wrong offset!");
static_assert(offsetof(UUmg_playerInvSlot_C, Prop) == 0x0002C0, "Member 'UUmg_playerInvSlot_C::Prop' has a wrong offset!");
static_assert(offsetof(UUmg_playerInvSlot_C, Tag) == 0x0002D0, "Member 'UUmg_playerInvSlot_C::Tag' has a wrong offset!");
static_assert(offsetof(UUmg_playerInvSlot_C, IdLast) == 0x0002E0, "Member 'UUmg_playerInvSlot_C::IdLast' has a wrong offset!");
static_assert(offsetof(UUmg_playerInvSlot_C, Amount) == 0x0002E4, "Member 'UUmg_playerInvSlot_C::Amount' has a wrong offset!");
static_assert(offsetof(UUmg_playerInvSlot_C, Weight) == 0x0002E8, "Member 'UUmg_playerInvSlot_C::Weight' has a wrong offset!");
static_assert(offsetof(UUmg_playerInvSlot_C, Volume) == 0x0002EC, "Member 'UUmg_playerInvSlot_C::Volume' has a wrong offset!");

}
