#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ufo_ballfo

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ufo_ballfo.ufo_ballfo_C.ExecuteUbergraph_ufo_ballfo
// 0x02C8 (0x02C8 - 0x0000)
struct Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddWorldRotation_SweepHitResult;       // 0x0028(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue_1;       // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x00B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue;      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_2;    // 0x00C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x00D0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_VInterpTo_Constant_ReturnValue;           // 0x0158(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult_1;     // 0x0164(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_3;    // 0x01EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_4;    // 0x01F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Vector_Distance_ReturnValue;              // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_5;    // 0x0208(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_6;    // 0x0214(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Vector_Distance_ReturnValue_1;            // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x022C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VEase_ReturnValue;                        // 0x0234(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0240(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo) == 0x000004, "Wrong alignment on Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo");
static_assert(sizeof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo) == 0x0002C8, "Wrong size on Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo");
static_assert(offsetof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo, EntryPoint) == 0x000000, "Member 'Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000008, "Member 'Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00000C, "Member 'Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo, CallFunc_MakeRotator_ReturnValue) == 0x000010, "Member 'Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x00001C, "Member 'Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo, CallFunc_K2_AddWorldRotation_SweepHitResult) == 0x000028, "Member 'Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo::CallFunc_K2_AddWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo, CallFunc_GetWorldDeltaSeconds_ReturnValue_1) == 0x0000B0, "Member 'Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo::CallFunc_GetWorldDeltaSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x0000B4, "Member 'Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo, CallFunc_EqualEqual_VectorVector_ReturnValue) == 0x0000C0, "Member 'Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo::CallFunc_EqualEqual_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo, CallFunc_K2_GetComponentLocation_ReturnValue_2) == 0x0000C4, "Member 'Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo::CallFunc_K2_GetComponentLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x0000D0, "Member 'Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo, CallFunc_VInterpTo_Constant_ReturnValue) == 0x000158, "Member 'Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo::CallFunc_VInterpTo_Constant_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo, CallFunc_K2_SetWorldLocation_SweepHitResult_1) == 0x000164, "Member 'Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo::CallFunc_K2_SetWorldLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo, CallFunc_K2_GetComponentLocation_ReturnValue_3) == 0x0001EC, "Member 'Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo::CallFunc_K2_GetComponentLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo, CallFunc_K2_GetComponentLocation_ReturnValue_4) == 0x0001F8, "Member 'Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo::CallFunc_K2_GetComponentLocation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo, CallFunc_Vector_Distance_ReturnValue) == 0x000204, "Member 'Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo, CallFunc_K2_GetComponentLocation_ReturnValue_5) == 0x000208, "Member 'Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo::CallFunc_K2_GetComponentLocation_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo, CallFunc_K2_GetComponentLocation_ReturnValue_6) == 0x000214, "Member 'Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo::CallFunc_K2_GetComponentLocation_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo, CallFunc_Vector_Distance_ReturnValue_1) == 0x000220, "Member 'Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo::CallFunc_Vector_Distance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000224, "Member 'Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000228, "Member 'Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00022C, "Member 'Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo, CallFunc_Abs_ReturnValue) == 0x000230, "Member 'Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo, CallFunc_VEase_ReturnValue) == 0x000234, "Member 'Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo::CallFunc_VEase_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000240, "Member 'Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

// Function ufo_ballfo.ufo_ballfo_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Ufo_ballfo_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ufo_ballfo_C_ReceiveTick) == 0x000004, "Wrong alignment on Ufo_ballfo_C_ReceiveTick");
static_assert(sizeof(Ufo_ballfo_C_ReceiveTick) == 0x000004, "Wrong size on Ufo_ballfo_C_ReceiveTick");
static_assert(offsetof(Ufo_ballfo_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Ufo_ballfo_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function ufo_ballfo.ufo_ballfo_C.set
// 0x0160 (0x0160 - 0x0000)
struct Ufo_ballfo_C_Set final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0024(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        K2Node_Select_Default;                             // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x00D4(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Ufo_ballfo_C_Set) == 0x000008, "Wrong alignment on Ufo_ballfo_C_Set");
static_assert(sizeof(Ufo_ballfo_C_Set) == 0x000160, "Wrong size on Ufo_ballfo_C_Set");
static_assert(offsetof(Ufo_ballfo_C_Set, Temp_int_Variable) == 0x000000, "Member 'Ufo_ballfo_C_Set::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_Set, Temp_int_Variable_1) == 0x000004, "Member 'Ufo_ballfo_C_Set::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_Set, Temp_int_Variable_2) == 0x000008, "Member 'Ufo_ballfo_C_Set::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_Set, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00000C, "Member 'Ufo_ballfo_C_Set::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_Set, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'Ufo_ballfo_C_Set::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_Set, CallFunc_RandomFloatInRange_ReturnValue) == 0x000014, "Member 'Ufo_ballfo_C_Set::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_Set, CallFunc_MakeRotator_ReturnValue) == 0x000018, "Member 'Ufo_ballfo_C_Set::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_Set, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000024, "Member 'Ufo_ballfo_C_Set::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_Set, K2Node_Select_Default) == 0x0000B0, "Member 'Ufo_ballfo_C_Set::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_Set, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000B8, "Member 'Ufo_ballfo_C_Set::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_Set, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x0000BC, "Member 'Ufo_ballfo_C_Set::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_Set, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x0000C0, "Member 'Ufo_ballfo_C_Set::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_Set, K2Node_Select_Default_1) == 0x0000C4, "Member 'Ufo_ballfo_C_Set::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_Set, CallFunc_MakeVector_ReturnValue) == 0x0000C8, "Member 'Ufo_ballfo_C_Set::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ufo_ballfo_C_Set, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x0000D4, "Member 'Ufo_ballfo_C_Set::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

}

