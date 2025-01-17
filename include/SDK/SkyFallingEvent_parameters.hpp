#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SkyFallingEvent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function skyFallingEvent.skyFallingEvent_C.ExecuteUbergraph_skyFallingEvent
// 0x0260 (0x0260 - 0x0000)
struct SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VInterpTo_Constant_ReturnValue;           // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x002C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x00C0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          CallFunc_getMainPlayer_AsMain_Player;              // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUmg_flashbang_C*                       CallFunc_Create_ReturnValue;                       // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0160(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x016C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x0178(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x0184(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0190(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19C[0x4];                                      // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x01A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B4[0xC];                                      // 0x01B4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x01C0(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x01F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FC[0x4];                                      // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_208[0x8];                                      // 0x0208(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0210(0x0030)(IsPlainOldData, NoDestructor)
	class AProp_skypiece_C*                       CallFunc_FinishSpawningActor_ReturnValue;          // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AExplosion_C*                           CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent) == 0x000010, "Wrong alignment on SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent");
static_assert(sizeof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent) == 0x000260, "Wrong size on SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, EntryPoint) == 0x000000, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::EntryPoint' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_RandomFloatInRange_ReturnValue) == 0x000008, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x00000C, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_BreakVector_X) == 0x000010, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_BreakVector_Y) == 0x000014, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_BreakVector_Z) == 0x000018, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_VInterpTo_Constant_ReturnValue) == 0x00001C, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_VInterpTo_Constant_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000028, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x00002C, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000B4, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x0000B8, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_Lerp_ReturnValue) == 0x0000BC, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x0000C0, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000148, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_getMainPlayer_AsMain_Player) == 0x000150, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_getMainPlayer_AsMain_Player' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_Create_ReturnValue) == 0x000158, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_GetForwardVector_ReturnValue) == 0x000160, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x00016C, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000178, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x000184, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000190, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x0001A0, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_Add_VectorVector_ReturnValue) == 0x0001A8, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_MakeTransform_ReturnValue) == 0x0001C0, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0001F0, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000200, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_MakeTransform_ReturnValue_1) == 0x000210, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_FinishSpawningActor_ReturnValue) == 0x000240, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x000248, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x000250, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000258, "Member 'SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");

// Function skyFallingEvent.skyFallingEvent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct SkyFallingEvent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkyFallingEvent_C_ReceiveTick) == 0x000004, "Wrong alignment on SkyFallingEvent_C_ReceiveTick");
static_assert(sizeof(SkyFallingEvent_C_ReceiveTick) == 0x000004, "Wrong size on SkyFallingEvent_C_ReceiveTick");
static_assert(offsetof(SkyFallingEvent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'SkyFallingEvent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

