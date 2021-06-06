// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekWyvernTameRiding_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.Get Extra Taming Effectiveness Modifier
// ()
// Parameters:
// float                          ExtraEffectiveness             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekWyvernTameRiding_C::Get_Extra_Taming_Effectiveness_Modifier(float* ExtraEffectiveness)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.Get Extra Taming Effectiveness Modifier");

	ABuff_TekWyvernTameRiding_C_Get_Extra_Taming_Effectiveness_Modifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraEffectiveness != nullptr)
		*ExtraEffectiveness = params.ExtraEffectiveness;
}


// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.GetTimeBasedAlpha
// ()
// Parameters:
// float                          Alpha                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekWyvernTameRiding_C::GetTimeBasedAlpha(float* Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.GetTimeBasedAlpha");

	ABuff_TekWyvernTameRiding_C_GetTimeBasedAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Alpha != nullptr)
		*Alpha = params.Alpha;
}


// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.GetBuffDescription
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FStatusValueModifierDescription ReturnValue                    (Parm, OutParm, ReturnParm)

struct FStatusValueModifierDescription ABuff_TekWyvernTameRiding_C::STATIC_GetBuffDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.GetBuffDescription");

	ABuff_TekWyvernTameRiding_C_GetBuffDescription_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.DrawActiveStateText
// ()
// Parameters:
// int                            ActiveState                    (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterHUD*             HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          XPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          YPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekWyvernTameRiding_C::DrawActiveStateText(int ActiveState, class AShooterHUD* HUD, float XPos, float YPos, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.DrawActiveStateText");

	ABuff_TekWyvernTameRiding_C_DrawActiveStateText_Params params;
	params.ActiveState = ActiveState;
	params.HUD = HUD;
	params.XPos = XPos;
	params.YPos = YPos;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.GetActiveTameState
// ()
// Parameters:
// class APrimalDinoCharacter*    MyRidingDino                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            IsInState                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekWyvernTameRiding_C::GetActiveTameState(class APrimalDinoCharacter* MyRidingDino, int* IsInState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.GetActiveTameState");

	ABuff_TekWyvernTameRiding_C_GetActiveTameState_Params params;
	params.MyRidingDino = MyRidingDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInState != nullptr)
		*IsInState = params.IsInState;
}


// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.BPDrawBuffStatusHUD
// (NetRequest, Native, Static, Public, Protected, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         YPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleMult                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekWyvernTameRiding_C::STATIC_BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.BPDrawBuffStatusHUD");

	ABuff_TekWyvernTameRiding_C_BPDrawBuffStatusHUD_Params params;
	params.HUD = HUD;
	params.XPos = XPos;
	params.YPos = YPos;
	params.ScaleMult = ScaleMult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekWyvernTameRiding_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.BuffTickServer");

	ABuff_TekWyvernTameRiding_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.BPCheckPreventInput
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekWyvernTameRiding_C::BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.BPCheckPreventInput");

	ABuff_TekWyvernTameRiding_C_BPCheckPreventInput_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.UserConstructionScript
// ()

void ABuff_TekWyvernTameRiding_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.UserConstructionScript");

	ABuff_TekWyvernTameRiding_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpActEvt_Jump_K2Node_InputActionEvent_390
// ()

void ABuff_TekWyvernTameRiding_C::InpActEvt_Jump_K2Node_InputActionEvent_390()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpActEvt_Jump_K2Node_InputActionEvent_390");

	ABuff_TekWyvernTameRiding_C_InpActEvt_Jump_K2Node_InputActionEvent_390_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpActEvt_Use_K2Node_InputActionEvent_389
// ()

void ABuff_TekWyvernTameRiding_C::InpActEvt_Use_K2Node_InputActionEvent_389()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpActEvt_Use_K2Node_InputActionEvent_389");

	ABuff_TekWyvernTameRiding_C_InpActEvt_Use_K2Node_InputActionEvent_389_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_86
// ()

void ABuff_TekWyvernTameRiding_C::InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_86()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_86");

	ABuff_TekWyvernTameRiding_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_86_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.ReceiveBeginPlay
// ()

void ABuff_TekWyvernTameRiding_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.ReceiveBeginPlay");

	ABuff_TekWyvernTameRiding_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_125
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekWyvernTameRiding_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_125(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_125");

	ABuff_TekWyvernTameRiding_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_125_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.ServerTameEvent
// ()

void ABuff_TekWyvernTameRiding_C::ServerTameEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.ServerTameEvent");

	ABuff_TekWyvernTameRiding_C_ServerTameEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_58
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekWyvernTameRiding_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_58(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_58");

	ABuff_TekWyvernTameRiding_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_58_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_77
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekWyvernTameRiding_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_77(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_77");

	ABuff_TekWyvernTameRiding_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_77_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.ExecuteUbergraph_Buff_TekWyvernTameRiding
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekWyvernTameRiding_C::ExecuteUbergraph_Buff_TekWyvernTameRiding(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.ExecuteUbergraph_Buff_TekWyvernTameRiding");

	ABuff_TekWyvernTameRiding_C_ExecuteUbergraph_Buff_TekWyvernTameRiding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
