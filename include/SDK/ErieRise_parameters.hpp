#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ErieRise

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function erieRise.erieRise_C.ExecuteUbergraph_erieRise
// 0x0130 (0x0130 - 0x0000)
struct ErieRise_C_ExecuteUbergraph_erieRise final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x005C(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   Temp_name_Variable;                                // 0x006C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0xF];                                       // 0x0091(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x00A0(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_GetTransform_ReturnValue_1;               // 0x00D0(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADirthole_C*                            CallFunc_FinishSpawningActor_ReturnValue;          // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_eriePlush_C*                      CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ErieRise_C_ExecuteUbergraph_erieRise) == 0x000010, "Wrong alignment on ErieRise_C_ExecuteUbergraph_erieRise");
static_assert(sizeof(ErieRise_C_ExecuteUbergraph_erieRise) == 0x000130, "Wrong size on ErieRise_C_ExecuteUbergraph_erieRise");
static_assert(offsetof(ErieRise_C_ExecuteUbergraph_erieRise, EntryPoint) == 0x000000, "Member 'ErieRise_C_ExecuteUbergraph_erieRise::EntryPoint' has a wrong offset!");
static_assert(offsetof(ErieRise_C_ExecuteUbergraph_erieRise, K2Node_CustomEvent_NotifyName_4) == 0x000004, "Member 'ErieRise_C_ExecuteUbergraph_erieRise::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(ErieRise_C_ExecuteUbergraph_erieRise, K2Node_CustomEvent_NotifyName_3) == 0x00000C, "Member 'ErieRise_C_ExecuteUbergraph_erieRise::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(ErieRise_C_ExecuteUbergraph_erieRise, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'ErieRise_C_ExecuteUbergraph_erieRise::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ErieRise_C_ExecuteUbergraph_erieRise, K2Node_CustomEvent_NotifyName_2) == 0x000024, "Member 'ErieRise_C_ExecuteUbergraph_erieRise::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(ErieRise_C_ExecuteUbergraph_erieRise, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'ErieRise_C_ExecuteUbergraph_erieRise::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ErieRise_C_ExecuteUbergraph_erieRise, K2Node_CustomEvent_NotifyName_1) == 0x00003C, "Member 'ErieRise_C_ExecuteUbergraph_erieRise::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(ErieRise_C_ExecuteUbergraph_erieRise, K2Node_CreateDelegate_OutputDelegate_2) == 0x000044, "Member 'ErieRise_C_ExecuteUbergraph_erieRise::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(ErieRise_C_ExecuteUbergraph_erieRise, K2Node_CustomEvent_NotifyName) == 0x000054, "Member 'ErieRise_C_ExecuteUbergraph_erieRise::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(ErieRise_C_ExecuteUbergraph_erieRise, K2Node_CreateDelegate_OutputDelegate_3) == 0x00005C, "Member 'ErieRise_C_ExecuteUbergraph_erieRise::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(ErieRise_C_ExecuteUbergraph_erieRise, Temp_name_Variable) == 0x00006C, "Member 'ErieRise_C_ExecuteUbergraph_erieRise::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(ErieRise_C_ExecuteUbergraph_erieRise, K2Node_SwitchName_CmpSuccess) == 0x000074, "Member 'ErieRise_C_ExecuteUbergraph_erieRise::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ErieRise_C_ExecuteUbergraph_erieRise, K2Node_CreateDelegate_OutputDelegate_4) == 0x000078, "Member 'ErieRise_C_ExecuteUbergraph_erieRise::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(ErieRise_C_ExecuteUbergraph_erieRise, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x000088, "Member 'ErieRise_C_ExecuteUbergraph_erieRise::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErieRise_C_ExecuteUbergraph_erieRise, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'ErieRise_C_ExecuteUbergraph_erieRise::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErieRise_C_ExecuteUbergraph_erieRise, CallFunc_GetTransform_ReturnValue) == 0x0000A0, "Member 'ErieRise_C_ExecuteUbergraph_erieRise::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErieRise_C_ExecuteUbergraph_erieRise, CallFunc_GetTransform_ReturnValue_1) == 0x0000D0, "Member 'ErieRise_C_ExecuteUbergraph_erieRise::CallFunc_GetTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ErieRise_C_ExecuteUbergraph_erieRise, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000100, "Member 'ErieRise_C_ExecuteUbergraph_erieRise::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErieRise_C_ExecuteUbergraph_erieRise, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x000108, "Member 'ErieRise_C_ExecuteUbergraph_erieRise::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ErieRise_C_ExecuteUbergraph_erieRise, CallFunc_FinishSpawningActor_ReturnValue) == 0x000110, "Member 'ErieRise_C_ExecuteUbergraph_erieRise::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErieRise_C_ExecuteUbergraph_erieRise, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x000118, "Member 'ErieRise_C_ExecuteUbergraph_erieRise::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ErieRise_C_ExecuteUbergraph_erieRise, CallFunc_RandomFloatInRange_ReturnValue) == 0x000120, "Member 'ErieRise_C_ExecuteUbergraph_erieRise::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErieRise_C_ExecuteUbergraph_erieRise, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000124, "Member 'ErieRise_C_ExecuteUbergraph_erieRise::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ErieRise_C_ExecuteUbergraph_erieRise, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x000128, "Member 'ErieRise_C_ExecuteUbergraph_erieRise::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ErieRise_C_ExecuteUbergraph_erieRise, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00012C, "Member 'ErieRise_C_ExecuteUbergraph_erieRise::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function erieRise.erieRise_C.OnCompleted_7485A2DE4EC0D8B801273ABF7396B39B
// 0x0008 (0x0008 - 0x0000)
struct ErieRise_C_OnCompleted_7485A2DE4EC0D8B801273ABF7396B39B final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ErieRise_C_OnCompleted_7485A2DE4EC0D8B801273ABF7396B39B) == 0x000004, "Wrong alignment on ErieRise_C_OnCompleted_7485A2DE4EC0D8B801273ABF7396B39B");
static_assert(sizeof(ErieRise_C_OnCompleted_7485A2DE4EC0D8B801273ABF7396B39B) == 0x000008, "Wrong size on ErieRise_C_OnCompleted_7485A2DE4EC0D8B801273ABF7396B39B");
static_assert(offsetof(ErieRise_C_OnCompleted_7485A2DE4EC0D8B801273ABF7396B39B, NotifyName) == 0x000000, "Member 'ErieRise_C_OnCompleted_7485A2DE4EC0D8B801273ABF7396B39B::NotifyName' has a wrong offset!");

