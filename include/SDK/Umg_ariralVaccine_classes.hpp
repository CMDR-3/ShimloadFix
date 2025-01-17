#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_ariralVaccine

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_ariralVaccine.umg_ariralVaccine_C
// 0x0008 (0x0268 - 0x0260)
class UUmg_ariralVaccine_C final : public UUserWidget
{
public:
	class UBackgroundBlur*                        blur;                                              // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_ariralVaccine_C">();
	}
	static class UUmg_ariralVaccine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_ariralVaccine_C>();
	}
};
static_assert(alignof(UUmg_ariralVaccine_C) == 0x000008, "Wrong alignment on UUmg_ariralVaccine_C");
static_assert(sizeof(UUmg_ariralVaccine_C) == 0x000268, "Wrong size on UUmg_ariralVaccine_C");
static_assert(offsetof(UUmg_ariralVaccine_C, blur) == 0x000260, "Member 'UUmg_ariralVaccine_C::blur' has a wrong offset!");

}

