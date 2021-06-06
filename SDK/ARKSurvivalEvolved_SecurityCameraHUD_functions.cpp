// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SecurityCameraHUD_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SecurityCameraHUD.SecurityCameraHUD_C.OnControllerButtonPressed
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FControllerEvent*       ControllerEvent                (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply USecurityCameraHUD_C::STATIC_OnControllerButtonPressed(struct FGeometry* MyGeometry, struct FControllerEvent* ControllerEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.OnControllerButtonPressed");

	USecurityCameraHUD_C_OnControllerButtonPressed_Params params;
	params.MyGeometry = MyGeometry;
	params.ControllerEvent = ControllerEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SecurityCameraHUD.SecurityCameraHUD_C.SetInputControlsRichText
// (Net, NetReliable, NetRequest, Native, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsCameraListShowing            (Parm, ZeroConstructor, IsPlainOldData)

void USecurityCameraHUD_C::SetInputControlsRichText(bool IsCameraListShowing)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.SetInputControlsRichText");

	USecurityCameraHUD_C_SetInputControlsRichText_Params params;
	params.IsCameraListShowing = IsCameraListShowing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityCameraHUD.SecurityCameraHUD_C.SelectItemAtIndex
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void USecurityCameraHUD_C::SelectItemAtIndex(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.SelectItemAtIndex");

	USecurityCameraHUD_C_SelectItemAtIndex_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityCameraHUD.SecurityCameraHUD_C.Update Camera HUD Info
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void USecurityCameraHUD_C::Update_Camera_HUD_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.Update Camera HUD Info");

	USecurityCameraHUD_C_Update_Camera_HUD_Info_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityCameraHUD.SecurityCameraHUD_C.SwitchToCameraAtIndex
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void USecurityCameraHUD_C::SwitchToCameraAtIndex(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.SwitchToCameraAtIndex");

	USecurityCameraHUD_C_SwitchToCameraAtIndex_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityCameraHUD.SecurityCameraHUD_C.HideListPanel
// ()

void USecurityCameraHUD_C::HideListPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.HideListPanel");

	USecurityCameraHUD_C_HideListPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityCameraHUD.SecurityCameraHUD_C.OnKeyUp
// (NetRequest, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyboardEvent*         InKeyboardEvent                (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply USecurityCameraHUD_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyboardEvent* InKeyboardEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.OnKeyUp");

	USecurityCameraHUD_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyboardEvent = InKeyboardEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SecurityCameraHUD.SecurityCameraHUD_C.ShowListPanel
// ()

void USecurityCameraHUD_C::ShowListPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.ShowListPanel");

	USecurityCameraHUD_C_ShowListPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityCameraHUD.SecurityCameraHUD_C.InitFromCamera
// (Net, NetReliable, NetRequest, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ARemoteCamera_Character_BP_C* FromCamera                     (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  CameraName                     (Parm, ZeroConstructor)
// struct FVector                 CameraLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            Camera_Index                   (Parm, ZeroConstructor, IsPlainOldData)

void USecurityCameraHUD_C::STATIC_InitFromCamera(class ARemoteCamera_Character_BP_C* FromCamera, const class FString& CameraName, const struct FVector& CameraLocation, int Camera_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.InitFromCamera");

	USecurityCameraHUD_C_InitFromCamera_Params params;
	params.FromCamera = FromCamera;
	params.CameraName = CameraName;
	params.CameraLocation = CameraLocation;
	params.Camera_Index = Camera_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityCameraHUD.SecurityCameraHUD_C.DestroyCameraHUDWidget
// ()

void USecurityCameraHUD_C::DestroyCameraHUDWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.DestroyCameraHUDWidget");

	USecurityCameraHUD_C_DestroyCameraHUDWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityCameraHUD.SecurityCameraHUD_C.ResetCameraHUDWidget
// ()

void USecurityCameraHUD_C::ResetCameraHUDWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.ResetCameraHUDWidget");

	USecurityCameraHUD_C_ResetCameraHUDWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityCameraHUD.SecurityCameraHUD_C.Tick
// ()
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void USecurityCameraHUD_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.Tick");

	USecurityCameraHUD_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityCameraHUD.SecurityCameraHUD_C.ExecuteUbergraph_SecurityCameraHUD
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USecurityCameraHUD_C::ExecuteUbergraph_SecurityCameraHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.ExecuteUbergraph_SecurityCameraHUD");

	USecurityCameraHUD_C_ExecuteUbergraph_SecurityCameraHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
