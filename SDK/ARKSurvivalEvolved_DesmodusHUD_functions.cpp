// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DesmodusHUD_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DesmodusHUD.DesmodusHUD_C.ClearString
// ()

void UDesmodusHUD_C::ClearString()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesmodusHUD.DesmodusHUD_C.ClearString");

	UDesmodusHUD_C_ClearString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesmodusHUD.DesmodusHUD_C.FadeOutHUDString
// (NetRequest, NetResponse, Static, MulticastDelegate, Public, Protected, HasOutParms, NetClient, BlueprintEvent)

void UDesmodusHUD_C::STATIC_FadeOutHUDString()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesmodusHUD.DesmodusHUD_C.FadeOutHUDString");

	UDesmodusHUD_C_FadeOutHUDString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesmodusHUD.DesmodusHUD_C.SetHUDString
// (NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Protected, HasOutParms, NetClient, BlueprintEvent)
// Parameters:
// class FString                  HUDString                      (Parm, ZeroConstructor)
// int                            Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetOpacity                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentOpacity                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ColorRed                       (Parm, ZeroConstructor, IsPlainOldData)

void UDesmodusHUD_C::STATIC_SetHUDString(const class FString& HUDString, int Priority, float TargetOpacity, float CurrentOpacity, bool ColorRed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesmodusHUD.DesmodusHUD_C.SetHUDString");

	UDesmodusHUD_C_SetHUDString_Params params;
	params.HUDString = HUDString;
	params.Priority = Priority;
	params.TargetOpacity = TargetOpacity;
	params.CurrentOpacity = CurrentOpacity;
	params.ColorRed = ColorRed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesmodusHUD.DesmodusHUD_C.Initialize HUD Widget
// ()

void UDesmodusHUD_C::Initialize_HUD_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesmodusHUD.DesmodusHUD_C.Initialize HUD Widget");

	UDesmodusHUD_C_Initialize_HUD_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesmodusHUD.DesmodusHUD_C.Reset HUD Widget
// ()

void UDesmodusHUD_C::Reset_HUD_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesmodusHUD.DesmodusHUD_C.Reset HUD Widget");

	UDesmodusHUD_C_Reset_HUD_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesmodusHUD.DesmodusHUD_C.DestroyWidget
// ()

void UDesmodusHUD_C::DestroyWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesmodusHUD.DesmodusHUD_C.DestroyWidget");

	UDesmodusHUD_C_DestroyWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesmodusHUD.DesmodusHUD_C.StartClosingWidget
// ()
// Parameters:
// float                          NewLifeSpan                    (Parm, ZeroConstructor, IsPlainOldData)

void UDesmodusHUD_C::StartClosingWidget(float NewLifeSpan)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesmodusHUD.DesmodusHUD_C.StartClosingWidget");

	UDesmodusHUD_C_StartClosingWidget_Params params;
	params.NewLifeSpan = NewLifeSpan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesmodusHUD.DesmodusHUD_C.ExecuteUbergraph_DesmodusHUD
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDesmodusHUD_C::ExecuteUbergraph_DesmodusHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesmodusHUD.DesmodusHUD_C.ExecuteUbergraph_DesmodusHUD");

	UDesmodusHUD_C_ExecuteUbergraph_DesmodusHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesmodusHUD.DesmodusHUD_C.OnWidgetDestroyed__DelegateSignature
// ()

void UDesmodusHUD_C::OnWidgetDestroyed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesmodusHUD.DesmodusHUD_C.OnWidgetDestroyed__DelegateSignature");

	UDesmodusHUD_C_OnWidgetDestroyed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
