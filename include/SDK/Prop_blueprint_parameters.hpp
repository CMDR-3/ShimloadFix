#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_blueprint

#include "Basic.hpp"

#include "Struct_crafting_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function prop_blueprint.prop_blueprint_C.ExecuteUbergraph_prop_blueprint
// 0x0008 (0x0008 - 0x0000)
struct Prop_blueprint_C_ExecuteUbergraph_prop_blueprint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_blueprint_C_ExecuteUbergraph_prop_blueprint) == 0x000004, "Wrong alignment on Prop_blueprint_C_ExecuteUbergraph_prop_blueprint");
static_assert(sizeof(Prop_blueprint_C_ExecuteUbergraph_prop_blueprint) == 0x000008, "Wrong size on Prop_blueprint_C_ExecuteUbergraph_prop_blueprint");
static_assert(offsetof(Prop_blueprint_C_ExecuteUbergraph_prop_blueprint, EntryPoint) == 0x000000, "Member 'Prop_blueprint_C_ExecuteUbergraph_prop_blueprint::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_ExecuteUbergraph_prop_blueprint, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'Prop_blueprint_C_ExecuteUbergraph_prop_blueprint::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function prop_blueprint.prop_blueprint_C.makeRecipe
// 0x0168 (0x0168 - 0x0000)
struct Prop_blueprint_C_MakeRecipe final
{
public:
	TArray<int32>                                 B;                                                 // 0x0000(0x0010)(Edit, BlueprintVisible)
	TArray<class FString>                         A;                                                 // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_nameToDisplayName_displayName;            // 0x0068(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x00B8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_JoinStringArray_ReturnValue;              // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_crafting                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x00F0(0x0048)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item_1;                         // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_159[0x3];                                      // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161[0x3];                                      // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_blueprint_C_MakeRecipe) == 0x000008, "Wrong alignment on Prop_blueprint_C_MakeRecipe");
static_assert(sizeof(Prop_blueprint_C_MakeRecipe) == 0x000168, "Wrong size on Prop_blueprint_C_MakeRecipe");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, B) == 0x000000, "Member 'Prop_blueprint_C_MakeRecipe::B' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, A) == 0x000010, "Member 'Prop_blueprint_C_MakeRecipe::A' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, Temp_int_Array_Index_Variable) == 0x000020, "Member 'Prop_blueprint_C_MakeRecipe::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, Temp_int_Variable) == 0x000024, "Member 'Prop_blueprint_C_MakeRecipe::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'Prop_blueprint_C_MakeRecipe::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'Prop_blueprint_C_MakeRecipe::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, Temp_int_Loop_Counter_Variable_1) == 0x000030, "Member 'Prop_blueprint_C_MakeRecipe::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, CallFunc_Add_IntInt_ReturnValue_1) == 0x000034, "Member 'Prop_blueprint_C_MakeRecipe::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, Temp_int_Array_Index_Variable_1) == 0x000038, "Member 'Prop_blueprint_C_MakeRecipe::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, CallFunc_Conv_IntToString_ReturnValue) == 0x000040, "Member 'Prop_blueprint_C_MakeRecipe::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, CallFunc_Array_Get_Item) == 0x000050, "Member 'Prop_blueprint_C_MakeRecipe::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'Prop_blueprint_C_MakeRecipe::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, CallFunc_nameToDisplayName_displayName) == 0x000068, "Member 'Prop_blueprint_C_MakeRecipe::CallFunc_nameToDisplayName_displayName' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, CallFunc_Less_IntInt_ReturnValue) == 0x000080, "Member 'Prop_blueprint_C_MakeRecipe::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, CallFunc_Conv_TextToString_ReturnValue) == 0x000088, "Member 'Prop_blueprint_C_MakeRecipe::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, CallFunc_Concat_StrStr_ReturnValue) == 0x000098, "Member 'Prop_blueprint_C_MakeRecipe::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000A8, "Member 'Prop_blueprint_C_MakeRecipe::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, Temp_int_Variable_1) == 0x0000B8, "Member 'Prop_blueprint_C_MakeRecipe::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, CallFunc_JoinStringArray_ReturnValue) == 0x0000C0, "Member 'Prop_blueprint_C_MakeRecipe::CallFunc_JoinStringArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, CallFunc_Array_Add_ReturnValue) == 0x0000D0, "Member 'Prop_blueprint_C_MakeRecipe::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000D8, "Member 'Prop_blueprint_C_MakeRecipe::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, CallFunc_Conv_StringToName_ReturnValue) == 0x0000E8, "Member 'Prop_blueprint_C_MakeRecipe::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000F0, "Member 'Prop_blueprint_C_MakeRecipe::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000138, "Member 'Prop_blueprint_C_MakeRecipe::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, CallFunc_Array_Get_Item_1) == 0x000140, "Member 'Prop_blueprint_C_MakeRecipe::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, CallFunc_Array_Length_ReturnValue_1) == 0x000150, "Member 'Prop_blueprint_C_MakeRecipe::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, CallFunc_Array_Add_ReturnValue_1) == 0x000154, "Member 'Prop_blueprint_C_MakeRecipe::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, CallFunc_Less_IntInt_ReturnValue_1) == 0x000158, "Member 'Prop_blueprint_C_MakeRecipe::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, CallFunc_Array_Find_ReturnValue) == 0x00015C, "Member 'Prop_blueprint_C_MakeRecipe::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, CallFunc_Array_Contains_ReturnValue) == 0x000160, "Member 'Prop_blueprint_C_MakeRecipe::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_MakeRecipe, CallFunc_Add_IntInt_ReturnValue_2) == 0x000164, "Member 'Prop_blueprint_C_MakeRecipe::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");

