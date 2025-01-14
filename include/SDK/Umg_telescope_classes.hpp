#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_telescope

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_telescope.umg_telescope_C
// 0x0028 (0x0288 - 0x0260)
class UUmg_telescope_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBackgroundBlur*                        BackgroundBlur_87;                                 // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_37;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_rt;                                            // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ATelescope_C*                           Scope;                                             // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_umg_telescope(int32 EntryPoint);
	void Button(const struct FKey& Key, bool Hold);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_telescope_C">();
	}
	static class UUmg_telescope_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_telescope_C>();
	}
};
static_assert(alignof(UUmg_telescope_C) == 0x000008, "Wrong alignment on UUmg_telescope_C");
static_assert(sizeof(UUmg_telescope_C) == 0x000288, "Wrong size on UUmg_telescope_C");
static_assert(offsetof(UUmg_telescope_C, UberGraphFrame) == 0x000260, "Member 'UUmg_telescope_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUmg_telescope_C, BackgroundBlur_87) == 0x000268, "Member 'UUmg_telescope_C::BackgroundBlur_87' has a wrong offset!");
static_assert(offsetof(UUmg_telescope_C, Button_37) == 0x000270, "Member 'UUmg_telescope_C::Button_37' has a wrong offset!");
static_assert(offsetof(UUmg_telescope_C, Img_rt) == 0x000278, "Member 'UUmg_telescope_C::Img_rt' has a wrong offset!");
static_assert(offsetof(UUmg_telescope_C, Scope) == 0x000280, "Member 'UUmg_telescope_C::Scope' has a wrong offset!");

}

