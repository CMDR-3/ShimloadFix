#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AmbLigh

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "TriggerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ambLigh.ambLigh_C
// 0x0020 (0x02B0 - 0x0290)
class AAmbLigh_C final : public ATriggerBase_C
{
public:
	class URectLightComponent*                    RectLight;                                         // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Size;                                              // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Intensity;                                         // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug;                                             // 0x02A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Enabled;                                           // 0x02A5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A6[0x2];                                      // 0x02A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AttenuationMultiply;                               // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetActive(bool Active);
	void Upd();
	void UserConstructionScript();
	void GetTriggerData(struct FStruct_triggerSave* Data);
	void LoadTriggerData(const struct FStruct_triggerSave& Data, bool* Return);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ambLigh_C">();
	}
	static class AAmbLigh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAmbLigh_C>();
	}
};
static_assert(alignof(AAmbLigh_C) == 0x000008, "Wrong alignment on AAmbLigh_C");
static_assert(sizeof(AAmbLigh_C) == 0x0002B0, "Wrong size on AAmbLigh_C");
static_assert(offsetof(AAmbLigh_C, RectLight) == 0x000290, "Member 'AAmbLigh_C::RectLight' has a wrong offset!");
static_assert(offsetof(AAmbLigh_C, Size) == 0x000298, "Member 'AAmbLigh_C::Size' has a wrong offset!");
static_assert(offsetof(AAmbLigh_C, Intensity) == 0x0002A0, "Member 'AAmbLigh_C::Intensity' has a wrong offset!");
static_assert(offsetof(AAmbLigh_C, Debug) == 0x0002A4, "Member 'AAmbLigh_C::Debug' has a wrong offset!");
static_assert(offsetof(AAmbLigh_C, Enabled) == 0x0002A5, "Member 'AAmbLigh_C::Enabled' has a wrong offset!");
static_assert(offsetof(AAmbLigh_C, AttenuationMultiply) == 0x0002A8, "Member 'AAmbLigh_C::AttenuationMultiply' has a wrong offset!");

}
