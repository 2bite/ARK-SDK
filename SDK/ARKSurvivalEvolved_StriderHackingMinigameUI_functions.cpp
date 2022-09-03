// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StriderHackingMinigameUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.grab beat loc from outside the ui
// ()
// Parameters:
// float                          NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStriderHackingMinigameUI_C::grab_beat_loc_from_outside_the_ui(float* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.grab beat loc from outside the ui");

	UStriderHackingMinigameUI_C_grab_beat_loc_from_outside_the_ui_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.On Win
// (NetReliable, Native, Static, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)

void UStriderHackingMinigameUI_C::STATIC_On_Win()
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.On Win");

	UStriderHackingMinigameUI_C_On_Win_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Try Shut Down
// ()
// Parameters:
// bool                           ForceShutDown                  (Parm, ZeroConstructor, IsPlainOldData)

void UStriderHackingMinigameUI_C::Try_Shut_Down(bool ForceShutDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Try Shut Down");

	UStriderHackingMinigameUI_C_Try_Shut_Down_Params params;
	params.ForceShutDown = ForceShutDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Reset Widget Visual State
// ()

void UStriderHackingMinigameUI_C::Reset_Widget_Visual_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Reset Widget Visual State");

	UStriderHackingMinigameUI_C_Reset_Widget_Visual_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Set CanMinigamePlay
// ()

void UStriderHackingMinigameUI_C::Set_CanMinigamePlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Set CanMinigamePlay");

	UStriderHackingMinigameUI_C_Set_CanMinigamePlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.On Beat Hit Successfully
// ()

void UStriderHackingMinigameUI_C::On_Beat_Hit_Successfully()
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.On Beat Hit Successfully");

	UStriderHackingMinigameUI_C_On_Beat_Hit_Successfully_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Manage Beat Widgets
// (NetReliable, NetRequest, Native, Event, Static, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)

void UStriderHackingMinigameUI_C::STATIC_Manage_Beat_Widgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Manage Beat Widgets");

	UStriderHackingMinigameUI_C_Manage_Beat_Widgets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Reset Post Process Params
// ()

void UStriderHackingMinigameUI_C::Reset_Post_Process_Params()
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Reset Post Process Params");

	UStriderHackingMinigameUI_C_Reset_Post_Process_Params_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Set Minigame Visual State
// (NetRequest, Exec, Native, NetResponse, Static, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBeatMissedState              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SetPostProcessColor            (Parm, ZeroConstructor, IsPlainOldData)

void UStriderHackingMinigameUI_C::STATIC_Set_Minigame_Visual_State(bool IsBeatMissedState, bool SetPostProcessColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Set Minigame Visual State");

	UStriderHackingMinigameUI_C_Set_Minigame_Visual_State_Params params;
	params.IsBeatMissedState = IsBeatMissedState;
	params.SetPostProcessColor = SetPostProcessColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Beat to Goal Time
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UStriderHackingMinigameUI_C::Beat_to_Goal_Time()
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Beat to Goal Time");

	UStriderHackingMinigameUI_C_Beat_to_Goal_Time_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Is Beat Too Late
// ()
// Parameters:
// bool                           _                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStriderHackingMinigameUI_C::Is_Beat_Too_Late(bool* _)
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Is Beat Too Late");

	UStriderHackingMinigameUI_C_Is_Beat_Too_Late_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_ != nullptr)
		*_ = params._;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Is Beat Too Soon
// ()
// Parameters:
// bool                           _                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStriderHackingMinigameUI_C::Is_Beat_Too_Soon(bool* _)
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Is Beat Too Soon");

	UStriderHackingMinigameUI_C_Is_Beat_Too_Soon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_ != nullptr)
		*_ = params._;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Map Beat Travel Based On Timing State
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UStriderHackingMinigameUI_C::Map_Beat_Travel_Based_On_Timing_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Map Beat Travel Based On Timing State");

	UStriderHackingMinigameUI_C_Map_Beat_Travel_Based_On_Timing_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Too Soon Percent
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UStriderHackingMinigameUI_C::Too_Soon_Percent()
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Too Soon Percent");

	UStriderHackingMinigameUI_C_Too_Soon_Percent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.TooLatePercent
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UStriderHackingMinigameUI_C::TooLatePercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.TooLatePercent");

	UStriderHackingMinigameUI_C_TooLatePercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Distance Per Second
