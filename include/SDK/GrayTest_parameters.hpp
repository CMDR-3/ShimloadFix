#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GrayTest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AIModule_structs.hpp"


namespace SDK::Params
{

// Function grayTest.grayTest_C.ExecuteUbergraph_grayTest
// 0x0248 (0x0248 - 0x0000)
struct GrayTest_C_ExecuteUbergraph_grayTest final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult_3;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult_2;               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	EPathFollowingResult                          Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult_1;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult;                 // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A[0x2];                                       // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x005C(0x0010)(ZeroConstructor, NoDestructor)
	EPathFollowingResult                          Temp_byte_Variable_1;                              // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0080(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x0088(0x0010)(ZeroConstructor, NoDestructor)
	struct FVector                                CallFunc_GetActorArrayAverageLocation_ReturnValue; // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation; // 0x00A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue; // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B2[0x6];                                       // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAIAsyncTaskBlueprintProxy*             CallFunc_CreateMoveToProxyObject_ReturnValue;      // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AGrayTest_C*>                    CallFunc_GetAllActorsOfClass_OutActors;            // 0x00C8(0x0010)(ReferenceParm)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_step_OutHit;                              // 0x00DC(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0x0168(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_171[0x3];                                      // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0174(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIAsyncTaskBlueprintProxy*             CallFunc_CreateMoveToProxyObject_ReturnValue_1;    // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_189[0x7];                                      // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0190(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1AD[0x3];                                      // 0x01AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x01B0(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AMainPlayer_C*                          K2Node_DynamicCast_AsMain_Player;                  // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GrayTest_C_ExecuteUbergraph_grayTest) == 0x000008, "Wrong alignment on GrayTest_C_ExecuteUbergraph_grayTest");
static_assert(sizeof(GrayTest_C_ExecuteUbergraph_grayTest) == 0x000248, "Wrong size on GrayTest_C_ExecuteUbergraph_grayTest");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, EntryPoint) == 0x000000, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::EntryPoint' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, K2Node_CustomEvent_MovementResult_3) == 0x000004, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::K2Node_CustomEvent_MovementResult_3' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, K2Node_CustomEvent_MovementResult_2) == 0x000005, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::K2Node_CustomEvent_MovementResult_2' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, Temp_byte_Variable) == 0x000018, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000030, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, K2Node_CreateDelegate_OutputDelegate_2) == 0x000038, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, K2Node_CreateDelegate_OutputDelegate_3) == 0x000048, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, K2Node_CustomEvent_MovementResult_1) == 0x000058, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::K2Node_CustomEvent_MovementResult_1' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, K2Node_CustomEvent_MovementResult) == 0x000059, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::K2Node_CustomEvent_MovementResult' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, K2Node_CreateDelegate_OutputDelegate_4) == 0x00005C, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, Temp_byte_Variable_1) == 0x00006C, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, K2Node_CreateDelegate_OutputDelegate_5) == 0x000070, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000080, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, K2Node_CreateDelegate_OutputDelegate_6) == 0x000088, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, CallFunc_GetActorArrayAverageLocation_ReturnValue) == 0x000098, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::CallFunc_GetActorArrayAverageLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation) == 0x0000A4, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue) == 0x0000B0, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, CallFunc_K2_AttachToComponent_ReturnValue) == 0x0000B1, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, CallFunc_CreateMoveToProxyObject_ReturnValue) == 0x0000B8, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::CallFunc_CreateMoveToProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, CallFunc_IsValid_ReturnValue) == 0x0000C0, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, CallFunc_GetAllActorsOfClass_OutActors) == 0x0000C8, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, CallFunc_RandomFloatInRange_ReturnValue) == 0x0000D8, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, CallFunc_step_OutHit) == 0x0000DC, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::CallFunc_step_OutHit' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000164, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, CallFunc_K2_SetTimerDelegate_ReturnValue_2) == 0x000168, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::CallFunc_K2_SetTimerDelegate_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, CallFunc_IsValid_ReturnValue_1) == 0x000170, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, CallFunc_MakeVector_ReturnValue) == 0x000174, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, CallFunc_CreateMoveToProxyObject_ReturnValue_1) == 0x000180, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::CallFunc_CreateMoveToProxyObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, CallFunc_IsValid_ReturnValue_2) == 0x000188, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000190, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, K2Node_ComponentBoundEvent_OtherActor) == 0x000198, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, K2Node_ComponentBoundEvent_OtherComp) == 0x0001A0, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x0001A8, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, K2Node_ComponentBoundEvent_bFromSweep) == 0x0001AC, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, K2Node_ComponentBoundEvent_SweepResult) == 0x0001B0, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, K2Node_DynamicCast_AsMain_Player) == 0x000238, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::K2Node_DynamicCast_AsMain_Player' has a wrong offset!");
static_assert(offsetof(GrayTest_C_ExecuteUbergraph_grayTest, K2Node_DynamicCast_bSuccess) == 0x000240, "Member 'GrayTest_C_ExecuteUbergraph_grayTest::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function grayTest.grayTest_C.BndEvt__grayTest_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct GrayTest_C_BndEvt__grayTest_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(GrayTest_C_BndEvt__grayTest_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on GrayTest_C_BndEvt__grayTest_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(GrayTest_C_BndEvt__grayTest_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on GrayTest_C_BndEvt__grayTest_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(GrayTest_C_BndEvt__grayTest_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'GrayTest_C_BndEvt__grayTest_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(GrayTest_C_BndEvt__grayTest_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'GrayTest_C_BndEvt__grayTest_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(GrayTest_C_BndEvt__grayTest_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'GrayTest_C_BndEvt__grayTest_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(GrayTest_C_BndEvt__grayTest_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'GrayTest_C_BndEvt__grayTest_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(GrayTest_C_BndEvt__grayTest_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'GrayTest_C_BndEvt__grayTest_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(GrayTest_C_BndEvt__grayTest_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'GrayTest_C_BndEvt__grayTest_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function grayTest.grayTest_C.OnSuccess_2C5AE44844E972BA129A2EAD6A77B621
// 0x0001 (0x0001 - 0x0000)
struct GrayTest_C_OnSuccess_2C5AE44844E972BA129A2EAD6A77B621 final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GrayTest_C_OnSuccess_2C5AE44844E972BA129A2EAD6A77B621) == 0x000001, "Wrong alignment on GrayTest_C_OnSuccess_2C5AE44844E972BA129A2EAD6A77B621");
static_assert(sizeof(GrayTest_C_OnSuccess_2C5AE44844E972BA129A2EAD6A77B621) == 0x000001, "Wrong size on GrayTest_C_OnSuccess_2C5AE44844E972BA129A2EAD6A77B621");
static_assert(offsetof(GrayTest_C_OnSuccess_2C5AE44844E972BA129A2EAD6A77B621, MovementResult) == 0x000000, "Member 'GrayTest_C_OnSuccess_2C5AE44844E972BA129A2EAD6A77B621::MovementResult' has a wrong offset!");

