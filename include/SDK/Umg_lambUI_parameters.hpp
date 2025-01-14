#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_lambUI

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function umg_lambUI.umg_lambUI_C.setLoc
// 0x00B0 (0x00B0 - 0x0000)
struct Umg_lambUI_C_SetLoc final
{
public:
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_Origin;                // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_BoxExtent;             // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetComponentBounds_SphereRadius;          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFOVAngle_ReturnValue;                  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Vector_Distance_ReturnValue;              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue; // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A[0x2];                                       // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D[0x3];                                       // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_lambUI_C_SetLoc) == 0x000008, "Wrong alignment on Umg_lambUI_C_SetLoc");
static_assert(sizeof(Umg_lambUI_C_SetLoc) == 0x0000B0, "Wrong size on Umg_lambUI_C_SetLoc");
static_assert(offsetof(Umg_lambUI_C_SetLoc, Temp_byte_Variable) == 0x000000, "Member 'Umg_lambUI_C_SetLoc::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, Temp_byte_Variable_1) == 0x000001, "Member 'Umg_lambUI_C_SetLoc::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, Temp_bool_Variable) == 0x000002, "Member 'Umg_lambUI_C_SetLoc::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000008, "Member 'Umg_lambUI_C_SetLoc::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000010, "Member 'Umg_lambUI_C_SetLoc::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, CallFunc_GetComponentBounds_Origin) == 0x000018, "Member 'Umg_lambUI_C_SetLoc::CallFunc_GetComponentBounds_Origin' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, CallFunc_GetComponentBounds_BoxExtent) == 0x000024, "Member 'Umg_lambUI_C_SetLoc::CallFunc_GetComponentBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, CallFunc_GetComponentBounds_SphereRadius) == 0x000030, "Member 'Umg_lambUI_C_SetLoc::CallFunc_GetComponentBounds_SphereRadius' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, CallFunc_GetFOVAngle_ReturnValue) == 0x000034, "Member 'Umg_lambUI_C_SetLoc::CallFunc_GetFOVAngle_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, CallFunc_BreakVector_X) == 0x000038, "Member 'Umg_lambUI_C_SetLoc::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, CallFunc_BreakVector_Y) == 0x00003C, "Member 'Umg_lambUI_C_SetLoc::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, CallFunc_BreakVector_Z) == 0x000040, "Member 'Umg_lambUI_C_SetLoc::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000044, "Member 'Umg_lambUI_C_SetLoc::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, CallFunc_Add_FloatFloat_ReturnValue) == 0x000048, "Member 'Umg_lambUI_C_SetLoc::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00004C, "Member 'Umg_lambUI_C_SetLoc::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, CallFunc_MakeVector_ReturnValue) == 0x000058, "Member 'Umg_lambUI_C_SetLoc::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, CallFunc_GetPlayerController_ReturnValue) == 0x000068, "Member 'Umg_lambUI_C_SetLoc::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, CallFunc_Add_VectorVector_ReturnValue) == 0x000070, "Member 'Umg_lambUI_C_SetLoc::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, CallFunc_Vector_Distance_ReturnValue) == 0x00007C, "Member 'Umg_lambUI_C_SetLoc::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition) == 0x000080, "Member 'Umg_lambUI_C_SetLoc::CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue) == 0x000088, "Member 'Umg_lambUI_C_SetLoc::CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000089, "Member 'Umg_lambUI_C_SetLoc::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x00008C, "Member 'Umg_lambUI_C_SetLoc::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, CallFunc_BooleanAND_ReturnValue) == 0x000090, "Member 'Umg_lambUI_C_SetLoc::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000094, "Member 'Umg_lambUI_C_SetLoc::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000098, "Member 'Umg_lambUI_C_SetLoc::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, K2Node_Select_Default) == 0x00009C, "Member 'Umg_lambUI_C_SetLoc::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, CallFunc_MakeVector2D_ReturnValue) == 0x0000A0, "Member 'Umg_lambUI_C_SetLoc::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_lambUI_C_SetLoc, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0000A8, "Member 'Umg_lambUI_C_SetLoc::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

}

