#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_waterShooter

#include "Basic.hpp"

#include "Struct_save_structs.hpp"
#include "Engine_structs.hpp"
#include "Struct_mFloat_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_waterShooter.prop_waterShooter_C.ExecuteUbergraph_prop_waterShooter
// 0x0250 (0x0250 - 0x0000)
struct Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player_2;                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_arm_start;                                // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_arm_end;                                  // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_arm_rotation;                             // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0038(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;         // 0x0048(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_RandomUnitVector_ReturnValue;             // 0x00D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x00E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x00ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_EE[0x2];                                       // 0x00EE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x00F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0104(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x011C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0154(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0160(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16C[0x4];                                      // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_179[0x7];                                      // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsWater_Volume;            // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_189[0x3];                                      // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player_1;                             // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19C[0x4];                                      // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VictoryFloatMinusEquals_FloatOut;         // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x01AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x01B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x01C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue_1;           // 0x01D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x01DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x01E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F4[0xC];                                      // 0x01F4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0200(0x0030)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_VictoryFloatPlusEquals_FloatOut;          // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_234[0x4];                                      // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_241[0x7];                                      // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_sponge_p_C*                       CallFunc_FinishSpawningActor_ReturnValue;          // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter) == 0x000010, "Wrong alignment on Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter");
static_assert(sizeof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter) == 0x000250, "Wrong size on Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, EntryPoint) == 0x000000, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, K2Node_Event_player_2) == 0x000008, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::K2Node_Event_player_2' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_arm_start) == 0x000010, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_arm_start' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_arm_end) == 0x00001C, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_arm_end' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_arm_rotation) == 0x000028, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_arm_rotation' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, Temp_object_Variable) == 0x000038, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_LineTraceSingleForObjects_OutHit) == 0x000048, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x0000D0, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_RandomUnitVector_ReturnValue) == 0x0000D4, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_RandomUnitVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000E0, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_BreakHitResult_bBlockingHit) == 0x0000EC, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_BreakHitResult_bInitialOverlap) == 0x0000ED, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_BreakHitResult_Time) == 0x0000F0, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_BreakHitResult_Distance) == 0x0000F4, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_BreakHitResult_Location) == 0x0000F8, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_BreakHitResult_ImpactPoint) == 0x000104, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_BreakHitResult_Normal) == 0x000110, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_BreakHitResult_ImpactNormal) == 0x00011C, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_BreakHitResult_PhysMat) == 0x000128, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_BreakHitResult_HitActor) == 0x000130, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_BreakHitResult_HitComponent) == 0x000138, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_BreakHitResult_HitBoneName) == 0x000140, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_BreakHitResult_HitItem) == 0x000148, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_BreakHitResult_ElementIndex) == 0x00014C, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_BreakHitResult_FaceIndex) == 0x000150, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_BreakHitResult_TraceStart) == 0x000154, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_BreakHitResult_TraceEnd) == 0x000160, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_GetObjectClass_ReturnValue) == 0x000170, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000178, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, K2Node_ClassDynamicCast_AsWater_Volume) == 0x000180, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::K2Node_ClassDynamicCast_AsWater_Volume' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, K2Node_ClassDynamicCast_bSuccess) == 0x000188, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, K2Node_Event_DeltaSeconds) == 0x00018C, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, K2Node_Event_player_1) == 0x000190, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::K2Node_Event_player_1' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000198, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, K2Node_Event_player) == 0x0001A0, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_VictoryFloatMinusEquals_FloatOut) == 0x0001A8, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_VictoryFloatMinusEquals_FloatOut' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_GetForwardVector_ReturnValue) == 0x0001AC, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x0001B8, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x0001C4, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_GetForwardVector_ReturnValue_1) == 0x0001D0, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_GetForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_Add_VectorVector_ReturnValue) == 0x0001DC, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x0001E8, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_MakeTransform_ReturnValue) == 0x000200, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_VictoryFloatPlusEquals_FloatOut) == 0x000230, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_VictoryFloatPlusEquals_FloatOut' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000238, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x000240, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter, CallFunc_FinishSpawningActor_ReturnValue) == 0x000248, "Member 'Prop_waterShooter_C_ExecuteUbergraph_prop_waterShooter::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function prop_waterShooter.prop_waterShooter_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Prop_waterShooter_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_waterShooter_C_ReceiveTick) == 0x000004, "Wrong alignment on Prop_waterShooter_C_ReceiveTick");
static_assert(sizeof(Prop_waterShooter_C_ReceiveTick) == 0x000004, "Wrong size on Prop_waterShooter_C_ReceiveTick");
static_assert(offsetof(Prop_waterShooter_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Prop_waterShooter_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function prop_waterShooter.prop_waterShooter_C.Get
// 0x0020 (0x0020 - 0x0000)
struct Prop_waterShooter_C_Get final
{
public:
	float                                         Level_0;                                           // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VictoryFloatMinusEquals_FloatOut;         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_waterShooter_C_Get) == 0x000008, "Wrong alignment on Prop_waterShooter_C_Get");
static_assert(sizeof(Prop_waterShooter_C_Get) == 0x000020, "Wrong size on Prop_waterShooter_C_Get");
static_assert(offsetof(Prop_waterShooter_C_Get, Level_0) == 0x000000, "Member 'Prop_waterShooter_C_Get::Level_0' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_Get, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000004, "Member 'Prop_waterShooter_C_Get::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_Get, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000008, "Member 'Prop_waterShooter_C_Get::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_Get, CallFunc_VictoryFloatMinusEquals_FloatOut) == 0x00000C, "Member 'Prop_waterShooter_C_Get::CallFunc_VictoryFloatMinusEquals_FloatOut' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_Get, CallFunc_Conv_FloatToString_ReturnValue) == 0x000010, "Member 'Prop_waterShooter_C_Get::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");

// Function prop_waterShooter.prop_waterShooter_C.playerHandUse_LMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_waterShooter_C_PlayerHandUse_LMB final
{
public:
	class AMainPlayer_C*                          Player_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_waterShooter_C_PlayerHandUse_LMB) == 0x000008, "Wrong alignment on Prop_waterShooter_C_PlayerHandUse_LMB");
static_assert(sizeof(Prop_waterShooter_C_PlayerHandUse_LMB) == 0x000008, "Wrong size on Prop_waterShooter_C_PlayerHandUse_LMB");
static_assert(offsetof(Prop_waterShooter_C_PlayerHandUse_LMB, Player_0) == 0x000000, "Member 'Prop_waterShooter_C_PlayerHandUse_LMB::Player_0' has a wrong offset!");

// Function prop_waterShooter.prop_waterShooter_C.playerHandRelease_LMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_waterShooter_C_PlayerHandRelease_LMB final
{
public:
	class AMainPlayer_C*                          Player_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_waterShooter_C_PlayerHandRelease_LMB) == 0x000008, "Wrong alignment on Prop_waterShooter_C_PlayerHandRelease_LMB");
static_assert(sizeof(Prop_waterShooter_C_PlayerHandRelease_LMB) == 0x000008, "Wrong size on Prop_waterShooter_C_PlayerHandRelease_LMB");
static_assert(offsetof(Prop_waterShooter_C_PlayerHandRelease_LMB, Player_0) == 0x000000, "Member 'Prop_waterShooter_C_PlayerHandRelease_LMB::Player_0' has a wrong offset!");

// Function prop_waterShooter.prop_waterShooter_C.playerHandUse_RMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_waterShooter_C_PlayerHandUse_RMB final
{
public:
	class AMainPlayer_C*                          Player_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_waterShooter_C_PlayerHandUse_RMB) == 0x000008, "Wrong alignment on Prop_waterShooter_C_PlayerHandUse_RMB");
