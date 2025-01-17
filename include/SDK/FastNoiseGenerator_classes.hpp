#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FastNoiseGenerator

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "FastNoiseGenerator_structs.hpp"


namespace SDK
{

// Class FastNoiseGenerator.FastNoiseWrapper
// 0x0450 (0x0478 - 0x0028)
class UFastNoiseWrapper final : public UObject
{
public:
	uint8                                         Pad_28[0x450];                                     // 0x0028(0x0450)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	EFastNoise_NoiseType GetNoiseType();
	void SetCellularJitter(const float CellularJitter);
	void SetDistanceFunction(const EFastNoise_CellularDistanceFunction DistanceFunction);
	void SetFractalType(const EFastNoise_FractalType FractalType);
	void SetFrequency(const float Frequency);
	void SetGain(const float Gain);
	void SetInterpolation(const EFastNoise_Interp Interp);
	void SetLacunarity(const float Lacunarity);
	void SetNoiseType(const EFastNoise_NoiseType NoiseType);
	void SetOctaves(const int32 Octaves);
	void SetReturnType(const EFastNoise_CellularReturnType CellularReturnType);
	void SetSeed(const int32 Seed);
	void SetupFastNoise(const EFastNoise_NoiseType NoiseType, const int32 Seed, const float Frequency, const EFastNoise_Interp Interp, const EFastNoise_FractalType FractalType, const int32 Octaves, const float Lacunarity, const float Gain, const float CellularJitter, const EFastNoise_CellularDistanceFunction CellularDistanceFunction, const EFastNoise_CellularReturnType CellularReturnType);

	float GetCellularJitter() const;
	EFastNoise_CellularDistanceFunction GetDistanceFunction() const;
	EFastNoise_FractalType GetFractalType() const;
	float GetFrequency() const;
	float GetGain() const;
	EFastNoise_Interp GetInterpolation() const;
	float GetLacunarity() const;
	float GetNoise2D(const float X, const float Y) const;
	float GetNoise3D(const float X, const float Y, const float Z) const;
	int32 GetOctaves() const;
	EFastNoise_CellularReturnType GetReturnType() const;
	int32 GetSeed() const;
	bool IsInitialized() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FastNoiseWrapper">();
	}
	static class UFastNoiseWrapper* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFastNoiseWrapper>();
	}
};
static_assert(alignof(UFastNoiseWrapper) == 0x000008, "Wrong alignment on UFastNoiseWrapper");
static_assert(sizeof(UFastNoiseWrapper) == 0x000478, "Wrong size on UFastNoiseWrapper");

}

