#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_timeclock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_timeclock.prop_timeclock_C
// 0x0020 (0x0378 - 0x0358)
class AProp_timeclock_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_timeclock_C;                   // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        TimeFast;                                          // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         A_a_3422C41A480536959E6D7EA61A6C7686;              // 0x0368(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            A__Direction_3422C41A480536959E6D7EA61A6C7686;     // 0x036C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36D[0x3];                                      // 0x036D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     A;                                                 // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_timeclock(int32 EntryPoint);
	void A__UpdateFunc();
	void A__FinishedFunc();
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_timeclock_C">();
	}
	static class AProp_timeclock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_timeclock_C>();
	}
};
static_assert(alignof(AProp_timeclock_C) == 0x000008, "Wrong alignment on AProp_timeclock_C");
static_assert(sizeof(AProp_timeclock_C) == 0x000378, "Wrong size on AProp_timeclock_C");
static_assert(offsetof(AProp_timeclock_C, UberGraphFrame_Prop_timeclock_C) == 0x000358, "Member 'AProp_timeclock_C::UberGraphFrame_Prop_timeclock_C' has a wrong offset!");
static_assert(offsetof(AProp_timeclock_C, TimeFast) == 0x000360, "Member 'AProp_timeclock_C::TimeFast' has a wrong offset!");
static_assert(offsetof(AProp_timeclock_C, A_a_3422C41A480536959E6D7EA61A6C7686) == 0x000368, "Member 'AProp_timeclock_C::A_a_3422C41A480536959E6D7EA61A6C7686' has a wrong offset!");
static_assert(offsetof(AProp_timeclock_C, A__Direction_3422C41A480536959E6D7EA61A6C7686) == 0x00036C, "Member 'AProp_timeclock_C::A__Direction_3422C41A480536959E6D7EA61A6C7686' has a wrong offset!");
static_assert(offsetof(AProp_timeclock_C, A) == 0x000370, "Member 'AProp_timeclock_C::A' has a wrong offset!");

}