// Function grayTest.grayTest_C.OnFail_2C5AE44844E972BA129A2EAD6A77B621
// 0x0001 (0x0001 - 0x0000)
struct GrayTest_C_OnFail_2C5AE44844E972BA129A2EAD6A77B621 final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GrayTest_C_OnFail_2C5AE44844E972BA129A2EAD6A77B621) == 0x000001, "Wrong alignment on GrayTest_C_OnFail_2C5AE44844E972BA129A2EAD6A77B621");
static_assert(sizeof(GrayTest_C_OnFail_2C5AE44844E972BA129A2EAD6A77B621) == 0x000001, "Wrong size on GrayTest_C_OnFail_2C5AE44844E972BA129A2EAD6A77B621");
static_assert(offsetof(GrayTest_C_OnFail_2C5AE44844E972BA129A2EAD6A77B621, MovementResult) == 0x000000, "Member 'GrayTest_C_OnFail_2C5AE44844E972BA129A2EAD6A77B621::MovementResult' has a wrong offset!");

// Function grayTest.grayTest_C.OnSuccess_CA937A4B44017010BE0F229F9D202BD1
// 0x0001 (0x0001 - 0x0000)
struct GrayTest_C_OnSuccess_CA937A4B44017010BE0F229F9D202BD1 final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GrayTest_C_OnSuccess_CA937A4B44017010BE0F229F9D202BD1) == 0x000001, "Wrong alignment on GrayTest_C_OnSuccess_CA937A4B44017010BE0F229F9D202BD1");
static_assert(sizeof(GrayTest_C_OnSuccess_CA937A4B44017010BE0F229F9D202BD1) == 0x000001, "Wrong size on GrayTest_C_OnSuccess_CA937A4B44017010BE0F229F9D202BD1");
static_assert(offsetof(GrayTest_C_OnSuccess_CA937A4B44017010BE0F229F9D202BD1, MovementResult) == 0x000000, "Member 'GrayTest_C_OnSuccess_CA937A4B44017010BE0F229F9D202BD1::MovementResult' has a wrong offset!");

// Function grayTest.grayTest_C.OnFail_CA937A4B44017010BE0F229F9D202BD1
// 0x0001 (0x0001 - 0x0000)
struct GrayTest_C_OnFail_CA937A4B44017010BE0F229F9D202BD1 final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GrayTest_C_OnFail_CA937A4B44017010BE0F229F9D202BD1) == 0x000001, "Wrong alignment on GrayTest_C_OnFail_CA937A4B44017010BE0F229F9D202BD1");
static_assert(sizeof(GrayTest_C_OnFail_CA937A4B44017010BE0F229F9D202BD1) == 0x000001, "Wrong size on GrayTest_C_OnFail_CA937A4B44017010BE0F229F9D202BD1");
static_assert(offsetof(GrayTest_C_OnFail_CA937A4B44017010BE0F229F9D202BD1, MovementResult) == 0x000000, "Member 'GrayTest_C_OnFail_CA937A4B44017010BE0F229F9D202BD1::MovementResult' has a wrong offset!");

