// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StriderHacking_HUD_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StriderHacking_HUD.StriderHacking_HUD_C.Try Trigger Win
// ()

void UStriderHacking_HUD_C::Try_Trigger_Win()
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHacking_HUD.StriderHacking_HUD_C.Try Trigger Win");

	UStriderHacking_HUD_C_Try_Trigger_Win_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHacking_HUD.StriderHacking_HUD_C.Receive Input
// ()
// Parameters:
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData)

void UStriderHacking_HUD_C::Receive_Input(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHacking_HUD.StriderHacking_HUD_C.Receive Input");

	UStriderHacking_HUD_C_Receive_Input_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHacking_HUD.StriderHacking_HUD_C.Sync Minigame Widget
// ()
// Parameters:
// double                         NextTimeOut                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          BeatWindow                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          BeatTimeOut                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            BeatsPerLoop                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsShuttingDown                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            PostProcessInputColorParam     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStriderHacking_HUD_C::Sync_Minigame_Widget(double NextTimeOut, float BeatWindow, float BeatTimeOut, int BeatsPerLoop, bool IsShuttingDown, struct FLinearColor* PostProcessInputColorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHacking_HUD.StriderHacking_HUD_C.Sync Minigame Widget");

	UStriderHacking_HUD_C_Sync_Minigame_Widget_Params params;
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


// Function StriderHacking_HUD.StriderHacking_HUD_C.Initialize HUD Widget
// ()

void UStriderHacking_HUD_C::Initialize_HUD_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHacking_HUD.StriderHacking_HUD_C.Initialize HUD Widget");

	UStriderHacking_HUD_C_Initialize_HUD_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHacking_HUD.StriderHacking_HUD_C.Reset HUD Widget
// ()

void UStriderHacking_HUD_C::Reset_HUD_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHacking_HUD.StriderHacking_HUD_C.Reset HUD Widget");

	UStriderHacking_HUD_C_Reset_HUD_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHacking_HUD.StriderHacking_HUD_C.StartClosingWidget
// ()
// Parameters:
// float                          NewLifeSpan                    (Parm, ZeroConstructor, IsPlainOldData)

void UStriderHacking_HUD_C::StartClosingWidget(float NewLifeSpan)
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHacking_HUD.StriderHacking_HUD_C.StartClosingWidget");

	UStriderHacking_HUD_C_StartClosingWidget_Params params;
	params.NewLifeSpan = NewLifeSpan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHacking_HUD.StriderHacking_HUD_C.DestroyWidget
// ()

void UStriderHacking_HUD_C::DestroyWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHacking_HUD.StriderHacking_HUD_C.DestroyWidget");

	UStriderHacking_HUD_C_DestroyWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StriderHacking_HUD.StriderHacking_HUD_C.ExecuteUbergraph_StriderHacking_HUD
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStriderHacking_HUD_C::ExecuteUbergraph_StriderHacking_HUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StriderHacking_HUD.StriderHacking_HUD_C.ExecuteUbergraph_StriderHacking_HUD");

	UStriderHacking_HUD_C_ExecuteUbergraph_StriderHacking_HUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