// Function prop_blueprint.prop_blueprint_C.skipPreDelete
// 0x0001 (0x0001 - 0x0000)
struct Prop_blueprint_C_SkipPreDelete final
{
public:
	bool                                          Skip;                                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_blueprint_C_SkipPreDelete) == 0x000001, "Wrong alignment on Prop_blueprint_C_SkipPreDelete");
static_assert(sizeof(Prop_blueprint_C_SkipPreDelete) == 0x000001, "Wrong size on Prop_blueprint_C_SkipPreDelete");
static_assert(offsetof(Prop_blueprint_C_SkipPreDelete, Skip) == 0x000000, "Member 'Prop_blueprint_C_SkipPreDelete::Skip' has a wrong offset!");

// Function prop_blueprint.prop_blueprint_C.ignoreSave
// 0x0001 (0x0001 - 0x0000)
struct Prop_blueprint_C_IgnoreSave final
{
public:
	bool                                          Param_IgnoreSave_0;                                // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_blueprint_C_IgnoreSave) == 0x000001, "Wrong alignment on Prop_blueprint_C_IgnoreSave");
static_assert(sizeof(Prop_blueprint_C_IgnoreSave) == 0x000001, "Wrong size on Prop_blueprint_C_IgnoreSave");
static_assert(offsetof(Prop_blueprint_C_IgnoreSave, Param_IgnoreSave_0) == 0x000000, "Member 'Prop_blueprint_C_IgnoreSave::Param_IgnoreSave_0' has a wrong offset!");

// Function prop_blueprint.prop_blueprint_C.lookAt
// 0x0108 (0x0108 - 0x0000)
struct Prop_blueprint_C_LookAt final
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
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_blueprint_C_LookAt) == 0x000008, "Wrong alignment on Prop_blueprint_C_LookAt");
static_assert(sizeof(Prop_blueprint_C_LookAt) == 0x000108, "Wrong size on Prop_blueprint_C_LookAt");
static_assert(offsetof(Prop_blueprint_C_LookAt, Player) == 0x000000, "Member 'Prop_blueprint_C_LookAt::Player' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_LookAt, Hit_0) == 0x000008, "Member 'Prop_blueprint_C_LookAt::Hit_0' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_LookAt, Return) == 0x000090, "Member 'Prop_blueprint_C_LookAt::Return' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_LookAt, Text) == 0x000098, "Member 'Prop_blueprint_C_LookAt::Text' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_LookAt, boundObjectReplace) == 0x0000A8, "Member 'Prop_blueprint_C_LookAt::boundObjectReplace' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_LookAt, Number) == 0x0000B0, "Member 'Prop_blueprint_C_LookAt::Number' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_LookAt, CallFunc_Conv_TextToString_ReturnValue) == 0x0000B8, "Member 'Prop_blueprint_C_LookAt::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_LookAt, CallFunc_Concat_StrStr_ReturnValue) == 0x0000C8, "Member 'Prop_blueprint_C_LookAt::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_LookAt, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000D8, "Member 'Prop_blueprint_C_LookAt::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_LookAt, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000E8, "Member 'Prop_blueprint_C_LookAt::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_blueprint_C_LookAt, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0000F8, "Member 'Prop_blueprint_C_LookAt::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");

}

