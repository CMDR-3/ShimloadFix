#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_flare

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function prop_flare.prop_flare_C.ExecuteUbergraph_prop_flare
// 0x0108 (0x0108 - 0x0000)
struct Prop_flare_C_ExecuteUbergraph_prop_flare final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VictoryFloatMinusEquals_FloatOut;         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0040(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_RandomFloat_ReturnValue;                  // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DD[0x3];                                       // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Lerp_ReturnValue_1;                       // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_GetPhysicalMaterial_ReturnValue;          // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInt_objects_C>        K2Node_DynamicCast_AsInt_Objects;                  // 0x00F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_103[0x1];                                      // 0x0103(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Lerp_ReturnValue_2;                       // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_flare_C_ExecuteUbergraph_prop_flare) == 0x000008, "Wrong alignment on Prop_flare_C_ExecuteUbergraph_prop_flare");
static_assert(sizeof(Prop_flare_C_ExecuteUbergraph_prop_flare) == 0x000108, "Wrong size on Prop_flare_C_ExecuteUbergraph_prop_flare");
static_assert(offsetof(Prop_flare_C_ExecuteUbergraph_prop_flare, EntryPoint) == 0x000000, "Member 'Prop_flare_C_ExecuteUbergraph_prop_flare::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_ExecuteUbergraph_prop_flare, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'Prop_flare_C_ExecuteUbergraph_prop_flare::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_ExecuteUbergraph_prop_flare, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000008, "Member 'Prop_flare_C_ExecuteUbergraph_prop_flare::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_ExecuteUbergraph_prop_flare, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00000C, "Member 'Prop_flare_C_ExecuteUbergraph_prop_flare::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_ExecuteUbergraph_prop_flare, CallFunc_VictoryFloatMinusEquals_FloatOut) == 0x000010, "Member 'Prop_flare_C_ExecuteUbergraph_prop_flare::CallFunc_VictoryFloatMinusEquals_FloatOut' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_ExecuteUbergraph_prop_flare, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000014, "Member 'Prop_flare_C_ExecuteUbergraph_prop_flare::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_ExecuteUbergraph_prop_flare, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x000018, "Member 'Prop_flare_C_ExecuteUbergraph_prop_flare::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_ExecuteUbergraph_prop_flare, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00001C, "Member 'Prop_flare_C_ExecuteUbergraph_prop_flare::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_ExecuteUbergraph_prop_flare, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000020, "Member 'Prop_flare_C_ExecuteUbergraph_prop_flare::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_ExecuteUbergraph_prop_flare, K2Node_ComponentBoundEvent_OtherActor) == 0x000028, "Member 'Prop_flare_C_ExecuteUbergraph_prop_flare::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_ExecuteUbergraph_prop_flare, K2Node_ComponentBoundEvent_OtherComp) == 0x000030, "Member 'Prop_flare_C_ExecuteUbergraph_prop_flare::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_ExecuteUbergraph_prop_flare, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000038, "Member 'Prop_flare_C_ExecuteUbergraph_prop_flare::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_ExecuteUbergraph_prop_flare, K2Node_ComponentBoundEvent_bFromSweep) == 0x00003C, "Member 'Prop_flare_C_ExecuteUbergraph_prop_flare::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_ExecuteUbergraph_prop_flare, K2Node_ComponentBoundEvent_SweepResult) == 0x000040, "Member 'Prop_flare_C_ExecuteUbergraph_prop_flare::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_ExecuteUbergraph_prop_flare, CallFunc_RandomFloat_ReturnValue) == 0x0000C8, "Member 'Prop_flare_C_ExecuteUbergraph_prop_flare::CallFunc_RandomFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_ExecuteUbergraph_prop_flare, CallFunc_GetMaterial_ReturnValue) == 0x0000D0, "Member 'Prop_flare_C_ExecuteUbergraph_prop_flare::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_ExecuteUbergraph_prop_flare, CallFunc_Lerp_ReturnValue) == 0x0000D8, "Member 'Prop_flare_C_ExecuteUbergraph_prop_flare::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_ExecuteUbergraph_prop_flare, CallFunc_IsValid_ReturnValue) == 0x0000DC, "Member 'Prop_flare_C_ExecuteUbergraph_prop_flare::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_ExecuteUbergraph_prop_flare, CallFunc_Lerp_ReturnValue_1) == 0x0000E0, "Member 'Prop_flare_C_ExecuteUbergraph_prop_flare::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_ExecuteUbergraph_prop_flare, CallFunc_GetPhysicalMaterial_ReturnValue) == 0x0000E8, "Member 'Prop_flare_C_ExecuteUbergraph_prop_flare::CallFunc_GetPhysicalMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_ExecuteUbergraph_prop_flare, K2Node_DynamicCast_AsInt_Objects) == 0x0000F0, "Member 'Prop_flare_C_ExecuteUbergraph_prop_flare::K2Node_DynamicCast_AsInt_Objects' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_ExecuteUbergraph_prop_flare, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'Prop_flare_C_ExecuteUbergraph_prop_flare::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_ExecuteUbergraph_prop_flare, CallFunc_IsValid_ReturnValue_1) == 0x000101, "Member 'Prop_flare_C_ExecuteUbergraph_prop_flare::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_ExecuteUbergraph_prop_flare, CallFunc_DoesImplementInterface_ReturnValue) == 0x000102, "Member 'Prop_flare_C_ExecuteUbergraph_prop_flare::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_ExecuteUbergraph_prop_flare, CallFunc_Lerp_ReturnValue_2) == 0x000104, "Member 'Prop_flare_C_ExecuteUbergraph_prop_flare::CallFunc_Lerp_ReturnValue_2' has a wrong offset!");

// Function prop_flare.prop_flare_C.BndEvt__prop_flare_fire_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct Prop_flare_C_BndEvt__prop_flare_fire_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
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
static_assert(alignof(Prop_flare_C_BndEvt__prop_flare_fire_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Prop_flare_C_BndEvt__prop_flare_fire_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(Prop_flare_C_BndEvt__prop_flare_fire_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on Prop_flare_C_BndEvt__prop_flare_fire_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(Prop_flare_C_BndEvt__prop_flare_fire_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Prop_flare_C_BndEvt__prop_flare_fire_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_BndEvt__prop_flare_fire_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Prop_flare_C_BndEvt__prop_flare_fire_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_BndEvt__prop_flare_fire_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Prop_flare_C_BndEvt__prop_flare_fire_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_BndEvt__prop_flare_fire_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Prop_flare_C_BndEvt__prop_flare_fire_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_BndEvt__prop_flare_fire_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'Prop_flare_C_BndEvt__prop_flare_fire_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(Prop_flare_C_BndEvt__prop_flare_fire_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'Prop_flare_C_BndEvt__prop_flare_fire_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function prop_flare.prop_flare_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Prop_flare_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_flare_C_ReceiveTick) == 0x000004, "Wrong alignment on Prop_flare_C_ReceiveTick");
static_assert(sizeof(Prop_flare_C_ReceiveTick) == 0x000004, "Wrong size on Prop_flare_C_ReceiveTick");
static_assert(offsetof(Prop_flare_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Prop_flare_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}
