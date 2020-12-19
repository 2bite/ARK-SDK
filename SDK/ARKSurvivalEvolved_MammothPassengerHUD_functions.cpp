// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MammothPassengerHUD_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MammothPassengerHUD.MammothPassengerHUD_C.Receive Input
// ()

void UMammothPassengerHUD_C::Receive_Input()
{
	static auto fn = UObject::FindObject<UFunction>("Function MammothPassengerHUD.MammothPassengerHUD_C.Receive Input");

	UMammothPassengerHUD_C_Receive_Input_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MammothPassengerHUD.MammothPassengerHUD_C.Sync Minigame Widget
// ()
// Parameters:
// double                         NextTimeOut                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          BeatWindow                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          BeatTimeOut                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          BeatExitWidth                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              BeatWidgetIcon                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseDebugMode                   (Parm, ZeroConstructor, IsPlainOldData)

void UMammothPassengerHUD_C::Sync_Minigame_Widget(double NextTimeOut, float BeatWindow, float BeatTimeOut, float BeatExitWidth, class UTexture2D* BeatWidgetIcon, bool UseDebugMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function MammothPassengerHUD.MammothPassengerHUD_C.Sync Minigame Widget");

	UMammothPassengerHUD_C_Sync_Minigame_Widget_Params params;
	params.NextTimeOut = NextTimeOut;
	params.BeatWindow = BeatWindow;
	params.BeatTimeOut = BeatTimeOut;
	params.BeatExitWidth = BeatExitWidth;
	params.BeatWidgetIcon = BeatWidgetIcon;
	params.UseDebugMode = UseDebugMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MammothPassengerHUD.MammothPassengerHUD_C.Initialize HUD Widget
// ()
// Parameters:
// class ABuff_MammothDrummer_C*  MammothDrummerBuff             (Parm, ZeroConstructor, IsPlainOldData)

void UMammothPassengerHUD_C::Initialize_HUD_Widget(class ABuff_MammothDrummer_C* MammothDrummerBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function MammothPassengerHUD.MammothPassengerHUD_C.Initialize HUD Widget");

	UMammothPassengerHUD_C_Initialize_HUD_Widget_Params params;
	params.MammothDrummerBuff = MammothDrummerBuff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MammothPassengerHUD.MammothPassengerHUD_C.Reset HUD Widget
// ()

void UMammothPassengerHUD_C::Reset_HUD_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MammothPassengerHUD.MammothPassengerHUD_C.Reset HUD Widget");

	UMammothPassengerHUD_C_Reset_HUD_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MammothPassengerHUD.MammothPassengerHUD_C.StartClosingWidget
// ()
// Parameters:
// float                          NewLifespan                    (Parm, ZeroConstructor, IsPlainOldData)

void UMammothPassengerHUD_C::StartClosingWidget(float NewLifespan)
{
	static auto fn = UObject::FindObject<UFunction>("Function MammothPassengerHUD.MammothPassengerHUD_C.StartClosingWidget");

	UMammothPassengerHUD_C_StartClosingWidget_Params params;
	params.NewLifespan = NewLifespan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MammothPassengerHUD.MammothPassengerHUD_C.DestroySkiffHudWidget
// ()

void UMammothPassengerHUD_C::DestroySkiffHudWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MammothPassengerHUD.MammothPassengerHUD_C.DestroySkiffHudWidget");

	UMammothPassengerHUD_C_DestroySkiffHudWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MammothPassengerHUD.MammothPassengerHUD_C.ExecuteUbergraph_MammothPassengerHUD
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMammothPassengerHUD_C::ExecuteUbergraph_MammothPassengerHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MammothPassengerHUD.MammothPassengerHUD_C.ExecuteUbergraph_MammothPassengerHUD");

	UMammothPassengerHUD_C_ExecuteUbergraph_MammothPassengerHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
