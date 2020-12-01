// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionTrigger_RacePowerUp_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTrigger_RacePowerUp_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.ReceiveEndPlay");

	AMissionTrigger_RacePowerUp_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.ReceiveBeginPlay
// ()

void AMissionTrigger_RacePowerUp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.ReceiveBeginPlay");

	AMissionTrigger_RacePowerUp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.ResetPowerUp
// ()

void AMissionTrigger_RacePowerUp_C::ResetPowerUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.ResetPowerUp");

	AMissionTrigger_RacePowerUp_C_ResetPowerUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.IsPowerUpActive_PURE
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionTrigger_RacePowerUp_C::IsPowerUpActive_PURE(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.IsPowerUpActive_PURE");

	AMissionTrigger_RacePowerUp_C_IsPowerUpActive_PURE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.IsPowerUpActive
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionTrigger_RacePowerUp_C::IsPowerUpActive(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.IsPowerUpActive");

	AMissionTrigger_RacePowerUp_C_IsPowerUpActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.DeactivatePowerUp
// ()

void AMissionTrigger_RacePowerUp_C::DeactivatePowerUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.DeactivatePowerUp");

	AMissionTrigger_RacePowerUp_C_DeactivatePowerUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.InitPowerUp
// ()

void AMissionTrigger_RacePowerUp_C::InitPowerUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.InitPowerUp");

	AMissionTrigger_RacePowerUp_C_InitPowerUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.SetPowerUpEnabled
// ()
// Parameters:
// bool                           NewEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTrigger_RacePowerUp_C::SetPowerUpEnabled(bool NewEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.SetPowerUpEnabled");

	AMissionTrigger_RacePowerUp_C_SetPowerUpEnabled_Params params;
	params.NewEnabled = NewEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.SetPowerUpFX_Active
// ()
// Parameters:
// bool                           newActive                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AlsoEnable                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTrigger_RacePowerUp_C::SetPowerUpFX_Active(bool newActive, bool AlsoEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.SetPowerUpFX_Active");

	AMissionTrigger_RacePowerUp_C_SetPowerUpFX_Active_Params params;
	params.newActive = newActive;
	params.AlsoEnable = AlsoEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.OnPowerUpTriggerHit
// ()
// Parameters:
// bool                           UsesPowerUp                    (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTrigger_RacePowerUp_C::OnPowerUpTriggerHit(bool UsesPowerUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.OnPowerUpTriggerHit");

	AMissionTrigger_RacePowerUp_C_OnPowerUpTriggerHit_Params params;
	params.UsesPowerUp = UsesPowerUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.UserConstructionScript
// ()

void AMissionTrigger_RacePowerUp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.UserConstructionScript");

	AMissionTrigger_RacePowerUp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PowerUp_Fade__FinishedFunc
// ()

void AMissionTrigger_RacePowerUp_C::Timeline_PowerUp_Fade__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PowerUp_Fade__FinishedFunc");

	AMissionTrigger_RacePowerUp_C_Timeline_PowerUp_Fade__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PowerUp_Fade__UpdateFunc
// ()

void AMissionTrigger_RacePowerUp_C::Timeline_PowerUp_Fade__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PowerUp_Fade__UpdateFunc");

	AMissionTrigger_RacePowerUp_C_Timeline_PowerUp_Fade__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PulseColor__FinishedFunc
// ()

void AMissionTrigger_RacePowerUp_C::Timeline_PulseColor__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PulseColor__FinishedFunc");

	AMissionTrigger_RacePowerUp_C_Timeline_PulseColor__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PulseColor__UpdateFunc
// ()

void AMissionTrigger_RacePowerUp_C::Timeline_PulseColor__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PulseColor__UpdateFunc");

	AMissionTrigger_RacePowerUp_C_Timeline_PulseColor__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PowerUpActivate__FinishedFunc
// ()

void AMissionTrigger_RacePowerUp_C::Timeline_PowerUpActivate__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PowerUpActivate__FinishedFunc");

	AMissionTrigger_RacePowerUp_C_Timeline_PowerUpActivate__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PowerUpActivate__UpdateFunc
// ()

void AMissionTrigger_RacePowerUp_C::Timeline_PowerUpActivate__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PowerUpActivate__UpdateFunc");

	AMissionTrigger_RacePowerUp_C_Timeline_PowerUpActivate__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.FadeOut
// ()

void AMissionTrigger_RacePowerUp_C::FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.FadeOut");

	AMissionTrigger_RacePowerUp_C_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.FadeIn
// ()

void AMissionTrigger_RacePowerUp_C::FadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.FadeIn");

	AMissionTrigger_RacePowerUp_C_FadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.PowerUpPulse
// ()

void AMissionTrigger_RacePowerUp_C::PowerUpPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.PowerUpPulse");

	AMissionTrigger_RacePowerUp_C_PowerUpPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.DisablePowerUp_NOW
// ()

void AMissionTrigger_RacePowerUp_C::DisablePowerUp_NOW()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.DisablePowerUp_NOW");

	AMissionTrigger_RacePowerUp_C_DisablePowerUp_NOW_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.EnablePowerUp
// ()

void AMissionTrigger_RacePowerUp_C::EnablePowerUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.EnablePowerUp");

	AMissionTrigger_RacePowerUp_C_EnablePowerUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.DisablePowerUp
// ()

void AMissionTrigger_RacePowerUp_C::DisablePowerUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.DisablePowerUp");

	AMissionTrigger_RacePowerUp_C_DisablePowerUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.EnablePowerUp_NOW
// ()

void AMissionTrigger_RacePowerUp_C::EnablePowerUp_NOW()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.EnablePowerUp_NOW");

	AMissionTrigger_RacePowerUp_C_EnablePowerUp_NOW_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.ExecuteUbergraph_MissionTrigger_RacePowerUp
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTrigger_RacePowerUp_C::ExecuteUbergraph_MissionTrigger_RacePowerUp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.ExecuteUbergraph_MissionTrigger_RacePowerUp");

	AMissionTrigger_RacePowerUp_C_ExecuteUbergraph_MissionTrigger_RacePowerUp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
