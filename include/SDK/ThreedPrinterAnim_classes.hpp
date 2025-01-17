#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ThreedPrinterAnim

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Struct_multisectionCustomMesh_structs.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass 3dPrinterAnim.3dPrinterAnim_C
// 0x0230 (0x0588 - 0x0358)
class AThreedPrinterAnim_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_ThreedPrinterAnim_C;                // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Printer_prot2_mover_Y;                             // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Printer_prot2_body;                                // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Printer_prot2_mover_Z;                             // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Printer_prot2_mover_X;                             // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Size;                                              // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Console;                                           // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProceduralMeshComponent*               Mesh;                                              // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Loop;                                              // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Snd;                                               // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    H;                                                 // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Head;                                              // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Q_rad;                                             // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Q_lin;                                             // 0x03C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        LocRads;                                           // 0x03C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                        LocLins;                                           // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Ind;                                               // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Mode;                                              // 0x03EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Active;                                            // 0x03ED(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EE[0x2];                                      // 0x03EE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Height;                                            // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F4[0x4];                                      // 0x03F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Dynmat;                                            // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxStep;                                           // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         L_height;                                          // 0x0404(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Step;                                              // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Speed;                                             // 0x040C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 MeshName;                                          // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         ObjectIndex;                                       // 0x0420(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanPrint;                                          // 0x0424(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_425[0x3];                                      // 0x0425(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 MeshMaterial;                                      // 0x0428(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	ETextureFilter                                Filter_tex;                                        // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETextureFilter                                Filter_pbr;                                        // 0x0439(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETextureFilter                                Filter_normal;                                     // 0x043A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         PhysMaterial;                                      // 0x043B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43C[0x4];                                      // 0x043C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_multisectionCustomMesh         MultisectionMeshData;                              // 0x0440(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FVector>                        SumOfVerts;                                        // 0x0558(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       Dynmats;                                           // 0x0568(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AMainGamemode_C*                        Target;                                            // 0x0578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         S;                                                 // 0x0580(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_3dPrinterAnim(int32 EntryPoint);
	void Finish();
	void SelectMesh(const class FString& MeshName_0);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, Enum_interactionActions Action);
	void Print();
	void ReceiveTick(float DeltaSeconds);
	void ScrollDown();
	void ScrollUp();
	void Placement();
	void MakePath();
	TArray<struct FVector> Array();
	void Point(struct FVector* Output);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"3dPrinterAnim_C">();
	}
	static class AThreedPrinterAnim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AThreedPrinterAnim_C>();
	}
};
static_assert(alignof(AThreedPrinterAnim_C) == 0x000008, "Wrong alignment on AThreedPrinterAnim_C");
static_assert(sizeof(AThreedPrinterAnim_C) == 0x000588, "Wrong size on AThreedPrinterAnim_C");
static_assert(offsetof(AThreedPrinterAnim_C, UberGraphFrame_ThreedPrinterAnim_C) == 0x000358, "Member 'AThreedPrinterAnim_C::UberGraphFrame_ThreedPrinterAnim_C' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, Printer_prot2_mover_Y) == 0x000360, "Member 'AThreedPrinterAnim_C::Printer_prot2_mover_Y' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, Printer_prot2_body) == 0x000368, "Member 'AThreedPrinterAnim_C::Printer_prot2_body' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, Printer_prot2_mover_Z) == 0x000370, "Member 'AThreedPrinterAnim_C::Printer_prot2_mover_Z' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, Printer_prot2_mover_X) == 0x000378, "Member 'AThreedPrinterAnim_C::Printer_prot2_mover_X' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, Size) == 0x000380, "Member 'AThreedPrinterAnim_C::Size' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, Box) == 0x000388, "Member 'AThreedPrinterAnim_C::Box' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, Console) == 0x000390, "Member 'AThreedPrinterAnim_C::Console' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, Mesh) == 0x000398, "Member 'AThreedPrinterAnim_C::Mesh' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, Loop) == 0x0003A0, "Member 'AThreedPrinterAnim_C::Loop' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, Snd) == 0x0003A8, "Member 'AThreedPrinterAnim_C::Snd' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, H) == 0x0003B0, "Member 'AThreedPrinterAnim_C::H' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, Head) == 0x0003B8, "Member 'AThreedPrinterAnim_C::Head' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, Q_rad) == 0x0003C0, "Member 'AThreedPrinterAnim_C::Q_rad' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, Q_lin) == 0x0003C4, "Member 'AThreedPrinterAnim_C::Q_lin' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, LocRads) == 0x0003C8, "Member 'AThreedPrinterAnim_C::LocRads' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, LocLins) == 0x0003D8, "Member 'AThreedPrinterAnim_C::LocLins' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, Ind) == 0x0003E8, "Member 'AThreedPrinterAnim_C::Ind' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, Mode) == 0x0003EC, "Member 'AThreedPrinterAnim_C::Mode' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, Active) == 0x0003ED, "Member 'AThreedPrinterAnim_C::Active' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, Height) == 0x0003F0, "Member 'AThreedPrinterAnim_C::Height' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, Dynmat) == 0x0003F8, "Member 'AThreedPrinterAnim_C::Dynmat' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, MaxStep) == 0x000400, "Member 'AThreedPrinterAnim_C::MaxStep' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, L_height) == 0x000404, "Member 'AThreedPrinterAnim_C::L_height' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, Step) == 0x000408, "Member 'AThreedPrinterAnim_C::Step' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, Speed) == 0x00040C, "Member 'AThreedPrinterAnim_C::Speed' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, MeshName) == 0x000410, "Member 'AThreedPrinterAnim_C::MeshName' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, ObjectIndex) == 0x000420, "Member 'AThreedPrinterAnim_C::ObjectIndex' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, CanPrint) == 0x000424, "Member 'AThreedPrinterAnim_C::CanPrint' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, MeshMaterial) == 0x000428, "Member 'AThreedPrinterAnim_C::MeshMaterial' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, Filter_tex) == 0x000438, "Member 'AThreedPrinterAnim_C::Filter_tex' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, Filter_pbr) == 0x000439, "Member 'AThreedPrinterAnim_C::Filter_pbr' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, Filter_normal) == 0x00043A, "Member 'AThreedPrinterAnim_C::Filter_normal' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, PhysMaterial) == 0x00043B, "Member 'AThreedPrinterAnim_C::PhysMaterial' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, MultisectionMeshData) == 0x000440, "Member 'AThreedPrinterAnim_C::MultisectionMeshData' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, SumOfVerts) == 0x000558, "Member 'AThreedPrinterAnim_C::SumOfVerts' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, Dynmats) == 0x000568, "Member 'AThreedPrinterAnim_C::Dynmats' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, Target) == 0x000578, "Member 'AThreedPrinterAnim_C::Target' has a wrong offset!");
static_assert(offsetof(AThreedPrinterAnim_C, S) == 0x000580, "Member 'AThreedPrinterAnim_C::S' has a wrong offset!");

}

