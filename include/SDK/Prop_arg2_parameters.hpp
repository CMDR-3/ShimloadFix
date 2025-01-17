#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_arg2

#include "Basic.hpp"

#include "Struct_save_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Struct_mBool_structs.hpp"
#include "Struct_mInt_structs.hpp"
#include "Engine_structs.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK::Params
{

// Function prop_arg2.prop_arg2_C.ExecuteUbergraph_prop_arg2
// 0x02B0 (0x02B0 - 0x0000)
struct Prop_arg2_C_ExecuteUbergraph_prop_arg2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0010(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       K2Node_Event_action;                               // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x00B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x00C4(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_14C[0x4];                                      // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0150(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_184[0x4];                                      // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_C*                                CallFunc_FinishSpawningActor_ReturnValue;          // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsProp_Food_Shrimp;        // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A9[0x3];                                      // 0x01A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorBounds_Origin;                    // 0x01AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorBounds_BoxExtent;                 // 0x01B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_progressAdvancement_finished;             // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C5[0x3];                                      // 0x01C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_progressAdvancement_name;                 // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D1[0x3];                                      // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x01D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x01E0(0x0030)(IsPlainOldData, NoDestructor)
	class FName                                   Temp_name_Variable;                                // 0x0210(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_arirEgg_C*                        CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0228(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0238(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0244(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RotateAngleAxis_ReturnValue;              // 0x0248(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0254(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0260(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26C[0x4];                                      // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0270(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2; // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AArirSlapper_C*                         CallFunc_FinishSpawningActor_ReturnValue_2;        // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_arg2_C_ExecuteUbergraph_prop_arg2) == 0x000010, "Wrong alignment on Prop_arg2_C_ExecuteUbergraph_prop_arg2");
static_assert(sizeof(Prop_arg2_C_ExecuteUbergraph_prop_arg2) == 0x0002B0, "Wrong size on Prop_arg2_C_ExecuteUbergraph_prop_arg2");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, EntryPoint) == 0x000000, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, K2Node_Event_player) == 0x000008, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, K2Node_Event_hit) == 0x000010, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, K2Node_Event_action) == 0x000098, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::K2Node_Event_action' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, K2Node_ComponentBoundEvent_HitComponent) == 0x0000A0, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, K2Node_ComponentBoundEvent_OtherActor) == 0x0000A8, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, K2Node_ComponentBoundEvent_OtherComp) == 0x0000B0, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, K2Node_ComponentBoundEvent_NormalImpulse) == 0x0000B8, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, K2Node_ComponentBoundEvent_Hit) == 0x0000C4, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, CallFunc_GetTransform_ReturnValue) == 0x000150, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, CallFunc_Add_IntInt_ReturnValue) == 0x000180, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000188, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, CallFunc_FinishSpawningActor_ReturnValue) == 0x000190, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, CallFunc_GetObjectClass_ReturnValue) == 0x000198, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, K2Node_ClassDynamicCast_AsProp_Food_Shrimp) == 0x0001A0, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::K2Node_ClassDynamicCast_AsProp_Food_Shrimp' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, K2Node_ClassDynamicCast_bSuccess) == 0x0001A8, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, CallFunc_GetActorBounds_Origin) == 0x0001AC, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::CallFunc_GetActorBounds_Origin' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, CallFunc_GetActorBounds_BoxExtent) == 0x0001B8, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::CallFunc_GetActorBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, CallFunc_progressAdvancement_finished) == 0x0001C4, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::CallFunc_progressAdvancement_finished' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, CallFunc_progressAdvancement_name) == 0x0001C8, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::CallFunc_progressAdvancement_name' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, CallFunc_Greater_IntInt_ReturnValue) == 0x0001D0, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0001D4, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, CallFunc_MakeTransform_ReturnValue) == 0x0001E0, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, Temp_name_Variable) == 0x000210, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x000218, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x000220, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000228, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, CallFunc_RandomFloatInRange_ReturnValue) == 0x000234, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, CallFunc_MakeVector_ReturnValue) == 0x000238, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, Temp_int_Variable) == 0x000244, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, CallFunc_RotateAngleAxis_ReturnValue) == 0x000248, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::CallFunc_RotateAngleAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, CallFunc_Add_VectorVector_ReturnValue) == 0x000254, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000260, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, CallFunc_MakeTransform_ReturnValue_1) == 0x000270, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2) == 0x0002A0, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ExecuteUbergraph_prop_arg2, CallFunc_FinishSpawningActor_ReturnValue_2) == 0x0002A8, "Member 'Prop_arg2_C_ExecuteUbergraph_prop_arg2::CallFunc_FinishSpawningActor_ReturnValue_2' has a wrong offset!");

