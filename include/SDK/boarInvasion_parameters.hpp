#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: boarInvasion

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function boarInvasion.boarInvasion_C.ExecuteUbergraph_boarInvasion
// 0x03E0 (0x03E0 - 0x0000)
struct boarInvasion_C_ExecuteUbergraph_boarInvasion final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RotateAngleAxis_ReturnValue;              // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_DestroyedActor;                 // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0060(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x00A0(0x0030)(IsPlainOldData, NoDestructor)
	class AGrayboar_C*                            CallFunc_FinishSpawningActor_ReturnValue;          // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGrayboar_C*                            CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_101[0xF];                                      // 0x0101(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_2;              // 0x0110(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2; // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x0148(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_154[0x4];                                      // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGrayboar_C*                            CallFunc_FinishSpawningActor_ReturnValue_2;        // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_3;              // 0x0160(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3; // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0198(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A4[0x4];                                      // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGrayboar_C*                            CallFunc_FinishSpawningActor_ReturnValue_3;        // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x01B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_3;           // 0x01BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C8[0x8];                                      // 0x01C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_4;              // 0x01D0(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_5;              // 0x0200(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4; // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5; // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFiretank_C*                            CallFunc_FinishSpawningActor_ReturnValue_4;        // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFiretank_C*                            CallFunc_FinishSpawningActor_ReturnValue_5;        // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x0250(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_4;           // 0x025C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_268[0x8];                                      // 0x0268(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_6;              // 0x0270(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_7;              // 0x02A0(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_6; // 0x02D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_7; // 0x02D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFiretank_C*                            CallFunc_FinishSpawningActor_ReturnValue_6;        // 0x02E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFiretank_C*                            CallFunc_FinishSpawningActor_ReturnValue_7;        // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x02F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RotateAngleAxis_ReturnValue_1;            // 0x0300(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_5;           // 0x030C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_318[0x8];                                      // 0x0318(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_8;              // 0x0320(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_9;              // 0x0350(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_8; // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_9; // 0x0388(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAriral_shooter_C*                      CallFunc_FinishSpawningActor_ReturnValue_8;        // 0x0390(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAriral_shooter_C*                      CallFunc_FinishSpawningActor_ReturnValue_9;        // 0x0398(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x03A0(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x03B0(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x03B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_getObjectFromKey_Output;                  // 0x03C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATreehouse_C*                           K2Node_DynamicCast_AsTreehouse;                    // 0x03C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(boarInvasion_C_ExecuteUbergraph_boarInvasion) == 0x000010, "Wrong alignment on boarInvasion_C_ExecuteUbergraph_boarInvasion");
static_assert(sizeof(boarInvasion_C_ExecuteUbergraph_boarInvasion) == 0x0003E0, "Wrong size on boarInvasion_C_ExecuteUbergraph_boarInvasion");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, EntryPoint) == 0x000000, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::EntryPoint' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, Temp_int_Variable) == 0x000004, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000008, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_RandomFloatInRange_ReturnValue) == 0x00002C, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_RotateAngleAxis_ReturnValue) == 0x000030, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_RotateAngleAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, K2Node_CustomEvent_DestroyedActor) == 0x000040, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::K2Node_CustomEvent_DestroyedActor' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_Add_VectorVector_ReturnValue) == 0x000048, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000054, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_MakeTransform_ReturnValue) == 0x000060, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_Array_RemoveItem_ReturnValue) == 0x000090, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000098, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_MakeTransform_ReturnValue_1) == 0x0000A0, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000D0, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x0000D8, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_Array_Add_ReturnValue) == 0x0000E0, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x0000E8, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_Array_Length_ReturnValue) == 0x0000F0, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000F4, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000100, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_MakeTransform_ReturnValue_2) == 0x000110, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_MakeTransform_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2) == 0x000140, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_Add_VectorVector_ReturnValue_2) == 0x000148, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_FinishSpawningActor_ReturnValue_2) == 0x000158, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_FinishSpawningActor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_MakeTransform_ReturnValue_3) == 0x000160, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_MakeTransform_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3) == 0x000190, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000198, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_FinishSpawningActor_ReturnValue_3) == 0x0001A8, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_FinishSpawningActor_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0001B0, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_Add_VectorVector_ReturnValue_3) == 0x0001BC, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_Add_VectorVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_MakeTransform_ReturnValue_4) == 0x0001D0, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_MakeTransform_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_MakeTransform_ReturnValue_5) == 0x000200, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_MakeTransform_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4) == 0x000230, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5) == 0x000238, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_FinishSpawningActor_ReturnValue_4) == 0x000240, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_FinishSpawningActor_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_FinishSpawningActor_ReturnValue_5) == 0x000248, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_FinishSpawningActor_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x000250, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_Add_VectorVector_ReturnValue_4) == 0x00025C, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_Add_VectorVector_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_MakeTransform_ReturnValue_6) == 0x000270, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_MakeTransform_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_MakeTransform_ReturnValue_7) == 0x0002A0, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_MakeTransform_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_6) == 0x0002D0, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_7) == 0x0002D8, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_FinishSpawningActor_ReturnValue_6) == 0x0002E0, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_FinishSpawningActor_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_FinishSpawningActor_ReturnValue_7) == 0x0002E8, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_FinishSpawningActor_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x0002F0, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x0002F4, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_RotateAngleAxis_ReturnValue_1) == 0x000300, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_RotateAngleAxis_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_Add_VectorVector_ReturnValue_5) == 0x00030C, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_Add_VectorVector_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_MakeTransform_ReturnValue_8) == 0x000320, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_MakeTransform_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_MakeTransform_ReturnValue_9) == 0x000350, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_MakeTransform_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_8) == 0x000380, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_9) == 0x000388, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_FinishSpawningActor_ReturnValue_8) == 0x000390, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_FinishSpawningActor_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_FinishSpawningActor_ReturnValue_9) == 0x000398, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_FinishSpawningActor_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, K2Node_CreateDelegate_OutputDelegate_1) == 0x0003A0, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0003B0, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x0003B8, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, CallFunc_getObjectFromKey_Output) == 0x0003C0, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::CallFunc_getObjectFromKey_Output' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, K2Node_DynamicCast_AsTreehouse) == 0x0003C8, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::K2Node_DynamicCast_AsTreehouse' has a wrong offset!");
static_assert(offsetof(boarInvasion_C_ExecuteUbergraph_boarInvasion, K2Node_DynamicCast_bSuccess) == 0x0003D0, "Member 'boarInvasion_C_ExecuteUbergraph_boarInvasion::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function boarInvasion.boarInvasion_C.boarKill
// 0x0008 (0x0008 - 0x0000)
struct boarInvasion_C_boarKill final
{
public:
	class AActor*                                 DestroyedActor;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(boarInvasion_C_boarKill) == 0x000008, "Wrong alignment on boarInvasion_C_boarKill");
static_assert(sizeof(boarInvasion_C_boarKill) == 0x000008, "Wrong size on boarInvasion_C_boarKill");
static_assert(offsetof(boarInvasion_C_boarKill, DestroyedActor) == 0x000000, "Member 'boarInvasion_C_boarKill::DestroyedActor' has a wrong offset!");

}

