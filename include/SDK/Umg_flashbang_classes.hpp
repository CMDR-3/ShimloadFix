#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_flashbang

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_flashbang.umg_flashbang_C
// 0x0038 (0x0298 - 0x0260)
class UUmg_flashbang_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Img;                                               // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Alpha;                                             // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           Color_A;                                           // 0x0274(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           Color_B;                                           // 0x0284(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Time;                                              // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_umg_flashbang(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_flashbang_C">();
	}
	static class UUmg_flashbang_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_flashbang_C>();
	}
};
static_assert(alignof(UUmg_flashbang_C) == 0x000008, "Wrong alignment on UUmg_flashbang_C");
static_assert(sizeof(UUmg_flashbang_C) == 0x000298, "Wrong size on UUmg_flashbang_C");
static_assert(offsetof(UUmg_flashbang_C, UberGraphFrame) == 0x000260, "Member 'UUmg_flashbang_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUmg_flashbang_C, Img) == 0x000268, "Member 'UUmg_flashbang_C::Img' has a wrong offset!");
static_assert(offsetof(UUmg_flashbang_C, Alpha) == 0x000270, "Member 'UUmg_flashbang_C::Alpha' has a wrong offset!");
static_assert(offsetof(UUmg_flashbang_C, Color_A) == 0x000274, "Member 'UUmg_flashbang_C::Color_A' has a wrong offset!");
static_assert(offsetof(UUmg_flashbang_C, Color_B) == 0x000284, "Member 'UUmg_flashbang_C::Color_B' has a wrong offset!");
static_assert(offsetof(UUmg_flashbang_C, Time) == 0x000294, "Member 'UUmg_flashbang_C::Time' has a wrong offset!");

}

