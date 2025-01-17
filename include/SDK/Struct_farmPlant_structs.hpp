#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_farmPlant

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct struct_farmPlant.struct_farmPlant
// 0x0080 (0x0080 - 0x0000)
struct FStruct_farmPlant final
{
public:
	class FText                                   DisplayName_21_41960D974F29239BCB96D0906BDBEA56;   // 0x0000(0x0018)(Edit, BlueprintVisible)
	class UClass*                                 PlantObject_57_5011E5D845C14E4593D11C876F297187;   // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            PlantGrow_27_4F38A51C4590D9660F12C7AE06E85D58;     // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            PlantRipe_30_6AF9004C4BE7D2175046B082AC102A03;     // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            PlantSupport_32_5412CEBB47A5982F518ABAA83D92D9D1;  // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Drop_5_085ABC2F48074FD7E1BDE987E97A5250;           // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount_11_FDB14A4440DC73C0C31320A9E95DFB7C;        // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GrowRate_8_F635204C40BD64BAE4DB369063AA13A8;       // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DirtOnly_26_518E3DF141C65542403963BAC554F6EC;      // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Size_35_50E42E654C88BAFA0034708C205426BD;          // 0x004C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTree_38_FDD7F48B440B5962BC91049080042ABF;        // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsBush_59_2164E94C494EBA74F335E7939B558C73;        // 0x0059(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A[0x2];                                       // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Fruit_44_7BF3CC2643302C01DB52048FEA6E393E;         // 0x005C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FruitGrowRate_49_47D346B047D97B04FDE10CA64BADFC47; // 0x0064(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTransform>                     Fruits_48_E7291A6E4A706E81977708B083057BD5;        // 0x0068(0x0010)(Edit, BlueprintVisible)
	float                                         FruitRotate_54_E90285AB407C646CDF859E9B642E2635;   // 0x0078(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FStruct_farmPlant) == 0x000008, "Wrong alignment on FStruct_farmPlant");
static_assert(sizeof(FStruct_farmPlant) == 0x000080, "Wrong size on FStruct_farmPlant");
static_assert(offsetof(FStruct_farmPlant, DisplayName_21_41960D974F29239BCB96D0906BDBEA56) == 0x000000, "Member 'FStruct_farmPlant::DisplayName_21_41960D974F29239BCB96D0906BDBEA56' has a wrong offset!");
static_assert(offsetof(FStruct_farmPlant, PlantObject_57_5011E5D845C14E4593D11C876F297187) == 0x000018, "Member 'FStruct_farmPlant::PlantObject_57_5011E5D845C14E4593D11C876F297187' has a wrong offset!");
static_assert(offsetof(FStruct_farmPlant, PlantGrow_27_4F38A51C4590D9660F12C7AE06E85D58) == 0x000020, "Member 'FStruct_farmPlant::PlantGrow_27_4F38A51C4590D9660F12C7AE06E85D58' has a wrong offset!");
static_assert(offsetof(FStruct_farmPlant, PlantRipe_30_6AF9004C4BE7D2175046B082AC102A03) == 0x000028, "Member 'FStruct_farmPlant::PlantRipe_30_6AF9004C4BE7D2175046B082AC102A03' has a wrong offset!");
static_assert(offsetof(FStruct_farmPlant, PlantSupport_32_5412CEBB47A5982F518ABAA83D92D9D1) == 0x000030, "Member 'FStruct_farmPlant::PlantSupport_32_5412CEBB47A5982F518ABAA83D92D9D1' has a wrong offset!");
static_assert(offsetof(FStruct_farmPlant, Drop_5_085ABC2F48074FD7E1BDE987E97A5250) == 0x000038, "Member 'FStruct_farmPlant::Drop_5_085ABC2F48074FD7E1BDE987E97A5250' has a wrong offset!");
static_assert(offsetof(FStruct_farmPlant, Amount_11_FDB14A4440DC73C0C31320A9E95DFB7C) == 0x000040, "Member 'FStruct_farmPlant::Amount_11_FDB14A4440DC73C0C31320A9E95DFB7C' has a wrong offset!");
static_assert(offsetof(FStruct_farmPlant, GrowRate_8_F635204C40BD64BAE4DB369063AA13A8) == 0x000044, "Member 'FStruct_farmPlant::GrowRate_8_F635204C40BD64BAE4DB369063AA13A8' has a wrong offset!");
static_assert(offsetof(FStruct_farmPlant, DirtOnly_26_518E3DF141C65542403963BAC554F6EC) == 0x000048, "Member 'FStruct_farmPlant::DirtOnly_26_518E3DF141C65542403963BAC554F6EC' has a wrong offset!");
static_assert(offsetof(FStruct_farmPlant, Size_35_50E42E654C88BAFA0034708C205426BD) == 0x00004C, "Member 'FStruct_farmPlant::Size_35_50E42E654C88BAFA0034708C205426BD' has a wrong offset!");
static_assert(offsetof(FStruct_farmPlant, IsTree_38_FDD7F48B440B5962BC91049080042ABF) == 0x000058, "Member 'FStruct_farmPlant::IsTree_38_FDD7F48B440B5962BC91049080042ABF' has a wrong offset!");
static_assert(offsetof(FStruct_farmPlant, IsBush_59_2164E94C494EBA74F335E7939B558C73) == 0x000059, "Member 'FStruct_farmPlant::IsBush_59_2164E94C494EBA74F335E7939B558C73' has a wrong offset!");
static_assert(offsetof(FStruct_farmPlant, Fruit_44_7BF3CC2643302C01DB52048FEA6E393E) == 0x00005C, "Member 'FStruct_farmPlant::Fruit_44_7BF3CC2643302C01DB52048FEA6E393E' has a wrong offset!");
static_assert(offsetof(FStruct_farmPlant, FruitGrowRate_49_47D346B047D97B04FDE10CA64BADFC47) == 0x000064, "Member 'FStruct_farmPlant::FruitGrowRate_49_47D346B047D97B04FDE10CA64BADFC47' has a wrong offset!");
static_assert(offsetof(FStruct_farmPlant, Fruits_48_E7291A6E4A706E81977708B083057BD5) == 0x000068, "Member 'FStruct_farmPlant::Fruits_48_E7291A6E4A706E81977708B083057BD5' has a wrong offset!");
static_assert(offsetof(FStruct_farmPlant, FruitRotate_54_E90285AB407C646CDF859E9B642E2635) == 0x000078, "Member 'FStruct_farmPlant::FruitRotate_54_E90285AB407C646CDF859E9B642E2635' has a wrong offset!");

}