// Function prop_arg2.prop_arg2_C.actionOptionIndex
// 0x0098 (0x0098 - 0x0000)
struct Prop_arg2_C_ActionOptionIndex final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit_0;                                             // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       Action;                                            // 0x0090(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_arg2_C_ActionOptionIndex) == 0x000008, "Wrong alignment on Prop_arg2_C_ActionOptionIndex");
static_assert(sizeof(Prop_arg2_C_ActionOptionIndex) == 0x000098, "Wrong size on Prop_arg2_C_ActionOptionIndex");
static_assert(offsetof(Prop_arg2_C_ActionOptionIndex, Player) == 0x000000, "Member 'Prop_arg2_C_ActionOptionIndex::Player' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ActionOptionIndex, Hit_0) == 0x000008, "Member 'Prop_arg2_C_ActionOptionIndex::Hit_0' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_ActionOptionIndex, Action) == 0x000090, "Member 'Prop_arg2_C_ActionOptionIndex::Action' has a wrong offset!");

// Function prop_arg2.prop_arg2_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct Prop_arg2_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit_0;                                             // 0x0024(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Prop_arg2_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on Prop_arg2_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(Prop_arg2_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x0000B0, "Wrong size on Prop_arg2_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(Prop_arg2_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'Prop_arg2_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Prop_arg2_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Prop_arg2_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'Prop_arg2_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, Hit_0) == 0x000024, "Member 'Prop_arg2_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::Hit_0' has a wrong offset!");

// Function prop_arg2.prop_arg2_C.upd
// 0x0018 (0x0018 - 0x0000)
struct Prop_arg2_C_Upd final
{
public:
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_arg2_C_Upd) == 0x000004, "Wrong alignment on Prop_arg2_C_Upd");
static_assert(sizeof(Prop_arg2_C_Upd) == 0x000018, "Wrong size on Prop_arg2_C_Upd");
static_assert(offsetof(Prop_arg2_C_Upd, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000000, "Member 'Prop_arg2_C_Upd::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_Upd, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000004, "Member 'Prop_arg2_C_Upd::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_Upd, CallFunc_Add_FloatFloat_ReturnValue) == 0x000008, "Member 'Prop_arg2_C_Upd::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_Upd, CallFunc_Conv_FloatToVector_ReturnValue) == 0x00000C, "Member 'Prop_arg2_C_Upd::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");

// Function prop_arg2.prop_arg2_C.loadData
// 0x00F0 (0x00F0 - 0x0000)
struct Prop_arg2_C_LoadData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadData_return;                          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mInt                           CallFunc_Array_Get_Item;                           // 0x00C8(0x0010)(HasGetValueTypeHash)
	struct FStruct_mBool                          CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0010)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_2;                         // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Get_Item_3;                         // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_arg2_C_LoadData) == 0x000010, "Wrong alignment on Prop_arg2_C_LoadData");
