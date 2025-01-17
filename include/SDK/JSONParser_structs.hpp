#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JSONParser

#include "Basic.hpp"


namespace SDK
{

// Enum JSONParser.EJSONJsonStructMapSetting
// NumValues: 0x0003
enum class EJSONJsonStructMapSetting : uint8
{
	E_object                                 = 0,
	E_array                                  = 1,
	E_MAX                                    = 2,
};

// Enum JSONParser.EJSONDirectoryType
// NumValues: 0x0003
enum class EJSONDirectoryType : uint8
{
	E_gd                                     = 0,
	E_ad                                     = 1,
	E_MAX                                    = 2,
};

// Enum JSONParser.EJsonDataType
// NumValues: 0x0005
enum class EJsonDataType : uint8
{
	E_String                                 = 0,
	E_Number                                 = 1,
	E_Bool                                   = 2,
	E_Object                                 = 3,
	E_MAX                                    = 4,
};

// Enum JSONParser.EJsonCompressFormat
// NumValues: 0x0004
enum class EJsonCompressFormat : uint8
{
	E_Zlib                                   = 0,
	E_Gzip                                   = 1,
	E_LZ4                                    = 2,
	E_MAX                                    = 3,
};

// ScriptStruct JSONParser.SJsonObject
// 0x0080 (0x0080 - 0x0000)
struct alignas(0x08) FSJsonObject final
{
public:
	uint8                                         Pad_0[0x80];                                       // 0x0000(0x0080)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSJsonObject) == 0x000008, "Wrong alignment on FSJsonObject");
static_assert(sizeof(FSJsonObject) == 0x000080, "Wrong size on FSJsonObject");

// ScriptStruct JSONParser.SFillStructWithJsonContainer
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FSFillStructWithJsonContainer final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSFillStructWithJsonContainer) == 0x000008, "Wrong alignment on FSFillStructWithJsonContainer");
static_assert(sizeof(FSFillStructWithJsonContainer) == 0x000010, "Wrong size on FSFillStructWithJsonContainer");

}

