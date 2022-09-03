// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_IsTameRiding_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_IsTameRiding.Buff_IsTameRiding_C.GetTimeBasedAlpha
// ()
// Parameters:
// float                          Alpha                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_IsTameRiding_C::GetTimeBasedAlpha(float* Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.GetTimeBasedAlpha");

	ABuff_IsTameRiding_C_GetTimeBasedAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Alpha != nullptr)
		*Alpha = params.Alpha;
}


// Function Buff_IsTameRiding.Buff_IsTameRiding_C.GetBuffDescription
// (NetReliable, Native, Event, Static, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FStatusValueModifierDescription ReturnValue                    (Parm, OutParm, ReturnParm)

struct FStatusValueModifierDescription ABuff_IsTameRiding_C::STATIC_GetBuffDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.GetBuffDescription");

	ABuff_IsTameRiding_C_GetBuffDescription_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_IsTameRiding.Buff_IsTameRiding_C.DrawActiveStateText
// ()
// Parameters:
// int                            ActiveState                    (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterHUD*             HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          XPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          YPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_IsTameRiding_C::DrawActiveStateText(int ActiveState, class AShooterHUD* HUD, float XPos, float YPos, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.DrawActiveStateText");

	ABuff_IsTameRiding_C_DrawActiveStateText_Params params;
	params.ActiveState = ActiveState;
	params.HUD = HUD;
	params.XPos = XPos;
	params.YPos = YPos;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_IsTameRiding.Buff_IsTameRiding_C.GetActiveTameState
// ()
// Parameters:
// class APrimalDinoCharacter*    MyRidingDino                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            IsInState                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_IsTameRiding_C::GetActiveTameState(class APrimalDinoCharacter* MyRidingDino, int* IsInState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.GetActiveTameState");

	ABuff_IsTameRiding_C_GetActiveTameState_Params params;
	params.MyRidingDino = MyRidingDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInState != nullptr)
		*IsInState = params.IsInState;
}


// Function Buff_IsTameRiding.Buff_IsTameRiding_C.BPDrawBuffStatusHUD
// (Net, Native, Event, NetMulticast, Public, Private, Protected, Delegate, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         YPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleMult                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_IsTameRiding_C::BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.BPDrawBuffStatusHUD");

	ABuff_IsTameRiding_C_BPDrawBuffStatusHUD_Params params;
	params.HUD = HUD;
	params.XPos = XPos;
	params.YPos = YPos;
	params.ScaleMult = ScaleMult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_IsTameRiding.Buff_IsTameRiding_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_IsTameRiding_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.BuffTickServer");

	ABuff_IsTameRiding_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_IsTameRiding.Buff_IsTameRiding_C.BPCheckPreventInput
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_IsTameRiding_C::BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.BPCheckPreventInput");

	ABuff_IsTameRiding_C_BPCheckPreventInput_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_IsTameRiding.Buff_IsTameRiding_C.UserConstructionScript
// ()

void ABuff_IsTameRiding_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.UserConstructionScript");

	ABuff_IsTameRiding_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpActEvt_Jump_K2Node_InputActionEvent_150
// ()

void ABuff_IsTameRiding_C::InpActEvt_Jump_K2Node_InputActionEvent_150()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpActEvt_Jump_K2Node_InputActionEvent_150");

	ABuff_IsTameRiding_C_InpActEvt_Jump_K2Node_InputActionEvent_150_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpActEvt_Use_K2Node_InputActionEvent_149
// ()

void ABuff_IsTameRiding_C::InpActEvt_Use_K2Node_InputActionEvent_149()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpActEvt_Use_K2Node_InputActionEvent_149");

	ABuff_IsTameRiding_C_InpActEvt_Use_K2Node_InputActionEvent_149_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_56
// ()

void ABuff_IsTameRiding_C::InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_56()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_56");

	ABuff_IsTameRiding_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_56_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_IsTameRiding.Buff_IsTameRiding_C.ReceiveBeginPlay
// ()

void ABuff_IsTameRiding_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.ReceiveBeginPlay");

	ABuff_IsTameRiding_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_125
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_IsTameRiding_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_125(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_125");

	ABuff_IsTameRiding_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_125_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_IsTameRiding.Buff_IsTameRiding_C.ServerTameEvent
// ()

void ABuff_IsTameRiding_C::ServerTameEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.ServerTameEvent");

	ABuff_IsTameRiding_C_ServerTameEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_58
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_IsTameRiding_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_58(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_58");

	ABuff_IsTameRiding_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_58_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_77
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_IsTameRiding_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_77(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_77");

	ABuff_IsTameRiding_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_77_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_IsTameRiding.Buff_IsTameRiding_C.ExecuteUbergraph_Buff_IsTameRiding
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_IsTameRiding_C::ExecuteUbergraph_Buff_IsTameRiding(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.ExecuteUbergraph_Buff_IsTameRiding");

	ABuff_IsTameRiding_C_ExecuteUbergraph_Buff_IsTameRiding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
