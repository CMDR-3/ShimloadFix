#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: P_kerfus_y

#include "Basic.hpp"


namespace SDK::Params
{

// Function p_kerfus_y.p_kerfus_y_C.ExecuteUbergraph_p_kerfus_y
// 0x0020 (0x0020 - 0x0000)
struct P_kerfus_y_C_ExecuteUbergraph_p_kerfus_y final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKefrus_face_Skeleton_AnimBlueprint_C*  K2Node_DynamicCast_AsKefrus_Face_Skeleton_Anim_Blueprint; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P_kerfus_y_C_ExecuteUbergraph_p_kerfus_y) == 0x000008, "Wrong alignment on P_kerfus_y_C_ExecuteUbergraph_p_kerfus_y");
static_assert(sizeof(P_kerfus_y_C_ExecuteUbergraph_p_kerfus_y) == 0x000020, "Wrong size on P_kerfus_y_C_ExecuteUbergraph_p_kerfus_y");
static_assert(offsetof(P_kerfus_y_C_ExecuteUbergraph_p_kerfus_y, EntryPoint) == 0x000000, "Member 'P_kerfus_y_C_ExecuteUbergraph_p_kerfus_y::EntryPoint' has a wrong offset!");
static_assert(offsetof(P_kerfus_y_C_ExecuteUbergraph_p_kerfus_y, CallFunc_GetAnimInstance_ReturnValue) == 0x000008, "Member 'P_kerfus_y_C_ExecuteUbergraph_p_kerfus_y::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(P_kerfus_y_C_ExecuteUbergraph_p_kerfus_y, K2Node_DynamicCast_AsKefrus_Face_Skeleton_Anim_Blueprint) == 0x000010, "Member 'P_kerfus_y_C_ExecuteUbergraph_p_kerfus_y::K2Node_DynamicCast_AsKefrus_Face_Skeleton_Anim_Blueprint' has a wrong offset!");
static_assert(offsetof(P_kerfus_y_C_ExecuteUbergraph_p_kerfus_y, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'P_kerfus_y_C_ExecuteUbergraph_p_kerfus_y::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

