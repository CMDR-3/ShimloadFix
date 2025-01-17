#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_flamethrower

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_flamethrower.prop_flamethrower_C.ExecuteUbergraph_prop_flamethrower
// 0x0020 (0x0020 - 0x0000)
struct Prop_flamethrower_C_ExecuteUbergraph_prop_flamethrower final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player_1;                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_flamethrower_C_ExecuteUbergraph_prop_flamethrower) == 0x000008, "Wrong alignment on Prop_flamethrower_C_ExecuteUbergraph_prop_flamethrower");
static_assert(sizeof(Prop_flamethrower_C_ExecuteUbergraph_prop_flamethrower) == 0x000020, "Wrong size on Prop_flamethrower_C_ExecuteUbergraph_prop_flamethrower");
static_assert(offsetof(Prop_flamethrower_C_ExecuteUbergraph_prop_flamethrower, EntryPoint) == 0x000000, "Member 'Prop_flamethrower_C_ExecuteUbergraph_prop_flamethrower::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_ExecuteUbergraph_prop_flamethrower, K2Node_Event_player_1) == 0x000008, "Member 'Prop_flamethrower_C_ExecuteUbergraph_prop_flamethrower::K2Node_Event_player_1' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_ExecuteUbergraph_prop_flamethrower, K2Node_Event_player) == 0x000010, "Member 'Prop_flamethrower_C_ExecuteUbergraph_prop_flamethrower::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_ExecuteUbergraph_prop_flamethrower, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'Prop_flamethrower_C_ExecuteUbergraph_prop_flamethrower::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function prop_flamethrower.prop_flamethrower_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Prop_flamethrower_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_flamethrower_C_ReceiveTick) == 0x000004, "Wrong alignment on Prop_flamethrower_C_ReceiveTick");
static_assert(sizeof(Prop_flamethrower_C_ReceiveTick) == 0x000004, "Wrong size on Prop_flamethrower_C_ReceiveTick");
static_assert(offsetof(Prop_flamethrower_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Prop_flamethrower_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function prop_flamethrower.prop_flamethrower_C.fireRay
// 0x0230 (0x0230 - 0x0000)
struct Prop_flamethrower_C_FireRay final
{
public:
	TArray<EObjectTypeQuery>                      Obj;                                               // 0x0000(0x0010)(Edit, BlueprintVisible)
	TArray<class AActor*>                         Ignores;                                           // 0x0010(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0028(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x0040(0x0010)(ReferenceParm)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RandomUnitVector_ReturnValue;             // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x008C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SetVectorLength_ReturnValue;              // 0x00A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_3;         // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBoolWithWeight_ReturnValue;         // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      CallFunc_obj_statDynPhys_obj;                      // 0x00C8(0x0010)(ReferenceParm)
	struct FHitResult                             CallFunc_SphereTraceSingleForObjects_OutHit;       // 0x00D8(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_SphereTraceSingleForObjects_ReturnValue;  // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0162(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_163[0x1];                                      // 0x0163(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x016C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0178(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0184(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0190(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19C[0x4];                                      // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x01CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x01D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSimulatingPhysics_ReturnValue;          // 0x01E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E6[0x2];                                      // 0x01E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1EC[0x4];                                      // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_SphereOverlapActors_OutActors;            // 0x01F0(0x0010)(ReferenceParm)
	bool                                          CallFunc_SphereOverlapActors_ReturnValue;          // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_201[0x7];                                      // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_214[0x4];                                      // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInt_objects_C>        K2Node_DynamicCast_AsInt_Objects;                  // 0x0218(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0229(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_flamethrower_C_FireRay) == 0x000008, "Wrong alignment on Prop_flamethrower_C_FireRay");
static_assert(sizeof(Prop_flamethrower_C_FireRay) == 0x000230, "Wrong size on Prop_flamethrower_C_FireRay");
static_assert(offsetof(Prop_flamethrower_C_FireRay, Obj) == 0x000000, "Member 'Prop_flamethrower_C_FireRay::Obj' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, Ignores) == 0x000010, "Member 'Prop_flamethrower_C_FireRay::Ignores' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, Temp_int_Variable) == 0x000020, "Member 'Prop_flamethrower_C_FireRay::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, Temp_object_Variable) == 0x000028, "Member 'Prop_flamethrower_C_FireRay::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'Prop_flamethrower_C_FireRay::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, K2Node_MakeArray_Array) == 0x000040, "Member 'Prop_flamethrower_C_FireRay::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_RandomFloatInRange_ReturnValue) == 0x000050, "Member 'Prop_flamethrower_C_FireRay::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_RandomUnitVector_ReturnValue) == 0x000054, "Member 'Prop_flamethrower_C_FireRay::CallFunc_RandomUnitVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000060, "Member 'Prop_flamethrower_C_FireRay::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x000064, "Member 'Prop_flamethrower_C_FireRay::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_GetForwardVector_ReturnValue) == 0x000068, "Member 'Prop_flamethrower_C_FireRay::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000074, "Member 'Prop_flamethrower_C_FireRay::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_Add_VectorVector_ReturnValue) == 0x000080, "Member 'Prop_flamethrower_C_FireRay::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_VLerp_ReturnValue) == 0x00008C, "Member 'Prop_flamethrower_C_FireRay::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000098, "Member 'Prop_flamethrower_C_FireRay::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_SetVectorLength_ReturnValue) == 0x0000A4, "Member 'Prop_flamethrower_C_FireRay::CallFunc_SetVectorLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_Add_VectorVector_ReturnValue_2) == 0x0000B0, "Member 'Prop_flamethrower_C_FireRay::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_RandomFloatInRange_ReturnValue_3) == 0x0000BC, "Member 'Prop_flamethrower_C_FireRay::CallFunc_RandomFloatInRange_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_RandomBoolWithWeight_ReturnValue) == 0x0000C0, "Member 'Prop_flamethrower_C_FireRay::CallFunc_RandomBoolWithWeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_obj_statDynPhys_obj) == 0x0000C8, "Member 'Prop_flamethrower_C_FireRay::CallFunc_obj_statDynPhys_obj' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_SphereTraceSingleForObjects_OutHit) == 0x0000D8, "Member 'Prop_flamethrower_C_FireRay::CallFunc_SphereTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_SphereTraceSingleForObjects_ReturnValue) == 0x000160, "Member 'Prop_flamethrower_C_FireRay::CallFunc_SphereTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_BreakHitResult_bBlockingHit) == 0x000161, "Member 'Prop_flamethrower_C_FireRay::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_BreakHitResult_bInitialOverlap) == 0x000162, "Member 'Prop_flamethrower_C_FireRay::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_BreakHitResult_Time) == 0x000164, "Member 'Prop_flamethrower_C_FireRay::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_BreakHitResult_Distance) == 0x000168, "Member 'Prop_flamethrower_C_FireRay::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_BreakHitResult_Location) == 0x00016C, "Member 'Prop_flamethrower_C_FireRay::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_BreakHitResult_ImpactPoint) == 0x000178, "Member 'Prop_flamethrower_C_FireRay::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_BreakHitResult_Normal) == 0x000184, "Member 'Prop_flamethrower_C_FireRay::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_BreakHitResult_ImpactNormal) == 0x000190, "Member 'Prop_flamethrower_C_FireRay::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_BreakHitResult_PhysMat) == 0x0001A0, "Member 'Prop_flamethrower_C_FireRay::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_BreakHitResult_HitActor) == 0x0001A8, "Member 'Prop_flamethrower_C_FireRay::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_BreakHitResult_HitComponent) == 0x0001B0, "Member 'Prop_flamethrower_C_FireRay::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_BreakHitResult_HitBoneName) == 0x0001B8, "Member 'Prop_flamethrower_C_FireRay::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_BreakHitResult_HitItem) == 0x0001C0, "Member 'Prop_flamethrower_C_FireRay::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_BreakHitResult_ElementIndex) == 0x0001C4, "Member 'Prop_flamethrower_C_FireRay::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_BreakHitResult_FaceIndex) == 0x0001C8, "Member 'Prop_flamethrower_C_FireRay::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_BreakHitResult_TraceStart) == 0x0001CC, "Member 'Prop_flamethrower_C_FireRay::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_BreakHitResult_TraceEnd) == 0x0001D8, "Member 'Prop_flamethrower_C_FireRay::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_IsValid_ReturnValue) == 0x0001E4, "Member 'Prop_flamethrower_C_FireRay::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_IsSimulatingPhysics_ReturnValue) == 0x0001E5, "Member 'Prop_flamethrower_C_FireRay::CallFunc_IsSimulatingPhysics_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_Array_Add_ReturnValue) == 0x0001E8, "Member 'Prop_flamethrower_C_FireRay::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_SphereOverlapActors_OutActors) == 0x0001F0, "Member 'Prop_flamethrower_C_FireRay::CallFunc_SphereOverlapActors_OutActors' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_SphereOverlapActors_ReturnValue) == 0x000200, "Member 'Prop_flamethrower_C_FireRay::CallFunc_SphereOverlapActors_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_Array_Get_Item) == 0x000208, "Member 'Prop_flamethrower_C_FireRay::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_Array_Length_ReturnValue) == 0x000210, "Member 'Prop_flamethrower_C_FireRay::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, K2Node_DynamicCast_AsInt_Objects) == 0x000218, "Member 'Prop_flamethrower_C_FireRay::K2Node_DynamicCast_AsInt_Objects' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, K2Node_DynamicCast_bSuccess) == 0x000228, "Member 'Prop_flamethrower_C_FireRay::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Prop_flamethrower_C_FireRay, CallFunc_Less_IntInt_ReturnValue) == 0x000229, "Member 'Prop_flamethrower_C_FireRay::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function prop_flamethrower.prop_flamethrower_C.playerHandRelease_LMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_flamethrower_C_PlayerHandRelease_LMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_flamethrower_C_PlayerHandRelease_LMB) == 0x000008, "Wrong alignment on Prop_flamethrower_C_PlayerHandRelease_LMB");
static_assert(sizeof(Prop_flamethrower_C_PlayerHandRelease_LMB) == 0x000008, "Wrong size on Prop_flamethrower_C_PlayerHandRelease_LMB");
static_assert(offsetof(Prop_flamethrower_C_PlayerHandRelease_LMB, Player) == 0x000000, "Member 'Prop_flamethrower_C_PlayerHandRelease_LMB::Player' has a wrong offset!");

// Function prop_flamethrower.prop_flamethrower_C.playerHandUse_LMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_flamethrower_C_PlayerHandUse_LMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_flamethrower_C_PlayerHandUse_LMB) == 0x000008, "Wrong alignment on Prop_flamethrower_C_PlayerHandUse_LMB");
static_assert(sizeof(Prop_flamethrower_C_PlayerHandUse_LMB) == 0x000008, "Wrong size on Prop_flamethrower_C_PlayerHandUse_LMB");
static_assert(offsetof(Prop_flamethrower_C_PlayerHandUse_LMB, Player) == 0x000000, "Member 'Prop_flamethrower_C_PlayerHandUse_LMB::Player' has a wrong offset!");

}

