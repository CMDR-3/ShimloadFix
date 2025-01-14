#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_radarPoint

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_radarPoint.umg_radarPoint_C
// 0x0050 (0x02B0 - 0x0260)
class UUmg_radarPoint_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_34;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MainCanvas;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_coords;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         A;                                                 // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Coords;                                            // 0x0284(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Imp;                                               // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_291[0x3];                                      // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Color;                                             // 0x0294(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         DissolveTime;                                      // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          HideCoords;                                        // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_umg_radarPoint(int32 EntryPoint);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_radarPoint_C">();
	}
	static class UUmg_radarPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_radarPoint_C>();
	}
};
static_assert(alignof(UUmg_radarPoint_C) == 0x000008, "Wrong alignment on UUmg_radarPoint_C");
static_assert(sizeof(UUmg_radarPoint_C) == 0x0002B0, "Wrong size on UUmg_radarPoint_C");
static_assert(offsetof(UUmg_radarPoint_C, UberGraphFrame) == 0x000260, "Member 'UUmg_radarPoint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUmg_radarPoint_C, Image_34) == 0x000268, "Member 'UUmg_radarPoint_C::Image_34' has a wrong offset!");
static_assert(offsetof(UUmg_radarPoint_C, MainCanvas) == 0x000270, "Member 'UUmg_radarPoint_C::MainCanvas' has a wrong offset!");
static_assert(offsetof(UUmg_radarPoint_C, Txt_coords) == 0x000278, "Member 'UUmg_radarPoint_C::Txt_coords' has a wrong offset!");
static_assert(offsetof(UUmg_radarPoint_C, A) == 0x000280, "Member 'UUmg_radarPoint_C::A' has a wrong offset!");
static_assert(offsetof(UUmg_radarPoint_C, Coords) == 0x000284, "Member 'UUmg_radarPoint_C::Coords' has a wrong offset!");
static_assert(offsetof(UUmg_radarPoint_C, Imp) == 0x000290, "Member 'UUmg_radarPoint_C::Imp' has a wrong offset!");
static_assert(offsetof(UUmg_radarPoint_C, Color) == 0x000294, "Member 'UUmg_radarPoint_C::Color' has a wrong offset!");
static_assert(offsetof(UUmg_radarPoint_C, DissolveTime) == 0x0002A4, "Member 'UUmg_radarPoint_C::DissolveTime' has a wrong offset!");
static_assert(offsetof(UUmg_radarPoint_C, HideCoords) == 0x0002A8, "Member 'UUmg_radarPoint_C::HideCoords' has a wrong offset!");

}

