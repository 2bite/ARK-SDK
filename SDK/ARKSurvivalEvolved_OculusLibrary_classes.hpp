#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_OculusLibrary_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OculusLibrary.OculusFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UOculusFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusLibrary.OculusFunctionLibrary");
		return ptr;
	}


	void SetPositionScale3D(const struct FVector& PosScale3D);
	bool IsPlayerControllerFollowHmdEnabled();
	bool GetUserProfile(struct FHmdUserProfile* Profile);
	void GetRawSensorData(struct FVector* Accelerometer, struct FVector* Gyro, struct FVector* Magnetometer, float* Temperature, float* TimeInSeconds);
	void GetPose(bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const struct FVector& PositionScale, struct FRotator* DeviceRotation, struct FVector* DevicePosition, struct FVector* NeckPosition);
	void GetPlayerCameraManagerFollowHmd(bool* bFollowHmdOrientation, bool* bFollowHmdPosition);
	void GetBaseRotationAndPositionOffset(struct FRotator* OutRot, struct FVector* OutPosOffset);
	void GetBaseRotationAndBaseOffsetInMeters(struct FRotator* OutRotation, struct FVector* OutBaseOffsetInMeters);
	void EnablePlayerControllerFollowHmd(bool bEnable);
	void EnablePlayerCameraManagerFollowHmd(bool bFollowHmdOrientation, bool bFollowHmdPosition);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
