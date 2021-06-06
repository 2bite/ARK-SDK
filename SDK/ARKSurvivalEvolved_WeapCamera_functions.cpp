// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapCamera_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapCamera.WeapCamera_C.BPWeaponZoom
// ()
// Parameters:
// bool*                          bZoomingIn                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapCamera_C::BPWeaponZoom(bool* bZoomingIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCamera.WeapCamera_C.BPWeaponZoom");

	AWeapCamera_C_BPWeaponZoom_Params params;
	params.bZoomingIn = bZoomingIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCamera.WeapCamera_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapCamera_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCamera.WeapCamera_C.ReceiveTick");

	AWeapCamera_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCamera.WeapCamera_C.ReceiveBeginPlay
// ()

void AWeapCamera_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCamera.WeapCamera_C.ReceiveBeginPlay");

	AWeapCamera_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCamera.WeapCamera_C.BPConstrainAspectRatio
// ()
// Parameters:
// float                          OutAspectRatio                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapCamera_C::BPConstrainAspectRatio(float* OutAspectRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCamera.WeapCamera_C.BPConstrainAspectRatio");

	AWeapCamera_C_BPConstrainAspectRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAspectRatio != nullptr)
		*OutAspectRatio = params.OutAspectRatio;

	return params.ReturnValue;
}


// Function WeapCamera.WeapCamera_C.BPTryFireWeapon
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapCamera_C::BPTryFireWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCamera.WeapCamera_C.BPTryFireWeapon");

	AWeapCamera_C_BPTryFireWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapCamera.WeapCamera_C.BPAllowNativeFireWeapon
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapCamera_C::BPAllowNativeFireWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCamera.WeapCamera_C.BPAllowNativeFireWeapon");

	AWeapCamera_C_BPAllowNativeFireWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapCamera.WeapCamera_C.UserConstructionScript
// ()

void AWeapCamera_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCamera.WeapCamera_C.UserConstructionScript");

	AWeapCamera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCamera.WeapCamera_C.ServerTookScreenshot
// ()
// Parameters:
// bool                           bUsingFlash                    (Parm, ZeroConstructor, IsPlainOldData)

void AWeapCamera_C::ServerTookScreenshot(bool bUsingFlash)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCamera.WeapCamera_C.ServerTookScreenshot");

	AWeapCamera_C_ServerTookScreenshot_Params params;
	params.bUsingFlash = bUsingFlash;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCamera.WeapCamera_C.NetTookScreenshot
// ()
// Parameters:
// bool                           bUsingFlash                    (Parm, ZeroConstructor, IsPlainOldData)

void AWeapCamera_C::NetTookScreenshot(bool bUsingFlash)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCamera.WeapCamera_C.NetTookScreenshot");

	AWeapCamera_C_NetTookScreenshot_Params params;
	params.bUsingFlash = bUsingFlash;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCamera.WeapCamera_C.ExecuteUbergraph_WeapCamera
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapCamera_C::ExecuteUbergraph_WeapCamera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCamera.WeapCamera_C.ExecuteUbergraph_WeapCamera");

	AWeapCamera_C_ExecuteUbergraph_WeapCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
