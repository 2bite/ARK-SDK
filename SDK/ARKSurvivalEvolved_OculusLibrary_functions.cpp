// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_OculusLibrary_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OculusLibrary.OculusFunctionLibrary.SetPositionScale3D
// ()
// Parameters:
// struct FVector                 PosScale3D                     (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::SetPositionScale3D(const struct FVector& PosScale3D)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.SetPositionScale3D");

	UOculusFunctionLibrary_SetPositionScale3D_Params params;
	params.PosScale3D = PosScale3D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusLibrary.OculusFunctionLibrary.IsPlayerControllerFollowHmdEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusFunctionLibrary::IsPlayerControllerFollowHmdEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.IsPlayerControllerFollowHmdEnabled");

	UOculusFunctionLibrary_IsPlayerControllerFollowHmdEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusLibrary.OculusFunctionLibrary.GetUserProfile
// ()
// Parameters:
// struct FHmdUserProfile         Profile                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusFunctionLibrary::GetUserProfile(struct FHmdUserProfile* Profile)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.GetUserProfile");

	UOculusFunctionLibrary_GetUserProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Profile != nullptr)
		*Profile = params.Profile;

	return params.ReturnValue;
}


// Function OculusLibrary.OculusFunctionLibrary.GetRawSensorData
// ()
// Parameters:
// struct FVector                 Accelerometer                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Gyro                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Magnetometer                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Temperature                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TimeInSeconds                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::GetRawSensorData(struct FVector* Accelerometer, struct FVector* Gyro, struct FVector* Magnetometer, float* Temperature, float* TimeInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.GetRawSensorData");

	UOculusFunctionLibrary_GetRawSensorData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Accelerometer != nullptr)
		*Accelerometer = params.Accelerometer;
	if (Gyro != nullptr)
		*Gyro = params.Gyro;
	if (Magnetometer != nullptr)
		*Magnetometer = params.Magnetometer;
	if (Temperature != nullptr)
		*Temperature = params.Temperature;
	if (TimeInSeconds != nullptr)
		*TimeInSeconds = params.TimeInSeconds;
}


// Function OculusLibrary.OculusFunctionLibrary.GetPose
// ()
// Parameters:
// struct FRotator                DeviceRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DevicePosition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NeckPosition                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bUseOrienationForPlayerCamera  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUsePositionForPlayerCamera    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PositionScale                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::GetPose(bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const struct FVector& PositionScale, struct FRotator* DeviceRotation, struct FVector* DevicePosition, struct FVector* NeckPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.GetPose");

	UOculusFunctionLibrary_GetPose_Params params;
	params.bUseOrienationForPlayerCamera = bUseOrienationForPlayerCamera;
	params.bUsePositionForPlayerCamera = bUsePositionForPlayerCamera;
	params.PositionScale = PositionScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeviceRotation != nullptr)
		*DeviceRotation = params.DeviceRotation;
	if (DevicePosition != nullptr)
		*DevicePosition = params.DevicePosition;
	if (NeckPosition != nullptr)
		*NeckPosition = params.NeckPosition;
}


// Function OculusLibrary.OculusFunctionLibrary.GetPlayerCameraManagerFollowHmd
// ()
// Parameters:
// bool                           bFollowHmdOrientation          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bFollowHmdPosition             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::GetPlayerCameraManagerFollowHmd(bool* bFollowHmdOrientation, bool* bFollowHmdPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.GetPlayerCameraManagerFollowHmd");

	UOculusFunctionLibrary_GetPlayerCameraManagerFollowHmd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFollowHmdOrientation != nullptr)
		*bFollowHmdOrientation = params.bFollowHmdOrientation;
	if (bFollowHmdPosition != nullptr)
		*bFollowHmdPosition = params.bFollowHmdPosition;
}


// Function OculusLibrary.OculusFunctionLibrary.GetBaseRotationAndPositionOffset
// ()
// Parameters:
// struct FRotator                OutRot                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutPosOffset                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::GetBaseRotationAndPositionOffset(struct FRotator* OutRot, struct FVector* OutPosOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.GetBaseRotationAndPositionOffset");

	UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRot != nullptr)
		*OutRot = params.OutRot;
	if (OutPosOffset != nullptr)
		*OutPosOffset = params.OutPosOffset;
}


// Function OculusLibrary.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters
// ()
// Parameters:
// struct FRotator                OutRotation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutBaseOffsetInMeters          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::GetBaseRotationAndBaseOffsetInMeters(struct FRotator* OutRotation, struct FVector* OutBaseOffsetInMeters)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters");

	UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
	if (OutBaseOffsetInMeters != nullptr)
		*OutBaseOffsetInMeters = params.OutBaseOffsetInMeters;
}


// Function OculusLibrary.OculusFunctionLibrary.EnablePlayerControllerFollowHmd
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::EnablePlayerControllerFollowHmd(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.EnablePlayerControllerFollowHmd");

	UOculusFunctionLibrary_EnablePlayerControllerFollowHmd_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusLibrary.OculusFunctionLibrary.EnablePlayerCameraManagerFollowHmd
// ()
// Parameters:
// bool                           bFollowHmdOrientation          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFollowHmdPosition             (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::EnablePlayerCameraManagerFollowHmd(bool bFollowHmdOrientation, bool bFollowHmdPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.EnablePlayerCameraManagerFollowHmd");

	UOculusFunctionLibrary_EnablePlayerCameraManagerFollowHmd_Params params;
	params.bFollowHmdOrientation = bFollowHmdOrientation;
	params.bFollowHmdPosition = bFollowHmdPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
