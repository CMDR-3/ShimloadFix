#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MeatEater

#include "Basic.hpp"

#include "Struct_save_structs.hpp"
#include "Engine_structs.hpp"
#include "Struct_mFloat_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Struct_food_structs.hpp"
#include "Struct_prop3_structs.hpp"


namespace SDK::Params
{

// Function meatEater.meatEater_C.getData
// 0x0270 (0x0270 - 0x0000)
struct MeatEater_C_GetData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(Parm, OutParm, HasGetValueTypeHash)
	struct FStruct_save                           CallFunc_getData_data;                             // 0x00C0(0x00C0)(HasGetValueTypeHash)
	TArray<float>                                 K2Node_MakeArray_Array;                            // 0x0180(0x0010)(ReferenceParm)
	struct FStruct_mFloat                         K2Node_MakeStruct_struct_mFloat;                   // 0x0190(0x0010)(HasGetValueTypeHash)
	TArray<struct FStruct_mFloat>                 K2Node_MakeArray_Array_1;                          // 0x01A0(0x0010)(ReferenceParm)
	struct FStruct_save                           K2Node_SetFieldsInStruct_StructOut;                // 0x01B0(0x00C0)(HasGetValueTypeHash)
};
static_assert(alignof(MeatEater_C_GetData) == 0x000010, "Wrong alignment on MeatEater_C_GetData");
static_assert(sizeof(MeatEater_C_GetData) == 0x000270, "Wrong size on MeatEater_C_GetData");
static_assert(offsetof(MeatEater_C_GetData, Data) == 0x000000, "Member 'MeatEater_C_GetData::Data' has a wrong offset!");
static_assert(offsetof(MeatEater_C_GetData, CallFunc_getData_data) == 0x0000C0, "Member 'MeatEater_C_GetData::CallFunc_getData_data' has a wrong offset!");
static_assert(offsetof(MeatEater_C_GetData, K2Node_MakeArray_Array) == 0x000180, "Member 'MeatEater_C_GetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MeatEater_C_GetData, K2Node_MakeStruct_struct_mFloat) == 0x000190, "Member 'MeatEater_C_GetData::K2Node_MakeStruct_struct_mFloat' has a wrong offset!");
static_assert(offsetof(MeatEater_C_GetData, K2Node_MakeArray_Array_1) == 0x0001A0, "Member 'MeatEater_C_GetData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(MeatEater_C_GetData, K2Node_SetFieldsInStruct_StructOut) == 0x0001B0, "Member 'MeatEater_C_GetData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

// Function meatEater.meatEater_C.loadData
// 0x00E0 (0x00E0 - 0x0000)
struct MeatEater_C_LoadData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mFloat                         CallFunc_Array_Get_Item;                           // 0x00C8(0x0010)(HasGetValueTypeHash)
	float                                         CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MeatEater_C_LoadData) == 0x000010, "Wrong alignment on MeatEater_C_LoadData");
