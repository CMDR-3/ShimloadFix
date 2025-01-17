#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ui_arcade_invaders

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ui_arcade_invaders.ui_arcade_invaders_C
// 0x0018 (0x0278 - 0x0260)
class UUi_arcade_invaders_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URetainerBox*                           RetainerBox_86;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_invaders_C*                        Umg_invaders;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ui_arcade_invaders(int32 EntryPoint);
	void Unfocused();
	void GamemodePostKeys();
	void NewFunction_3();
	void NewFunction_2();
	void TexturePickerApply(class UUmg_texturePicker_C* Picker, class UTexture2D* Texture, int32 Index_0);
	void ApplyColor(const struct FLinearColor& Color);
	void PropRenderer_finishProps();
	void GamemodeMakeKeys();
	void AnyKey(const struct FKey& Key, bool Pressed);
	void GamemodePreLoad();
	void SettingsApplied(const struct FStruct_settings& Settings);
	void Unfoc();
	void StuffUpgraded(class AMainGamemode_C* GameMode);
	void GamemodeBeginPlay();
	void SignalSaved();
	void SignalDeleted();
	void DreamInv(TArray<struct FStruct_save>& Invv, class ADreamBase_C** Base);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ui_arcade_invaders_C">();
	}
	static class UUi_arcade_invaders_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUi_arcade_invaders_C>();
	}
};
static_assert(alignof(UUi_arcade_invaders_C) == 0x000008, "Wrong alignment on UUi_arcade_invaders_C");
static_assert(sizeof(UUi_arcade_invaders_C) == 0x000278, "Wrong size on UUi_arcade_invaders_C");
static_assert(offsetof(UUi_arcade_invaders_C, UberGraphFrame) == 0x000260, "Member 'UUi_arcade_invaders_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUi_arcade_invaders_C, RetainerBox_86) == 0x000268, "Member 'UUi_arcade_invaders_C::RetainerBox_86' has a wrong offset!");
static_assert(offsetof(UUi_arcade_invaders_C, Umg_invaders) == 0x000270, "Member 'UUi_arcade_invaders_C::Umg_invaders' has a wrong offset!");

}

