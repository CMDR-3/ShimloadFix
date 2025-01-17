#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Comp_radarPoint

#include "Basic.hpp"


namespace SDK::Params
{

// Function comp_radarPoint.comp_radarPoint_C.ExecuteUbergraph_comp_radarPoint
// 0x0038 (0x0038 - 0x0000)
struct Comp_radarPoint_C_ExecuteUbergraph_comp_radarPoint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_DestroyedActor;                 // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode_1;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Comp_radarPoint_C_ExecuteUbergraph_comp_radarPoint) == 0x000008, "Wrong alignment on Comp_radarPoint_C_ExecuteUbergraph_comp_radarPoint");
static_assert(sizeof(Comp_radarPoint_C_ExecuteUbergraph_comp_radarPoint) == 0x000038, "Wrong size on Comp_radarPoint_C_ExecuteUbergraph_comp_radarPoint");
static_assert(offsetof(Comp_radarPoint_C_ExecuteUbergraph_comp_radarPoint, EntryPoint) == 0x000000, "Member 'Comp_radarPoint_C_ExecuteUbergraph_comp_radarPoint::EntryPoint' has a wrong offset!");
static_assert(offsetof(Comp_radarPoint_C_ExecuteUbergraph_comp_radarPoint, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'Comp_radarPoint_C_ExecuteUbergraph_comp_radarPoint::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Comp_radarPoint_C_ExecuteUbergraph_comp_radarPoint, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'Comp_radarPoint_C_ExecuteUbergraph_comp_radarPoint::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Comp_radarPoint_C_ExecuteUbergraph_comp_radarPoint, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000020, "Member 'Comp_radarPoint_C_ExecuteUbergraph_comp_radarPoint::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Comp_radarPoint_C_ExecuteUbergraph_comp_radarPoint, K2Node_CustomEvent_DestroyedActor) == 0x000028, "Member 'Comp_radarPoint_C_ExecuteUbergraph_comp_radarPoint::K2Node_CustomEvent_DestroyedActor' has a wrong offset!");
static_assert(offsetof(Comp_radarPoint_C_ExecuteUbergraph_comp_radarPoint, CallFunc_getMainGamemode_AsMain_Gamemode_1) == 0x000030, "Member 'Comp_radarPoint_C_ExecuteUbergraph_comp_radarPoint::CallFunc_getMainGamemode_AsMain_Gamemode_1' has a wrong offset!");

// Function comp_radarPoint.comp_radarPoint_C.des
// 0x0008 (0x0008 - 0x0000)
struct Comp_radarPoint_C_Des final
{
public:
	class AActor*                                 DestroyedActor;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Comp_radarPoint_C_Des) == 0x000008, "Wrong alignment on Comp_radarPoint_C_Des");
static_assert(sizeof(Comp_radarPoint_C_Des) == 0x000008, "Wrong size on Comp_radarPoint_C_Des");
static_assert(offsetof(Comp_radarPoint_C_Des, DestroyedActor) == 0x000000, "Member 'Comp_radarPoint_C_Des::DestroyedActor' has a wrong offset!");

}

