// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DrumsMinigameUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DrumsMinigameUI.DrumsMinigameUI_C.Set Minigame Visual State
// ()
// Parameters:
// bool                           IsBeatMissedState              (Parm, ZeroConstructor, IsPlainOldData)

void UDrumsMinigameUI_C::Set_Minigame_Visual_State(bool IsBeatMissedState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Set Minigame Visual State");

	UDrumsMinigameUI_C_Set_Minigame_Visual_State_Params params;
	params.IsBeatMissedState = IsBeatMissedState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrumsMinigameUI.DrumsMinigameUI_C.Next Beat Time
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDrumsMinigameUI_C::Next_Beat_Time()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Next Beat Time");

	UDrumsMinigameUI_C_Next_Beat_Time_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrumsMinigameUI.DrumsMinigameUI_C.Is Beat Too Late
// ()
// Parameters:
// bool                           _                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDrumsMinigameUI_C::Is_Beat_Too_Late(bool* _)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Is Beat Too Late");

	UDrumsMinigameUI_C_Is_Beat_Too_Late_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_ != nullptr)
		*_ = params._;
}


// Function DrumsMinigameUI.DrumsMinigameUI_C.Is Beat Too Soon
// ()
// Parameters:
// bool                           _                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDrumsMinigameUI_C::Is_Beat_Too_Soon(bool* _)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Is Beat Too Soon");

	UDrumsMinigameUI_C_Is_Beat_Too_Soon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_ != nullptr)
		*_ = params._;
}


// Function DrumsMinigameUI.DrumsMinigameUI_C.Map Beat Travel Based On Timing State
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDrumsMinigameUI_C::Map_Beat_Travel_Based_On_Timing_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Map Beat Travel Based On Timing State");

	UDrumsMinigameUI_C_Map_Beat_Travel_Based_On_Timing_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrumsMinigameUI.DrumsMinigameUI_C.Too Soon Percent
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDrumsMinigameUI_C::Too_Soon_Percent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Too Soon Percent");

	UDrumsMinigameUI_C_Too_Soon_Percent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrumsMinigameUI.DrumsMinigameUI_C.TooLatePercent
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDrumsMinigameUI_C::TooLatePercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.TooLatePercent");

	UDrumsMinigameUI_C_TooLatePercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrumsMinigameUI.DrumsMinigameUI_C.Map Percent to Position
// ()
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDrumsMinigameUI_C::Map_Percent_to_Position(float Percent, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Map Percent to Position");

	UDrumsMinigameUI_C_Map_Percent_to_Position_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function DrumsMinigameUI.DrumsMinigameUI_C.Set ProgressBar Color
// (Native, Event, NetResponse, Static, NetMulticast, Protected, NetServer, NetClient, BlueprintCallable, BlueprintPure)
// Parameters:
// class UProgressBar*            ProgressBar                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            TintColor                      (Parm, ZeroConstructor, IsPlainOldData)

void UDrumsMinigameUI_C::STATIC_Set_ProgressBar_Color(class UProgressBar* ProgressBar, const struct FLinearColor& TintColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Set ProgressBar Color");

	UDrumsMinigameUI_C_Set_ProgressBar_Color_Params params;
	params.ProgressBar = ProgressBar;
	params.TintColor = TintColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrumsMinigameUI.DrumsMinigameUI_C.Get Beat Travel Percent
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDrumsMinigameUI_C::Get_Beat_Travel_Percent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Get Beat Travel Percent");

	UDrumsMinigameUI_C_Get_Beat_Travel_Percent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrumsMinigameUI.DrumsMinigameUI_C.Reset Beat
// ()
// Parameters:
// bool                           TryToResetBeatPosition         (Parm, ZeroConstructor, IsPlainOldData)

void UDrumsMinigameUI_C::Reset_Beat(bool TryToResetBeatPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Reset Beat");

	UDrumsMinigameUI_C_Reset_Beat_Params params;
	params.TryToResetBeatPosition = TryToResetBeatPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrumsMinigameUI.DrumsMinigameUI_C.Stop Minigame
// ()

void UDrumsMinigameUI_C::Stop_Minigame()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Stop Minigame");

	UDrumsMinigameUI_C_Stop_Minigame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrumsMinigameUI.DrumsMinigameUI_C.On Beat Too Late
// ()

void UDrumsMinigameUI_C::On_Beat_Too_Late()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.On Beat Too Late");

	UDrumsMinigameUI_C_On_Beat_Too_Late_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrumsMinigameUI.DrumsMinigameUI_C.Release Input
// ()

void UDrumsMinigameUI_C::Release_Input()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Release Input");

	UDrumsMinigameUI_C_Release_Input_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrumsMinigameUI.DrumsMinigameUI_C.Receive Input
// ()

void UDrumsMinigameUI_C::Receive_Input()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Receive Input");

	UDrumsMinigameUI_C_Receive_Input_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrumsMinigameUI.DrumsMinigameUI_C.SyncWidget
// ()
// Parameters:
// double                         NextTimeOut                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          BeatWindow                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          BeatTimeOut                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          BeatExitWidth                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              BeatWidgetIcon                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseDebugMode                   (Parm, ZeroConstructor, IsPlainOldData)

void UDrumsMinigameUI_C::SyncWidget(double NextTimeOut, float BeatWindow, float BeatTimeOut, float BeatExitWidth, class UTexture2D* BeatWidgetIcon, bool UseDebugMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.SyncWidget");

	UDrumsMinigameUI_C_SyncWidget_Params params;
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


// Function DrumsMinigameUI.DrumsMinigameUI_C.Tick
// ()
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UDrumsMinigameUI_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Tick");

	UDrumsMinigameUI_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrumsMinigameUI.DrumsMinigameUI_C.Construct
// ()

void UDrumsMinigameUI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.Construct");

	UDrumsMinigameUI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrumsMinigameUI.DrumsMinigameUI_C.ExecuteUbergraph_DrumsMinigameUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDrumsMinigameUI_C::ExecuteUbergraph_DrumsMinigameUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrumsMinigameUI.DrumsMinigameUI_C.ExecuteUbergraph_DrumsMinigameUI");

	UDrumsMinigameUI_C_ExecuteUbergraph_DrumsMinigameUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
