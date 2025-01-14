#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_damageIndicator

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function umg_damageIndicator.umg_damageIndicator_C.ExecuteUbergraph_umg_damageIndicator
// 0x00C8 (0x00C8 - 0x0000)
struct Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VictoryFloatMinusEquals_FloatOut;         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_2;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_3;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VictoryFloatMinusEquals_FloatOut_1;       // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VictoryFloatMinusEquals_FloatOut_2;       // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VictoryFloatMinusEquals_FloatOut_3;       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue_1;                       // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue_2;                       // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x004C(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue_3;                       // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_4;         // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          CallFunc_getMainPlayer_AsMain_Player;              // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0x3];                                       // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue_1;       // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VictoryFloatMinusEquals_FloatOut_4;       // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue_4;                       // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator) == 0x000008, "Wrong alignment on Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator");
static_assert(sizeof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator) == 0x0000C8, "Wrong size on Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, EntryPoint) == 0x000000, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::EntryPoint' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000008, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00000C, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, CallFunc_FMax_ReturnValue) == 0x000010, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, CallFunc_VictoryFloatMinusEquals_FloatOut) == 0x000014, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::CallFunc_VictoryFloatMinusEquals_FloatOut' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000018, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000020, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, CallFunc_GetDynamicMaterial_ReturnValue_2) == 0x000028, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::CallFunc_GetDynamicMaterial_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, CallFunc_GetDynamicMaterial_ReturnValue_3) == 0x000030, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::CallFunc_GetDynamicMaterial_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, CallFunc_VictoryFloatMinusEquals_FloatOut_1) == 0x000038, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::CallFunc_VictoryFloatMinusEquals_FloatOut_1' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, CallFunc_VictoryFloatMinusEquals_FloatOut_2) == 0x00003C, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::CallFunc_VictoryFloatMinusEquals_FloatOut_2' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, CallFunc_VictoryFloatMinusEquals_FloatOut_3) == 0x000040, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::CallFunc_VictoryFloatMinusEquals_FloatOut_3' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, CallFunc_FMax_ReturnValue_1) == 0x000044, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::CallFunc_FMax_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, CallFunc_FMax_ReturnValue_2) == 0x000048, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::CallFunc_FMax_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, K2Node_Event_MyGeometry) == 0x00004C, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, K2Node_Event_InDeltaTime) == 0x000084, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, CallFunc_FMax_ReturnValue_3) == 0x000088, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::CallFunc_FMax_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, CallFunc_GetDynamicMaterial_ReturnValue_4) == 0x000090, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::CallFunc_GetDynamicMaterial_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, CallFunc_getMainPlayer_AsMain_Player) == 0x000098, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::CallFunc_getMainPlayer_AsMain_Player' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, CallFunc_IsValid_ReturnValue_1) == 0x0000A0, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, CallFunc_GetWorldDeltaSeconds_ReturnValue_1) == 0x0000A4, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::CallFunc_GetWorldDeltaSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, CallFunc_VictoryFloatMinusEquals_FloatOut_4) == 0x0000A8, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::CallFunc_VictoryFloatMinusEquals_FloatOut_4' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, CallFunc_FMax_ReturnValue_4) == 0x0000AC, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::CallFunc_FMax_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x0000B0, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, CallFunc_Lerp_ReturnValue) == 0x0000B4, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x0000B8, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x0000C0, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000C4, "Member 'Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");

// Function umg_damageIndicator.umg_damageIndicator_C.Tick
// 0x003C (0x003C - 0x0000)
struct Umg_damageIndicator_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_damageIndicator_C_Tick) == 0x000004, "Wrong alignment on Umg_damageIndicator_C_Tick");
static_assert(sizeof(Umg_damageIndicator_C_Tick) == 0x00003C, "Wrong size on Umg_damageIndicator_C_Tick");
static_assert(offsetof(Umg_damageIndicator_C_Tick, MyGeometry) == 0x000000, "Member 'Umg_damageIndicator_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(Umg_damageIndicator_C_Tick, InDeltaTime) == 0x000038, "Member 'Umg_damageIndicator_C_Tick::InDeltaTime' has a wrong offset!");

}

