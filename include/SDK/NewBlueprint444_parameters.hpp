#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewBlueprint444

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function NewBlueprint444.NewBlueprint444_C.ExecuteUbergraph_NewBlueprint444
// 0x0110 (0x0110 - 0x0000)
struct NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_WithEditor_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBoolWithWeight_ReturnValue;         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetRandomPointInNavigableRadius_RandomLocation; // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_GetRandomPointInNavigableRadius_ReturnValue; // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetGlobalTimeDilation_ReturnValue;        // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_LowEntry_LocalVariable_Value__Object;       // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0064(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBoolWithWeight_ReturnValue_1;       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0xF];                                       // 0x0071(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0080(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqualExactly_VectorVector_ReturnValue; // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ANewBlueprint44_C*                      CallFunc_FinishSpawningActor_ReturnValue;          // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMousePosition_Success;                 // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMousePosition_X;                       // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMousePosition_Y;                       // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                              K2Node_MakeStruct_IntPoint;                        // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ClientWindow__GameWindowIsForeGroundInOS_ReturnValue; // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x3];                                       // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetRotated2D_ReturnValue;                 // 0x00F4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                              CallFunc_Conv_Vector2DToIntPoint_ReturnValue;      // 0x00FC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                              CallFunc_Add_IntPointIntPoint_ReturnValue;         // 0x0104(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444) == 0x000010, "Wrong alignment on NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444");
static_assert(sizeof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444) == 0x000110, "Wrong size on NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, EntryPoint) == 0x000000, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::EntryPoint' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, CallFunc_WithEditor_ReturnValue) == 0x000004, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::CallFunc_WithEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, K2Node_Event_DeltaSeconds) == 0x000020, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000028, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, CallFunc_RandomBoolWithWeight_ReturnValue) == 0x000030, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::CallFunc_RandomBoolWithWeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000034, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, CallFunc_K2_GetRandomPointInNavigableRadius_RandomLocation) == 0x000040, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::CallFunc_K2_GetRandomPointInNavigableRadius_RandomLocation' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, CallFunc_K2_GetRandomPointInNavigableRadius_ReturnValue) == 0x00004C, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::CallFunc_K2_GetRandomPointInNavigableRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, CallFunc_GetGlobalTimeDilation_ReturnValue) == 0x000050, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::CallFunc_GetGlobalTimeDilation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, K2Node_LowEntry_LocalVariable_Value__Object) == 0x000054, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::K2Node_LowEntry_LocalVariable_Value__Object' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000060, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, CallFunc_Add_VectorVector_ReturnValue) == 0x000064, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, CallFunc_RandomBoolWithWeight_ReturnValue_1) == 0x000070, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::CallFunc_RandomBoolWithWeight_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, CallFunc_MakeTransform_ReturnValue) == 0x000080, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000B0, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, CallFunc_NotEqualExactly_VectorVector_ReturnValue) == 0x0000B8, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::CallFunc_NotEqualExactly_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000C0, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, CallFunc_GetMousePosition_Success) == 0x0000C8, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::CallFunc_GetMousePosition_Success' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, CallFunc_GetMousePosition_X) == 0x0000CC, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::CallFunc_GetMousePosition_X' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, CallFunc_GetMousePosition_Y) == 0x0000D0, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::CallFunc_GetMousePosition_Y' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, CallFunc_RandomFloatInRange_ReturnValue) == 0x0000D4, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, K2Node_MakeStruct_IntPoint) == 0x0000D8, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::K2Node_MakeStruct_IntPoint' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, CallFunc_FMax_ReturnValue) == 0x0000E0, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x0000E4, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, CallFunc_MakeVector2D_ReturnValue) == 0x0000E8, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, CallFunc_ClientWindow__GameWindowIsForeGroundInOS_ReturnValue) == 0x0000F0, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::CallFunc_ClientWindow__GameWindowIsForeGroundInOS_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, CallFunc_GetRotated2D_ReturnValue) == 0x0000F4, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::CallFunc_GetRotated2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, CallFunc_Conv_Vector2DToIntPoint_ReturnValue) == 0x0000FC, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::CallFunc_Conv_Vector2DToIntPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444, CallFunc_Add_IntPointIntPoint_ReturnValue) == 0x000104, "Member 'NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444::CallFunc_Add_IntPointIntPoint_ReturnValue' has a wrong offset!");

// Function NewBlueprint444.NewBlueprint444_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct NewBlueprint444_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewBlueprint444_C_ReceiveTick) == 0x000004, "Wrong alignment on NewBlueprint444_C_ReceiveTick");
static_assert(sizeof(NewBlueprint444_C_ReceiveTick) == 0x000004, "Wrong size on NewBlueprint444_C_ReceiveTick");
static_assert(offsetof(NewBlueprint444_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'NewBlueprint444_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

