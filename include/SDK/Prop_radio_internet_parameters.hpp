#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_radio_internet

#include "Basic.hpp"

#include "Enum_interactionActions_structs.hpp"
#include "Struct_tv_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function prop_radio_internet.prop_radio_internet_C.ExecuteUbergraph_prop_radio_internet
// 0x01B0 (0x01B0 - 0x0000)
struct Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_OpenedUrl;                      // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FStruct_tv                             K2Node_CustomEvent_data;                           // 0x0020(0x0028)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_pausePlayer;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Pause_ReturnValue;                        // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0060(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       K2Node_Event_action;                               // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_EA[0x2];                                       // 0x00EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const class FString& OpenedUrl)> K2Node_CreateDelegate_OutputDelegate;              // 0x00EC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FD[0x3];                                       // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_OpenUrl_ReturnValue;                      // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_OpenFile_ReturnValue;                     // 0x010D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10E[0x2];                                      // 0x010E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Play_ReturnValue;                         // 0x0115(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_116[0x2];                                      // 0x0116(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item;                           // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x011C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_LowEntry_LocalVariable_Value__Object;       // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Play_ReturnValue_1;                       // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Rewind_ReturnValue;                       // 0x0142(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_setActiveInterface_return;                // 0x0143(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_144[0x4];                                      // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_tv                             CallFunc_Array_Get_Item_1;                         // 0x0148(0x0028)(ZeroConstructor, HasGetValueTypeHash)
	struct FStruct_tv                             CallFunc_Array_Get_Item_2;                         // 0x0170(0x0028)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19D[0x3];                                      // 0x019D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue_1;            // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue_1;       // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet) == 0x000008, "Wrong alignment on Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet");
static_assert(sizeof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet) == 0x0001B0, "Wrong size on Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, EntryPoint) == 0x000000, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, Temp_int_Array_Index_Variable) == 0x000004, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, Temp_int_Variable) == 0x000008, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, K2Node_CustomEvent_OpenedUrl) == 0x000010, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::K2Node_CustomEvent_OpenedUrl' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, K2Node_CustomEvent_data) == 0x000020, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::K2Node_CustomEvent_data' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, K2Node_CustomEvent_pausePlayer) == 0x000048, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::K2Node_CustomEvent_pausePlayer' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, Temp_int_Loop_Counter_Variable) == 0x00004C, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, CallFunc_Pause_ReturnValue) == 0x000054, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::CallFunc_Pause_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, K2Node_Event_player) == 0x000058, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, K2Node_Event_hit) == 0x000060, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, K2Node_Event_action) == 0x0000E8, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::K2Node_Event_action' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, K2Node_SwitchEnum_CmpSuccess) == 0x0000E9, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, K2Node_CreateDelegate_OutputDelegate) == 0x0000EC, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0000FC, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, CallFunc_Add_IntInt_ReturnValue_1) == 0x000100, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, CallFunc_Array_LastIndex_ReturnValue) == 0x000104, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000108, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, CallFunc_OpenUrl_ReturnValue) == 0x00010C, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::CallFunc_OpenUrl_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, CallFunc_OpenFile_ReturnValue) == 0x00010D, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::CallFunc_OpenFile_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, CallFunc_Array_Add_ReturnValue) == 0x000110, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, K2Node_SwitchEnum_CmpSuccess_1) == 0x000114, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, CallFunc_Play_ReturnValue) == 0x000115, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::CallFunc_Play_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, CallFunc_Array_Get_Item) == 0x000118, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, K2Node_CreateDelegate_OutputDelegate_1) == 0x00011C, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, K2Node_LowEntry_LocalVariable_Value__Object) == 0x00012C, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::K2Node_LowEntry_LocalVariable_Value__Object' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, CallFunc_Conv_IntToString_ReturnValue) == 0x000130, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, CallFunc_Array_RemoveItem_ReturnValue) == 0x000140, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, CallFunc_Play_ReturnValue_1) == 0x000141, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::CallFunc_Play_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, CallFunc_Rewind_ReturnValue) == 0x000142, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::CallFunc_Rewind_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, CallFunc_setActiveInterface_return) == 0x000143, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::CallFunc_setActiveInterface_return' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, CallFunc_Array_Get_Item_1) == 0x000148, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, CallFunc_Array_Get_Item_2) == 0x000170, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, CallFunc_Array_Length_ReturnValue) == 0x000198, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, CallFunc_Less_IntInt_ReturnValue) == 0x00019C, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, CallFunc_Array_LastIndex_ReturnValue_1) == 0x0001A0, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::CallFunc_Array_LastIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, CallFunc_RandomIntegerInRange_ReturnValue_1) == 0x0001A4, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::CallFunc_RandomIntegerInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, CallFunc_Array_Length_ReturnValue_1) == 0x0001A8, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet, CallFunc_Percent_IntInt_ReturnValue) == 0x0001AC, "Member 'Prop_radio_internet_C_ExecuteUbergraph_prop_radio_internet::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");

