#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_toolbox

#include "Basic.hpp"

#include "Struct_save_structs.hpp"
#include "Struct_mInt_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_toolbox.prop_toolbox_C.ExecuteUbergraph_prop_toolbox
// 0x0180 (0x0180 - 0x0000)
struct Prop_toolbox_C_ExecuteUbergraph_prop_toolbox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x002C(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInt_objects_C>        K2Node_DynamicCast_AsInt_Objects;                  // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_toolboxFix_return;                        // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CB[0x1];                                       // 0x00CB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_VictoryIntMinusEquals_IntOut;             // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E2[0x2];                                       // 0x00E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x00EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x00F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0104(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x014C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0158(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_VictoryIntMinusEquals_IntOut_1;           // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInt_objects_C>        K2Node_DynamicCast_AsInt_Objects_1;                // 0x0168(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue_1;     // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_toolboxFix_return_1;                      // 0x017A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x017B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox) == 0x000008, "Wrong alignment on Prop_toolbox_C_ExecuteUbergraph_prop_toolbox");
static_assert(sizeof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox) == 0x000180, "Wrong size on Prop_toolbox_C_ExecuteUbergraph_prop_toolbox");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, EntryPoint) == 0x000000, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, K2Node_ComponentBoundEvent_HitComponent) == 0x000008, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, K2Node_ComponentBoundEvent_NormalImpulse) == 0x000020, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, K2Node_ComponentBoundEvent_Hit) == 0x00002C, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, K2Node_DynamicCast_AsInt_Objects) == 0x0000B8, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::K2Node_DynamicCast_AsInt_Objects' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, CallFunc_DoesImplementInterface_ReturnValue) == 0x0000C9, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, CallFunc_toolboxFix_return) == 0x0000CA, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::CallFunc_toolboxFix_return' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, CallFunc_VictoryIntMinusEquals_IntOut) == 0x0000CC, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::CallFunc_VictoryIntMinusEquals_IntOut' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, CallFunc_Greater_IntInt_ReturnValue) == 0x0000D0, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, K2Node_Event_player) == 0x0000D8, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, CallFunc_BreakHitResult_bBlockingHit) == 0x0000E0, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, CallFunc_BreakHitResult_bInitialOverlap) == 0x0000E1, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, CallFunc_BreakHitResult_Time) == 0x0000E4, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, CallFunc_BreakHitResult_Distance) == 0x0000E8, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, CallFunc_BreakHitResult_Location) == 0x0000EC, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, CallFunc_BreakHitResult_ImpactPoint) == 0x0000F8, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, CallFunc_BreakHitResult_Normal) == 0x000104, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, CallFunc_BreakHitResult_ImpactNormal) == 0x000110, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, CallFunc_BreakHitResult_PhysMat) == 0x000120, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, CallFunc_BreakHitResult_HitActor) == 0x000128, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, CallFunc_BreakHitResult_HitComponent) == 0x000130, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, CallFunc_BreakHitResult_HitBoneName) == 0x000138, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, CallFunc_BreakHitResult_HitItem) == 0x000140, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, CallFunc_BreakHitResult_ElementIndex) == 0x000144, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, CallFunc_BreakHitResult_FaceIndex) == 0x000148, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, CallFunc_BreakHitResult_TraceStart) == 0x00014C, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, CallFunc_BreakHitResult_TraceEnd) == 0x000158, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, CallFunc_VictoryIntMinusEquals_IntOut_1) == 0x000164, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::CallFunc_VictoryIntMinusEquals_IntOut_1' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, K2Node_DynamicCast_AsInt_Objects_1) == 0x000168, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::K2Node_DynamicCast_AsInt_Objects_1' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, K2Node_DynamicCast_bSuccess_1) == 0x000178, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, CallFunc_DoesImplementInterface_ReturnValue_1) == 0x000179, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::CallFunc_DoesImplementInterface_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, CallFunc_toolboxFix_return_1) == 0x00017A, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::CallFunc_toolboxFix_return_1' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_ExecuteUbergraph_prop_toolbox, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00017B, "Member 'Prop_toolbox_C_ExecuteUbergraph_prop_toolbox::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function prop_toolbox.prop_toolbox_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct Prop_toolbox_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit_0;                                             // 0x0024(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Prop_toolbox_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on Prop_toolbox_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(Prop_toolbox_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x0000B0, "Wrong size on Prop_toolbox_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(Prop_toolbox_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'Prop_toolbox_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Prop_toolbox_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Prop_toolbox_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'Prop_toolbox_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, Hit_0) == 0x000024, "Member 'Prop_toolbox_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::Hit_0' has a wrong offset!");

// Function prop_toolbox.prop_toolbox_C.playerHandUse_LMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_toolbox_C_PlayerHandUse_LMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_toolbox_C_PlayerHandUse_LMB) == 0x000008, "Wrong alignment on Prop_toolbox_C_PlayerHandUse_LMB");
static_assert(sizeof(Prop_toolbox_C_PlayerHandUse_LMB) == 0x000008, "Wrong size on Prop_toolbox_C_PlayerHandUse_LMB");
static_assert(offsetof(Prop_toolbox_C_PlayerHandUse_LMB, Player) == 0x000000, "Member 'Prop_toolbox_C_PlayerHandUse_LMB::Player' has a wrong offset!");

