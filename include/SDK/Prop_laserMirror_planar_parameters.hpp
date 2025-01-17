#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_laserMirror_planar

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function prop_laserMirror_planar.prop_laserMirror_planar_C.ExecuteUbergraph_prop_laserMirror_planar
// 0x00F0 (0x00F0 - 0x0000)
struct Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_DynamicCast_AsMain_Player;                  // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_DynamicCast_AsMain_Player_1;                // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar) == 0x000008, "Wrong alignment on Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar");
static_assert(sizeof(Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar) == 0x0000F0, "Wrong size on Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar");
static_assert(offsetof(Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar, EntryPoint) == 0x000000, "Member 'Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000008, "Member 'Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000010, "Member 'Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000018, "Member 'Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000020, "Member 'Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x0000B0, "Member 'Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar, K2Node_ComponentBoundEvent_OtherActor) == 0x0000B8, "Member 'Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar, K2Node_ComponentBoundEvent_OtherComp) == 0x0000C0, "Member 'Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x0000C8, "Member 'Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar, K2Node_DynamicCast_AsMain_Player) == 0x0000D0, "Member 'Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar::K2Node_DynamicCast_AsMain_Player' has a wrong offset!");
static_assert(offsetof(Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar, K2Node_DynamicCast_bSuccess) == 0x0000D8, "Member 'Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar, K2Node_DynamicCast_AsMain_Player_1) == 0x0000E0, "Member 'Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar::K2Node_DynamicCast_AsMain_Player_1' has a wrong offset!");
static_assert(offsetof(Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar, K2Node_DynamicCast_bSuccess_1) == 0x0000E8, "Member 'Prop_laserMirror_planar_C_ExecuteUbergraph_prop_laserMirror_planar::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function prop_laserMirror_planar.prop_laserMirror_planar_C.BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function prop_laserMirror_planar.prop_laserMirror_planar_C.BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
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
static_assert(alignof(Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'Prop_laserMirror_planar_C_BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

}