// Function prop_radio_internet.prop_radio_internet_C.actionOptionIndex
// 0x0098 (0x0098 - 0x0000)
struct Prop_radio_internet_C_ActionOptionIndex final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit_0;                                             // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       Action;                                            // 0x0090(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_radio_internet_C_ActionOptionIndex) == 0x000008, "Wrong alignment on Prop_radio_internet_C_ActionOptionIndex");
static_assert(sizeof(Prop_radio_internet_C_ActionOptionIndex) == 0x000098, "Wrong size on Prop_radio_internet_C_ActionOptionIndex");
static_assert(offsetof(Prop_radio_internet_C_ActionOptionIndex, Player) == 0x000000, "Member 'Prop_radio_internet_C_ActionOptionIndex::Player' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ActionOptionIndex, Hit_0) == 0x000008, "Member 'Prop_radio_internet_C_ActionOptionIndex::Hit_0' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_ActionOptionIndex, Action) == 0x000090, "Member 'Prop_radio_internet_C_ActionOptionIndex::Action' has a wrong offset!");

// Function prop_radio_internet.prop_radio_internet_C.openLink
// 0x0030 (0x0030 - 0x0000)
struct Prop_radio_internet_C_OpenLink final
{
public:
	struct FStruct_tv                             Data_0;                                            // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          PausePlayer_0;                                     // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_radio_internet_C_OpenLink) == 0x000008, "Wrong alignment on Prop_radio_internet_C_OpenLink");
static_assert(sizeof(Prop_radio_internet_C_OpenLink) == 0x000030, "Wrong size on Prop_radio_internet_C_OpenLink");
static_assert(offsetof(Prop_radio_internet_C_OpenLink, Data_0) == 0x000000, "Member 'Prop_radio_internet_C_OpenLink::Data_0' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_OpenLink, PausePlayer_0) == 0x000028, "Member 'Prop_radio_internet_C_OpenLink::PausePlayer_0' has a wrong offset!");

// Function prop_radio_internet.prop_radio_internet_C.opened
// 0x0010 (0x0010 - 0x0000)
struct Prop_radio_internet_C_Opened final
{
public:
	class FString                                 OpenedUrl;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_radio_internet_C_Opened) == 0x000008, "Wrong alignment on Prop_radio_internet_C_Opened");
static_assert(sizeof(Prop_radio_internet_C_Opened) == 0x000010, "Wrong size on Prop_radio_internet_C_Opened");
static_assert(offsetof(Prop_radio_internet_C_Opened, OpenedUrl) == 0x000000, "Member 'Prop_radio_internet_C_Opened::OpenedUrl' has a wrong offset!");

// Function prop_radio_internet.prop_radio_internet_C.getActionOptions
// 0x0060 (0x0060 - 0x0000)
struct Prop_radio_internet_C_GetActionOptions final
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
static_assert(alignof(Prop_radio_internet_C_GetActionOptions) == 0x000008, "Wrong alignment on Prop_radio_internet_C_GetActionOptions");
static_assert(sizeof(Prop_radio_internet_C_GetActionOptions) == 0x000060, "Wrong size on Prop_radio_internet_C_GetActionOptions");
static_assert(offsetof(Prop_radio_internet_C_GetActionOptions, Player) == 0x000000, "Member 'Prop_radio_internet_C_GetActionOptions::Player' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_GetActionOptions, Component) == 0x000008, "Member 'Prop_radio_internet_C_GetActionOptions::Component' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_GetActionOptions, Actor) == 0x000010, "Member 'Prop_radio_internet_C_GetActionOptions::Actor' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_GetActionOptions, Options) == 0x000018, "Member 'Prop_radio_internet_C_GetActionOptions::Options' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_GetActionOptions, Options_enum) == 0x000028, "Member 'Prop_radio_internet_C_GetActionOptions::Options_enum' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_GetActionOptions, OptionsNamesOverlay) == 0x000038, "Member 'Prop_radio_internet_C_GetActionOptions::OptionsNamesOverlay' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_GetActionOptions, Number) == 0x000048, "Member 'Prop_radio_internet_C_GetActionOptions::Number' has a wrong offset!");
static_assert(offsetof(Prop_radio_internet_C_GetActionOptions, K2Node_MakeArray_Array) == 0x000050, "Member 'Prop_radio_internet_C_GetActionOptions::K2Node_MakeArray_Array' has a wrong offset!");

}
