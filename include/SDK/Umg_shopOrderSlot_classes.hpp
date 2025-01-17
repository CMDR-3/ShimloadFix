#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_shopOrderSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_shopOrderSlot.umg_shopOrderSlot_C
// 0x0030 (0x0290 - 0x0260)
class UUmg_shopOrderSlot_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Text_num;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_time;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_laptop_C*                          Owner;                                             // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Time;                                              // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x0284(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Num;                                               // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_umg_shopOrderSlot(int32 EntryPoint);
	void Construct();
	void SetIndex(int32 Index_0);
	void Resume();
	void Updtime(float Time_0);
	void Upd();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_shopOrderSlot_C">();
	}
	static class UUmg_shopOrderSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_shopOrderSlot_C>();
	}
};
static_assert(alignof(UUmg_shopOrderSlot_C) == 0x000008, "Wrong alignment on UUmg_shopOrderSlot_C");
static_assert(sizeof(UUmg_shopOrderSlot_C) == 0x000290, "Wrong size on UUmg_shopOrderSlot_C");
static_assert(offsetof(UUmg_shopOrderSlot_C, UberGraphFrame) == 0x000260, "Member 'UUmg_shopOrderSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUmg_shopOrderSlot_C, Text_num) == 0x000268, "Member 'UUmg_shopOrderSlot_C::Text_num' has a wrong offset!");
static_assert(offsetof(UUmg_shopOrderSlot_C, Text_time) == 0x000270, "Member 'UUmg_shopOrderSlot_C::Text_time' has a wrong offset!");
static_assert(offsetof(UUmg_shopOrderSlot_C, Owner) == 0x000278, "Member 'UUmg_shopOrderSlot_C::Owner' has a wrong offset!");
static_assert(offsetof(UUmg_shopOrderSlot_C, Time) == 0x000280, "Member 'UUmg_shopOrderSlot_C::Time' has a wrong offset!");
static_assert(offsetof(UUmg_shopOrderSlot_C, Index_0) == 0x000284, "Member 'UUmg_shopOrderSlot_C::Index_0' has a wrong offset!");
static_assert(offsetof(UUmg_shopOrderSlot_C, Num) == 0x000288, "Member 'UUmg_shopOrderSlot_C::Num' has a wrong offset!");

}

