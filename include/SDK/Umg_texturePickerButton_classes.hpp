#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_texturePickerButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_texturePickerButton.umg_texturePickerButton_C
// 0x0038 (0x0298 - 0x0260)
class UUmg_texturePickerButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_76;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_51;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img;                                               // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                             TextureRef;                                        // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_28C[0x4];                                      // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUmg_texturePicker_C*                   Owner;                                             // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_umg_texturePickerButton(int32 EntryPoint);
	void BndEvt__umg_texturePickerButton_Button_76_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_texturePickerButton_C">();
	}
	static class UUmg_texturePickerButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_texturePickerButton_C>();
	}
};
static_assert(alignof(UUmg_texturePickerButton_C) == 0x000008, "Wrong alignment on UUmg_texturePickerButton_C");
static_assert(sizeof(UUmg_texturePickerButton_C) == 0x000298, "Wrong size on UUmg_texturePickerButton_C");
static_assert(offsetof(UUmg_texturePickerButton_C, UberGraphFrame) == 0x000260, "Member 'UUmg_texturePickerButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUmg_texturePickerButton_C, Button_76) == 0x000268, "Member 'UUmg_texturePickerButton_C::Button_76' has a wrong offset!");
static_assert(offsetof(UUmg_texturePickerButton_C, Image_51) == 0x000270, "Member 'UUmg_texturePickerButton_C::Image_51' has a wrong offset!");
static_assert(offsetof(UUmg_texturePickerButton_C, Img) == 0x000278, "Member 'UUmg_texturePickerButton_C::Img' has a wrong offset!");
static_assert(offsetof(UUmg_texturePickerButton_C, TextureRef) == 0x000280, "Member 'UUmg_texturePickerButton_C::TextureRef' has a wrong offset!");
static_assert(offsetof(UUmg_texturePickerButton_C, Index_0) == 0x000288, "Member 'UUmg_texturePickerButton_C::Index_0' has a wrong offset!");
static_assert(offsetof(UUmg_texturePickerButton_C, Owner) == 0x000290, "Member 'UUmg_texturePickerButton_C::Owner' has a wrong offset!");

}

