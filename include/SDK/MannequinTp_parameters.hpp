#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MannequinTp

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function mannequinTp.mannequinTp_C.checkRender
// 0x0040 (0x0040 - 0x0000)
struct MannequinTp_C_CheckRender final
{
public:
	TArray<class AProp_mannequin_C*>              InputPin;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          CanTp;                                             // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_mannequin_C*                      CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_WasRecentlyRendered_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDistanceTo_ReturnValue;                // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MannequinTp_C_CheckRender) == 0x000008, "Wrong alignment on MannequinTp_C_CheckRender");
static_assert(sizeof(MannequinTp_C_CheckRender) == 0x000040, "Wrong size on MannequinTp_C_CheckRender");
static_assert(offsetof(MannequinTp_C_CheckRender, InputPin) == 0x000000, "Member 'MannequinTp_C_CheckRender::InputPin' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_CheckRender, CanTp) == 0x000010, "Member 'MannequinTp_C_CheckRender::CanTp' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_CheckRender, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'MannequinTp_C_CheckRender::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_CheckRender, Temp_int_Array_Index_Variable) == 0x000018, "Member 'MannequinTp_C_CheckRender::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_CheckRender, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'MannequinTp_C_CheckRender::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_CheckRender, CallFunc_Array_Get_Item) == 0x000020, "Member 'MannequinTp_C_CheckRender::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_CheckRender, CallFunc_WasRecentlyRendered_ReturnValue) == 0x000028, "Member 'MannequinTp_C_CheckRender::CallFunc_WasRecentlyRendered_ReturnValue' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_CheckRender, CallFunc_Less_IntInt_ReturnValue) == 0x000029, "Member 'MannequinTp_C_CheckRender::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_CheckRender, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'MannequinTp_C_CheckRender::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_CheckRender, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000030, "Member 'MannequinTp_C_CheckRender::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_CheckRender, CallFunc_GetDistanceTo_ReturnValue) == 0x000038, "Member 'MannequinTp_C_CheckRender::CallFunc_GetDistanceTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_CheckRender, CallFunc_Less_FloatFloat_ReturnValue) == 0x00003C, "Member 'MannequinTp_C_CheckRender::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_CheckRender, CallFunc_BooleanOR_ReturnValue) == 0x00003D, "Member 'MannequinTp_C_CheckRender::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function mannequinTp.mannequinTp_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct MannequinTp_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MannequinTp_C_ReceiveTick) == 0x000004, "Wrong alignment on MannequinTp_C_ReceiveTick");
static_assert(sizeof(MannequinTp_C_ReceiveTick) == 0x000004, "Wrong size on MannequinTp_C_ReceiveTick");
static_assert(offsetof(MannequinTp_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'MannequinTp_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function mannequinTp.mannequinTp_C.ExecuteUbergraph_mannequinTp
// 0x0100 (0x0100 - 0x0000)
struct MannequinTp_C_ExecuteUbergraph_mannequinTp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AProp_mannequin_C*>              CallFunc_GetAllActorsOfClass_OutActors;            // 0x0018(0x0010)(ReferenceParm)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_mannequin_C*                      CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RandomPointInBoundingBox_ReturnValue;     // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocationAndRotation_SweepHitResult; // 0x0058(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocationAndRotation_ReturnValue; // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x3];                                       // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_checkRender_canTp;                        // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_EA[0x2];                                       // 0x00EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBoolWithWeight_ReturnValue;         // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x3];                                       // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MannequinTp_C_ExecuteUbergraph_mannequinTp) == 0x000008, "Wrong alignment on MannequinTp_C_ExecuteUbergraph_mannequinTp");
static_assert(sizeof(MannequinTp_C_ExecuteUbergraph_mannequinTp) == 0x000100, "Wrong size on MannequinTp_C_ExecuteUbergraph_mannequinTp");
static_assert(offsetof(MannequinTp_C_ExecuteUbergraph_mannequinTp, EntryPoint) == 0x000000, "Member 'MannequinTp_C_ExecuteUbergraph_mannequinTp::EntryPoint' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_ExecuteUbergraph_mannequinTp, Temp_int_Array_Index_Variable) == 0x000004, "Member 'MannequinTp_C_ExecuteUbergraph_mannequinTp::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_ExecuteUbergraph_mannequinTp, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'MannequinTp_C_ExecuteUbergraph_mannequinTp::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_ExecuteUbergraph_mannequinTp, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00000C, "Member 'MannequinTp_C_ExecuteUbergraph_mannequinTp::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_ExecuteUbergraph_mannequinTp, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'MannequinTp_C_ExecuteUbergraph_mannequinTp::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_ExecuteUbergraph_mannequinTp, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000014, "Member 'MannequinTp_C_ExecuteUbergraph_mannequinTp::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_ExecuteUbergraph_mannequinTp, CallFunc_BooleanOR_ReturnValue) == 0x000015, "Member 'MannequinTp_C_ExecuteUbergraph_mannequinTp::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_ExecuteUbergraph_mannequinTp, CallFunc_GetAllActorsOfClass_OutActors) == 0x000018, "Member 'MannequinTp_C_ExecuteUbergraph_mannequinTp::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_ExecuteUbergraph_mannequinTp, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'MannequinTp_C_ExecuteUbergraph_mannequinTp::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_ExecuteUbergraph_mannequinTp, CallFunc_Array_Get_Item) == 0x000038, "Member 'MannequinTp_C_ExecuteUbergraph_mannequinTp::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_ExecuteUbergraph_mannequinTp, CallFunc_RandomPointInBoundingBox_ReturnValue) == 0x000040, "Member 'MannequinTp_C_ExecuteUbergraph_mannequinTp::CallFunc_RandomPointInBoundingBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_ExecuteUbergraph_mannequinTp, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x00004C, "Member 'MannequinTp_C_ExecuteUbergraph_mannequinTp::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_ExecuteUbergraph_mannequinTp, CallFunc_K2_SetActorLocationAndRotation_SweepHitResult) == 0x000058, "Member 'MannequinTp_C_ExecuteUbergraph_mannequinTp::CallFunc_K2_SetActorLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_ExecuteUbergraph_mannequinTp, CallFunc_K2_SetActorLocationAndRotation_ReturnValue) == 0x0000E0, "Member 'MannequinTp_C_ExecuteUbergraph_mannequinTp::CallFunc_K2_SetActorLocationAndRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_ExecuteUbergraph_mannequinTp, CallFunc_Array_Length_ReturnValue) == 0x0000E4, "Member 'MannequinTp_C_ExecuteUbergraph_mannequinTp::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_ExecuteUbergraph_mannequinTp, CallFunc_checkRender_canTp) == 0x0000E8, "Member 'MannequinTp_C_ExecuteUbergraph_mannequinTp::CallFunc_checkRender_canTp' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_ExecuteUbergraph_mannequinTp, CallFunc_Less_IntInt_ReturnValue) == 0x0000E9, "Member 'MannequinTp_C_ExecuteUbergraph_mannequinTp::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_ExecuteUbergraph_mannequinTp, K2Node_Event_DeltaSeconds) == 0x0000EC, "Member 'MannequinTp_C_ExecuteUbergraph_mannequinTp::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_ExecuteUbergraph_mannequinTp, CallFunc_RandomBoolWithWeight_ReturnValue) == 0x0000F0, "Member 'MannequinTp_C_ExecuteUbergraph_mannequinTp::CallFunc_RandomBoolWithWeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_ExecuteUbergraph_mannequinTp, CallFunc_RandomFloatInRange_ReturnValue) == 0x0000F4, "Member 'MannequinTp_C_ExecuteUbergraph_mannequinTp::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(MannequinTp_C_ExecuteUbergraph_mannequinTp, CallFunc_BooleanAND_ReturnValue) == 0x0000F8, "Member 'MannequinTp_C_ExecuteUbergraph_mannequinTp::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}