// Function erieRise.erieRise_C.OnBlendOut_7485A2DE4EC0D8B801273ABF7396B39B
// 0x0008 (0x0008 - 0x0000)
struct ErieRise_C_OnBlendOut_7485A2DE4EC0D8B801273ABF7396B39B final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ErieRise_C_OnBlendOut_7485A2DE4EC0D8B801273ABF7396B39B) == 0x000004, "Wrong alignment on ErieRise_C_OnBlendOut_7485A2DE4EC0D8B801273ABF7396B39B");
static_assert(sizeof(ErieRise_C_OnBlendOut_7485A2DE4EC0D8B801273ABF7396B39B) == 0x000008, "Wrong size on ErieRise_C_OnBlendOut_7485A2DE4EC0D8B801273ABF7396B39B");
static_assert(offsetof(ErieRise_C_OnBlendOut_7485A2DE4EC0D8B801273ABF7396B39B, NotifyName) == 0x000000, "Member 'ErieRise_C_OnBlendOut_7485A2DE4EC0D8B801273ABF7396B39B::NotifyName' has a wrong offset!");

// Function erieRise.erieRise_C.OnInterrupted_7485A2DE4EC0D8B801273ABF7396B39B
// 0x0008 (0x0008 - 0x0000)
struct ErieRise_C_OnInterrupted_7485A2DE4EC0D8B801273ABF7396B39B final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ErieRise_C_OnInterrupted_7485A2DE4EC0D8B801273ABF7396B39B) == 0x000004, "Wrong alignment on ErieRise_C_OnInterrupted_7485A2DE4EC0D8B801273ABF7396B39B");
static_assert(sizeof(ErieRise_C_OnInterrupted_7485A2DE4EC0D8B801273ABF7396B39B) == 0x000008, "Wrong size on ErieRise_C_OnInterrupted_7485A2DE4EC0D8B801273ABF7396B39B");
static_assert(offsetof(ErieRise_C_OnInterrupted_7485A2DE4EC0D8B801273ABF7396B39B, NotifyName) == 0x000000, "Member 'ErieRise_C_OnInterrupted_7485A2DE4EC0D8B801273ABF7396B39B::NotifyName' has a wrong offset!");

// Function erieRise.erieRise_C.OnNotifyBegin_7485A2DE4EC0D8B801273ABF7396B39B
// 0x0008 (0x0008 - 0x0000)
struct ErieRise_C_OnNotifyBegin_7485A2DE4EC0D8B801273ABF7396B39B final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ErieRise_C_OnNotifyBegin_7485A2DE4EC0D8B801273ABF7396B39B) == 0x000004, "Wrong alignment on ErieRise_C_OnNotifyBegin_7485A2DE4EC0D8B801273ABF7396B39B");
static_assert(sizeof(ErieRise_C_OnNotifyBegin_7485A2DE4EC0D8B801273ABF7396B39B) == 0x000008, "Wrong size on ErieRise_C_OnNotifyBegin_7485A2DE4EC0D8B801273ABF7396B39B");
static_assert(offsetof(ErieRise_C_OnNotifyBegin_7485A2DE4EC0D8B801273ABF7396B39B, NotifyName) == 0x000000, "Member 'ErieRise_C_OnNotifyBegin_7485A2DE4EC0D8B801273ABF7396B39B::NotifyName' has a wrong offset!");

// Function erieRise.erieRise_C.OnNotifyEnd_7485A2DE4EC0D8B801273ABF7396B39B
// 0x0008 (0x0008 - 0x0000)
struct ErieRise_C_OnNotifyEnd_7485A2DE4EC0D8B801273ABF7396B39B final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ErieRise_C_OnNotifyEnd_7485A2DE4EC0D8B801273ABF7396B39B) == 0x000004, "Wrong alignment on ErieRise_C_OnNotifyEnd_7485A2DE4EC0D8B801273ABF7396B39B");
static_assert(sizeof(ErieRise_C_OnNotifyEnd_7485A2DE4EC0D8B801273ABF7396B39B) == 0x000008, "Wrong size on ErieRise_C_OnNotifyEnd_7485A2DE4EC0D8B801273ABF7396B39B");
static_assert(offsetof(ErieRise_C_OnNotifyEnd_7485A2DE4EC0D8B801273ABF7396B39B, NotifyName) == 0x000000, "Member 'ErieRise_C_OnNotifyEnd_7485A2DE4EC0D8B801273ABF7396B39B::NotifyName' has a wrong offset!");

}
