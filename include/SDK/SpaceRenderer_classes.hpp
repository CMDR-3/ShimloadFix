#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpaceRenderer

#include "Basic.hpp"

#include "Struct_signal_spawn_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass spaceRenderer.spaceRenderer_C
// 0x00A8 (0x02C8 - 0x0220)
class ASpaceRenderer_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UInstancedStaticMeshComponent*          Pings;                                             // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Corrds_loop;                                       // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               SpaceSceneCapture;                                 // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Plane;                                             // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 Rt;                                                // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynmat;                                            // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Move_right;                                        // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Move_left;                                         // 0x0261(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Move_up;                                           // 0x0262(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Move_down;                                         // 0x0263(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector2D                              Coords;                                            // 0x0264(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Coords_rot;                                        // 0x026C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMoving;                                          // 0x0274(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_275[0x3];                                      // 0x0275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FStruct_signal_spawn>           Signals;                                           // 0x0278(0x0010)(Edit, BlueprintVisible)
	class UMaterialInstanceDynamic*               Dynmat_signals;                                    // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SensorSpd;                                         // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_294[0x4];                                      // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUmg_signal_C*>                  Signals_a;                                         // 0x0298(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class ATriggerBase_C*                         Trigger_OnPinged;                                  // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATriggerBase_C*                         Trigger_OnFound;                                   // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SoundActive;                                       // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        GameMode;                                          // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_spaceRenderer(int32 EntryPoint);
	void SignalFound();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();
	void GetCoords(const struct FVector2D& InVec, struct FVector* Return);
	void Generate();
	void ConvertCoords(const struct FVector2D& InVec, struct FVector* Return);
	void GatherSignal(bool* Return, int32* Index_0, struct FStruct_signal_spawn* Data);
	void AddSignal(const struct FVector& InVec);
	void AddSignal_cursor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"spaceRenderer_C">();
	}
	static class ASpaceRenderer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASpaceRenderer_C>();
	}
};
static_assert(alignof(ASpaceRenderer_C) == 0x000008, "Wrong alignment on ASpaceRenderer_C");
static_assert(sizeof(ASpaceRenderer_C) == 0x0002C8, "Wrong size on ASpaceRenderer_C");
static_assert(offsetof(ASpaceRenderer_C, UberGraphFrame) == 0x000220, "Member 'ASpaceRenderer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASpaceRenderer_C, Pings) == 0x000228, "Member 'ASpaceRenderer_C::Pings' has a wrong offset!");
static_assert(offsetof(ASpaceRenderer_C, Corrds_loop) == 0x000230, "Member 'ASpaceRenderer_C::Corrds_loop' has a wrong offset!");
static_assert(offsetof(ASpaceRenderer_C, SpaceSceneCapture) == 0x000238, "Member 'ASpaceRenderer_C::SpaceSceneCapture' has a wrong offset!");
static_assert(offsetof(ASpaceRenderer_C, Plane) == 0x000240, "Member 'ASpaceRenderer_C::Plane' has a wrong offset!");
static_assert(offsetof(ASpaceRenderer_C, DefaultSceneRoot) == 0x000248, "Member 'ASpaceRenderer_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ASpaceRenderer_C, Rt) == 0x000250, "Member 'ASpaceRenderer_C::Rt' has a wrong offset!");
static_assert(offsetof(ASpaceRenderer_C, Dynmat) == 0x000258, "Member 'ASpaceRenderer_C::Dynmat' has a wrong offset!");
static_assert(offsetof(ASpaceRenderer_C, Move_right) == 0x000260, "Member 'ASpaceRenderer_C::Move_right' has a wrong offset!");
static_assert(offsetof(ASpaceRenderer_C, Move_left) == 0x000261, "Member 'ASpaceRenderer_C::Move_left' has a wrong offset!");
static_assert(offsetof(ASpaceRenderer_C, Move_up) == 0x000262, "Member 'ASpaceRenderer_C::Move_up' has a wrong offset!");
static_assert(offsetof(ASpaceRenderer_C, Move_down) == 0x000263, "Member 'ASpaceRenderer_C::Move_down' has a wrong offset!");
static_assert(offsetof(ASpaceRenderer_C, Coords) == 0x000264, "Member 'ASpaceRenderer_C::Coords' has a wrong offset!");
static_assert(offsetof(ASpaceRenderer_C, Coords_rot) == 0x00026C, "Member 'ASpaceRenderer_C::Coords_rot' has a wrong offset!");
static_assert(offsetof(ASpaceRenderer_C, IsMoving) == 0x000274, "Member 'ASpaceRenderer_C::IsMoving' has a wrong offset!");
static_assert(offsetof(ASpaceRenderer_C, Signals) == 0x000278, "Member 'ASpaceRenderer_C::Signals' has a wrong offset!");
static_assert(offsetof(ASpaceRenderer_C, Dynmat_signals) == 0x000288, "Member 'ASpaceRenderer_C::Dynmat_signals' has a wrong offset!");
static_assert(offsetof(ASpaceRenderer_C, SensorSpd) == 0x000290, "Member 'ASpaceRenderer_C::SensorSpd' has a wrong offset!");
static_assert(offsetof(ASpaceRenderer_C, Signals_a) == 0x000298, "Member 'ASpaceRenderer_C::Signals_a' has a wrong offset!");
static_assert(offsetof(ASpaceRenderer_C, Trigger_OnPinged) == 0x0002A8, "Member 'ASpaceRenderer_C::Trigger_OnPinged' has a wrong offset!");
static_assert(offsetof(ASpaceRenderer_C, Trigger_OnFound) == 0x0002B0, "Member 'ASpaceRenderer_C::Trigger_OnFound' has a wrong offset!");
static_assert(offsetof(ASpaceRenderer_C, SoundActive) == 0x0002B8, "Member 'ASpaceRenderer_C::SoundActive' has a wrong offset!");
static_assert(offsetof(ASpaceRenderer_C, GameMode) == 0x0002C0, "Member 'ASpaceRenderer_C::GameMode' has a wrong offset!");

}
