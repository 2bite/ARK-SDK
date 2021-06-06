// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DKaijuHandle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.BPOverrideCameraViewTarget
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

void ABuff_DKaijuHandle_C::BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.BPOverrideCameraViewTarget");

	ABuff_DKaijuHandle_C_BPOverrideCameraViewTarget_Params params;
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


// Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DKaijuHandle_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.BuffTickServer");

	ABuff_DKaijuHandle_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.BPCheckPreventInput
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_DKaijuHandle_C::BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.BPCheckPreventInput");

	ABuff_DKaijuHandle_C_BPCheckPreventInput_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.BPPreventFirstPerson
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_DKaijuHandle_C::BPPreventFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.BPPreventFirstPerson");

	ABuff_DKaijuHandle_C_BPPreventFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.PlayHandleAnim
// ()

void ABuff_DKaijuHandle_C::PlayHandleAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.PlayHandleAnim");

	ABuff_DKaijuHandle_C_PlayHandleAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.UserConstructionScript
// ()

void ABuff_DKaijuHandle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.UserConstructionScript");

	ABuff_DKaijuHandle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.ReceiveBeginPlay
// ()

void ABuff_DKaijuHandle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.ReceiveBeginPlay");

	ABuff_DKaijuHandle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DKaijuHandle_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.BPDeactivated");

	ABuff_DKaijuHandle_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.Multi_UpdateRotation
// ()
// Parameters:
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DKaijuHandle_C::Multi_UpdateRotation(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.Multi_UpdateRotation");

	ABuff_DKaijuHandle_C_Multi_UpdateRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.ExecuteUbergraph_Buff_DKaijuHandle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DKaijuHandle_C::ExecuteUbergraph_Buff_DKaijuHandle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.ExecuteUbergraph_Buff_DKaijuHandle");

	ABuff_DKaijuHandle_C_ExecuteUbergraph_Buff_DKaijuHandle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
