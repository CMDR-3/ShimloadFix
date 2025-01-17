#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Spawnlist

#include "Basic.hpp"

#include "VoidMod_CustomActor_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function spawnlist.spawnlist_C.AddSpawnButtons
// 0x00E8 (0x00E8 - 0x0000)
struct Spawnlist_C_AddSpawnButtons final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpawnlist_item_C*                      CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AVoidModInstance_C*                     CallFunc_GetVoidmodInstance_Instance;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVoidMod_CustomActor                   CallFunc_Array_Get_Item_1;                         // 0x0060(0x0048)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00C8(0x0018)()
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Spawnlist_C_AddSpawnButtons) == 0x000008, "Wrong alignment on Spawnlist_C_AddSpawnButtons");
static_assert(sizeof(Spawnlist_C_AddSpawnButtons) == 0x0000E8, "Wrong size on Spawnlist_C_AddSpawnButtons");
static_assert(offsetof(Spawnlist_C_AddSpawnButtons, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'Spawnlist_C_AddSpawnButtons::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_AddSpawnButtons, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'Spawnlist_C_AddSpawnButtons::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_AddSpawnButtons, Temp_int_Array_Index_Variable) == 0x000008, "Member 'Spawnlist_C_AddSpawnButtons::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_AddSpawnButtons, Temp_int_Array_Index_Variable_1) == 0x00000C, "Member 'Spawnlist_C_AddSpawnButtons::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_AddSpawnButtons, CallFunc_Create_ReturnValue) == 0x000010, "Member 'Spawnlist_C_AddSpawnButtons::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_AddSpawnButtons, Temp_int_Loop_Counter_Variable_1) == 0x000018, "Member 'Spawnlist_C_AddSpawnButtons::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_AddSpawnButtons, CallFunc_GetAllChildren_ReturnValue) == 0x000020, "Member 'Spawnlist_C_AddSpawnButtons::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_AddSpawnButtons, CallFunc_Add_IntInt_ReturnValue_1) == 0x000030, "Member 'Spawnlist_C_AddSpawnButtons::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_AddSpawnButtons, CallFunc_Array_Get_Item) == 0x000038, "Member 'Spawnlist_C_AddSpawnButtons::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_AddSpawnButtons, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'Spawnlist_C_AddSpawnButtons::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_AddSpawnButtons, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'Spawnlist_C_AddSpawnButtons::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_AddSpawnButtons, CallFunc_AddChild_ReturnValue) == 0x000048, "Member 'Spawnlist_C_AddSpawnButtons::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_AddSpawnButtons, CallFunc_GetVoidmodInstance_Instance) == 0x000050, "Member 'Spawnlist_C_AddSpawnButtons::CallFunc_GetVoidmodInstance_Instance' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_AddSpawnButtons, CallFunc_Array_Length_ReturnValue_1) == 0x000058, "Member 'Spawnlist_C_AddSpawnButtons::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_AddSpawnButtons, CallFunc_Array_Get_Item_1) == 0x000060, "Member 'Spawnlist_C_AddSpawnButtons::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_AddSpawnButtons, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000A8, "Member 'Spawnlist_C_AddSpawnButtons::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_AddSpawnButtons, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B0, "Member 'Spawnlist_C_AddSpawnButtons::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_AddSpawnButtons, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000C8, "Member 'Spawnlist_C_AddSpawnButtons::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_AddSpawnButtons, CallFunc_IsValidClass_ReturnValue) == 0x0000E0, "Member 'Spawnlist_C_AddSpawnButtons::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_AddSpawnButtons, CallFunc_BooleanAND_ReturnValue) == 0x0000E1, "Member 'Spawnlist_C_AddSpawnButtons::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function spawnlist.spawnlist_C.ExecuteUbergraph_spawnlist
// 0x0188 (0x0188 - 0x0000)
struct Spawnlist_C_ExecuteUbergraph_spawnlist final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_DynamicCast_AsMain_Player;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ConstParm, ReferenceParm)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetBaseAimRotation_ReturnValue;           // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetCameraLocation_ReturnValue;            // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0064(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x007C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0105(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0106(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_107[0x1];                                      // 0x0107(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x011C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0128(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0134(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x016C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0178(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Spawnlist_C_ExecuteUbergraph_spawnlist) == 0x000008, "Wrong alignment on Spawnlist_C_ExecuteUbergraph_spawnlist");
static_assert(sizeof(Spawnlist_C_ExecuteUbergraph_spawnlist) == 0x000188, "Wrong size on Spawnlist_C_ExecuteUbergraph_spawnlist");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, EntryPoint) == 0x000000, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::EntryPoint' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, K2Node_DynamicCast_AsMain_Player) == 0x000010, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::K2Node_DynamicCast_AsMain_Player' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, K2Node_MakeArray_Array) == 0x000020, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x000030, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000038, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_GetBaseAimRotation_ReturnValue) == 0x000040, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_GetBaseAimRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_GetCameraLocation_ReturnValue) == 0x00004C, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_GetCameraLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_GetForwardVector_ReturnValue) == 0x000058, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000064, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_Add_VectorVector_ReturnValue) == 0x000070, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_LineTraceSingle_OutHit) == 0x00007C, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_LineTraceSingle_ReturnValue) == 0x000104, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_BreakHitResult_bBlockingHit) == 0x000105, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_BreakHitResult_bInitialOverlap) == 0x000106, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_BreakHitResult_Time) == 0x000108, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_BreakHitResult_Distance) == 0x00010C, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_BreakHitResult_Location) == 0x000110, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_BreakHitResult_ImpactPoint) == 0x00011C, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_BreakHitResult_Normal) == 0x000128, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_BreakHitResult_ImpactNormal) == 0x000134, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_BreakHitResult_PhysMat) == 0x000140, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_BreakHitResult_HitActor) == 0x000148, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_BreakHitResult_HitComponent) == 0x000150, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_BreakHitResult_HitBoneName) == 0x000158, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_BreakHitResult_HitItem) == 0x000160, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_BreakHitResult_ElementIndex) == 0x000164, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_BreakHitResult_FaceIndex) == 0x000168, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_BreakHitResult_TraceStart) == 0x00016C, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Spawnlist_C_ExecuteUbergraph_spawnlist, CallFunc_BreakHitResult_TraceEnd) == 0x000178, "Member 'Spawnlist_C_ExecuteUbergraph_spawnlist::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");

}

