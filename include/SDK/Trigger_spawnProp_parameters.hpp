#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trigger_spawnProp

#include "Basic.hpp"

#include "Struct_triggerSave_structs.hpp"
#include "Struct_prop3_structs.hpp"
#include "Struct_food_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function trigger_spawnProp.trigger_spawnProp_C.processKeys
// 0x0018 (0x0018 - 0x0000)
struct Trigger_spawnProp_C_ProcessKeys final
{
public:
	bool                                          Return;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_getObjectFromKey_Output;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_processKeys_return;                       // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Trigger_spawnProp_C_ProcessKeys) == 0x000008, "Wrong alignment on Trigger_spawnProp_C_ProcessKeys");
static_assert(sizeof(Trigger_spawnProp_C_ProcessKeys) == 0x000018, "Wrong size on Trigger_spawnProp_C_ProcessKeys");
static_assert(offsetof(Trigger_spawnProp_C_ProcessKeys, Return) == 0x000000, "Member 'Trigger_spawnProp_C_ProcessKeys::Return' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ProcessKeys, CallFunc_getObjectFromKey_Output) == 0x000008, "Member 'Trigger_spawnProp_C_ProcessKeys::CallFunc_getObjectFromKey_Output' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ProcessKeys, CallFunc_IsEmpty_ReturnValue) == 0x000010, "Member 'Trigger_spawnProp_C_ProcessKeys::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ProcessKeys, CallFunc_processKeys_return) == 0x000011, "Member 'Trigger_spawnProp_C_ProcessKeys::CallFunc_processKeys_return' has a wrong offset!");

// Function trigger_spawnProp.trigger_spawnProp_C.loadTriggerData
// 0x0140 (0x0140 - 0x0000)
struct Trigger_spawnProp_C_LoadTriggerData final
{
public:
	struct FStruct_triggerSave                    Data;                                              // 0x0000(0x00F0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00F0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadTriggerData_return;                   // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F2[0x6];                                       // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item_1;                         // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item_2;                         // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Get_Item_3;                         // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Get_Item_4;                         // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Get_Item_5;                         // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Get_Item_6;                         // 0x0133(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Trigger_spawnProp_C_LoadTriggerData) == 0x000010, "Wrong alignment on Trigger_spawnProp_C_LoadTriggerData");
static_assert(sizeof(Trigger_spawnProp_C_LoadTriggerData) == 0x000140, "Wrong size on Trigger_spawnProp_C_LoadTriggerData");
static_assert(offsetof(Trigger_spawnProp_C_LoadTriggerData, Data) == 0x000000, "Member 'Trigger_spawnProp_C_LoadTriggerData::Data' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_LoadTriggerData, Return) == 0x0000F0, "Member 'Trigger_spawnProp_C_LoadTriggerData::Return' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_LoadTriggerData, CallFunc_loadTriggerData_return) == 0x0000F1, "Member 'Trigger_spawnProp_C_LoadTriggerData::CallFunc_loadTriggerData_return' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_LoadTriggerData, CallFunc_Array_Get_Item) == 0x0000F8, "Member 'Trigger_spawnProp_C_LoadTriggerData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_LoadTriggerData, CallFunc_Array_Get_Item_1) == 0x000108, "Member 'Trigger_spawnProp_C_LoadTriggerData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_LoadTriggerData, CallFunc_Array_Get_Item_2) == 0x000118, "Member 'Trigger_spawnProp_C_LoadTriggerData::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_LoadTriggerData, CallFunc_Conv_StringToName_ReturnValue) == 0x000128, "Member 'Trigger_spawnProp_C_LoadTriggerData::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_LoadTriggerData, CallFunc_Array_Get_Item_3) == 0x000130, "Member 'Trigger_spawnProp_C_LoadTriggerData::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_LoadTriggerData, CallFunc_Array_Get_Item_4) == 0x000131, "Member 'Trigger_spawnProp_C_LoadTriggerData::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_LoadTriggerData, CallFunc_Array_Get_Item_5) == 0x000132, "Member 'Trigger_spawnProp_C_LoadTriggerData::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_LoadTriggerData, CallFunc_Array_Get_Item_6) == 0x000133, "Member 'Trigger_spawnProp_C_LoadTriggerData::CallFunc_Array_Get_Item_6' has a wrong offset!");