// Function grayTest.grayTest_C.deacCams
// 0x00B8 (0x00B8 - 0x0000)
struct GrayTest_C_DeacCams final
{
public:
	TArray<class UClass*>                         NewLocalVar_0;                                     // 0x0000(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0020(0x0010)(ConstParm, ReferenceParm)
	TArray<EObjectTypeQuery>                      CallFunc_obj_dynPhysPawn_obj;                      // 0x0030(0x0010)(ReferenceParm)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_SphereOverlapActors_OutActors;            // 0x0050(0x0010)(ReferenceParm)
	bool                                          CallFunc_SphereOverlapActors_ReturnValue;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AP_kerfus_C*                            K2Node_DynamicCast_AsP_Kerfus;                     // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AKerfurOmega_C*                         K2Node_DynamicCast_AsKerfur_Omega;                 // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_rdrone_C*                         K2Node_DynamicCast_AsProp_Rdrone;                  // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_camera_bad_C*                     K2Node_DynamicCast_AsProp_Camera_Bad;              // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GrayTest_C_DeacCams) == 0x000008, "Wrong alignment on GrayTest_C_DeacCams");
static_assert(sizeof(GrayTest_C_DeacCams) == 0x0000B8, "Wrong size on GrayTest_C_DeacCams");
static_assert(offsetof(GrayTest_C_DeacCams, NewLocalVar_0) == 0x000000, "Member 'GrayTest_C_DeacCams::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(GrayTest_C_DeacCams, Temp_int_Array_Index_Variable) == 0x000010, "Member 'GrayTest_C_DeacCams::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GrayTest_C_DeacCams, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'GrayTest_C_DeacCams::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GrayTest_C_DeacCams, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'GrayTest_C_DeacCams::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GrayTest_C_DeacCams, Temp_object_Variable) == 0x000020, "Member 'GrayTest_C_DeacCams::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GrayTest_C_DeacCams, CallFunc_obj_dynPhysPawn_obj) == 0x000030, "Member 'GrayTest_C_DeacCams::CallFunc_obj_dynPhysPawn_obj' has a wrong offset!");
static_assert(offsetof(GrayTest_C_DeacCams, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000040, "Member 'GrayTest_C_DeacCams::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GrayTest_C_DeacCams, CallFunc_SphereOverlapActors_OutActors) == 0x000050, "Member 'GrayTest_C_DeacCams::CallFunc_SphereOverlapActors_OutActors' has a wrong offset!");
static_assert(offsetof(GrayTest_C_DeacCams, CallFunc_SphereOverlapActors_ReturnValue) == 0x000060, "Member 'GrayTest_C_DeacCams::CallFunc_SphereOverlapActors_ReturnValue' has a wrong offset!");
static_assert(offsetof(GrayTest_C_DeacCams, CallFunc_Array_Length_ReturnValue) == 0x000064, "Member 'GrayTest_C_DeacCams::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GrayTest_C_DeacCams, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'GrayTest_C_DeacCams::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GrayTest_C_DeacCams, CallFunc_Array_Get_Item) == 0x000070, "Member 'GrayTest_C_DeacCams::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GrayTest_C_DeacCams, K2Node_DynamicCast_AsP_Kerfus) == 0x000078, "Member 'GrayTest_C_DeacCams::K2Node_DynamicCast_AsP_Kerfus' has a wrong offset!");
static_assert(offsetof(GrayTest_C_DeacCams, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'GrayTest_C_DeacCams::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GrayTest_C_DeacCams, K2Node_DynamicCast_AsKerfur_Omega) == 0x000088, "Member 'GrayTest_C_DeacCams::K2Node_DynamicCast_AsKerfur_Omega' has a wrong offset!");
static_assert(offsetof(GrayTest_C_DeacCams, K2Node_DynamicCast_bSuccess_1) == 0x000090, "Member 'GrayTest_C_DeacCams::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GrayTest_C_DeacCams, K2Node_DynamicCast_AsProp_Rdrone) == 0x000098, "Member 'GrayTest_C_DeacCams::K2Node_DynamicCast_AsProp_Rdrone' has a wrong offset!");
static_assert(offsetof(GrayTest_C_DeacCams, K2Node_DynamicCast_bSuccess_2) == 0x0000A0, "Member 'GrayTest_C_DeacCams::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GrayTest_C_DeacCams, K2Node_DynamicCast_AsProp_Camera_Bad) == 0x0000A8, "Member 'GrayTest_C_DeacCams::K2Node_DynamicCast_AsProp_Camera_Bad' has a wrong offset!");
static_assert(offsetof(GrayTest_C_DeacCams, K2Node_DynamicCast_bSuccess_3) == 0x0000B0, "Member 'GrayTest_C_DeacCams::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");

}

