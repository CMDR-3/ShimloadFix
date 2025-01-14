#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_inventory

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Struct_save_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Struct_mString_structs.hpp"


namespace SDK::Params
{

// Function umg_inventory.umg_inventory_C.ExecuteUbergraph_umg_inventory
// 0x0130 (0x0130 - 0x0000)
struct Umg_inventory_C_ExecuteUbergraph_umg_inventory final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUmg_inventorySlot_C*                   CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_save                           CallFunc_Array_Get_Item;                           // 0x0030(0x00C0)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F5[0x3];                                       // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mString                        CallFunc_Array_Get_Item_1;                         // 0x00F8(0x0010)(HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item_2;                         // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_inventory_C_ExecuteUbergraph_umg_inventory) == 0x000010, "Wrong alignment on Umg_inventory_C_ExecuteUbergraph_umg_inventory");
static_assert(sizeof(Umg_inventory_C_ExecuteUbergraph_umg_inventory) == 0x000130, "Wrong size on Umg_inventory_C_ExecuteUbergraph_umg_inventory");
static_assert(offsetof(Umg_inventory_C_ExecuteUbergraph_umg_inventory, EntryPoint) == 0x000000, "Member 'Umg_inventory_C_ExecuteUbergraph_umg_inventory::EntryPoint' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_ExecuteUbergraph_umg_inventory, Temp_int_Array_Index_Variable) == 0x000004, "Member 'Umg_inventory_C_ExecuteUbergraph_umg_inventory::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_ExecuteUbergraph_umg_inventory, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'Umg_inventory_C_ExecuteUbergraph_umg_inventory::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_ExecuteUbergraph_umg_inventory, CallFunc_Divide_IntInt_ReturnValue) == 0x00000C, "Member 'Umg_inventory_C_ExecuteUbergraph_umg_inventory::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_ExecuteUbergraph_umg_inventory, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'Umg_inventory_C_ExecuteUbergraph_umg_inventory::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_ExecuteUbergraph_umg_inventory, CallFunc_Percent_IntInt_ReturnValue) == 0x000014, "Member 'Umg_inventory_C_ExecuteUbergraph_umg_inventory::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_ExecuteUbergraph_umg_inventory, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000018, "Member 'Umg_inventory_C_ExecuteUbergraph_umg_inventory::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_ExecuteUbergraph_umg_inventory, CallFunc_Create_ReturnValue) == 0x000020, "Member 'Umg_inventory_C_ExecuteUbergraph_umg_inventory::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_ExecuteUbergraph_umg_inventory, CallFunc_Array_Get_Item) == 0x000030, "Member 'Umg_inventory_C_ExecuteUbergraph_umg_inventory::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_ExecuteUbergraph_umg_inventory, CallFunc_Array_Length_ReturnValue) == 0x0000F0, "Member 'Umg_inventory_C_ExecuteUbergraph_umg_inventory::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_ExecuteUbergraph_umg_inventory, CallFunc_Less_IntInt_ReturnValue) == 0x0000F4, "Member 'Umg_inventory_C_ExecuteUbergraph_umg_inventory::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_ExecuteUbergraph_umg_inventory, CallFunc_Array_Get_Item_1) == 0x0000F8, "Member 'Umg_inventory_C_ExecuteUbergraph_umg_inventory::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_ExecuteUbergraph_umg_inventory, CallFunc_Array_Get_Item_2) == 0x000108, "Member 'Umg_inventory_C_ExecuteUbergraph_umg_inventory::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_ExecuteUbergraph_umg_inventory, CallFunc_AddChildToGrid_ReturnValue) == 0x000118, "Member 'Umg_inventory_C_ExecuteUbergraph_umg_inventory::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_ExecuteUbergraph_umg_inventory, CallFunc_Array_Add_ReturnValue) == 0x000120, "Member 'Umg_inventory_C_ExecuteUbergraph_umg_inventory::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function umg_inventory.umg_inventory_C.upd
// 0x0120 (0x0120 - 0x0000)
struct Umg_inventory_C_Upd final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUmg_inventorySlot_C*                   CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0xC];                                       // 0x0024(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_save                           CallFunc_Array_Get_Item_1;                         // 0x0030(0x00C0)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mString                        CallFunc_Array_Get_Item_2;                         // 0x00F8(0x0010)(HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item_3;                         // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_inventory_C_Upd) == 0x000010, "Wrong alignment on Umg_inventory_C_Upd");
static_assert(sizeof(Umg_inventory_C_Upd) == 0x000120, "Wrong size on Umg_inventory_C_Upd");
static_assert(offsetof(Umg_inventory_C_Upd, Temp_int_Array_Index_Variable) == 0x000000, "Member 'Umg_inventory_C_Upd::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Upd, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'Umg_inventory_C_Upd::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Upd, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'Umg_inventory_C_Upd::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Upd, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000010, "Member 'Umg_inventory_C_Upd::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Upd, CallFunc_Array_Get_Item) == 0x000018, "Member 'Umg_inventory_C_Upd::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Upd, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'Umg_inventory_C_Upd::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Upd, CallFunc_Array_Get_Item_1) == 0x000030, "Member 'Umg_inventory_C_Upd::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Upd, CallFunc_Less_IntInt_ReturnValue) == 0x0000F0, "Member 'Umg_inventory_C_Upd::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Upd, CallFunc_Array_Get_Item_2) == 0x0000F8, "Member 'Umg_inventory_C_Upd::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Upd, CallFunc_Array_Get_Item_3) == 0x000108, "Member 'Umg_inventory_C_Upd::CallFunc_Array_Get_Item_3' has a wrong offset!");

