#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CentipedeHead

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass centipedeHead.centipedeHead_C
// 0x0150 (0x0610 - 0x04C0)
class ACentipedeHead_C : public ACharacter
{
public:
	uint8                                         Pad_4B8[0x8];                                      // 0x04B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UComp_radarPoint_C*                     RadarPoint;                                        // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Pull;                                              // 0x04D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x04E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Sub;                                               // 0x04E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Eat;                                               // 0x04F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Ass;                                               // 0x04F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Move;                                              // 0x0500(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    R;                                                 // 0x0508(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm;                                         // 0x0510(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Length;                                            // 0x0518(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51C[0x4];                                      // 0x051C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        Locs;                                              // 0x0520(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ACentipedeSegmet_C*>             Segment;                                           // 0x0530(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FRotator                               Rot;                                               // 0x0540(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                Lastloc;                                           // 0x054C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         R_0;                                               // 0x0558(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55C[0x4];                                      // 0x055C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        Tilts;                                             // 0x0560(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                 Target;                                            // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      P;                                                 // 0x0578(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ASubPawn_C*                             SubPawn;                                           // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Rendered;                                          // 0x0590(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_591[0x7];                                      // 0x0591(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ACentipedeSegmet_C*>             Segment_0;                                         // 0x0598(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         Eats;                                              // 0x05A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AC[0x4];                                      // 0x05AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Segm;                                              // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBaby;                                            // 0x05B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_5B9[0x7];                                      // 0x05B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACentipedeHead_C*                       babyFollow;                                        // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class AWolfgangJr_C*>                  babys;                                             // 0x05C8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)
	bool                                          IsEgged;                                           // 0x05D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D9[0x3];                                      // 0x05D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                babyLocOffset;                                     // 0x05DC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         MemoryNonAccess;                                   // 0x05E8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class AActor*>                         DebugAv;                                           // 0x05F8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)

public:
	void ExecuteUbergraph_centipedeHead(int32 EntryPoint);
	void CustomEvent();
	void bbyoffste();
	void CheckDoors();
	void Calc();
	void Kick();
	void ReceiveDestroyed();
	void BndEvt__eat_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnSuccess_1B9B4E384B33019C412BB5ADF65F2588(EPathFollowingResult MovementResult);
	void OnFail_1B9B4E384B33019C412BB5ADF65F2588(EPathFollowingResult MovementResult);
	void OnSuccess_1E07721640E109D579AB289B1B2DA79F(EPathFollowingResult MovementResult);
	void OnFail_1E07721640E109D579AB289B1B2DA79F(EPathFollowingResult MovementResult);
	struct FRotator Weqweqwewqe();
	void ProcessAvailable(TArray<class AActor*>& Array, TArray<class AActor*>* A1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"centipedeHead_C">();
	}
	static class ACentipedeHead_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACentipedeHead_C>();
	}
};
static_assert(alignof(ACentipedeHead_C) == 0x000010, "Wrong alignment on ACentipedeHead_C");
static_assert(sizeof(ACentipedeHead_C) == 0x000610, "Wrong size on ACentipedeHead_C");
static_assert(offsetof(ACentipedeHead_C, UberGraphFrame) == 0x0004C0, "Member 'ACentipedeHead_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, Box) == 0x0004C8, "Member 'ACentipedeHead_C::Box' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, RadarPoint) == 0x0004D0, "Member 'ACentipedeHead_C::RadarPoint' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, Pull) == 0x0004D8, "Member 'ACentipedeHead_C::Pull' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, StaticMesh) == 0x0004E0, "Member 'ACentipedeHead_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, Sub) == 0x0004E8, "Member 'ACentipedeHead_C::Sub' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, Eat) == 0x0004F0, "Member 'ACentipedeHead_C::Eat' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, Ass) == 0x0004F8, "Member 'ACentipedeHead_C::Ass' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, Move) == 0x000500, "Member 'ACentipedeHead_C::Move' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, R) == 0x000508, "Member 'ACentipedeHead_C::R' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, SpringArm) == 0x000510, "Member 'ACentipedeHead_C::SpringArm' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, Length) == 0x000518, "Member 'ACentipedeHead_C::Length' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, Locs) == 0x000520, "Member 'ACentipedeHead_C::Locs' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, Segment) == 0x000530, "Member 'ACentipedeHead_C::Segment' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, Rot) == 0x000540, "Member 'ACentipedeHead_C::Rot' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, Lastloc) == 0x00054C, "Member 'ACentipedeHead_C::Lastloc' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, R_0) == 0x000558, "Member 'ACentipedeHead_C::R_0' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, Tilts) == 0x000560, "Member 'ACentipedeHead_C::Tilts' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, Target) == 0x000570, "Member 'ACentipedeHead_C::Target' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, P) == 0x000578, "Member 'ACentipedeHead_C::P' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, SubPawn) == 0x000588, "Member 'ACentipedeHead_C::SubPawn' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, Rendered) == 0x000590, "Member 'ACentipedeHead_C::Rendered' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, Segment_0) == 0x000598, "Member 'ACentipedeHead_C::Segment_0' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, Eats) == 0x0005A8, "Member 'ACentipedeHead_C::Eats' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, Segm) == 0x0005B0, "Member 'ACentipedeHead_C::Segm' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, IsBaby) == 0x0005B8, "Member 'ACentipedeHead_C::IsBaby' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, babyFollow) == 0x0005C0, "Member 'ACentipedeHead_C::babyFollow' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, babys) == 0x0005C8, "Member 'ACentipedeHead_C::babys' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, IsEgged) == 0x0005D8, "Member 'ACentipedeHead_C::IsEgged' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, babyLocOffset) == 0x0005DC, "Member 'ACentipedeHead_C::babyLocOffset' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, MemoryNonAccess) == 0x0005E8, "Member 'ACentipedeHead_C::MemoryNonAccess' has a wrong offset!");
static_assert(offsetof(ACentipedeHead_C, DebugAv) == 0x0005F8, "Member 'ACentipedeHead_C::DebugAv' has a wrong offset!");

}

