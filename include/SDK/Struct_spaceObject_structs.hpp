#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_spaceObject

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Enum_objectType_structs.hpp"
#include "Enum_freq_structs.hpp"
#include "Enum_quality_structs.hpp"


namespace SDK
{

// UserDefinedStruct struct_spaceObject.struct_spaceObject
// 0x0068 (0x0068 - 0x0000)
struct FStruct_spaceObject final
{
public:
	class FText                                   DisplayName_32_E43F595545EF3DCA0C14248EC38FD526;   // 0x0000(0x0018)(Edit, BlueprintVisible)
	class FName                                   SignalName_50_CCF432D14D3327CA417861B174C2ABCF;    // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Mesh_9_69B5661B465BBFCEAD141CA8D89FBC05;           // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Ring_11_E678C67C4E77CCE273D333AA766FD234;          // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotation_init_28_0E9BECA64B5EE975A643E4B328E5F3AF; // 0x0030(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               Rotation_1_22_035746D14469D0FBF636A7A1B2B95040;    // 0x003C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               Rotation_2_25_70C93B0A48E15CB3CD8D6491A895855E;    // 0x0048(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               Rotation_3_26_8AA709AC42465156BEB3FCAC1470B05A;    // 0x0054(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	Enum_objectType                               ObjectType_53_5B9417DB414109E4D75A76BE14C28BE2;    // 0x0060(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_freq                                     Signal_frequency_52_53FFEF714ECD27B0E36CB2B575FA645F; // 0x0061(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_quality                                  Signal_qualiy_51_1B7620C741EFC772BFF875B43F2DF35A; // 0x0062(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FStruct_spaceObject) == 0x000008, "Wrong alignment on FStruct_spaceObject");
static_assert(sizeof(FStruct_spaceObject) == 0x000068, "Wrong size on FStruct_spaceObject");
static_assert(offsetof(FStruct_spaceObject, DisplayName_32_E43F595545EF3DCA0C14248EC38FD526) == 0x000000, "Member 'FStruct_spaceObject::DisplayName_32_E43F595545EF3DCA0C14248EC38FD526' has a wrong offset!");
static_assert(offsetof(FStruct_spaceObject, SignalName_50_CCF432D14D3327CA417861B174C2ABCF) == 0x000018, "Member 'FStruct_spaceObject::SignalName_50_CCF432D14D3327CA417861B174C2ABCF' has a wrong offset!");
static_assert(offsetof(FStruct_spaceObject, Mesh_9_69B5661B465BBFCEAD141CA8D89FBC05) == 0x000020, "Member 'FStruct_spaceObject::Mesh_9_69B5661B465BBFCEAD141CA8D89FBC05' has a wrong offset!");
static_assert(offsetof(FStruct_spaceObject, Ring_11_E678C67C4E77CCE273D333AA766FD234) == 0x000028, "Member 'FStruct_spaceObject::Ring_11_E678C67C4E77CCE273D333AA766FD234' has a wrong offset!");
static_assert(offsetof(FStruct_spaceObject, Rotation_init_28_0E9BECA64B5EE975A643E4B328E5F3AF) == 0x000030, "Member 'FStruct_spaceObject::Rotation_init_28_0E9BECA64B5EE975A643E4B328E5F3AF' has a wrong offset!");
static_assert(offsetof(FStruct_spaceObject, Rotation_1_22_035746D14469D0FBF636A7A1B2B95040) == 0x00003C, "Member 'FStruct_spaceObject::Rotation_1_22_035746D14469D0FBF636A7A1B2B95040' has a wrong offset!");
static_assert(offsetof(FStruct_spaceObject, Rotation_2_25_70C93B0A48E15CB3CD8D6491A895855E) == 0x000048, "Member 'FStruct_spaceObject::Rotation_2_25_70C93B0A48E15CB3CD8D6491A895855E' has a wrong offset!");
static_assert(offsetof(FStruct_spaceObject, Rotation_3_26_8AA709AC42465156BEB3FCAC1470B05A) == 0x000054, "Member 'FStruct_spaceObject::Rotation_3_26_8AA709AC42465156BEB3FCAC1470B05A' has a wrong offset!");
static_assert(offsetof(FStruct_spaceObject, ObjectType_53_5B9417DB414109E4D75A76BE14C28BE2) == 0x000060, "Member 'FStruct_spaceObject::ObjectType_53_5B9417DB414109E4D75A76BE14C28BE2' has a wrong offset!");
static_assert(offsetof(FStruct_spaceObject, Signal_frequency_52_53FFEF714ECD27B0E36CB2B575FA645F) == 0x000061, "Member 'FStruct_spaceObject::Signal_frequency_52_53FFEF714ECD27B0E36CB2B575FA645F' has a wrong offset!");
static_assert(offsetof(FStruct_spaceObject, Signal_qualiy_51_1B7620C741EFC772BFF875B43F2DF35A) == 0x000062, "Member 'FStruct_spaceObject::Signal_qualiy_51_1B7620C741EFC772BFF875B43F2DF35A' has a wrong offset!");

}

