#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_tv2

#include "Basic.hpp"

#include "Enum_interactionActions_structs.hpp"
#include "Struct_tv_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function prop_tv2.prop_tv2_C.ExecuteUbergraph_prop_tv2
// 0x01C8 (0x01C8 - 0x0000)
struct Prop_tv2_C_ExecuteUbergraph_prop_tv2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          CallFunc_getMainPlayer_AsMain_Player;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_setActiveInterface_return;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_OpenedUrl;                      // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FStruct_tv                             K2Node_CustomEvent_data;                           // 0x0038(0x0028)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_pausePlayer;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Pause_ReturnValue;                        // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E[0x2];                                       // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const class FString& OpenedUrl)> K2Node_CreateDelegate_OutputDelegate;              // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Play_ReturnValue;                         // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0098(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       K2Node_Event_action;                               // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x3];                                      // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0124(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_135[0x3];                                      // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_144[0x4];                                      // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_LowEntry_LocalVariable_Value__Object;       // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_155[0x3];                                      // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_OpenFile_ReturnValue;                     // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_OpenUrl_ReturnValue;                      // 0x015D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15E[0x2];                                      // 0x015E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_tv                             CallFunc_Array_Get_Item_1;                         // 0x0160(0x0028)(ZeroConstructor, HasGetValueTypeHash)
	struct FStruct_tv                             CallFunc_Array_Get_Item_2;                         // 0x0188(0x0028)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_1;            // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B9[0x3];                                      // 0x01B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue_1;       // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_tv2_C_ExecuteUbergraph_prop_tv2) == 0x000008, "Wrong alignment on Prop_tv2_C_ExecuteUbergraph_prop_tv2");
static_assert(sizeof(Prop_tv2_C_ExecuteUbergraph_prop_tv2) == 0x0001C8, "Wrong size on Prop_tv2_C_ExecuteUbergraph_prop_tv2");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, EntryPoint) == 0x000000, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, Temp_int_Array_Index_Variable) == 0x000004, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, Temp_int_Variable) == 0x000008, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000010, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, CallFunc_getMainPlayer_AsMain_Player) == 0x000018, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::CallFunc_getMainPlayer_AsMain_Player' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, CallFunc_setActiveInterface_return) == 0x000020, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::CallFunc_setActiveInterface_return' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, K2Node_CustomEvent_OpenedUrl) == 0x000028, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::K2Node_CustomEvent_OpenedUrl' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, K2Node_CustomEvent_data) == 0x000038, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::K2Node_CustomEvent_data' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, K2Node_CustomEvent_pausePlayer) == 0x000060, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::K2Node_CustomEvent_pausePlayer' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, Temp_int_Loop_Counter_Variable) == 0x000064, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, CallFunc_Add_IntInt_ReturnValue) == 0x000068, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, CallFunc_Pause_ReturnValue) == 0x00006C, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::CallFunc_Pause_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, K2Node_SwitchEnum_CmpSuccess) == 0x00006D, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, K2Node_CreateDelegate_OutputDelegate) == 0x000070, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, CallFunc_Play_ReturnValue) == 0x000080, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::CallFunc_Play_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, CallFunc_Add_IntInt_ReturnValue_1) == 0x000084, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000088, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, CallFunc_Array_Add_ReturnValue) == 0x00008C, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, K2Node_Event_player) == 0x000090, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, K2Node_Event_hit) == 0x000098, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, K2Node_Event_action) == 0x000120, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::K2Node_Event_action' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, K2Node_CreateDelegate_OutputDelegate_1) == 0x000124, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, K2Node_SwitchEnum_CmpSuccess_1) == 0x000134, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, CallFunc_Array_LastIndex_ReturnValue) == 0x000138, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, CallFunc_RandomIntegerInRange_ReturnValue) == 0x00013C, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, CallFunc_Array_Get_Item) == 0x000140, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000148, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, K2Node_LowEntry_LocalVariable_Value__Object) == 0x000150, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::K2Node_LowEntry_LocalVariable_Value__Object' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, CallFunc_Array_RemoveItem_ReturnValue) == 0x000154, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, CallFunc_Array_Find_ReturnValue) == 0x000158, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, CallFunc_OpenFile_ReturnValue) == 0x00015C, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::CallFunc_OpenFile_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, CallFunc_OpenUrl_ReturnValue) == 0x00015D, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::CallFunc_OpenUrl_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, CallFunc_Array_Get_Item_1) == 0x000160, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, CallFunc_Array_Get_Item_2) == 0x000188, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, CallFunc_Array_Length_ReturnValue) == 0x0001B0, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, CallFunc_Array_LastIndex_ReturnValue_1) == 0x0001B4, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::CallFunc_Array_LastIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, CallFunc_Less_IntInt_ReturnValue) == 0x0001B8, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, CallFunc_RandomIntegerInRange_ReturnValue_1) == 0x0001BC, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::CallFunc_RandomIntegerInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, CallFunc_Array_Length_ReturnValue_1) == 0x0001C0, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ExecuteUbergraph_prop_tv2, CallFunc_Percent_IntInt_ReturnValue) == 0x0001C4, "Member 'Prop_tv2_C_ExecuteUbergraph_prop_tv2::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");