// ()
// Parameters:
// float                          _                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStriderHackingMinigameUI_C::Distance_Per_Second(float* _)
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Distance Per Second");

	UStriderHackingMinigameUI_C_Distance_Per_Second_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_ != nullptr)
		*_ = params._;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Map Percent to Position
// ()
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStriderHackingMinigameUI_C::Map_Percent_to_Position(float Percent, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Map Percent to Position");

	UStriderHackingMinigameUI_C_Map_Percent_to_Position_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Set ProgressBar Color
// (NetReliable, Exec, Event, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar*            ProgressBar                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            TintColor                      (Parm, ZeroConstructor, IsPlainOldData)

void UStriderHackingMinigameUI_C::Set_ProgressBar_Color(class UProgressBar* ProgressBar, const struct FLinearColor& TintColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Set ProgressBar Color");

	UStriderHackingMinigameUI_C_Set_ProgressBar_Color_Params params;
	params.ProgressBar = ProgressBar;
	params.TintColor = TintColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Get Beat Travel Percent
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UStriderHackingMinigameUI_C::Get_Beat_Travel_Percent()
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Get Beat Travel Percent");

	UStriderHackingMinigameUI_C_Get_Beat_Travel_Percent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Reset Beat
// ()

void UStriderHackingMinigameUI_C::Reset_Beat()
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Reset Beat");

	UStriderHackingMinigameUI_C_Reset_Beat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Stop Minigame
// ()

void UStriderHackingMinigameUI_C::Stop_Minigame()
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Stop Minigame");

	UStriderHackingMinigameUI_C_Stop_Minigame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.On Beat Too Late
// ()

void UStriderHackingMinigameUI_C::On_Beat_Too_Late()
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.On Beat Too Late");

	UStriderHackingMinigameUI_C_On_Beat_Too_Late_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Release Input
// ()

void UStriderHackingMinigameUI_C::Release_Input()
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Release Input");

	UStriderHackingMinigameUI_C_Release_Input_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Receive Input
// (NetReliable, Exec, Native, Event, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData)

void UStriderHackingMinigameUI_C::Receive_Input(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Receive Input");

	UStriderHackingMinigameUI_C_Receive_Input_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.SyncWidget
// ()
// Parameters:
// double                         NextTimeOut                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          BeatWindow                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          BeatTimeOut                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            BeatsPerLoop                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsShuttingDown                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            PostProcessInputColorParam     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStriderHackingMinigameUI_C::SyncWidget(double NextTimeOut, float BeatWindow, float BeatTimeOut, int BeatsPerLoop, bool IsShuttingDown, struct FLinearColor* PostProcessInputColorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.SyncWidget");

	UStriderHackingMinigameUI_C_SyncWidget_Params params;
	params.NextTimeOut = NextTimeOut;
	params.BeatWindow = BeatWindow;
	params.BeatTimeOut = BeatTimeOut;
	params.BeatsPerLoop = BeatsPerLoop;
	params.IsShuttingDown = IsShuttingDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PostProcessInputColorParam != nullptr)
		*PostProcessInputColorParam = params.PostProcessInputColorParam;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Tick
// ()
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UStriderHackingMinigameUI_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Tick");

	UStriderHackingMinigameUI_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Construct
// ()

void UStriderHackingMinigameUI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Construct");

	UStriderHackingMinigameUI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.ExecuteUbergraph_StriderHackingMinigameUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStriderHackingMinigameUI_C::ExecuteUbergraph_StriderHackingMinigameUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.ExecuteUbergraph_StriderHackingMinigameUI");

	UStriderHackingMinigameUI_C_ExecuteUbergraph_StriderHackingMinigameUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
