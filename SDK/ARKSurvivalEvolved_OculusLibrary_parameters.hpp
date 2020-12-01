#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_OculusLibrary_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OculusLibrary.OculusFunctionLibrary.SetPositionScale3D
struct UOculusFunctionLibrary_SetPositionScale3D_Params
{
	struct FVector                                     PosScale3D;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.IsPlayerControllerFollowHmdEnabled
struct UOculusFunctionLibrary_IsPlayerControllerFollowHmdEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.GetUserProfile
struct UOculusFunctionLibrary_GetUserProfile_Params
{
	struct FHmdUserProfile                             Profile;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.GetRawSensorData
struct UOculusFunctionLibrary_GetRawSensorData_Params
{
	struct FVector                                     Accelerometer;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Gyro;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Magnetometer;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Temperature;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TimeInSeconds;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.GetPose
struct UOculusFunctionLibrary_GetPose_Params
{
	struct FRotator                                    DeviceRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DevicePosition;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NeckPosition;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseOrienationForPlayerCamera;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePositionForPlayerCamera;                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PositionScale;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.GetPlayerCameraManagerFollowHmd
struct UOculusFunctionLibrary_GetPlayerCameraManagerFollowHmd_Params
{
	bool                                               bFollowHmdOrientation;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bFollowHmdPosition;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.GetBaseRotationAndPositionOffset
struct UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Params
{
	struct FRotator                                    OutRot;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutPosOffset;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters
struct UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Params
{
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutBaseOffsetInMeters;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.EnablePlayerControllerFollowHmd
struct UOculusFunctionLibrary_EnablePlayerControllerFollowHmd_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusLibrary.OculusFunctionLibrary.EnablePlayerCameraManagerFollowHmd
struct UOculusFunctionLibrary_EnablePlayerCameraManagerFollowHmd_Params
{
	bool                                               bFollowHmdOrientation;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFollowHmdPosition;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
