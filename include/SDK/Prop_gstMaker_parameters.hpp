#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_gstMaker

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function prop_gstMaker.prop_gstMaker_C.ExecuteUbergraph_prop_gstMaker
// 0x0350 (0x0350 - 0x0000)
struct Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player_1;                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit_1;            // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A2[0x2];                                       // 0x00A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time_1;                    // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance_1;                // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location_1;                // 0x00AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_1;             // 0x00B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal_1;                  // 0x00C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_1;            // 0x00D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_1;                 // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor_1;                // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_1;            // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName_1;             // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem_1;                 // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex_1;            // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex_1;               // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart_1;              // 0x010C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_1;                // 0x0118(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0124(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SelectVector_ReturnValue;                 // 0x0130(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x013C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0148(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Vector_Distance_ReturnValue;              // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0158(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x01E4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit_2;            // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_2;         // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F2[0x2];                                      // 0x01F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time_2;                    // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance_2;                // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location_2;                // 0x01FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_2;             // 0x0208(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal_2;                  // 0x0214(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_2;            // 0x0220(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22C[0x4];                                      // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_2;                 // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor_2;                // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_2;            // 0x0240(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName_2;             // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem_2;                 // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex_2;            // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex_2;               // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart_2;              // 0x025C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_2;                // 0x0268(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_275[0xB];                                      // 0x0275(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0280(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x02B8(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AProp_gst_C*                            CallFunc_FinishSpawningActor_ReturnValue;          // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker) == 0x000010, "Wrong alignment on Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker");
static_assert(sizeof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker) == 0x000350, "Wrong size on Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, EntryPoint) == 0x000000, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, K2Node_Event_player_1) == 0x000008, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::K2Node_Event_player_1' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, K2Node_Event_player) == 0x000010, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_bBlockingHit) == 0x000018, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_bInitialOverlap) == 0x000019, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_Time) == 0x00001C, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_Distance) == 0x000020, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_Location) == 0x000024, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_ImpactPoint) == 0x000030, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_Normal) == 0x00003C, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_ImpactNormal) == 0x000048, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_PhysMat) == 0x000058, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_HitActor) == 0x000060, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_HitComponent) == 0x000068, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_HitBoneName) == 0x000070, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_HitItem) == 0x000078, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_ElementIndex) == 0x00007C, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_FaceIndex) == 0x000080, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_TraceStart) == 0x000084, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_TraceEnd) == 0x000090, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, K2Node_Event_DeltaSeconds) == 0x00009C, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_bBlockingHit_1) == 0x0000A0, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_bBlockingHit_1' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_bInitialOverlap_1) == 0x0000A1, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_bInitialOverlap_1' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_Time_1) == 0x0000A4, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_Time_1' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_Distance_1) == 0x0000A8, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_Distance_1' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_Location_1) == 0x0000AC, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_Location_1' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_ImpactPoint_1) == 0x0000B8, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_ImpactPoint_1' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_Normal_1) == 0x0000C4, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_Normal_1' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_ImpactNormal_1) == 0x0000D0, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_ImpactNormal_1' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_PhysMat_1) == 0x0000E0, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_PhysMat_1' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_HitActor_1) == 0x0000E8, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_HitActor_1' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_HitComponent_1) == 0x0000F0, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_HitComponent_1' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_HitBoneName_1) == 0x0000F8, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_HitBoneName_1' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_HitItem_1) == 0x000100, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_HitItem_1' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_ElementIndex_1) == 0x000104, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_ElementIndex_1' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_FaceIndex_1) == 0x000108, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_FaceIndex_1' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_TraceStart_1) == 0x00010C, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_TraceStart_1' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_TraceEnd_1) == 0x000118, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_TraceEnd_1' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000124, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_SelectVector_ReturnValue) == 0x000130, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_Subtract_VectorVector_ReturnValue) == 0x00013C, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000148, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_Vector_Distance_ReturnValue) == 0x000154, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000158, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0001E0, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_MakeVector_ReturnValue) == 0x0001E4, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_bBlockingHit_2) == 0x0001F0, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_bBlockingHit_2' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_bInitialOverlap_2) == 0x0001F1, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_bInitialOverlap_2' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_Time_2) == 0x0001F4, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_Time_2' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_Distance_2) == 0x0001F8, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_Distance_2' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_Location_2) == 0x0001FC, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_Location_2' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_ImpactPoint_2) == 0x000208, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_ImpactPoint_2' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_Normal_2) == 0x000214, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_Normal_2' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_ImpactNormal_2) == 0x000220, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_ImpactNormal_2' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_PhysMat_2) == 0x000230, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_PhysMat_2' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_HitActor_2) == 0x000238, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_HitActor_2' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_HitComponent_2) == 0x000240, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_HitComponent_2' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_HitBoneName_2) == 0x000248, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_HitBoneName_2' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_HitItem_2) == 0x000250, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_HitItem_2' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_ElementIndex_2) == 0x000254, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_ElementIndex_2' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_FaceIndex_2) == 0x000258, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_FaceIndex_2' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_TraceStart_2) == 0x00025C, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_TraceStart_2' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BreakHitResult_TraceEnd_2) == 0x000268, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BreakHitResult_TraceEnd_2' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000274, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000280, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0002B0, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x0002B8, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker, CallFunc_FinishSpawningActor_ReturnValue) == 0x000340, "Member 'Prop_gstMaker_C_ExecuteUbergraph_prop_gstMaker::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function prop_gstMaker.prop_gstMaker_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Prop_gstMaker_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_gstMaker_C_ReceiveTick) == 0x000004, "Wrong alignment on Prop_gstMaker_C_ReceiveTick");
static_assert(sizeof(Prop_gstMaker_C_ReceiveTick) == 0x000004, "Wrong size on Prop_gstMaker_C_ReceiveTick");
static_assert(offsetof(Prop_gstMaker_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Prop_gstMaker_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function prop_gstMaker.prop_gstMaker_C.playerHandRelease_RMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_gstMaker_C_PlayerHandRelease_RMB final
{
public:
	class AMainPlayer_C*                          Player_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_gstMaker_C_PlayerHandRelease_RMB) == 0x000008, "Wrong alignment on Prop_gstMaker_C_PlayerHandRelease_RMB");
static_assert(sizeof(Prop_gstMaker_C_PlayerHandRelease_RMB) == 0x000008, "Wrong size on Prop_gstMaker_C_PlayerHandRelease_RMB");
static_assert(offsetof(Prop_gstMaker_C_PlayerHandRelease_RMB, Player_0) == 0x000000, "Member 'Prop_gstMaker_C_PlayerHandRelease_RMB::Player_0' has a wrong offset!");

// Function prop_gstMaker.prop_gstMaker_C.playerHandUse_RMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_gstMaker_C_PlayerHandUse_RMB final
{
public:
	class AMainPlayer_C*                          Player_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_gstMaker_C_PlayerHandUse_RMB) == 0x000008, "Wrong alignment on Prop_gstMaker_C_PlayerHandUse_RMB");
static_assert(sizeof(Prop_gstMaker_C_PlayerHandUse_RMB) == 0x000008, "Wrong size on Prop_gstMaker_C_PlayerHandUse_RMB");
static_assert(offsetof(Prop_gstMaker_C_PlayerHandUse_RMB, Player_0) == 0x000000, "Member 'Prop_gstMaker_C_PlayerHandUse_RMB::Player_0' has a wrong offset!");

}