static_assert(sizeof(Prop_arg2_C_LoadData) == 0x0000F0, "Wrong size on Prop_arg2_C_LoadData");
static_assert(offsetof(Prop_arg2_C_LoadData, Data) == 0x000000, "Member 'Prop_arg2_C_LoadData::Data' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_LoadData, Return) == 0x0000C0, "Member 'Prop_arg2_C_LoadData::Return' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_LoadData, CallFunc_loadData_return) == 0x0000C1, "Member 'Prop_arg2_C_LoadData::CallFunc_loadData_return' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_LoadData, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'Prop_arg2_C_LoadData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_LoadData, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'Prop_arg2_C_LoadData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_LoadData, CallFunc_Array_Get_Item_2) == 0x0000E8, "Member 'Prop_arg2_C_LoadData::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_LoadData, CallFunc_Array_Get_Item_3) == 0x0000EC, "Member 'Prop_arg2_C_LoadData::CallFunc_Array_Get_Item_3' has a wrong offset!");

// Function prop_arg2.prop_arg2_C.getData
// 0x02B0 (0x02B0 - 0x0000)
struct Prop_arg2_C_GetData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(Parm, OutParm, HasGetValueTypeHash)
	TArray<bool>                                  K2Node_MakeArray_Array;                            // 0x00C0(0x0010)(ReferenceParm)
	TArray<int32>                                 K2Node_MakeArray_Array_1;                          // 0x00D0(0x0010)(ReferenceParm)
	struct FStruct_mBool                          K2Node_MakeStruct_struct_mBool;                    // 0x00E0(0x0010)(HasGetValueTypeHash)
	struct FStruct_mInt                           K2Node_MakeStruct_struct_mInt;                     // 0x00F0(0x0010)(HasGetValueTypeHash)
	struct FStruct_save                           CallFunc_getData_data;                             // 0x0100(0x00C0)(HasGetValueTypeHash)
	TArray<struct FStruct_mInt>                   K2Node_MakeArray_Array_2;                          // 0x01C0(0x0010)(ReferenceParm)
	struct FStruct_mBool                          CallFunc_Array_Get_Item;                           // 0x01D0(0x0010)(HasGetValueTypeHash)
	TArray<struct FStruct_mBool>                  K2Node_MakeArray_Array_3;                          // 0x01E0(0x0010)(ReferenceParm)
	struct FStruct_save                           K2Node_SetFieldsInStruct_StructOut;                // 0x01F0(0x00C0)(HasGetValueTypeHash)
};
static_assert(alignof(Prop_arg2_C_GetData) == 0x000010, "Wrong alignment on Prop_arg2_C_GetData");
static_assert(sizeof(Prop_arg2_C_GetData) == 0x0002B0, "Wrong size on Prop_arg2_C_GetData");
static_assert(offsetof(Prop_arg2_C_GetData, Data) == 0x000000, "Member 'Prop_arg2_C_GetData::Data' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_GetData, K2Node_MakeArray_Array) == 0x0000C0, "Member 'Prop_arg2_C_GetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_GetData, K2Node_MakeArray_Array_1) == 0x0000D0, "Member 'Prop_arg2_C_GetData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_GetData, K2Node_MakeStruct_struct_mBool) == 0x0000E0, "Member 'Prop_arg2_C_GetData::K2Node_MakeStruct_struct_mBool' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_GetData, K2Node_MakeStruct_struct_mInt) == 0x0000F0, "Member 'Prop_arg2_C_GetData::K2Node_MakeStruct_struct_mInt' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_GetData, CallFunc_getData_data) == 0x000100, "Member 'Prop_arg2_C_GetData::CallFunc_getData_data' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_GetData, K2Node_MakeArray_Array_2) == 0x0001C0, "Member 'Prop_arg2_C_GetData::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_GetData, CallFunc_Array_Get_Item) == 0x0001D0, "Member 'Prop_arg2_C_GetData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_GetData, K2Node_MakeArray_Array_3) == 0x0001E0, "Member 'Prop_arg2_C_GetData::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(Prop_arg2_C_GetData, K2Node_SetFieldsInStruct_StructOut) == 0x0001F0, "Member 'Prop_arg2_C_GetData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

}

