// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_Pants_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.IsPlayerUsingJetpack
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::IsPlayerUsingJetpack(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.IsPlayerUsingJetpack");

	ABuff_TekArmor_Pants_C_IsPlayerUsingJetpack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPlayerIgnoreSpeedModifiers
// ()
// Parameters:
// bool                           newIgnore                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::SetPlayerIgnoreSpeedModifiers(bool newIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPlayerIgnoreSpeedModifiers");

	ABuff_TekArmor_Pants_C_SetPlayerIgnoreSpeedModifiers_Params params;
	params.newIgnore = newIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.PlayerHasFistsEquipped
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::PlayerHasFistsEquipped(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.PlayerHasFistsEquipped");

	ABuff_TekArmor_Pants_C_PlayerHasFistsEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.IsPlayerGrappled
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::IsPlayerGrappled(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.IsPlayerGrappled");

	ABuff_TekArmor_Pants_C_IsPlayerGrappled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BPCheckPreventInput
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekArmor_Pants_C::BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BPCheckPreventInput");

	ABuff_TekArmor_Pants_C_BPCheckPreventInput_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerMoveSpeedModifier
// ()
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::GetPlayerMoveSpeedModifier(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerMoveSpeedModifier");

	ABuff_TekArmor_Pants_C_GetPlayerMoveSpeedModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.OnRep_bCanRunOnWater
// ()

void ABuff_TekArmor_Pants_C::OnRep_bCanRunOnWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.OnRep_bCanRunOnWater");

	ABuff_TekArmor_Pants_C_OnRep_bCanRunOnWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetRunningOnWater
// ()
// Parameters:
// bool                           IsRunning                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::SetRunningOnWater(bool IsRunning)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetRunningOnWater");

	ABuff_TekArmor_Pants_C_SetRunningOnWater_Params params;
	params.IsRunning = IsRunning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.OnRep_CurrentTekRunState
// ()

void ABuff_TekArmor_Pants_C::OnRep_CurrentTekRunState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.OnRep_CurrentTekRunState");

	ABuff_TekArmor_Pants_C_OnRep_CurrentTekRunState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.AreGlovesEquippedAndActive
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABuff_TekArmor_Gloves_C* glovesRef                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::AreGlovesEquippedAndActive(bool* Result, class ABuff_TekArmor_Gloves_C** glovesRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.AreGlovesEquippedAndActive");

	ABuff_TekArmor_Pants_C_AreGlovesEquippedAndActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (glovesRef != nullptr)
		*glovesRef = params.glovesRef;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Player Max Tek Run Velocity
// ()
// Parameters:
// float                          MaxSpeed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::Get_Player_Max_Tek_Run_Velocity(float* MaxSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Player Max Tek Run Velocity");

	ABuff_TekArmor_Pants_C_Get_Player_Max_Tek_Run_Velocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxSpeed != nullptr)
		*MaxSpeed = params.MaxSpeed;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetBuffPostprocessIntensity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_TekArmor_Pants_C::GetBuffPostprocessIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetBuffPostprocessIntensity");

	ABuff_TekArmor_Pants_C_GetBuffPostprocessIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CanStartTekRun
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::CanStartTekRun(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CanStartTekRun");

	ABuff_TekArmor_Pants_C_CanStartTekRun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.NetSetRunningSpeedModifier
// ()
// Parameters:
// float                          newModifier                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::NetSetRunningSpeedModifier(float newModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.NetSetRunningSpeedModifier");

	ABuff_TekArmor_Pants_C_NetSetRunningSpeedModifier_Params params;
	params.newModifier = newModifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.RunDamageActor
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class AActor*                  HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DidRebound                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::STATIC_RunDamageActor(class AActor* HitActor, bool* DidRebound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.RunDamageActor");

	ABuff_TekArmor_Pants_C_RunDamageActor_Params params;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DidRebound != nullptr)
		*DidRebound = params.DidRebound;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.NetSetTekRunningState
// ()
// Parameters:
// TEnumAsByte<E_TekRunningState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::NetSetTekRunningState(TEnumAsByte<E_TekRunningState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.NetSetTekRunningState");

	ABuff_TekArmor_Pants_C_NetSetTekRunningState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetDustParticlesActive
// ()
// Parameters:
// bool                           newActive                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::SetDustParticlesActive(bool newActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetDustParticlesActive");

	ABuff_TekArmor_Pants_C_SetDustParticlesActive_Params params;
	params.newActive = newActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.UpdateLocalVarsByState
// ()
// Parameters:
// TEnumAsByte<E_TekRunningState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::UpdateLocalVarsByState(TEnumAsByte<E_TekRunningState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.UpdateLocalVarsByState");

	ABuff_TekArmor_Pants_C_UpdateLocalVarsByState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.LocalSetTekRunningState
// ()
// Parameters:
// TEnumAsByte<E_TekRunningState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::LocalSetTekRunningState(TEnumAsByte<E_TekRunningState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.LocalSetTekRunningState");

	ABuff_TekArmor_Pants_C_LocalSetTekRunningState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BuffTickServer");

	ABuff_TekArmor_Pants_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.InitGloves
// ()

void ABuff_TekArmor_Pants_C::InitGloves()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.InitGloves");

	ABuff_TekArmor_Pants_C_InitGloves_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ForceWalkForward
// ()

void ABuff_TekArmor_Pants_C::ForceWalkForward()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ForceWalkForward");

	ABuff_TekArmor_Pants_C_ForceWalkForward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.UpdatePlayerControlRotation
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::UpdatePlayerControlRotation(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.UpdatePlayerControlRotation");

	ABuff_TekArmor_Pants_C_UpdatePlayerControlRotation_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BPDeactivated");

	ABuff_TekArmor_Pants_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerTekRunVelocityRatio
// ()
// Parameters:
// float                          Ratio                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::GetPlayerTekRunVelocityRatio(float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerTekRunVelocityRatio");

	ABuff_TekArmor_Pants_C_GetPlayerTekRunVelocityRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ratio != nullptr)
		*Ratio = params.Ratio;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Player MaxRunVelocity
// ()
// Parameters:
// float                          MaxSpeed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::Get_Player_MaxRunVelocity(float* MaxSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Player MaxRunVelocity");

	ABuff_TekArmor_Pants_C_Get_Player_MaxRunVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxSpeed != nullptr)
		*MaxSpeed = params.MaxSpeed;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.MaintainFullSpeed
// ()
// Parameters:
// bool                           bUsePlayerForward              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OverrideDirection              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           wasMaintained                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::MaintainFullSpeed(bool bUsePlayerForward, const struct FVector& OverrideDirection, bool* wasMaintained)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.MaintainFullSpeed");

	ABuff_TekArmor_Pants_C_MaintainFullSpeed_Params params;
	params.bUsePlayerForward = bUsePlayerForward;
	params.OverrideDirection = OverrideDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (wasMaintained != nullptr)
		*wasMaintained = params.wasMaintained;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerMaxTekRunVelocity_Pure
// ()
// Parameters:
// float                          MaxSpeed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::GetPlayerMaxTekRunVelocity_Pure(float* MaxSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerMaxTekRunVelocity_Pure");

	ABuff_TekArmor_Pants_C_GetPlayerMaxTekRunVelocity_Pure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxSpeed != nullptr)
		*MaxSpeed = params.MaxSpeed;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.StoreCurrentVelocityLength
// ()

void ABuff_TekArmor_Pants_C::StoreCurrentVelocityLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.StoreCurrentVelocityLength");

	ABuff_TekArmor_Pants_C_StoreCurrentVelocityLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetChargeStartVariables
// ()

void ABuff_TekArmor_Pants_C::SetChargeStartVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetChargeStartVariables");

	ABuff_TekArmor_Pants_C_SetChargeStartVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Default Player Run Speed Mult
// ()
// Parameters:
// float                          speedMult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::Get_Default_Player_Run_Speed_Mult(float* speedMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Default Player Run Speed Mult");

	ABuff_TekArmor_Pants_C_Get_Default_Player_Run_Speed_Mult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (speedMult != nullptr)
		*speedMult = params.speedMult;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Tick Update Tek Run
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::Tick_Update_Tek_Run(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Tick Update Tek Run");

	ABuff_TekArmor_Pants_C_Tick_Update_Tek_Run_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.RedirectPlayerVelocity
// ()
// Parameters:
// struct FVector                 newForward                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::RedirectPlayerVelocity(const struct FVector& newForward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.RedirectPlayerVelocity");

	ABuff_TekArmor_Pants_C_RedirectPlayerVelocity_Params params;
	params.newForward = newForward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BuffTickClient
// (Exec, Event, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BuffTickClient");

	ABuff_TekArmor_Pants_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPreventEquipWeapons
// ()
// Parameters:
// bool                           Prevent                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::SetPreventEquipWeapons(bool Prevent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPreventEquipWeapons");

	ABuff_TekArmor_Pants_C_SetPreventEquipWeapons_Params params;
	params.Prevent = Prevent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CalculateDeflectingImpulse
// ()
// Parameters:
// class AActor*                  TargetCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_TekArmor_Pants_C::CalculateDeflectingImpulse(class AActor* TargetCharacter, float Impulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CalculateDeflectingImpulse");

	ABuff_TekArmor_Pants_C_CalculateDeflectingImpulse_Params params;
	params.TargetCharacter = TargetCharacter;
	params.Impulse = Impulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPlayerRunSpeed
// ()
// Parameters:
// float                          newSpeed                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::SetPlayerRunSpeed(float newSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPlayerRunSpeed");

	ABuff_TekArmor_Pants_C_SetPlayerRunSpeed_Params params;
	params.newSpeed = newSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ClearHitActors
// ()

void ABuff_TekArmor_Pants_C::ClearHitActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ClearHitActors");

	ABuff_TekArmor_Pants_C_ClearHitActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Trace and Damage ForwardPawns
// (NetReliable, Exec, Event, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void ABuff_TekArmor_Pants_C::STATIC_Trace_and_Damage_ForwardPawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Trace and Damage ForwardPawns");

	ABuff_TekArmor_Pants_C_Trace_and_Damage_ForwardPawns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetModifiedForward
// ()
// Parameters:
// float                          forwardScale                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AdditionalOffset               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 newForward                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::GetModifiedForward(float forwardScale, const struct FVector& AdditionalOffset, struct FVector* newForward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetModifiedForward");

	ABuff_TekArmor_Pants_C_GetModifiedForward_Params params;
	params.forwardScale = forwardScale;
	params.AdditionalOffset = AdditionalOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newForward != nullptr)
		*newForward = params.newForward;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Trace And Damage Forward StationaryActors
// (Exec, Native, MulticastDelegate, Protected, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void ABuff_TekArmor_Pants_C::Trace_And_Damage_Forward_StationaryActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Trace And Damage Forward StationaryActors");

	ABuff_TekArmor_Pants_C_Trace_And_Damage_Forward_StationaryActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CalculateForwardRelativeToSpeed
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::CalculateForwardRelativeToSpeed(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CalculateForwardRelativeToSpeed");

	ABuff_TekArmor_Pants_C_CalculateForwardRelativeToSpeed_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CanUseTekAbility
// ()
// Parameters:
// bool*                          bNotifyIfOutOfElement          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::CanUseTekAbility(bool* bNotifyIfOutOfElement, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CanUseTekAbility");

	ABuff_TekArmor_Pants_C_CanUseTekAbility_Params params;
	params.bNotifyIfOutOfElement = bNotifyIfOutOfElement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetCastedArmorPieceRef
// ()

void ABuff_TekArmor_Pants_C::SetCastedArmorPieceRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetCastedArmorPieceRef");

	ABuff_TekArmor_Pants_C_SetCastedArmorPieceRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.UserConstructionScript
// ()

void ABuff_TekArmor_Pants_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.UserConstructionScript");

	ABuff_TekArmor_Pants_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.InpActEvt_AltFire_K2Node_InputActionEvent_89
// ()

void ABuff_TekArmor_Pants_C::InpActEvt_AltFire_K2Node_InputActionEvent_89()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.InpActEvt_AltFire_K2Node_InputActionEvent_89");

	ABuff_TekArmor_Pants_C_InpActEvt_AltFire_K2Node_InputActionEvent_89_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.InpActEvt_AltFire_K2Node_InputActionEvent_88
// ()

void ABuff_TekArmor_Pants_C::InpActEvt_AltFire_K2Node_InputActionEvent_88()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.InpActEvt_AltFire_K2Node_InputActionEvent_88");

	ABuff_TekArmor_Pants_C_InpActEvt_AltFire_K2Node_InputActionEvent_88_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Server_SetTekRunningState
// ()
// Parameters:
// TEnumAsByte<E_TekRunningState> newRunState                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::Server_SetTekRunningState(TEnumAsByte<E_TekRunningState> newRunState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Server_SetTekRunningState");

	ABuff_TekArmor_Pants_C_Server_SetTekRunningState_Params params;
	params.newRunState = newRunState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Client_SyncRunModifier
// ()
// Parameters:
// float                          newModifier                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::Client_SyncRunModifier(float newModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Client_SyncRunModifier");

	ABuff_TekArmor_Pants_C_Client_SyncRunModifier_Params params;
	params.newModifier = newModifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Pants_AltFirePressed
// ()

void ABuff_TekArmor_Pants_C::Pants_AltFirePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Pants_AltFirePressed");

	ABuff_TekArmor_Pants_C_Pants_AltFirePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Pants_AltFireReleased
// ()

void ABuff_TekArmor_Pants_C::Pants_AltFireReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Pants_AltFireReleased");

	ABuff_TekArmor_Pants_C_Pants_AltFireReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ExecuteUbergraph_Buff_TekArmor_Pants
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Pants_C::ExecuteUbergraph_Buff_TekArmor_Pants(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ExecuteUbergraph_Buff_TekArmor_Pants");

	ABuff_TekArmor_Pants_C_ExecuteUbergraph_Buff_TekArmor_Pants_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
