#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OrderPlace

#include "Basic.hpp"

#include "Struct_storeOrder1_structs.hpp"
#include "Struct_store_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function orderPlace.orderPlace_C.spawnOrder
// 0x00E0 (0x00E0 - 0x0000)
struct OrderPlace_C_SpawnOrder final
{
public:
	struct FStruct_storeOrder1                    Order;                                             // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_store                          CallFunc_Array_Get_Item;                           // 0x0020(0x0050)(HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x007C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorFloat_ReturnValue;         // 0x0088(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RandomPointInBoundingBox_ReturnValue;     // 0x0094(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00A0(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OrderPlace_C_SpawnOrder) == 0x000010, "Wrong alignment on OrderPlace_C_SpawnOrder");
static_assert(sizeof(OrderPlace_C_SpawnOrder) == 0x0000E0, "Wrong size on OrderPlace_C_SpawnOrder");
static_assert(offsetof(OrderPlace_C_SpawnOrder, Order) == 0x000000, "Member 'OrderPlace_C_SpawnOrder::Order' has a wrong offset!");
static_assert(offsetof(OrderPlace_C_SpawnOrder, Temp_int_Array_Index_Variable) == 0x000018, "Member 'OrderPlace_C_SpawnOrder::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(OrderPlace_C_SpawnOrder, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'OrderPlace_C_SpawnOrder::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrderPlace_C_SpawnOrder, CallFunc_Array_Get_Item) == 0x000020, "Member 'OrderPlace_C_SpawnOrder::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(OrderPlace_C_SpawnOrder, Temp_int_Loop_Counter_Variable) == 0x000070, "Member 'OrderPlace_C_SpawnOrder::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(OrderPlace_C_SpawnOrder, CallFunc_Less_IntInt_ReturnValue) == 0x000074, "Member 'OrderPlace_C_SpawnOrder::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrderPlace_C_SpawnOrder, CallFunc_Add_IntInt_ReturnValue) == 0x000078, "Member 'OrderPlace_C_SpawnOrder::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrderPlace_C_SpawnOrder, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x00007C, "Member 'OrderPlace_C_SpawnOrder::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrderPlace_C_SpawnOrder, CallFunc_Subtract_VectorFloat_ReturnValue) == 0x000088, "Member 'OrderPlace_C_SpawnOrder::CallFunc_Subtract_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrderPlace_C_SpawnOrder, CallFunc_RandomPointInBoundingBox_ReturnValue) == 0x000094, "Member 'OrderPlace_C_SpawnOrder::CallFunc_RandomPointInBoundingBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrderPlace_C_SpawnOrder, CallFunc_MakeTransform_ReturnValue) == 0x0000A0, "Member 'OrderPlace_C_SpawnOrder::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrderPlace_C_SpawnOrder, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000D0, "Member 'OrderPlace_C_SpawnOrder::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrderPlace_C_SpawnOrder, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000D8, "Member 'OrderPlace_C_SpawnOrder::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}