// Function trigger_spawnProp.trigger_spawnProp_C.getTriggerData
// 0x0300 (0x0300 - 0x0000)
struct Trigger_spawnProp_C_GetTriggerData final
{
public:
	struct FStruct_triggerSave                    Data;                                              // 0x0000(0x00F0)(Parm, OutParm, HasGetValueTypeHash)
	TArray<bool>                                  K2Node_MakeArray_Array;                            // 0x00F0(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FStruct_triggerSave                    CallFunc_getTriggerData_data;                      // 0x0110(0x00F0)(HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array_1;                          // 0x0200(0x0010)(ReferenceParm)
	struct FStruct_triggerSave                    K2Node_SetFieldsInStruct_StructOut;                // 0x0210(0x00F0)(HasGetValueTypeHash)
};
static_assert(alignof(Trigger_spawnProp_C_GetTriggerData) == 0x000010, "Wrong alignment on Trigger_spawnProp_C_GetTriggerData");
static_assert(sizeof(Trigger_spawnProp_C_GetTriggerData) == 0x000300, "Wrong size on Trigger_spawnProp_C_GetTriggerData");
static_assert(offsetof(Trigger_spawnProp_C_GetTriggerData, Data) == 0x000000, "Member 'Trigger_spawnProp_C_GetTriggerData::Data' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_GetTriggerData, K2Node_MakeArray_Array) == 0x0000F0, "Member 'Trigger_spawnProp_C_GetTriggerData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_GetTriggerData, CallFunc_Conv_NameToString_ReturnValue) == 0x000100, "Member 'Trigger_spawnProp_C_GetTriggerData::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_GetTriggerData, CallFunc_getTriggerData_data) == 0x000110, "Member 'Trigger_spawnProp_C_GetTriggerData::CallFunc_getTriggerData_data' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_GetTriggerData, K2Node_MakeArray_Array_1) == 0x000200, "Member 'Trigger_spawnProp_C_GetTriggerData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_GetTriggerData, K2Node_SetFieldsInStruct_StructOut) == 0x000210, "Member 'Trigger_spawnProp_C_GetTriggerData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

// Function trigger_spawnProp.trigger_spawnProp_C.UserConstructionScript
// 0x0088 (0x0088 - 0x0000)
struct Trigger_spawnProp_C_UserConstructionScript final
{
public:
	struct FStruct_prop3                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x0000(0x0080)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Trigger_spawnProp_C_UserConstructionScript) == 0x000008, "Wrong alignment on Trigger_spawnProp_C_UserConstructionScript");
static_assert(sizeof(Trigger_spawnProp_C_UserConstructionScript) == 0x000088, "Wrong size on Trigger_spawnProp_C_UserConstructionScript");
static_assert(offsetof(Trigger_spawnProp_C_UserConstructionScript, CallFunc_GetDataTableRowFromName_OutRow) == 0x000000, "Member 'Trigger_spawnProp_C_UserConstructionScript::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_UserConstructionScript, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000080, "Member 'Trigger_spawnProp_C_UserConstructionScript::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_UserConstructionScript, CallFunc_SetStaticMesh_ReturnValue) == 0x000081, "Member 'Trigger_spawnProp_C_UserConstructionScript::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");

// Function trigger_spawnProp.trigger_spawnProp_C.runTrigger
// 0x0010 (0x0010 - 0x0000)
struct Trigger_spawnProp_C_RunTrigger final
{
public:
	class AActor*                                 Owner_0;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trigger_spawnProp_C_RunTrigger) == 0x000008, "Wrong alignment on Trigger_spawnProp_C_RunTrigger");
