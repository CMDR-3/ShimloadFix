#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RockThrower

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function rockThrower.rockThrower_C.ExecuteUbergraph_rockThrower
// 0x00E0 (0x00E0 - 0x0000)
struct RockThrower_C_ExecuteUbergraph_rockThrower final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0020(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_RandomUnitVector_ReturnValue;             // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_rock_C*                           CallFunc_FinishSpawningActor_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_RandomUnitVector_ReturnValue_1;           // 0x0088(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x0094(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOverlappingActor_ReturnValue;           // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B5[0x3];                                       // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x00BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RockThrower_C_ExecuteUbergraph_rockThrower) == 0x000010, "Wrong alignment on RockThrower_C_ExecuteUbergraph_rockThrower");
static_assert(sizeof(RockThrower_C_ExecuteUbergraph_rockThrower) == 0x0000E0, "Wrong size on RockThrower_C_ExecuteUbergraph_rockThrower");
static_assert(offsetof(RockThrower_C_ExecuteUbergraph_rockThrower, EntryPoint) == 0x000000, "Member 'RockThrower_C_ExecuteUbergraph_rockThrower::EntryPoint' has a wrong offset!");
static_assert(offsetof(RockThrower_C_ExecuteUbergraph_rockThrower, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000004, "Member 'RockThrower_C_ExecuteUbergraph_rockThrower::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(RockThrower_C_ExecuteUbergraph_rockThrower, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'RockThrower_C_ExecuteUbergraph_rockThrower::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(RockThrower_C_ExecuteUbergraph_rockThrower, CallFunc_GetActorForwardVector_ReturnValue) == 0x000014, "Member 'RockThrower_C_ExecuteUbergraph_rockThrower::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(RockThrower_C_ExecuteUbergraph_rockThrower, CallFunc_MakeTransform_ReturnValue) == 0x000020, "Member 'RockThrower_C_ExecuteUbergraph_rockThrower::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(RockThrower_C_ExecuteUbergraph_rockThrower, CallFunc_RandomUnitVector_ReturnValue) == 0x000050, "Member 'RockThrower_C_ExecuteUbergraph_rockThrower::CallFunc_RandomUnitVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(RockThrower_C_ExecuteUbergraph_rockThrower, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000060, "Member 'RockThrower_C_ExecuteUbergraph_rockThrower::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(RockThrower_C_ExecuteUbergraph_rockThrower, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000068, "Member 'RockThrower_C_ExecuteUbergraph_rockThrower::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RockThrower_C_ExecuteUbergraph_rockThrower, CallFunc_FinishSpawningActor_ReturnValue) == 0x000078, "Member 'RockThrower_C_ExecuteUbergraph_rockThrower::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(RockThrower_C_ExecuteUbergraph_rockThrower, Temp_int_Variable) == 0x000080, "Member 'RockThrower_C_ExecuteUbergraph_rockThrower::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(RockThrower_C_ExecuteUbergraph_rockThrower, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000084, "Member 'RockThrower_C_ExecuteUbergraph_rockThrower::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RockThrower_C_ExecuteUbergraph_rockThrower, CallFunc_RandomUnitVector_ReturnValue_1) == 0x000088, "Member 'RockThrower_C_ExecuteUbergraph_rockThrower::CallFunc_RandomUnitVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RockThrower_C_ExecuteUbergraph_rockThrower, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000094, "Member 'RockThrower_C_ExecuteUbergraph_rockThrower::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RockThrower_C_ExecuteUbergraph_rockThrower, CallFunc_RandomFloatInRange_ReturnValue) == 0x0000A0, "Member 'RockThrower_C_ExecuteUbergraph_rockThrower::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(RockThrower_C_ExecuteUbergraph_rockThrower, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000A4, "Member 'RockThrower_C_ExecuteUbergraph_rockThrower::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RockThrower_C_ExecuteUbergraph_rockThrower, CallFunc_GetPlayerPawn_ReturnValue) == 0x0000A8, "Member 'RockThrower_C_ExecuteUbergraph_rockThrower::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(RockThrower_C_ExecuteUbergraph_rockThrower, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x0000B0, "Member 'RockThrower_C_ExecuteUbergraph_rockThrower::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RockThrower_C_ExecuteUbergraph_rockThrower, CallFunc_IsOverlappingActor_ReturnValue) == 0x0000B4, "Member 'RockThrower_C_ExecuteUbergraph_rockThrower::CallFunc_IsOverlappingActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(RockThrower_C_ExecuteUbergraph_rockThrower, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x0000B8, "Member 'RockThrower_C_ExecuteUbergraph_rockThrower::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RockThrower_C_ExecuteUbergraph_rockThrower, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x0000BC, "Member 'RockThrower_C_ExecuteUbergraph_rockThrower::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RockThrower_C_ExecuteUbergraph_rockThrower, CallFunc_Add_VectorVector_ReturnValue) == 0x0000C8, "Member 'RockThrower_C_ExecuteUbergraph_rockThrower::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

}

