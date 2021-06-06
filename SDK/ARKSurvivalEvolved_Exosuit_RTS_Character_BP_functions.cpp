// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Exosuit_RTS_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_RTS_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BPNotifyClearRider");

	AExosuit_RTS_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BPOrderedMoveToLoc
// ()
// Parameters:
// struct FVector                 DestLoc                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AExosuit_RTS_Character_BP_C::BPOrderedMoveToLoc(struct FVector* DestLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BPOrderedMoveToLoc");

	AExosuit_RTS_Character_BP_C_BPOrderedMoveToLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DestLoc != nullptr)
		*DestLoc = params.DestLoc;
}


// Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BP_GetCustomModifier_RotationRate
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AExosuit_RTS_Character_BP_C::BP_GetCustomModifier_RotationRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BP_GetCustomModifier_RotationRate");

	AExosuit_RTS_Character_BP_C_BP_GetCustomModifier_RotationRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.OnRep_IsInRtsMode
// ()

void AExosuit_RTS_Character_BP_C::OnRep_IsInRtsMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.OnRep_IsInRtsMode");

	AExosuit_RTS_Character_BP_C_OnRep_IsInRtsMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AExosuit_RTS_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BPServerHandleNetExecCommand");

	AExosuit_RTS_Character_BP_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BPHandleUseButtonPress
// ()
// Parameters:
// class AShooterPlayerController** RiderController                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AExosuit_RTS_Character_BP_C::BPHandleUseButtonPress(class AShooterPlayerController** RiderController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BPHandleUseButtonPress");

	AExosuit_RTS_Character_BP_C_BPHandleUseButtonPress_Params params;
	params.RiderController = RiderController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.ServerStartRTS
// (Net, NetReliable, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, Const)

void AExosuit_RTS_Character_BP_C::ServerStartRTS()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.ServerStartRTS");

	AExosuit_RTS_Character_BP_C_ServerStartRTS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.UserConstructionScript
// ()

void AExosuit_RTS_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.UserConstructionScript");

	AExosuit_RTS_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_310
// ()

void AExosuit_RTS_Character_BP_C::InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_310()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_310");

	AExosuit_RTS_Character_BP_C_InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_310_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_309
// ()

void AExosuit_RTS_Character_BP_C::InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_309()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_309");

	AExosuit_RTS_Character_BP_C_InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_309_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_308
// ()

void AExosuit_RTS_Character_BP_C::InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_308()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_308");

	AExosuit_RTS_Character_BP_C_InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_308_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_307
// ()

void AExosuit_RTS_Character_BP_C::InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_307()
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_307");

	AExosuit_RTS_Character_BP_C_InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_307_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.ExecuteUbergraph_Exosuit_RTS_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AExosuit_RTS_Character_BP_C::ExecuteUbergraph_Exosuit_RTS_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.ExecuteUbergraph_Exosuit_RTS_Character_BP");

	AExosuit_RTS_Character_BP_C_ExecuteUbergraph_Exosuit_RTS_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