static_assert(sizeof(Prop_waterShooter_C_PlayerHandUse_RMB) == 0x000008, "Wrong size on Prop_waterShooter_C_PlayerHandUse_RMB");
static_assert(offsetof(Prop_waterShooter_C_PlayerHandUse_RMB, Player_0) == 0x000000, "Member 'Prop_waterShooter_C_PlayerHandUse_RMB::Player_0' has a wrong offset!");

// Function prop_waterShooter.prop_waterShooter_C.loadData
// 0x00E0 (0x00E0 - 0x0000)
struct Prop_waterShooter_C_LoadData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mFloat                         CallFunc_Array_Get_Item;                           // 0x00C8(0x0010)(HasGetValueTypeHash)
	float                                         CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_waterShooter_C_LoadData) == 0x000010, "Wrong alignment on Prop_waterShooter_C_LoadData");
static_assert(sizeof(Prop_waterShooter_C_LoadData) == 0x0000E0, "Wrong size on Prop_waterShooter_C_LoadData");
static_assert(offsetof(Prop_waterShooter_C_LoadData, Data) == 0x000000, "Member 'Prop_waterShooter_C_LoadData::Data' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_LoadData, Return) == 0x0000C0, "Member 'Prop_waterShooter_C_LoadData::Return' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_LoadData, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'Prop_waterShooter_C_LoadData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_LoadData, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'Prop_waterShooter_C_LoadData::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function prop_waterShooter.prop_waterShooter_C.getData
// 0x0280 (0x0280 - 0x0000)
struct Prop_waterShooter_C_GetData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(Parm, OutParm, HasGetValueTypeHash)
	struct FStruct_save                           CallFunc_getData_data;                             // 0x00C0(0x00C0)(HasGetValueTypeHash)
	TArray<float>                                 K2Node_MakeArray_Array;                            // 0x0180(0x0010)(ReferenceParm)
	struct FStruct_mFloat                         K2Node_MakeStruct_struct_mFloat;                   // 0x0190(0x0010)(HasGetValueTypeHash)
	struct FStruct_mFloat                         CallFunc_Array_Get_Item;                           // 0x01A0(0x0010)(HasGetValueTypeHash)
	TArray<struct FStruct_mFloat>                 K2Node_MakeArray_Array_1;                          // 0x01B0(0x0010)(ReferenceParm)
	struct FStruct_save                           K2Node_SetFieldsInStruct_StructOut;                // 0x01C0(0x00C0)(HasGetValueTypeHash)
};
static_assert(alignof(Prop_waterShooter_C_GetData) == 0x000010, "Wrong alignment on Prop_waterShooter_C_GetData");
static_assert(sizeof(Prop_waterShooter_C_GetData) == 0x000280, "Wrong size on Prop_waterShooter_C_GetData");
static_assert(offsetof(Prop_waterShooter_C_GetData, Data) == 0x000000, "Member 'Prop_waterShooter_C_GetData::Data' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_GetData, CallFunc_getData_data) == 0x0000C0, "Member 'Prop_waterShooter_C_GetData::CallFunc_getData_data' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_GetData, K2Node_MakeArray_Array) == 0x000180, "Member 'Prop_waterShooter_C_GetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_GetData, K2Node_MakeStruct_struct_mFloat) == 0x000190, "Member 'Prop_waterShooter_C_GetData::K2Node_MakeStruct_struct_mFloat' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_GetData, CallFunc_Array_Get_Item) == 0x0001A0, "Member 'Prop_waterShooter_C_GetData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_GetData, K2Node_MakeArray_Array_1) == 0x0001B0, "Member 'Prop_waterShooter_C_GetData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Prop_waterShooter_C_GetData, K2Node_SetFieldsInStruct_StructOut) == 0x0001C0, "Member 'Prop_waterShooter_C_GetData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

}