static_assert(sizeof(MeatEater_C_LoadData) == 0x0000E0, "Wrong size on MeatEater_C_LoadData");
static_assert(offsetof(MeatEater_C_LoadData, Data) == 0x000000, "Member 'MeatEater_C_LoadData::Data' has a wrong offset!");
static_assert(offsetof(MeatEater_C_LoadData, Return) == 0x0000C0, "Member 'MeatEater_C_LoadData::Return' has a wrong offset!");
static_assert(offsetof(MeatEater_C_LoadData, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'MeatEater_C_LoadData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MeatEater_C_LoadData, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'MeatEater_C_LoadData::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function meatEater.meatEater_C.gatherDataFromKey
// 0x0001 (0x0001 - 0x0000)
struct MeatEater_C_GatherDataFromKey final
{
public:
	bool                                          Gather;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MeatEater_C_GatherDataFromKey) == 0x000001, "Wrong alignment on MeatEater_C_GatherDataFromKey");
static_assert(sizeof(MeatEater_C_GatherDataFromKey) == 0x000001, "Wrong size on MeatEater_C_GatherDataFromKey");
static_assert(offsetof(MeatEater_C_GatherDataFromKey, Gather) == 0x000000, "Member 'MeatEater_C_GatherDataFromKey::Gather' has a wrong offset!");

// Function meatEater.meatEater_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct MeatEater_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MeatEater_C_ReceiveTick) == 0x000004, "Wrong alignment on MeatEater_C_ReceiveTick");
static_assert(sizeof(MeatEater_C_ReceiveTick) == 0x000004, "Wrong size on MeatEater_C_ReceiveTick");
static_assert(offsetof(MeatEater_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'MeatEater_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function meatEater.meatEater_C.ExecuteUbergraph_meatEater
// 0x0370 (0x0370 - 0x0000)
struct MeatEater_C_ExecuteUbergraph_meatEater final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VictoryFloatPlusEquals_FloatOut;          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AProp_carcass_C*>                CallFunc_GetAllActorsOfClass_OutActors;            // 0x0040(0x0010)(ReferenceParm)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_carcass_C*                        CallFunc_Array_Random_OutItem;                     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Random_OutIndex;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_carcass_C*                        K2Node_LowEntry_LocalVariable_Value__Object;       // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x008C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0xC];                                       // 0x00A4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00B0(0x0030)(IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable_5;                               // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGrunge_C*                              CallFunc_FinishSpawningActor_ReturnValue;          // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x3];                                       // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RandomUnitVector_ReturnValue;             // 0x0100(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RandomUnitVector_ReturnValue_1;           // 0x010C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0118(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_124[0x4];                                      // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x0128(0x0010)(ConstParm, ReferenceParm)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Random_OutItem_1;                   // 0x013C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Random_OutIndex_1;                  // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x0148(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_propToObject_ReturnValue;                 // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_155[0x3];                                      // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_food                           CallFunc_propToObject_foodData;                    // 0x0158(0x001C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_174[0x4];                                      // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_propToObject_object;                      // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_propToObject_isFood;                      // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_181[0x7];                                      // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_prop3                          CallFunc_propToObject_fuckYouRetard;               // 0x0188(0x0080)(HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x020C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x020D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_20E[0x2];                                      // 0x020E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRange_ReturnValue_3;         // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x0214(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RandomRotator_ReturnValue;                // 0x0220(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22C[0x4];                                      // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0230(0x0030)(IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0260(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2; // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInt_player_C>         K2Node_DynamicCast_AsInt_Player;                   // 0x0300(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_311[0x7];                                      // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_C*                                CallFunc_FinishSpawningActor_ReturnValue_2;        // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_C*                                CallFunc_asProp_return;                            // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3; // 0x0328(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_food_C*                           CallFunc_FinishSpawningActor_ReturnValue_3;        // 0x0330(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Select_Default;                             // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0340(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class IInt_player_C>         K2Node_DynamicCast_AsInt_Player_1;                 // 0x0350(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_361[0x7];                                      // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_C*                                CallFunc_asProp_return_1;                          // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MeatEater_C_ExecuteUbergraph_meatEater) == 0x000010, "Wrong alignment on MeatEater_C_ExecuteUbergraph_meatEater");
static_assert(sizeof(MeatEater_C_ExecuteUbergraph_meatEater) == 0x000370, "Wrong size on MeatEater_C_ExecuteUbergraph_meatEater");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, EntryPoint) == 0x000000, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::EntryPoint' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_RandomFloatInRange_ReturnValue) == 0x000004, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, Temp_int_Variable) == 0x000008, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00000C, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, Temp_int_Variable_1) == 0x000014, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000018, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_Add_IntInt_ReturnValue_1) == 0x00001C, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, Temp_int_Variable_2) == 0x000020, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, Temp_int_Variable_3) == 0x000024, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, Temp_int_Variable_4) == 0x000028, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_Add_IntInt_ReturnValue_2) == 0x00002C, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, K2Node_Event_DeltaSeconds) == 0x000030, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000034, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_VictoryFloatPlusEquals_FloatOut) == 0x000038, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_VictoryFloatPlusEquals_FloatOut' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_GetAllActorsOfClass_OutActors) == 0x000040, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000050, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_Array_Random_OutItem) == 0x000058, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_Array_Random_OutItem' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_Array_Random_OutIndex) == 0x000060, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_Array_Random_OutIndex' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, K2Node_LowEntry_LocalVariable_Value__Object) == 0x000068, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::K2Node_LowEntry_LocalVariable_Value__Object' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000070, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_MakeRotator_ReturnValue) == 0x000074, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000080, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_Subtract_VectorVector_ReturnValue) == 0x00008C, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x000098, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_MakeTransform_ReturnValue) == 0x0000B0, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, Temp_int_Variable_5) == 0x0000E0, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000E8, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000F0, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x0000F8, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000FC, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_RandomUnitVector_ReturnValue) == 0x000100, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_RandomUnitVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_RandomUnitVector_ReturnValue_1) == 0x00010C, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_RandomUnitVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000118, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, K2Node_MakeArray_Array) == 0x000128, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x000138, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_Array_Random_OutItem_1) == 0x00013C, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_Array_Random_OutItem_1' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_Array_Random_OutIndex_1) == 0x000144, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_Array_Random_OutIndex_1' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000148, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_propToObject_ReturnValue) == 0x000154, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_propToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_propToObject_foodData) == 0x000158, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_propToObject_foodData' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_propToObject_object) == 0x000178, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_propToObject_object' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_propToObject_isFood) == 0x000180, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_propToObject_isFood' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_propToObject_fuckYouRetard) == 0x000188, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_propToObject_fuckYouRetard' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000208, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_LessEqual_IntInt_ReturnValue_3) == 0x00020C, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_LessEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_IsValidClass_ReturnValue) == 0x00020D, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_RandomFloatInRange_ReturnValue_3) == 0x000210, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_RandomFloatInRange_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000214, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_RandomRotator_ReturnValue) == 0x000220, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_RandomRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_MakeTransform_ReturnValue_1) == 0x000230, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000260, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x0002E8, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2) == 0x0002F0, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x0002F8, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, K2Node_DynamicCast_AsInt_Player) == 0x000300, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::K2Node_DynamicCast_AsInt_Player' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, K2Node_DynamicCast_bSuccess) == 0x000310, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_FinishSpawningActor_ReturnValue_2) == 0x000318, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_FinishSpawningActor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_asProp_return) == 0x000320, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_asProp_return' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3) == 0x000328, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_FinishSpawningActor_ReturnValue_3) == 0x000330, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_FinishSpawningActor_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, K2Node_Select_Default) == 0x000338, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_Conv_NameToString_ReturnValue) == 0x000340, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, K2Node_DynamicCast_AsInt_Player_1) == 0x000350, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::K2Node_DynamicCast_AsInt_Player_1' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, K2Node_DynamicCast_bSuccess_1) == 0x000360, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MeatEater_C_ExecuteUbergraph_meatEater, CallFunc_asProp_return_1) == 0x000368, "Member 'MeatEater_C_ExecuteUbergraph_meatEater::CallFunc_asProp_return_1' has a wrong offset!");

}

