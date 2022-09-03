// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SecurityConsoleInterface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SecurityConsoleInterface.SecurityConsoleInterface_C.ActivateCamera
// ()

void USecurityConsoleInterface_C::ActivateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityConsoleInterface.SecurityConsoleInterface_C.ActivateCamera");

	USecurityConsoleInterface_C_ActivateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityConsoleInterface.SecurityConsoleInterface_C.UpdateConsoleName
// ()
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)

void USecurityConsoleInterface_C::UpdateConsoleName(const class FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityConsoleInterface.SecurityConsoleInterface_C.UpdateConsoleName");

	USecurityConsoleInterface_C_UpdateConsoleName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityConsoleInterface.SecurityConsoleInterface_C.GetConsoleData
// ()
// Parameters:
// float                          ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  Name                           (Parm, OutParm, ZeroConstructor)
// bool                           CanAddCamera                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USecurityConsoleInterface_C::GetConsoleData(float* ID, class FString* Name, bool* CanAddCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityConsoleInterface.SecurityConsoleInterface_C.GetConsoleData");

	USecurityConsoleInterface_C_GetConsoleData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;
	if (Name != nullptr)
		*Name = params.Name;
	if (CanAddCamera != nullptr)
		*CanAddCamera = params.CanAddCamera;
}


// Function SecurityConsoleInterface.SecurityConsoleInterface_C.CanAddCamera
// ()
// Parameters:
// bool                           Allowed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USecurityConsoleInterface_C::CanAddCamera(bool* Allowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityConsoleInterface.SecurityConsoleInterface_C.CanAddCamera");

	USecurityConsoleInterface_C_CanAddCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allowed != nullptr)
		*Allowed = params.Allowed;
}


// Function SecurityConsoleInterface.SecurityConsoleInterface_C.GetConsoleID
// ()
// Parameters:
// float                          ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USecurityConsoleInterface_C::GetConsoleID(float* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityConsoleInterface.SecurityConsoleInterface_C.GetConsoleID");

	USecurityConsoleInterface_C_GetConsoleID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;
}


// Function SecurityConsoleInterface.SecurityConsoleInterface_C.UpdateCameraRotation
// ()
// Parameters:
// struct FRotator                NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)

void USecurityConsoleInterface_C::UpdateCameraRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityConsoleInterface.SecurityConsoleInterface_C.UpdateCameraRotation");

	USecurityConsoleInterface_C_UpdateCameraRotation_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityConsoleInterface.SecurityConsoleInterface_C.GetCameraData
// ()
// Parameters:
// TArray<class APrimalStructure*> Cameras                        (Parm, OutParm, ZeroConstructor)
// int                            index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USecurityConsoleInterface_C::GetCameraData(TArray<class APrimalStructure*>* Cameras, int* index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityConsoleInterface.SecurityConsoleInterface_C.GetCameraData");

	USecurityConsoleInterface_C_GetCameraData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cameras != nullptr)
		*Cameras = params.Cameras;
	if (index != nullptr)
		*index = params.index;
}


// Function SecurityConsoleInterface.SecurityConsoleInterface_C.SetCurrentCamera
// ()
// Parameters:
// int                            CameraIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void USecurityConsoleInterface_C::SetCurrentCamera(int CameraIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityConsoleInterface.SecurityConsoleInterface_C.SetCurrentCamera");

	USecurityConsoleInterface_C_SetCurrentCamera_Params params;
	params.CameraIndex = CameraIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityConsoleInterface.SecurityConsoleInterface_C.GetCameraLocation
// ()
// Parameters:
// struct FVector                 CameraViewPoint                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                CameraRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USecurityConsoleInterface_C::GetCameraLocation(struct FVector* CameraViewPoint, struct FRotator* CameraRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityConsoleInterface.SecurityConsoleInterface_C.GetCameraLocation");

	USecurityConsoleInterface_C_GetCameraLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraViewPoint != nullptr)
		*CameraViewPoint = params.CameraViewPoint;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;
}


// Function SecurityConsoleInterface.SecurityConsoleInterface_C.RemoveCamera
// ()
// Parameters:
// class APrimalStructure*        CameraToRemove                 (Parm, ZeroConstructor, IsPlainOldData)

void USecurityConsoleInterface_C::RemoveCamera(class APrimalStructure* CameraToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityConsoleInterface.SecurityConsoleInterface_C.RemoveCamera");

	USecurityConsoleInterface_C_RemoveCamera_Params params;
	params.CameraToRemove = CameraToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityConsoleInterface.SecurityConsoleInterface_C.AddNewCamera
// ()
// Parameters:
// class APrimalStructure*        NewStructure                   (Parm, ZeroConstructor, IsPlainOldData)

void USecurityConsoleInterface_C::AddNewCamera(class APrimalStructure* NewStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityConsoleInterface.SecurityConsoleInterface_C.AddNewCamera");

	USecurityConsoleInterface_C_AddNewCamera_Params params;
	params.NewStructure = NewStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
