#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_firetankGastank

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_firetankGastank.prop_firetankGastank_C.ExecuteUbergraph_prop_firetankGastank
// 0x0130 (0x0130 - 0x0000)
struct Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0010(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A[0x2];                                       // 0x009A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x00A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x00BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0104(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_gascan_C*                         K2Node_DynamicCast_AsProp_Gascan;                  // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank) == 0x000008, "Wrong alignment on Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank");
static_assert(sizeof(Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank) == 0x000130, "Wrong size on Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank");
static_assert(offsetof(Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank, EntryPoint) == 0x000000, "Member 'Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank, K2Node_Event_player) == 0x000008, "Member 'Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank, K2Node_Event_hit) == 0x000010, "Member 'Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank, CallFunc_BreakHitResult_bBlockingHit) == 0x000098, "Member 'Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank, CallFunc_BreakHitResult_bInitialOverlap) == 0x000099, "Member 'Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank, CallFunc_BreakHitResult_Time) == 0x00009C, "Member 'Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank, CallFunc_BreakHitResult_Distance) == 0x0000A0, "Member 'Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank, CallFunc_BreakHitResult_Location) == 0x0000A4, "Member 'Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank, CallFunc_BreakHitResult_ImpactPoint) == 0x0000B0, "Member 'Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank, CallFunc_BreakHitResult_Normal) == 0x0000BC, "Member 'Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank, CallFunc_BreakHitResult_ImpactNormal) == 0x0000C8, "Member 'Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank, CallFunc_BreakHitResult_PhysMat) == 0x0000D8, "Member 'Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank, CallFunc_BreakHitResult_HitActor) == 0x0000E0, "Member 'Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank, CallFunc_BreakHitResult_HitComponent) == 0x0000E8, "Member 'Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank, CallFunc_BreakHitResult_HitBoneName) == 0x0000F0, "Member 'Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank, CallFunc_BreakHitResult_HitItem) == 0x0000F8, "Member 'Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank, CallFunc_BreakHitResult_ElementIndex) == 0x0000FC, "Member 'Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank, CallFunc_BreakHitResult_FaceIndex) == 0x000100, "Member 'Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank, CallFunc_BreakHitResult_TraceStart) == 0x000104, "Member 'Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank, CallFunc_BreakHitResult_TraceEnd) == 0x000110, "Member 'Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank, K2Node_DynamicCast_AsProp_Gascan) == 0x000120, "Member 'Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank::K2Node_DynamicCast_AsProp_Gascan' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank, K2Node_DynamicCast_bSuccess) == 0x000128, "Member 'Prop_firetankGastank_C_ExecuteUbergraph_prop_firetankGastank::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function prop_firetankGastank.prop_firetankGastank_C.refuel
// 0x0028 (0x0028 - 0x0000)
struct Prop_firetankGastank_C_Refuel final
{
public:
	class AProp_gascan_C*                         Gascan;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IntAm;                                             // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMin_ReturnValue;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMin_ReturnValue_1;                       // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VictoryFloatPlusEquals_FloatOut;          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_firetankGastank_C_Refuel) == 0x000008, "Wrong alignment on Prop_firetankGastank_C_Refuel");
static_assert(sizeof(Prop_firetankGastank_C_Refuel) == 0x000028, "Wrong size on Prop_firetankGastank_C_Refuel");
static_assert(offsetof(Prop_firetankGastank_C_Refuel, Gascan) == 0x000000, "Member 'Prop_firetankGastank_C_Refuel::Gascan' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_Refuel, IntAm) == 0x000008, "Member 'Prop_firetankGastank_C_Refuel::IntAm' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_Refuel, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00000C, "Member 'Prop_firetankGastank_C_Refuel::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_Refuel, CallFunc_FMin_ReturnValue) == 0x000010, "Member 'Prop_firetankGastank_C_Refuel::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_Refuel, CallFunc_FMin_ReturnValue_1) == 0x000014, "Member 'Prop_firetankGastank_C_Refuel::CallFunc_FMin_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_Refuel, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000018, "Member 'Prop_firetankGastank_C_Refuel::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_Refuel, CallFunc_VictoryFloatPlusEquals_FloatOut) == 0x00001C, "Member 'Prop_firetankGastank_C_Refuel::CallFunc_VictoryFloatPlusEquals_FloatOut' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_Refuel, CallFunc_FMax_ReturnValue) == 0x000020, "Member 'Prop_firetankGastank_C_Refuel::CallFunc_FMax_ReturnValue' has a wrong offset!");

// Function prop_firetankGastank.prop_firetankGastank_C.playerUsedOn
// 0x0090 (0x0090 - 0x0000)
struct Prop_firetankGastank_C_PlayerUsedOn final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit_0;                                             // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Prop_firetankGastank_C_PlayerUsedOn) == 0x000008, "Wrong alignment on Prop_firetankGastank_C_PlayerUsedOn");
static_assert(sizeof(Prop_firetankGastank_C_PlayerUsedOn) == 0x000090, "Wrong size on Prop_firetankGastank_C_PlayerUsedOn");
static_assert(offsetof(Prop_firetankGastank_C_PlayerUsedOn, Player) == 0x000000, "Member 'Prop_firetankGastank_C_PlayerUsedOn::Player' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_PlayerUsedOn, Hit_0) == 0x000008, "Member 'Prop_firetankGastank_C_PlayerUsedOn::Hit_0' has a wrong offset!");

// Function prop_firetankGastank.prop_firetankGastank_C.lookAt
// 0x0148 (0x0148 - 0x0000)
struct Prop_firetankGastank_C_LookAt final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit_0;                                             // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Return;                                            // 0x0090(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Text;                                              // 0x0098(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    boundObjectReplace;                                // 0x00A8(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Number;                                            // 0x00B0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x00B8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00D0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0110(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0120(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_firetankGastank_C_LookAt) == 0x000008, "Wrong alignment on Prop_firetankGastank_C_LookAt");
static_assert(sizeof(Prop_firetankGastank_C_LookAt) == 0x000148, "Wrong size on Prop_firetankGastank_C_LookAt");
static_assert(offsetof(Prop_firetankGastank_C_LookAt, Player) == 0x000000, "Member 'Prop_firetankGastank_C_LookAt::Player' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_LookAt, Hit_0) == 0x000008, "Member 'Prop_firetankGastank_C_LookAt::Hit_0' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_LookAt, Return) == 0x000090, "Member 'Prop_firetankGastank_C_LookAt::Return' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_LookAt, Text) == 0x000098, "Member 'Prop_firetankGastank_C_LookAt::Text' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_LookAt, boundObjectReplace) == 0x0000A8, "Member 'Prop_firetankGastank_C_LookAt::boundObjectReplace' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_LookAt, Number) == 0x0000B0, "Member 'Prop_firetankGastank_C_LookAt::Number' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_LookAt, CallFunc_Conv_FloatToText_ReturnValue) == 0x0000B8, "Member 'Prop_firetankGastank_C_LookAt::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_LookAt, K2Node_MakeStruct_FormatArgumentData) == 0x0000D0, "Member 'Prop_firetankGastank_C_LookAt::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_LookAt, K2Node_MakeArray_Array) == 0x000110, "Member 'Prop_firetankGastank_C_LookAt::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_LookAt, CallFunc_Format_ReturnValue) == 0x000120, "Member 'Prop_firetankGastank_C_LookAt::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_firetankGastank_C_LookAt, CallFunc_Conv_TextToString_ReturnValue) == 0x000138, "Member 'Prop_firetankGastank_C_LookAt::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

}