// Function prop_toolbox.prop_toolbox_C.loadData
// 0x00E0 (0x00E0 - 0x0000)
struct Prop_toolbox_C_LoadData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadData_return;                          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mInt                           CallFunc_Array_Get_Item;                           // 0x00C8(0x0010)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_toolbox_C_LoadData) == 0x000010, "Wrong alignment on Prop_toolbox_C_LoadData");
static_assert(sizeof(Prop_toolbox_C_LoadData) == 0x0000E0, "Wrong size on Prop_toolbox_C_LoadData");
static_assert(offsetof(Prop_toolbox_C_LoadData, Data) == 0x000000, "Member 'Prop_toolbox_C_LoadData::Data' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_LoadData, Return) == 0x0000C0, "Member 'Prop_toolbox_C_LoadData::Return' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_LoadData, CallFunc_loadData_return) == 0x0000C1, "Member 'Prop_toolbox_C_LoadData::CallFunc_loadData_return' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_LoadData, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'Prop_toolbox_C_LoadData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_LoadData, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'Prop_toolbox_C_LoadData::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function prop_toolbox.prop_toolbox_C.getData
// 0x0270 (0x0270 - 0x0000)
struct Prop_toolbox_C_GetData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(Parm, OutParm, HasGetValueTypeHash)
	struct FStruct_save                           CallFunc_getData_data;                             // 0x00C0(0x00C0)(HasGetValueTypeHash)
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0180(0x0010)(ReferenceParm)
	struct FStruct_mInt                           K2Node_MakeStruct_struct_mInt;                     // 0x0190(0x0010)(HasGetValueTypeHash)
	TArray<struct FStruct_mInt>                   K2Node_MakeArray_Array_1;                          // 0x01A0(0x0010)(ReferenceParm)
	struct FStruct_save                           K2Node_SetFieldsInStruct_StructOut;                // 0x01B0(0x00C0)(HasGetValueTypeHash)
};
static_assert(alignof(Prop_toolbox_C_GetData) == 0x000010, "Wrong alignment on Prop_toolbox_C_GetData");
static_assert(sizeof(Prop_toolbox_C_GetData) == 0x000270, "Wrong size on Prop_toolbox_C_GetData");
static_assert(offsetof(Prop_toolbox_C_GetData, Data) == 0x000000, "Member 'Prop_toolbox_C_GetData::Data' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_GetData, CallFunc_getData_data) == 0x0000C0, "Member 'Prop_toolbox_C_GetData::CallFunc_getData_data' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_GetData, K2Node_MakeArray_Array) == 0x000180, "Member 'Prop_toolbox_C_GetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_GetData, K2Node_MakeStruct_struct_mInt) == 0x000190, "Member 'Prop_toolbox_C_GetData::K2Node_MakeStruct_struct_mInt' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_GetData, K2Node_MakeArray_Array_1) == 0x0001A0, "Member 'Prop_toolbox_C_GetData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_GetData, K2Node_SetFieldsInStruct_StructOut) == 0x0001B0, "Member 'Prop_toolbox_C_GetData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

// Function prop_toolbox.prop_toolbox_C.lookAt
// 0x0110 (0x0110 - 0x0000)
struct Prop_toolbox_C_LookAt final
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
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x00B8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_toolbox_C_LookAt) == 0x000008, "Wrong alignment on Prop_toolbox_C_LookAt");
static_assert(sizeof(Prop_toolbox_C_LookAt) == 0x000110, "Wrong size on Prop_toolbox_C_LookAt");
static_assert(offsetof(Prop_toolbox_C_LookAt, Player) == 0x000000, "Member 'Prop_toolbox_C_LookAt::Player' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_LookAt, Hit_0) == 0x000008, "Member 'Prop_toolbox_C_LookAt::Hit_0' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_LookAt, Return) == 0x000090, "Member 'Prop_toolbox_C_LookAt::Return' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_LookAt, Text) == 0x000098, "Member 'Prop_toolbox_C_LookAt::Text' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_LookAt, boundObjectReplace) == 0x0000A8, "Member 'Prop_toolbox_C_LookAt::boundObjectReplace' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_LookAt, Number) == 0x0000B0, "Member 'Prop_toolbox_C_LookAt::Number' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_LookAt, CallFunc_MakeLiteralText_ReturnValue) == 0x0000B8, "Member 'Prop_toolbox_C_LookAt::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_LookAt, CallFunc_Conv_TextToString_ReturnValue) == 0x0000D0, "Member 'Prop_toolbox_C_LookAt::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_LookAt, CallFunc_Conv_IntToString_ReturnValue) == 0x0000E0, "Member 'Prop_toolbox_C_LookAt::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_LookAt, CallFunc_Concat_StrStr_ReturnValue) == 0x0000F0, "Member 'Prop_toolbox_C_LookAt::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_toolbox_C_LookAt, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000100, "Member 'Prop_toolbox_C_LookAt::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

}

