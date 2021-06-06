// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_StriderHackingParent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Recieved Input
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType> input_type                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           from_player_input              (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderHackingParent_C::Recieved_Input(TEnumAsByte<EPrimalCharacterInputType> input_type, bool from_player_input)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Recieved Input");

	ABuff_StriderHackingParent_C_Recieved_Input_Params params;
	params.input_type = input_type;
	params.from_player_input = from_player_input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.All Beats Succeeded
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_StriderHackingParent_C::All_Beats_Succeeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.All Beats Succeeded");

	ABuff_StriderHackingParent_C_All_Beats_Succeeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ReceiveBeginPlay
// ()

void ABuff_StriderHackingParent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ReceiveBeginPlay");

	ABuff_StriderHackingParent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.AllowPostProcessEffect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_StriderHackingParent_C::AllowPostProcessEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.AllowPostProcessEffect");

	ABuff_StriderHackingParent_C_AllowPostProcessEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Sync HUD Widget
// ()

void ABuff_StriderHackingParent_C::Sync_HUD_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Sync HUD Widget");

	ABuff_StriderHackingParent_C_Sync_HUD_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Notify Toggle HUD Widget
// ()
// Parameters:
// bool                           HUD_Hidden                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderHackingParent_C::Notify_Toggle_HUD_Widget(bool HUD_Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Notify Toggle HUD Widget");

	ABuff_StriderHackingParent_C_Notify_Toggle_HUD_Widget_Params params;
	params.HUD_Hidden = HUD_Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Destroy HUD Widget
// ()
// Parameters:
// bool                           DestroyNow                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderHackingParent_C::Destroy_HUD_Widget(bool DestroyNow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Destroy HUD Widget");

	ABuff_StriderHackingParent_C_Destroy_HUD_Widget_Params params;
	params.DestroyNow = DestroyNow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Setup HUD Widget
// ()

void ABuff_StriderHackingParent_C::Setup_HUD_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Setup HUD Widget");

	ABuff_StriderHackingParent_C_Setup_HUD_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.UpdateDrumEffectVisibility
// ()

void ABuff_StriderHackingParent_C::UpdateDrumEffectVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.UpdateDrumEffectVisibility");

	ABuff_StriderHackingParent_C_UpdateDrumEffectVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.IsBeatTooLate
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_StriderHackingParent_C::IsBeatTooLate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.IsBeatTooLate");

	ABuff_StriderHackingParent_C_IsBeatTooLate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.IsBeatTooSoon
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_StriderHackingParent_C::IsBeatTooSoon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.IsBeatTooSoon");

	ABuff_StriderHackingParent_C_IsBeatTooSoon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_StriderHackingParent_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPGetHUDElements");

	ABuff_StriderHackingParent_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ActivateBuff
// ()

void ABuff_StriderHackingParent_C::ActivateBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ActivateBuff");

	ABuff_StriderHackingParent_C_ActivateBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.UpdateBuffTimer
// ()
// Parameters:
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           from_player_trigger            (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderHackingParent_C::UpdateBuffTimer(bool Success, bool from_player_trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.UpdateBuffTimer");

	ABuff_StriderHackingParent_C_UpdateBuffTimer_Params params;
	params.Success = Success;
	params.from_player_trigger = from_player_trigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPOnInputEvent
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderHackingParent_C::BPOnInputEvent(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPOnInputEvent");

	ABuff_StriderHackingParent_C_BPOnInputEvent_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.GetWeaponMontage
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType> index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* ABuff_StriderHackingParent_C::GetWeaponMontage(TEnumAsByte<EPrimalCharacterInputType> index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.GetWeaponMontage");

	ABuff_StriderHackingParent_C_GetWeaponMontage_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.PlayWeaponMontage
// ()
// Parameters:
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isnt_from_player_input         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Started                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderHackingParent_C::PlayWeaponMontage(bool Success, bool isnt_from_player_input, bool* Started)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.PlayWeaponMontage");

	ABuff_StriderHackingParent_C_PlayWeaponMontage_Params params;
	params.Success = Success;
	params.isnt_from_player_input = isnt_from_player_input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Started != nullptr)
		*Started = params.Started;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPCheckPreventInput
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_StriderHackingParent_C::BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPCheckPreventInput");

	ABuff_StriderHackingParent_C_BPCheckPreventInput_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderHackingParent_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPDeactivated");

	ABuff_StriderHackingParent_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderHackingParent_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPSetupForInstigator");

	ABuff_StriderHackingParent_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPForceCameraStyle
// ()
// Parameters:
// class APrimalCharacter**       ForViewTarget                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECameraStyle>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECameraStyle> ABuff_StriderHackingParent_C::BPForceCameraStyle(class APrimalCharacter** ForViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPForceCameraStyle");

	ABuff_StriderHackingParent_C_BPForceCameraStyle_Params params;
	params.ForViewTarget = ForViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.UserConstructionScript
// ()

void ABuff_StriderHackingParent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.UserConstructionScript");

	ABuff_StriderHackingParent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ServerPlayWeaponMontage
// ()
// Parameters:
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isnt_from_player_input         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderHackingParent_C::ServerPlayWeaponMontage(bool Success, bool isnt_from_player_input)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ServerPlayWeaponMontage");

	ABuff_StriderHackingParent_C_ServerPlayWeaponMontage_Params params;
	params.Success = Success;
	params.isnt_from_player_input = isnt_from_player_input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ClientPlayDrumLoop
// ()
// Parameters:
// bool                           Start                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderHackingParent_C::ClientPlayDrumLoop(bool Start)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ClientPlayDrumLoop");

	ABuff_StriderHackingParent_C_ClientPlayDrumLoop_Params params;
	params.Start = Start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ClientUpdateDrumRadius
// ()
// Parameters:
// bool                           NewVis                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderHackingParent_C::ClientUpdateDrumRadius(bool NewVis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ClientUpdateDrumRadius");

	ABuff_StriderHackingParent_C_ClientUpdateDrumRadius_Params params;
	params.NewVis = NewVis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderHackingParent_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BuffTickClient");

	ABuff_StriderHackingParent_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.drum loop finished
// ()

void ABuff_StriderHackingParent_C::drum_loop_finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.drum loop finished");

	ABuff_StriderHackingParent_C_drum_loop_finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ExecuteUbergraph_Buff_StriderHackingParent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StriderHackingParent_C::ExecuteUbergraph_Buff_StriderHackingParent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ExecuteUbergraph_Buff_StriderHackingParent");

	ABuff_StriderHackingParent_C_ExecuteUbergraph_Buff_StriderHackingParent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