// Function prop_tv2.prop_tv2_C.actionOptionIndex
// 0x0098 (0x0098 - 0x0000)
struct Prop_tv2_C_ActionOptionIndex final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit_0;                                             // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       Action;                                            // 0x0090(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_tv2_C_ActionOptionIndex) == 0x000008, "Wrong alignment on Prop_tv2_C_ActionOptionIndex");
static_assert(sizeof(Prop_tv2_C_ActionOptionIndex) == 0x000098, "Wrong size on Prop_tv2_C_ActionOptionIndex");
static_assert(offsetof(Prop_tv2_C_ActionOptionIndex, Player) == 0x000000, "Member 'Prop_tv2_C_ActionOptionIndex::Player' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ActionOptionIndex, Hit_0) == 0x000008, "Member 'Prop_tv2_C_ActionOptionIndex::Hit_0' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_ActionOptionIndex, Action) == 0x000090, "Member 'Prop_tv2_C_ActionOptionIndex::Action' has a wrong offset!");

// Function prop_tv2.prop_tv2_C.openLink
// 0x0030 (0x0030 - 0x0000)
struct Prop_tv2_C_OpenLink final
{
public:
	struct FStruct_tv                             Data_0;                                            // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          PausePlayer_0;                                     // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_tv2_C_OpenLink) == 0x000008, "Wrong alignment on Prop_tv2_C_OpenLink");
static_assert(sizeof(Prop_tv2_C_OpenLink) == 0x000030, "Wrong size on Prop_tv2_C_OpenLink");
static_assert(offsetof(Prop_tv2_C_OpenLink, Data_0) == 0x000000, "Member 'Prop_tv2_C_OpenLink::Data_0' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_OpenLink, PausePlayer_0) == 0x000028, "Member 'Prop_tv2_C_OpenLink::PausePlayer_0' has a wrong offset!");

// Function prop_tv2.prop_tv2_C.opened
// 0x0010 (0x0010 - 0x0000)
struct Prop_tv2_C_Opened final
{
public:
	class FString                                 OpenedUrl;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_tv2_C_Opened) == 0x000008, "Wrong alignment on Prop_tv2_C_Opened");
static_assert(sizeof(Prop_tv2_C_Opened) == 0x000010, "Wrong size on Prop_tv2_C_Opened");
static_assert(offsetof(Prop_tv2_C_Opened, OpenedUrl) == 0x000000, "Member 'Prop_tv2_C_Opened::OpenedUrl' has a wrong offset!");

// Function prop_tv2.prop_tv2_C.getActionOptions
// 0x0060 (0x0060 - 0x0000)
struct Prop_tv2_C_GetActionOptions final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    Component;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Actor;                                             // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         Options;                                           // 0x0018(0x0010)(Parm, OutParm)
	TArray<Enum_interactionActions>               Options_enum;                                      // 0x0028(0x0010)(Parm, OutParm)
	TArray<class FText>                           OptionsNamesOverlay;                               // 0x0038(0x0010)(Parm, OutParm)
	uint8                                         Number;                                            // 0x0048(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<Enum_interactionActions>               K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ReferenceParm)
};
static_assert(alignof(Prop_tv2_C_GetActionOptions) == 0x000008, "Wrong alignment on Prop_tv2_C_GetActionOptions");
static_assert(sizeof(Prop_tv2_C_GetActionOptions) == 0x000060, "Wrong size on Prop_tv2_C_GetActionOptions");
static_assert(offsetof(Prop_tv2_C_GetActionOptions, Player) == 0x000000, "Member 'Prop_tv2_C_GetActionOptions::Player' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_GetActionOptions, Component) == 0x000008, "Member 'Prop_tv2_C_GetActionOptions::Component' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_GetActionOptions, Actor) == 0x000010, "Member 'Prop_tv2_C_GetActionOptions::Actor' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_GetActionOptions, Options) == 0x000018, "Member 'Prop_tv2_C_GetActionOptions::Options' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_GetActionOptions, Options_enum) == 0x000028, "Member 'Prop_tv2_C_GetActionOptions::Options_enum' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_GetActionOptions, OptionsNamesOverlay) == 0x000038, "Member 'Prop_tv2_C_GetActionOptions::OptionsNamesOverlay' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_GetActionOptions, Number) == 0x000048, "Member 'Prop_tv2_C_GetActionOptions::Number' has a wrong offset!");
static_assert(offsetof(Prop_tv2_C_GetActionOptions, K2Node_MakeArray_Array) == 0x000050, "Member 'Prop_tv2_C_GetActionOptions::K2Node_MakeArray_Array' has a wrong offset!");

}
