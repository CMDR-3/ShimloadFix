#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Event_passwordGuesser

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function event_passwordGuesser.event_passwordGuesser_C.ExecuteUbergraph_event_passwordGuesser
// 0x0128 (0x0128 - 0x0000)
struct Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B2[0x6];                                       // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_getObjectFromKey_Output;                  // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_getObjectFromKey_Output_1;                // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADoor_C*                                K2Node_DynamicCast_AsDoor;                         // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APasswordLock_C*                        K2Node_DynamicCast_AsPassword_Lock;                // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_getObjectFromKey_Output_2;                // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_getObjectFromKey_Output_3;                // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADoor_C*                                K2Node_DynamicCast_AsDoor_1;                       // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALightswitch_C*                         K2Node_DynamicCast_AsLightswitch;                  // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser) == 0x000008, "Wrong alignment on Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser");
static_assert(sizeof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser) == 0x000128, "Wrong size on Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser");
static_assert(offsetof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser, EntryPoint) == 0x000000, "Member 'Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser::EntryPoint' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000008, "Member 'Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000020, "Member 'Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser, Temp_bool_IsClosed_Variable) == 0x0000B0, "Member 'Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser, CallFunc_BooleanOR_ReturnValue) == 0x0000B1, "Member 'Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x0000B8, "Member 'Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser, CallFunc_BooleanOR_ReturnValue_1) == 0x0000C0, "Member 'Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser, CallFunc_BooleanOR_ReturnValue_2) == 0x0000C1, "Member 'Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser, CallFunc_getObjectFromKey_Output) == 0x0000C8, "Member 'Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser::CallFunc_getObjectFromKey_Output' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser, CallFunc_getObjectFromKey_Output_1) == 0x0000D0, "Member 'Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser::CallFunc_getObjectFromKey_Output_1' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser, K2Node_DynamicCast_AsDoor) == 0x0000D8, "Member 'Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser::K2Node_DynamicCast_AsDoor' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser, K2Node_DynamicCast_bSuccess) == 0x0000E0, "Member 'Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser, K2Node_DynamicCast_AsPassword_Lock) == 0x0000E8, "Member 'Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser::K2Node_DynamicCast_AsPassword_Lock' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser, K2Node_DynamicCast_bSuccess_1) == 0x0000F0, "Member 'Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser, CallFunc_getObjectFromKey_Output_2) == 0x0000F8, "Member 'Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser::CallFunc_getObjectFromKey_Output_2' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser, CallFunc_getObjectFromKey_Output_3) == 0x000100, "Member 'Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser::CallFunc_getObjectFromKey_Output_3' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser, K2Node_DynamicCast_AsDoor_1) == 0x000108, "Member 'Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser::K2Node_DynamicCast_AsDoor_1' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser, K2Node_DynamicCast_bSuccess_2) == 0x000110, "Member 'Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser, K2Node_DynamicCast_AsLightswitch) == 0x000118, "Member 'Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser::K2Node_DynamicCast_AsLightswitch' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser, K2Node_DynamicCast_bSuccess_3) == 0x000120, "Member 'Event_passwordGuesser_C_ExecuteUbergraph_event_passwordGuesser::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");

// Function event_passwordGuesser.event_passwordGuesser_C.BndEvt__lightsTurnoffer_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct Event_passwordGuesser_C_BndEvt__lightsTurnoffer_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Event_passwordGuesser_C_BndEvt__lightsTurnoffer_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Event_passwordGuesser_C_BndEvt__lightsTurnoffer_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(Event_passwordGuesser_C_BndEvt__lightsTurnoffer_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on Event_passwordGuesser_C_BndEvt__lightsTurnoffer_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(Event_passwordGuesser_C_BndEvt__lightsTurnoffer_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Event_passwordGuesser_C_BndEvt__lightsTurnoffer_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_BndEvt__lightsTurnoffer_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Event_passwordGuesser_C_BndEvt__lightsTurnoffer_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_BndEvt__lightsTurnoffer_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Event_passwordGuesser_C_BndEvt__lightsTurnoffer_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_BndEvt__lightsTurnoffer_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Event_passwordGuesser_C_BndEvt__lightsTurnoffer_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_BndEvt__lightsTurnoffer_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'Event_passwordGuesser_C_BndEvt__lightsTurnoffer_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(Event_passwordGuesser_C_BndEvt__lightsTurnoffer_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'Event_passwordGuesser_C_BndEvt__lightsTurnoffer_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

}

