#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_customwall

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct struct_customwall.struct_customwall
// 0x0020 (0x0020 - 0x0000)
struct FStruct_customwall final
{
public:
	float                                         HealthMult_2_B48405FD407DAB2FF3B2D892E2E5DDA0;     // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Material_6_3CC3495847DF40B12512E7AF6DED2B8C;       // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Drop_12_C7A56D904D3D3936F5FCE08E81EF9E61;          // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 WallClass_16_CF2B01074055E8DB58BB38B985687C6E;     // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FStruct_customwall) == 0x000008, "Wrong alignment on FStruct_customwall");
static_assert(sizeof(FStruct_customwall) == 0x000020, "Wrong size on FStruct_customwall");
static_assert(offsetof(FStruct_customwall, HealthMult_2_B48405FD407DAB2FF3B2D892E2E5DDA0) == 0x000000, "Member 'FStruct_customwall::HealthMult_2_B48405FD407DAB2FF3B2D892E2E5DDA0' has a wrong offset!");
static_assert(offsetof(FStruct_customwall, Material_6_3CC3495847DF40B12512E7AF6DED2B8C) == 0x000008, "Member 'FStruct_customwall::Material_6_3CC3495847DF40B12512E7AF6DED2B8C' has a wrong offset!");
static_assert(offsetof(FStruct_customwall, Drop_12_C7A56D904D3D3936F5FCE08E81EF9E61) == 0x000010, "Member 'FStruct_customwall::Drop_12_C7A56D904D3D3936F5FCE08E81EF9E61' has a wrong offset!");
static_assert(offsetof(FStruct_customwall, WallClass_16_CF2B01074055E8DB58BB38B985687C6E) == 0x000018, "Member 'FStruct_customwall::WallClass_16_CF2B01074055E8DB58BB38B985687C6E' has a wrong offset!");

}