// Function umg_inventory.umg_inventory_C.Drop
// 0x0460 (0x0460 - 0x0000)
struct Umg_inventory_C_Drop final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_save                           Temp_struct_Variable;                              // 0x0010(0x00C0)(ConstParm, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x00D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x00E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x00F8(0x0010)(ConstParm, ReferenceParm)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue_1;              // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_save                           CallFunc_Array_Get_Item;                           // 0x0110(0x00C0)(HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x01D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DC[0x4];                                      // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode_1;        // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode_2;        // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_save                           CallFunc_Array_Get_Item_1;                         // 0x01F0(0x00C0)(HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x02B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x02C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x02D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x02DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_SphereTraceSingle_OutHit;                 // 0x02E8(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_SphereTraceSingle_ReturnValue;            // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0371(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0372(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_373[0x1];                                      // 0x0373(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0374(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x037C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0388(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0394(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x03A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AC[0x4];                                      // 0x03AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x03B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x03B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x03C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x03C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x03D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x03D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x03D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x03DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x03E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SelectVector_ReturnValue;                 // 0x03F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0400(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0430(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x0438(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0440(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_441[0x7];                                      // 0x0441(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInt_save1_C>          K2Node_DynamicCast_AsInt_Save_1;                   // 0x0448(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0458(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadData_return;                          // 0x0459(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Umg_inventory_C_Drop) == 0x000010, "Wrong alignment on Umg_inventory_C_Drop");
static_assert(sizeof(Umg_inventory_C_Drop) == 0x000460, "Wrong size on Umg_inventory_C_Drop");
static_assert(offsetof(Umg_inventory_C_Drop, Index_0) == 0x000000, "Member 'Umg_inventory_C_Drop::Index_0' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_GetPlayerPawn_ReturnValue) == 0x000008, "Member 'Umg_inventory_C_Drop::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, Temp_struct_Variable) == 0x000010, "Member 'Umg_inventory_C_Drop::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_K2_GetActorRotation_ReturnValue) == 0x0000D0, "Member 'Umg_inventory_C_Drop::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x0000E0, "Member 'Umg_inventory_C_Drop::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_ComposeRotators_ReturnValue) == 0x0000E8, "Member 'Umg_inventory_C_Drop::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, Temp_object_Variable) == 0x0000F8, "Member 'Umg_inventory_C_Drop::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_GetPlayerPawn_ReturnValue_1) == 0x000108, "Member 'Umg_inventory_C_Drop::CallFunc_GetPlayerPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_Array_Get_Item) == 0x000110, "Member 'Umg_inventory_C_Drop::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0001D0, "Member 'Umg_inventory_C_Drop::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_getMainGamemode_AsMain_Gamemode_1) == 0x0001E0, "Member 'Umg_inventory_C_Drop::CallFunc_getMainGamemode_AsMain_Gamemode_1' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_getMainGamemode_AsMain_Gamemode_2) == 0x0001E8, "Member 'Umg_inventory_C_Drop::CallFunc_getMainGamemode_AsMain_Gamemode_2' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_Array_Get_Item_1) == 0x0001F0, "Member 'Umg_inventory_C_Drop::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x0002B0, "Member 'Umg_inventory_C_Drop::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_GetActorForwardVector_ReturnValue) == 0x0002B8, "Member 'Umg_inventory_C_Drop::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0002C4, "Member 'Umg_inventory_C_Drop::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0002D0, "Member 'Umg_inventory_C_Drop::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_Add_VectorVector_ReturnValue) == 0x0002DC, "Member 'Umg_inventory_C_Drop::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_SphereTraceSingle_OutHit) == 0x0002E8, "Member 'Umg_inventory_C_Drop::CallFunc_SphereTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_SphereTraceSingle_ReturnValue) == 0x000370, "Member 'Umg_inventory_C_Drop::CallFunc_SphereTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_BreakHitResult_bBlockingHit) == 0x000371, "Member 'Umg_inventory_C_Drop::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_BreakHitResult_bInitialOverlap) == 0x000372, "Member 'Umg_inventory_C_Drop::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_BreakHitResult_Time) == 0x000374, "Member 'Umg_inventory_C_Drop::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_BreakHitResult_Distance) == 0x000378, "Member 'Umg_inventory_C_Drop::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_BreakHitResult_Location) == 0x00037C, "Member 'Umg_inventory_C_Drop::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_BreakHitResult_ImpactPoint) == 0x000388, "Member 'Umg_inventory_C_Drop::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_BreakHitResult_Normal) == 0x000394, "Member 'Umg_inventory_C_Drop::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_BreakHitResult_ImpactNormal) == 0x0003A0, "Member 'Umg_inventory_C_Drop::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_BreakHitResult_PhysMat) == 0x0003B0, "Member 'Umg_inventory_C_Drop::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_BreakHitResult_HitActor) == 0x0003B8, "Member 'Umg_inventory_C_Drop::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_BreakHitResult_HitComponent) == 0x0003C0, "Member 'Umg_inventory_C_Drop::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_BreakHitResult_HitBoneName) == 0x0003C8, "Member 'Umg_inventory_C_Drop::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_BreakHitResult_HitItem) == 0x0003D0, "Member 'Umg_inventory_C_Drop::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_BreakHitResult_ElementIndex) == 0x0003D4, "Member 'Umg_inventory_C_Drop::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_BreakHitResult_FaceIndex) == 0x0003D8, "Member 'Umg_inventory_C_Drop::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_BreakHitResult_TraceStart) == 0x0003DC, "Member 'Umg_inventory_C_Drop::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_BreakHitResult_TraceEnd) == 0x0003E8, "Member 'Umg_inventory_C_Drop::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_SelectVector_ReturnValue) == 0x0003F4, "Member 'Umg_inventory_C_Drop::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_MakeTransform_ReturnValue) == 0x000400, "Member 'Umg_inventory_C_Drop::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000430, "Member 'Umg_inventory_C_Drop::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_FinishSpawningActor_ReturnValue) == 0x000438, "Member 'Umg_inventory_C_Drop::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_IsValid_ReturnValue) == 0x000440, "Member 'Umg_inventory_C_Drop::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, K2Node_DynamicCast_AsInt_Save_1) == 0x000448, "Member 'Umg_inventory_C_Drop::K2Node_DynamicCast_AsInt_Save_1' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, K2Node_DynamicCast_bSuccess) == 0x000458, "Member 'Umg_inventory_C_Drop::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Umg_inventory_C_Drop, CallFunc_loadData_return) == 0x000459, "Member 'Umg_inventory_C_Drop::CallFunc_loadData_return' has a wrong offset!");

}