static_assert(sizeof(Trigger_spawnProp_C_RunTrigger) == 0x000010, "Wrong size on Trigger_spawnProp_C_RunTrigger");
static_assert(offsetof(Trigger_spawnProp_C_RunTrigger, Owner_0) == 0x000000, "Member 'Trigger_spawnProp_C_RunTrigger::Owner_0' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_RunTrigger, Index_0) == 0x000008, "Member 'Trigger_spawnProp_C_RunTrigger::Index_0' has a wrong offset!");

// Function trigger_spawnProp.trigger_spawnProp_C.ExecuteUbergraph_trigger_spawnProp
// 0x0230 (0x0230 - 0x0000)
struct Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInt_objects_C>        K2Node_DynamicCast_AsInt_Objects;                  // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_owner;                                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_index;                                // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             CallFunc_GetMaterials_ReturnValue;                 // 0x0038(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInt_ttrigger_C>       CallFunc_runTrigger_self_CastInput;                // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_WasRecentlyRendered_ReturnValue;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62[0x2];                                       // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInt_objects_C>        K2Node_DynamicCast_AsInt_Objects_1;                // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInt_objects_C>        K2Node_DynamicCast_AsInt_Objects_2;                // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_getKey_key;                               // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CD[0x3];                                       // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0xC];                                       // 0x00D4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x00E0(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_propToObject_ReturnValue;                 // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_food                           CallFunc_propToObject_foodData;                    // 0x0114(0x001C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_propToObject_object;                      // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_propToObject_isFood;                      // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_prop3                          CallFunc_propToObject_fuckYouRetard;               // 0x0140(0x0080)(HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_C*                                CallFunc_FinishSpawningActor_ReturnValue;          // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D9[0x7];                                      // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInt_player_C>         K2Node_DynamicCast_AsInt_Player;                   // 0x01E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F9[0x7];                                      // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2; // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_C*                                CallFunc_asProp_return;                            // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AProp_food_C*                           CallFunc_FinishSpawningActor_ReturnValue_2;        // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Select_Default;                             // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp) == 0x000010, "Wrong alignment on Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp");
static_assert(sizeof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp) == 0x000230, "Wrong size on Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, EntryPoint) == 0x000000, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::EntryPoint' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, Temp_int_Variable) == 0x000004, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, K2Node_DynamicCast_AsInt_Objects) == 0x000008, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::K2Node_DynamicCast_AsInt_Objects' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, Temp_int_Variable_1) == 0x00001C, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000020, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, K2Node_Event_owner) == 0x000028, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::K2Node_Event_owner' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, K2Node_Event_index) == 0x000030, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::K2Node_Event_index' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_GetMaterials_ReturnValue) == 0x000038, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_IsValid_ReturnValue) == 0x00004C, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_runTrigger_self_CastInput) == 0x000050, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_runTrigger_self_CastInput' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_WasRecentlyRendered_ReturnValue) == 0x000060, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_WasRecentlyRendered_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_IsValid_ReturnValue_1) == 0x000061, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, Temp_int_Variable_2) == 0x000064, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000068, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_Add_IntInt_ReturnValue_1) == 0x00006C, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, Temp_int_Array_Index_Variable) == 0x000070, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_IsEmpty_ReturnValue) == 0x000074, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, K2Node_DynamicCast_AsInt_Objects_1) == 0x000078, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::K2Node_DynamicCast_AsInt_Objects_1' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, Temp_int_Loop_Counter_Variable) == 0x00008C, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_Less_IntInt_ReturnValue) == 0x000090, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_Add_IntInt_ReturnValue_2) == 0x000094, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, Temp_int_Variable_3) == 0x000098, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, K2Node_DynamicCast_AsInt_Objects_2) == 0x0000A0, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::K2Node_DynamicCast_AsInt_Objects_2' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, K2Node_DynamicCast_bSuccess_2) == 0x0000B0, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_getKey_key) == 0x0000B8, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_getKey_key' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, Temp_int_Variable_4) == 0x0000C8, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x0000CC, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000D0, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_GetTransform_ReturnValue) == 0x0000E0, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_propToObject_ReturnValue) == 0x000110, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_propToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_propToObject_foodData) == 0x000114, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_propToObject_foodData' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_propToObject_object) == 0x000130, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_propToObject_object' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_propToObject_isFood) == 0x000138, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_propToObject_isFood' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_propToObject_fuckYouRetard) == 0x000140, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_propToObject_fuckYouRetard' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0001C0, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_FinishSpawningActor_ReturnValue) == 0x0001C8, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x0001D0, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_IsValidClass_ReturnValue) == 0x0001D8, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x0001E0, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, K2Node_DynamicCast_AsInt_Player) == 0x0001E8, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::K2Node_DynamicCast_AsInt_Player' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, K2Node_DynamicCast_bSuccess_3) == 0x0001F8, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2) == 0x000200, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_asProp_return) == 0x000208, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_asProp_return' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_Conv_NameToString_ReturnValue) == 0x000210, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, CallFunc_FinishSpawningActor_ReturnValue_2) == 0x000220, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::CallFunc_FinishSpawningActor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp, K2Node_Select_Default) == 0x000228, "Member 'Trigger_spawnProp_C_ExecuteUbergraph_trigger_spawnProp::K2Node_Select_Default' has a wrong offset!");

}

