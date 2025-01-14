#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_food_coffeeCup

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_food_coffeeCup.prop_food_coffeeCup_C.ExecuteUbergraph_prop_food_coffeeCup
// 0x00D0 (0x00D0 - 0x0000)
struct Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorUpVector_ReturnValue;             // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0xC];                                       // 0x0034(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0040(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_C*                                CallFunc_FinishSpawningActor_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0094(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentVelocity_ReturnValue;         // 0x009C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetPhysicsAngularVelocityInDegrees_ReturnValue; // 0x00A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USaveSlot_C*                            CallFunc_getSaveSlot_saveSlot;                     // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          CallFunc_getMainPlayer_AsMain_Player;              // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VictoryFloatPlusEquals_FloatOut;          // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup) == 0x000010, "Wrong alignment on Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup");
static_assert(sizeof(Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup) == 0x0000D0, "Wrong size on Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup");
static_assert(offsetof(Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup, EntryPoint) == 0x000000, "Member 'Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup, CallFunc_GetActorUpVector_ReturnValue) == 0x000008, "Member 'Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup::CallFunc_GetActorUpVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000014, "Member 'Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup, CallFunc_Dot_VectorVector_ReturnValue) == 0x000020, "Member 'Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000024, "Member 'Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup, CallFunc_GetVelocity_ReturnValue) == 0x000028, "Member 'Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup, CallFunc_GetTransform_ReturnValue) == 0x000040, "Member 'Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup, CallFunc_VSize_ReturnValue) == 0x000070, "Member 'Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000078, "Member 'Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000080, "Member 'Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup, CallFunc_FinishSpawningActor_ReturnValue) == 0x000088, "Member 'Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup, CallFunc_BooleanOR_ReturnValue) == 0x000090, "Member 'Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup, Temp_name_Variable) == 0x000094, "Member 'Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup, CallFunc_GetComponentVelocity_ReturnValue) == 0x00009C, "Member 'Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup::CallFunc_GetComponentVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup, CallFunc_GetPhysicsAngularVelocityInDegrees_ReturnValue) == 0x0000A8, "Member 'Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup::CallFunc_GetPhysicsAngularVelocityInDegrees_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup, CallFunc_getSaveSlot_saveSlot) == 0x0000B8, "Member 'Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup::CallFunc_getSaveSlot_saveSlot' has a wrong offset!");
static_assert(offsetof(Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup, CallFunc_getMainPlayer_AsMain_Player) == 0x0000C0, "Member 'Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup::CallFunc_getMainPlayer_AsMain_Player' has a wrong offset!");
static_assert(offsetof(Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup, CallFunc_VictoryFloatPlusEquals_FloatOut) == 0x0000C8, "Member 'Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup::CallFunc_VictoryFloatPlusEquals_FloatOut' has a wrong offset!");
static_assert(offsetof(Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x0000CC, "Member 'Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function prop_food_coffeeCup.prop_food_coffeeCup_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Prop_food_coffeeCup_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_food_coffeeCup_C_ReceiveTick) == 0x000004, "Wrong alignment on Prop_food_coffeeCup_C_ReceiveTick");
static_assert(sizeof(Prop_food_coffeeCup_C_ReceiveTick) == 0x000004, "Wrong size on Prop_food_coffeeCup_C_ReceiveTick");
static_assert(offsetof(Prop_food_coffeeCup_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Prop_food_coffeeCup_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

