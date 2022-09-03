// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_VineGrabbed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_VineGrabbed.Buff_VineGrabbed_C.BPOverrideCameraViewTarget
// ()
// Parameters:
// struct FName*                  CurrentCameraMode              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                DesiredCameraLocation          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               DesiredCameraRotation          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DesiredFOV                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraLocation        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CameraLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraRotation        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                CameraRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraFOV             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CameraFOV                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_VineGrabbed_C::BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VineGrabbed.Buff_VineGrabbed_C.BPOverrideCameraViewTarget");

	ABuff_VineGrabbed_C_BPOverrideCameraViewTarget_Params params;
	params.CurrentCameraMode = CurrentCameraMode;
	params.DesiredCameraLocation = DesiredCameraLocation;
	params.DesiredCameraRotation = DesiredCameraRotation;
	params.DesiredFOV = DesiredFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOverrideCameraLocation != nullptr)
		*bOverrideCameraLocation = params.bOverrideCameraLocation;
	if (CameraLocation != nullptr)
		*CameraLocation = params.CameraLocation;
	if (bOverrideCameraRotation != nullptr)
		*bOverrideCameraRotation = params.bOverrideCameraRotation;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;
	if (bOverrideCameraFOV != nullptr)
		*bOverrideCameraFOV = params.bOverrideCameraFOV;
	if (CameraFOV != nullptr)
		*CameraFOV = params.CameraFOV;
}


// Function Buff_VineGrabbed.Buff_VineGrabbed_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VineGrabbed_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VineGrabbed.Buff_VineGrabbed_C.ReceiveEndPlay");

	ABuff_VineGrabbed_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VineGrabbed.Buff_VineGrabbed_C.ReceiveBeginPlay
// ()

void ABuff_VineGrabbed_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VineGrabbed.Buff_VineGrabbed_C.ReceiveBeginPlay");

	ABuff_VineGrabbed_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VineGrabbed.Buff_VineGrabbed_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VineGrabbed_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VineGrabbed.Buff_VineGrabbed_C.BuffTickClient");

	ABuff_VineGrabbed_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VineGrabbed.Buff_VineGrabbed_C.BPDrawBuffStatusHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         YPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleMult                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VineGrabbed_C::BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VineGrabbed.Buff_VineGrabbed_C.BPDrawBuffStatusHUD");

	ABuff_VineGrabbed_C_BPDrawBuffStatusHUD_Params params;
	params.HUD = HUD;
	params.XPos = XPos;
	params.YPos = YPos;
	params.ScaleMult = ScaleMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VineGrabbed.Buff_VineGrabbed_C.AllowPostProcessEffect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_VineGrabbed_C::AllowPostProcessEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VineGrabbed.Buff_VineGrabbed_C.AllowPostProcessEffect");

	ABuff_VineGrabbed_C_AllowPostProcessEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_VineGrabbed.Buff_VineGrabbed_C.UserConstructionScript
// ()

void ABuff_VineGrabbed_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VineGrabbed.Buff_VineGrabbed_C.UserConstructionScript");

	ABuff_VineGrabbed_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VineGrabbed.Buff_VineGrabbed_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VineGrabbed_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VineGrabbed.Buff_VineGrabbed_C.ReceiveTick");

	ABuff_VineGrabbed_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VineGrabbed.Buff_VineGrabbed_C.ExecuteUbergraph_Buff_VineGrabbed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VineGrabbed_C::ExecuteUbergraph_Buff_VineGrabbed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VineGrabbed.Buff_VineGrabbed_C.ExecuteUbergraph_Buff_VineGrabbed");

	ABuff_VineGrabbed_C_ExecuteUbergraph_Buff_VineGrabbed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
