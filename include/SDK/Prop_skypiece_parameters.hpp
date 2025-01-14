#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_skypiece

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function prop_skypiece.prop_skypiece_C.ExecuteUbergraph_prop_skypiece
// 0x00C0 (0x00C0 - 0x0000)
struct Prop_skypiece_C_ExecuteUbergraph_prop_skypiece final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0010(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       K2Node_Event_action;                               // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A[0x2];                                       // 0x009A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvas*                                CallFunc_BeginDrawCanvasToRenderTarget_Canvas;     // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_BeginDrawCanvasToRenderTarget_Size;       // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDrawToRenderTargetContext             CallFunc_BeginDrawCanvasToRenderTarget_Context;    // 0x00B0(0x0010)(NoDestructor)
};
static_assert(alignof(Prop_skypiece_C_ExecuteUbergraph_prop_skypiece) == 0x000008, "Wrong alignment on Prop_skypiece_C_ExecuteUbergraph_prop_skypiece");
static_assert(sizeof(Prop_skypiece_C_ExecuteUbergraph_prop_skypiece) == 0x0000C0, "Wrong size on Prop_skypiece_C_ExecuteUbergraph_prop_skypiece");
static_assert(offsetof(Prop_skypiece_C_ExecuteUbergraph_prop_skypiece, EntryPoint) == 0x000000, "Member 'Prop_skypiece_C_ExecuteUbergraph_prop_skypiece::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_skypiece_C_ExecuteUbergraph_prop_skypiece, K2Node_Event_player) == 0x000008, "Member 'Prop_skypiece_C_ExecuteUbergraph_prop_skypiece::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_skypiece_C_ExecuteUbergraph_prop_skypiece, K2Node_Event_hit) == 0x000010, "Member 'Prop_skypiece_C_ExecuteUbergraph_prop_skypiece::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_skypiece_C_ExecuteUbergraph_prop_skypiece, K2Node_Event_action) == 0x000098, "Member 'Prop_skypiece_C_ExecuteUbergraph_prop_skypiece::K2Node_Event_action' has a wrong offset!");
static_assert(offsetof(Prop_skypiece_C_ExecuteUbergraph_prop_skypiece, K2Node_SwitchEnum_CmpSuccess) == 0x000099, "Member 'Prop_skypiece_C_ExecuteUbergraph_prop_skypiece::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Prop_skypiece_C_ExecuteUbergraph_prop_skypiece, K2Node_Event_DeltaSeconds) == 0x00009C, "Member 'Prop_skypiece_C_ExecuteUbergraph_prop_skypiece::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Prop_skypiece_C_ExecuteUbergraph_prop_skypiece, CallFunc_BeginDrawCanvasToRenderTarget_Canvas) == 0x0000A0, "Member 'Prop_skypiece_C_ExecuteUbergraph_prop_skypiece::CallFunc_BeginDrawCanvasToRenderTarget_Canvas' has a wrong offset!");
static_assert(offsetof(Prop_skypiece_C_ExecuteUbergraph_prop_skypiece, CallFunc_BeginDrawCanvasToRenderTarget_Size) == 0x0000A8, "Member 'Prop_skypiece_C_ExecuteUbergraph_prop_skypiece::CallFunc_BeginDrawCanvasToRenderTarget_Size' has a wrong offset!");
static_assert(offsetof(Prop_skypiece_C_ExecuteUbergraph_prop_skypiece, CallFunc_BeginDrawCanvasToRenderTarget_Context) == 0x0000B0, "Member 'Prop_skypiece_C_ExecuteUbergraph_prop_skypiece::CallFunc_BeginDrawCanvasToRenderTarget_Context' has a wrong offset!");

// Function prop_skypiece.prop_skypiece_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Prop_skypiece_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_skypiece_C_ReceiveTick) == 0x000004, "Wrong alignment on Prop_skypiece_C_ReceiveTick");
static_assert(sizeof(Prop_skypiece_C_ReceiveTick) == 0x000004, "Wrong size on Prop_skypiece_C_ReceiveTick");
static_assert(offsetof(Prop_skypiece_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Prop_skypiece_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function prop_skypiece.prop_skypiece_C.actionOptionIndex
// 0x0098 (0x0098 - 0x0000)
struct Prop_skypiece_C_ActionOptionIndex final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit_0;                                             // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       Action;                                            // 0x0090(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_skypiece_C_ActionOptionIndex) == 0x000008, "Wrong alignment on Prop_skypiece_C_ActionOptionIndex");
static_assert(sizeof(Prop_skypiece_C_ActionOptionIndex) == 0x000098, "Wrong size on Prop_skypiece_C_ActionOptionIndex");
static_assert(offsetof(Prop_skypiece_C_ActionOptionIndex, Player) == 0x000000, "Member 'Prop_skypiece_C_ActionOptionIndex::Player' has a wrong offset!");
static_assert(offsetof(Prop_skypiece_C_ActionOptionIndex, Hit_0) == 0x000008, "Member 'Prop_skypiece_C_ActionOptionIndex::Hit_0' has a wrong offset!");
static_assert(offsetof(Prop_skypiece_C_ActionOptionIndex, Action) == 0x000090, "Member 'Prop_skypiece_C_ActionOptionIndex::Action' has a wrong offset!");

// Function prop_skypiece.prop_skypiece_C.NewFunction_0_0
// 0x0024 (0x0024 - 0x0000)
struct Prop_skypiece_C_NewFunction_0_0 final
{
public:
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_skypiece_C_NewFunction_0_0) == 0x000004, "Wrong alignment on Prop_skypiece_C_NewFunction_0_0");
static_assert(sizeof(Prop_skypiece_C_NewFunction_0_0) == 0x000024, "Wrong size on Prop_skypiece_C_NewFunction_0_0");
static_assert(offsetof(Prop_skypiece_C_NewFunction_0_0, CallFunc_GetForwardVector_ReturnValue) == 0x000000, "Member 'Prop_skypiece_C_NewFunction_0_0::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_skypiece_C_NewFunction_0_0, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x00000C, "Member 'Prop_skypiece_C_NewFunction_0_0::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_skypiece_C_NewFunction_0_0, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000018, "Member 'Prop_skypiece_C_NewFunction_0_0::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");

// Function prop_skypiece.prop_skypiece_C.Init
// 0x0020 (0x0020 - 0x0000)
struct Prop_skypiece_C_Init final
{
public:
	class UTextureRenderTarget2D*                 CallFunc_CreateRenderTarget2D_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 CallFunc_CreateRenderTarget2D_ReturnValue_1;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_skypiece_C_Init) == 0x000008, "Wrong alignment on Prop_skypiece_C_Init");
static_assert(sizeof(Prop_skypiece_C_Init) == 0x000020, "Wrong size on Prop_skypiece_C_Init");
static_assert(offsetof(Prop_skypiece_C_Init, CallFunc_CreateRenderTarget2D_ReturnValue) == 0x000000, "Member 'Prop_skypiece_C_Init::CallFunc_CreateRenderTarget2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_skypiece_C_Init, CallFunc_CreateRenderTarget2D_ReturnValue_1) == 0x000008, "Member 'Prop_skypiece_C_Init::CallFunc_CreateRenderTarget2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_skypiece_C_Init, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000010, "Member 'Prop_skypiece_C_Init::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_skypiece_C_Init, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000018, "Member 'Prop_skypiece_C_Init::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");

// Function prop_skypiece.prop_skypiece_C.getActionOptions
// 0x0060 (0x0060 - 0x0000)
struct Prop_skypiece_C_GetActionOptions final
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
static_assert(alignof(Prop_skypiece_C_GetActionOptions) == 0x000008, "Wrong alignment on Prop_skypiece_C_GetActionOptions");
static_assert(sizeof(Prop_skypiece_C_GetActionOptions) == 0x000060, "Wrong size on Prop_skypiece_C_GetActionOptions");
static_assert(offsetof(Prop_skypiece_C_GetActionOptions, Player) == 0x000000, "Member 'Prop_skypiece_C_GetActionOptions::Player' has a wrong offset!");
static_assert(offsetof(Prop_skypiece_C_GetActionOptions, Component) == 0x000008, "Member 'Prop_skypiece_C_GetActionOptions::Component' has a wrong offset!");
static_assert(offsetof(Prop_skypiece_C_GetActionOptions, Actor) == 0x000010, "Member 'Prop_skypiece_C_GetActionOptions::Actor' has a wrong offset!");
static_assert(offsetof(Prop_skypiece_C_GetActionOptions, Options) == 0x000018, "Member 'Prop_skypiece_C_GetActionOptions::Options' has a wrong offset!");
static_assert(offsetof(Prop_skypiece_C_GetActionOptions, Options_enum) == 0x000028, "Member 'Prop_skypiece_C_GetActionOptions::Options_enum' has a wrong offset!");
static_assert(offsetof(Prop_skypiece_C_GetActionOptions, OptionsNamesOverlay) == 0x000038, "Member 'Prop_skypiece_C_GetActionOptions::OptionsNamesOverlay' has a wrong offset!");
static_assert(offsetof(Prop_skypiece_C_GetActionOptions, Number) == 0x000048, "Member 'Prop_skypiece_C_GetActionOptions::Number' has a wrong offset!");
static_assert(offsetof(Prop_skypiece_C_GetActionOptions, K2Node_MakeArray_Array) == 0x000050, "Member 'Prop_skypiece_C_GetActionOptions::K2Node_MakeArray_Array' has a wrong offset!");

}

