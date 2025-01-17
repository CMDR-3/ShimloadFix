#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_flour

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Struct_food_structs.hpp"
#include "Struct_prop3_structs.hpp"


namespace SDK::Params
{

// Function prop_flour.prop_flour_C.ExecuteUbergraph_prop_flour
// 0x0220 (0x0220 - 0x0000)
struct Prop_flour_C_ExecuteUbergraph_prop_flour final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_propToObject_ReturnValue;                 // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_food                           CallFunc_propToObject_foodData;                    // 0x005C(0x001C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_propToObject_object;                      // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_propToObject_isFood;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_prop3                          CallFunc_propToObject_fuckYouRetard;               // 0x0088(0x0080)(HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0108(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable_1;                              // 0x0114(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_125[0x3];                                      // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12C[0x4];                                      // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0138(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_144[0x4];                                      // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_bucket_C*                         K2Node_DynamicCast_AsProp_Bucket;                  // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15A[0x6];                                      // 0x015A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0160(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_ComposeTransforms_ReturnValue;            // 0x0190(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInt_player_C>         K2Node_DynamicCast_AsInt_Player;                   // 0x01D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E9[0x7];                                      // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_food_C*                           CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_C*                                CallFunc_asProp_return;                            // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2; // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_C*                                CallFunc_FinishSpawningActor_ReturnValue_2;        // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_flour_C_ExecuteUbergraph_prop_flour) == 0x000010, "Wrong alignment on Prop_flour_C_ExecuteUbergraph_prop_flour");
static_assert(sizeof(Prop_flour_C_ExecuteUbergraph_prop_flour) == 0x000220, "Wrong size on Prop_flour_C_ExecuteUbergraph_prop_flour");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, EntryPoint) == 0x000000, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, CallFunc_MakeTransform_ReturnValue) == 0x000010, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, Temp_int_Variable) == 0x000040, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000044, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, Temp_int_Variable_1) == 0x00004C, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000050, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, CallFunc_Add_IntInt_ReturnValue_1) == 0x000054, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, CallFunc_propToObject_ReturnValue) == 0x000058, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::CallFunc_propToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, CallFunc_propToObject_foodData) == 0x00005C, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::CallFunc_propToObject_foodData' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, CallFunc_propToObject_object) == 0x000078, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::CallFunc_propToObject_object' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, CallFunc_propToObject_isFood) == 0x000080, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::CallFunc_propToObject_isFood' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, CallFunc_propToObject_fuckYouRetard) == 0x000088, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::CallFunc_propToObject_fuckYouRetard' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, Temp_name_Variable) == 0x000108, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, CallFunc_IsValidClass_ReturnValue) == 0x000110, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, Temp_name_Variable_1) == 0x000114, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, Temp_int_Variable_2) == 0x00011C, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, Temp_int_Variable_3) == 0x000120, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000124, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, CallFunc_Add_IntInt_ReturnValue_2) == 0x000128, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, K2Node_Event_player) == 0x000130, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000138, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000148, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, K2Node_DynamicCast_AsProp_Bucket) == 0x000150, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::K2Node_DynamicCast_AsProp_Bucket' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, K2Node_DynamicCast_bSuccess) == 0x000158, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000159, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, CallFunc_GetTransform_ReturnValue) == 0x000160, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, CallFunc_ComposeTransforms_ReturnValue) == 0x000190, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::CallFunc_ComposeTransforms_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0001C0, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x0001C8, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, CallFunc_FinishSpawningActor_ReturnValue) == 0x0001D0, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, K2Node_DynamicCast_AsInt_Player) == 0x0001D8, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::K2Node_DynamicCast_AsInt_Player' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, K2Node_DynamicCast_bSuccess_1) == 0x0001E8, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x0001F0, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, CallFunc_asProp_return) == 0x0001F8, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::CallFunc_asProp_return' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2) == 0x000200, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, CallFunc_FinishSpawningActor_ReturnValue_2) == 0x000208, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::CallFunc_FinishSpawningActor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_flour_C_ExecuteUbergraph_prop_flour, CallFunc_Conv_NameToString_ReturnValue) == 0x000210, "Member 'Prop_flour_C_ExecuteUbergraph_prop_flour::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");

// Function prop_flour.prop_flour_C.playerHandUse_LMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_flour_C_PlayerHandUse_LMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_flour_C_PlayerHandUse_LMB) == 0x000008, "Wrong alignment on Prop_flour_C_PlayerHandUse_LMB");
static_assert(sizeof(Prop_flour_C_PlayerHandUse_LMB) == 0x000008, "Wrong size on Prop_flour_C_PlayerHandUse_LMB");
static_assert(offsetof(Prop_flour_C_PlayerHandUse_LMB, Player) == 0x000000, "Member 'Prop_flour_C_PlayerHandUse_LMB::Player' has a wrong offset!");

}

