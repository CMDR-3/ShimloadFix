#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CrossbowBolt

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Struct_physSound_structs.hpp"


namespace SDK::Params
{

// Function crossbowBolt.crossbowBolt_C.ExecuteUbergraph_crossbowBolt
// 0x0498 (0x0498 - 0x0000)
struct CrossbowBolt_C_ExecuteUbergraph_crossbowBolt final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x005C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_GetMass_ReturnValue;                      // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentVelocity_ReturnValue;         // 0x00E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentVelocity_ReturnValue_1;       // 0x00F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x0104(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_1;                       // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_2;                       // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Temp_struct_Variable;                              // 0x0120(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualExactly_VectorVector_ReturnValue;    // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12D[0x3];                                      // 0x012D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetComponentVelocity_ReturnValue_2;       // 0x0130(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate;              // 0x013C(0x0010)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_VSize_ReturnValue_1;                      // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_DestroyedActor;                 // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_2;          // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_164[0x4];                                      // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;         // 0x0180(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x020A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_20B[0x1];                                      // 0x020B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0214(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0220(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x022C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0238(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_244[0x4];                                      // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0258(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0274(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0280(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28C[0x4];                                      // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInt_objects_C>        K2Node_DynamicCast_AsInt_Objects;                  // 0x0298(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             K2Node_DynamicCast_AsCharacter;                    // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_physSound_return;                         // 0x02B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BA[0x6];                                      // 0x02BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_physSound                      CallFunc_physSound_data;                           // 0x02C0(0x0040)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue_1;       // 0x0300(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x030C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MirrorVectorByNormal_ReturnValue;         // 0x0318(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0324(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Divide_VectorFloat_ReturnValue;           // 0x0330(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33C[0x4];                                      // 0x033C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0340(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0348(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D1[0x3];                                      // 0x03D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x03D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult_1;     // 0x03E0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue_1;        // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_469[0x3];                                      // 0x0469(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x046C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0470(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_471[0x3];                                      // 0x0471(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0474(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FInterpTo_ReturnValue;                    // 0x0478(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x047C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;              // 0x0480(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_3;                       // 0x0490(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt) == 0x000008, "Wrong alignment on CrossbowBolt_C_ExecuteUbergraph_crossbowBolt");
static_assert(sizeof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt) == 0x000498, "Wrong size on CrossbowBolt_C_ExecuteUbergraph_crossbowBolt");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, EntryPoint) == 0x000000, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::EntryPoint' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_Lerp_ReturnValue) == 0x000008, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, K2Node_MakeArray_Array) == 0x000028, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_GetVelocity_ReturnValue) == 0x000038, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000044, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000050, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x00005C, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_GetMass_ReturnValue) == 0x0000E4, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_GetMass_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_GetComponentVelocity_ReturnValue) == 0x0000E8, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_GetComponentVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_GetComponentVelocity_ReturnValue_1) == 0x0000F4, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_GetComponentVelocity_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_VSize_ReturnValue) == 0x000100, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000104, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000110, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000114, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_Lerp_ReturnValue_1) == 0x000118, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_Lerp_ReturnValue_2) == 0x00011C, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_Lerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, Temp_struct_Variable) == 0x000120, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_EqualExactly_VectorVector_ReturnValue) == 0x00012C, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_EqualExactly_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_GetComponentVelocity_ReturnValue_2) == 0x000130, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_GetComponentVelocity_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, K2Node_CreateDelegate_OutputDelegate) == 0x00013C, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_VSize_ReturnValue_1) == 0x00014C, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_VSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, K2Node_CustomEvent_DestroyedActor) == 0x000150, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::K2Node_CustomEvent_DestroyedActor' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_Divide_FloatFloat_ReturnValue_2) == 0x000158, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_Divide_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00015C, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000160, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_Conv_FloatToString_ReturnValue) == 0x000168, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_GetOwner_ReturnValue_1) == 0x000178, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_LineTraceSingleForObjects_OutHit) == 0x000180, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x000208, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_BreakHitResult_bBlockingHit) == 0x000209, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_BreakHitResult_bInitialOverlap) == 0x00020A, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_BreakHitResult_Time) == 0x00020C, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_BreakHitResult_Distance) == 0x000210, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_BreakHitResult_Location) == 0x000214, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_BreakHitResult_ImpactPoint) == 0x000220, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_BreakHitResult_Normal) == 0x00022C, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_BreakHitResult_ImpactNormal) == 0x000238, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_BreakHitResult_PhysMat) == 0x000248, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_BreakHitResult_HitActor) == 0x000250, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_BreakHitResult_HitComponent) == 0x000258, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_BreakHitResult_HitBoneName) == 0x000260, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_BreakHitResult_HitItem) == 0x000268, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_BreakHitResult_ElementIndex) == 0x00026C, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_BreakHitResult_FaceIndex) == 0x000270, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_BreakHitResult_TraceStart) == 0x000274, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_BreakHitResult_TraceEnd) == 0x000280, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000290, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, K2Node_DynamicCast_AsInt_Objects) == 0x000298, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::K2Node_DynamicCast_AsInt_Objects' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, K2Node_DynamicCast_bSuccess) == 0x0002A8, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, K2Node_DynamicCast_AsCharacter) == 0x0002B0, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::K2Node_DynamicCast_AsCharacter' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, K2Node_DynamicCast_bSuccess_1) == 0x0002B8, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_physSound_return) == 0x0002B9, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_physSound_return' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_physSound_data) == 0x0002C0, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_physSound_data' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_Conv_VectorToRotator_ReturnValue_1) == 0x000300, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_Conv_VectorToRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x00030C, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_MirrorVectorByNormal_ReturnValue) == 0x000318, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_MirrorVectorByNormal_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_Add_VectorVector_ReturnValue) == 0x000324, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_Divide_VectorFloat_ReturnValue) == 0x000330, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_Divide_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000340, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000348, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0003D0, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_Normal_ReturnValue) == 0x0003D4, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_K2_SetActorLocation_SweepHitResult_1) == 0x0003E0, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_K2_SetActorLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_K2_SetActorLocation_ReturnValue_1) == 0x000468, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_K2_SetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_Dot_VectorVector_ReturnValue) == 0x00046C, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_Less_FloatFloat_ReturnValue) == 0x000470, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000474, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_FInterpTo_ReturnValue) == 0x000478, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_FInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x00047C, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_LinearColorLerp_ReturnValue) == 0x000480, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrossbowBolt_C_ExecuteUbergraph_crossbowBolt, CallFunc_Lerp_ReturnValue_3) == 0x000490, "Member 'CrossbowBolt_C_ExecuteUbergraph_crossbowBolt::CallFunc_Lerp_ReturnValue_3' has a wrong offset!");

// Function crossbowBolt.crossbowBolt_C.Dest
// 0x0008 (0x0008 - 0x0000)
struct CrossbowBolt_C_Dest final
{
public:
	class AActor*                                 DestroyedActor;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CrossbowBolt_C_Dest) == 0x000008, "Wrong alignment on CrossbowBolt_C_Dest");
static_assert(sizeof(CrossbowBolt_C_Dest) == 0x000008, "Wrong size on CrossbowBolt_C_Dest");
static_assert(offsetof(CrossbowBolt_C_Dest, DestroyedActor) == 0x000000, "Member 'CrossbowBolt_C_Dest::DestroyedActor' has a wrong offset!");

// Function crossbowBolt.crossbowBolt_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct CrossbowBolt_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CrossbowBolt_C_ReceiveTick) == 0x000004, "Wrong alignment on CrossbowBolt_C_ReceiveTick");
static_assert(sizeof(CrossbowBolt_C_ReceiveTick) == 0x000004, "Wrong size on CrossbowBolt_C_ReceiveTick");
static_assert(offsetof(CrossbowBolt_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'CrossbowBolt_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

