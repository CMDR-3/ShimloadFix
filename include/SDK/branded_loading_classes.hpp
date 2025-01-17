#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: branded_loading

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass branded_loading.branded_loading_C
// 0x0030 (0x0290 - 0x0260)
class Ubranded_loading_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_51;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Logo;                                              // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Fade;                                              // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_branded_loading(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"branded_loading_C">();
	}
	static class Ubranded_loading_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Ubranded_loading_C>();
	}
};
static_assert(alignof(Ubranded_loading_C) == 0x000008, "Wrong alignment on Ubranded_loading_C");
static_assert(sizeof(Ubranded_loading_C) == 0x000290, "Wrong size on Ubranded_loading_C");
static_assert(offsetof(Ubranded_loading_C, UberGraphFrame) == 0x000260, "Member 'Ubranded_loading_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(Ubranded_loading_C, Border_51) == 0x000268, "Member 'Ubranded_loading_C::Border_51' has a wrong offset!");
static_assert(offsetof(Ubranded_loading_C, Logo) == 0x000270, "Member 'Ubranded_loading_C::Logo' has a wrong offset!");
static_assert(offsetof(Ubranded_loading_C, TextBlock) == 0x000278, "Member 'Ubranded_loading_C::TextBlock' has a wrong offset!");
static_assert(offsetof(Ubranded_loading_C, TextBlock_0) == 0x000280, "Member 'Ubranded_loading_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(Ubranded_loading_C, Fade) == 0x000288, "Member 'Ubranded_loading_C::Fade' has a wrong offset!");

}

