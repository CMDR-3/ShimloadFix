#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_tvInterface

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_tvStatus_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_tvInterface.umg_tvInterface_C
// 0x0080 (0x02E0 - 0x0260)
class UUmg_tvInterface_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                button_pause;                                      // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                button_play;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                button_stop;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       Etb_offlinePath;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       Etb_url;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_21;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_139;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                Slider_volume;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_status;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_suppUrl_1;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_volume;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 URL;                                               // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class AProp_tv_C*                             Tv;                                                // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          SupportedUrl;                                      // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	Enum_tvStatus                                 Status;                                            // 0x02D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Offline;                                           // 0x02DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2DB[0x1];                                      // 0x02DB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Volume;                                            // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_umg_tvInterface(int32 EntryPoint);
	void BndEvt__slider_volume_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__etb_offlinePath_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__button_stop_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__button_pause_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__button_play_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OpenFail(const class FString& FailedUrl);
	void OpeneddUrl(const class FString& OpenedUrl);
	void BndEvt__etb_url_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void DelayExit();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void Upd();
	void Enterr();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_tvInterface_C">();
	}
	static class UUmg_tvInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_tvInterface_C>();
	}
};
static_assert(alignof(UUmg_tvInterface_C) == 0x000008, "Wrong alignment on UUmg_tvInterface_C");
static_assert(sizeof(UUmg_tvInterface_C) == 0x0002E0, "Wrong size on UUmg_tvInterface_C");
static_assert(offsetof(UUmg_tvInterface_C, UberGraphFrame) == 0x000260, "Member 'UUmg_tvInterface_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUmg_tvInterface_C, button_pause) == 0x000268, "Member 'UUmg_tvInterface_C::button_pause' has a wrong offset!");
static_assert(offsetof(UUmg_tvInterface_C, button_play) == 0x000270, "Member 'UUmg_tvInterface_C::button_play' has a wrong offset!");
static_assert(offsetof(UUmg_tvInterface_C, button_stop) == 0x000278, "Member 'UUmg_tvInterface_C::button_stop' has a wrong offset!");
static_assert(offsetof(UUmg_tvInterface_C, Etb_offlinePath) == 0x000280, "Member 'UUmg_tvInterface_C::Etb_offlinePath' has a wrong offset!");
static_assert(offsetof(UUmg_tvInterface_C, Etb_url) == 0x000288, "Member 'UUmg_tvInterface_C::Etb_url' has a wrong offset!");
static_assert(offsetof(UUmg_tvInterface_C, Image_21) == 0x000290, "Member 'UUmg_tvInterface_C::Image_21' has a wrong offset!");
static_assert(offsetof(UUmg_tvInterface_C, Image_139) == 0x000298, "Member 'UUmg_tvInterface_C::Image_139' has a wrong offset!");
static_assert(offsetof(UUmg_tvInterface_C, Slider_volume) == 0x0002A0, "Member 'UUmg_tvInterface_C::Slider_volume' has a wrong offset!");
static_assert(offsetof(UUmg_tvInterface_C, Txt_status) == 0x0002A8, "Member 'UUmg_tvInterface_C::Txt_status' has a wrong offset!");
static_assert(offsetof(UUmg_tvInterface_C, Txt_suppUrl_1) == 0x0002B0, "Member 'UUmg_tvInterface_C::Txt_suppUrl_1' has a wrong offset!");
static_assert(offsetof(UUmg_tvInterface_C, Txt_volume) == 0x0002B8, "Member 'UUmg_tvInterface_C::Txt_volume' has a wrong offset!");
static_assert(offsetof(UUmg_tvInterface_C, URL) == 0x0002C0, "Member 'UUmg_tvInterface_C::URL' has a wrong offset!");
static_assert(offsetof(UUmg_tvInterface_C, Tv) == 0x0002D0, "Member 'UUmg_tvInterface_C::Tv' has a wrong offset!");
static_assert(offsetof(UUmg_tvInterface_C, SupportedUrl) == 0x0002D8, "Member 'UUmg_tvInterface_C::SupportedUrl' has a wrong offset!");
static_assert(offsetof(UUmg_tvInterface_C, Status) == 0x0002D9, "Member 'UUmg_tvInterface_C::Status' has a wrong offset!");
static_assert(offsetof(UUmg_tvInterface_C, Offline) == 0x0002DA, "Member 'UUmg_tvInterface_C::Offline' has a wrong offset!");
static_assert(offsetof(UUmg_tvInterface_C, Volume) == 0x0002DC, "Member 'UUmg_tvInterface_C::Volume' has a wrong offset!");

}
