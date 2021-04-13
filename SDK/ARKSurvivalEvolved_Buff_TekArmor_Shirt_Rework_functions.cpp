// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_Shirt_Rework_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.SetJetpackOffset
// (NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// struct UObject_FTransform      AddTransform                   (Parm, IsPlainOldData)
// bool                           IsUnequip                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Shirt_Rework_C::STATIC_SetJetpackOffset(const struct UObject_FTransform& AddTransform, bool IsUnequip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.SetJetpackOffset");

	ABuff_TekArmor_Shirt_Rework_C_SetJetpackOffset_Params params;
	params.AddTransform = AddTransform;
	params.IsUnequip = IsUnequip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnInputsPrevented
// ()

void ABuff_TekArmor_Shirt_Rework_C::OnInputsPrevented()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnInputsPrevented");

	ABuff_TekArmor_Shirt_Rework_C_OnInputsPrevented_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BPOverrideCharacterNewFallVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_TekArmor_Shirt_Rework_C::BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BPOverrideCharacterNewFallVelocity");

	ABuff_TekArmor_Shirt_Rework_C_BPOverrideCharacterNewFallVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitialVelocity != nullptr)
		*InitialVelocity = params.InitialVelocity;
	if (Gravity != nullptr)
		*Gravity = params.Gravity;

	return params.ReturnValue;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Clamp LocationZ
// ()

void ABuff_TekArmor_Shirt_Rework_C::Clamp_LocationZ()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Clamp LocationZ");

	ABuff_TekArmor_Shirt_Rework_C_Clamp_LocationZ_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsPlayerInWater
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Shirt_Rework_C::IsPlayerInWater(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsPlayerInWater");

	ABuff_TekArmor_Shirt_Rework_C_IsPlayerInWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsTekChargeThrusting
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Shirt_Rework_C::IsTekChargeThrusting(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsTekChargeThrusting");

	ABuff_TekArmor_Shirt_Rework_C_IsTekChargeThrusting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.AreChargeThrustingAnimsPlaying
// ()
// Parameters:
// bool                           cleanUpAnims                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Shirt_Rework_C::AreChargeThrustingAnimsPlaying(bool cleanUpAnims, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.AreChargeThrustingAnimsPlaying");

	ABuff_TekArmor_Shirt_Rework_C_AreChargeThrustingAnimsPlaying_Params params;
	params.cleanUpAnims = cleanUpAnims;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsPlayerInjured
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Shirt_Rework_C::IsPlayerInjured(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsPlayerInjured");

	ABuff_TekArmor_Shirt_Rework_C_IsPlayerInjured_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsPlayerWaterRunning
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Shirt_Rework_C::IsPlayerWaterRunning(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsPlayerWaterRunning");

	ABuff_TekArmor_Shirt_Rework_C_IsPlayerWaterRunning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Shirt_Rework_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BPSetupForInstigator");

	ABuff_TekArmor_Shirt_Rework_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateBoostIconVisibility
// ()
// Parameters:
// bool                           setVisible                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Shirt_Rework_C::UpdateBoostIconVisibility(bool setVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateBoostIconVisibility");

	ABuff_TekArmor_Shirt_Rework_C_UpdateBoostIconVisibility_Params params;
	params.setVisible = setVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.SetIsChargeThrusting
// ()
// Parameters:
// bool                           newVal                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Shirt_Rework_C::SetIsChargeThrusting(bool newVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.SetIsChargeThrusting");

	ABuff_TekArmor_Shirt_Rework_C_SetIsChargeThrusting_Params params;
	params.newVal = newVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.CanUseTekAbility
// ()
// Parameters:
// bool*                          bNotifyIfOutOfElement          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Shirt_Rework_C::CanUseTekAbility(bool* bNotifyIfOutOfElement, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.CanUseTekAbility");

	ABuff_TekArmor_Shirt_Rework_C_CanUseTekAbility_Params params;
	params.bNotifyIfOutOfElement = bNotifyIfOutOfElement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateThrusterFX
// ()

void ABuff_TekArmor_Shirt_Rework_C::UpdateThrusterFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateThrusterFX");

	ABuff_TekArmor_Shirt_Rework_C_UpdateThrusterFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Shirt_Rework_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BPDeactivated");

	ABuff_TekArmor_Shirt_Rework_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Reset Owning PlayerVariables
// ()

void ABuff_TekArmor_Shirt_Rework_C::Reset_Owning_PlayerVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Reset Owning PlayerVariables");

	ABuff_TekArmor_Shirt_Rework_C_Reset_Owning_PlayerVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateIsSwimming
// ()

void ABuff_TekArmor_Shirt_Rework_C::UpdateIsSwimming()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateIsSwimming");

	ABuff_TekArmor_Shirt_Rework_C_UpdateIsSwimming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.ClampPlayerVelocity
// ()
// Parameters:
// float                          MaxVelocity                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Shirt_Rework_C::ClampPlayerVelocity(float MaxVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.ClampPlayerVelocity");

	ABuff_TekArmor_Shirt_Rework_C_ClampPlayerVelocity_Params params;
	params.MaxVelocity = MaxVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateTekShirtByState
// ()

void ABuff_TekArmor_Shirt_Rework_C::UpdateTekShirtByState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateTekShirtByState");

	ABuff_TekArmor_Shirt_Rework_C_UpdateTekShirtByState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnRep_bIsUnderwater
// ()

void ABuff_TekArmor_Shirt_Rework_C::OnRep_bIsUnderwater()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnRep_bIsUnderwater");

	ABuff_TekArmor_Shirt_Rework_C_OnRep_bIsUnderwater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.RestoreThrusterStateFromCurrentInputs
// ()

void ABuff_TekArmor_Shirt_Rework_C::RestoreThrusterStateFromCurrentInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.RestoreThrusterStateFromCurrentInputs");

	ABuff_TekArmor_Shirt_Rework_C_RestoreThrusterStateFromCurrentInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.ResetBoostWhenGrounded
// ()

void ABuff_TekArmor_Shirt_Rework_C::ResetBoostWhenGrounded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.ResetBoostWhenGrounded");

	ABuff_TekArmor_Shirt_Rework_C_ResetBoostWhenGrounded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsPlayerUnderWater
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Shirt_Rework_C::IsPlayerUnderWater(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsPlayerUnderWater");

	ABuff_TekArmor_Shirt_Rework_C_IsPlayerUnderWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.NetSetCurrentThrusterState
// ()
// Parameters:
// TEnumAsByte<E_TekThrusterState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Shirt_Rework_C::NetSetCurrentThrusterState(TEnumAsByte<E_TekThrusterState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.NetSetCurrentThrusterState");

	ABuff_TekArmor_Shirt_Rework_C_NetSetCurrentThrusterState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Shirt_Rework_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BuffTickServer");

	ABuff_TekArmor_Shirt_Rework_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.JetpackBoostClient
// (NetReliable, Native, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)

void ABuff_TekArmor_Shirt_Rework_C::JetpackBoostClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.JetpackBoostClient");

	ABuff_TekArmor_Shirt_Rework_C_JetpackBoostClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.JetpackBoost_Server
// ()

void ABuff_TekArmor_Shirt_Rework_C::JetpackBoost_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.JetpackBoost_Server");

	ABuff_TekArmor_Shirt_Rework_C_JetpackBoost_Server_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Update Thruster Impulse
// ()

void ABuff_TekArmor_Shirt_Rework_C::Update_Thruster_Impulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Update Thruster Impulse");

	ABuff_TekArmor_Shirt_Rework_C_Update_Thruster_Impulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsThrusterActive
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Shirt_Rework_C::IsThrusterActive(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsThrusterActive");

	ABuff_TekArmor_Shirt_Rework_C_IsThrusterActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnRep_CurrentThrusterState
// ()

void ABuff_TekArmor_Shirt_Rework_C::OnRep_CurrentThrusterState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnRep_CurrentThrusterState");

	ABuff_TekArmor_Shirt_Rework_C_OnRep_CurrentThrusterState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.SetCastedArmorPieceRef
// ()

void ABuff_TekArmor_Shirt_Rework_C::SetCastedArmorPieceRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.SetCastedArmorPieceRef");

	ABuff_TekArmor_Shirt_Rework_C_SetCastedArmorPieceRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BuffTickClient
// (NetRequest, NetResponse, Static, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Shirt_Rework_C::STATIC_BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BuffTickClient");

	ABuff_TekArmor_Shirt_Rework_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Client_SetThrusterState
// ()
// Parameters:
// TEnumAsByte<E_TekThrusterState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Shirt_Rework_C::Client_SetThrusterState(TEnumAsByte<E_TekThrusterState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Client_SetThrusterState");

	ABuff_TekArmor_Shirt_Rework_C_Client_SetThrusterState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.JetpackBoost_Start
// ()

void ABuff_TekArmor_Shirt_Rework_C::JetpackBoost_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.JetpackBoost_Start");

	ABuff_TekArmor_Shirt_Rework_C_JetpackBoost_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UserConstructionScript
// ()

void ABuff_TekArmor_Shirt_Rework_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UserConstructionScript");

	ABuff_TekArmor_Shirt_Rework_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Jump_K2Node_InputActionEvent_82
// ()

void ABuff_TekArmor_Shirt_Rework_C::InpActEvt_Jump_K2Node_InputActionEvent_82()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Jump_K2Node_InputActionEvent_82");

	ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Jump_K2Node_InputActionEvent_82_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Jump_K2Node_InputActionEvent_81
// ()

void ABuff_TekArmor_Shirt_Rework_C::InpActEvt_Jump_K2Node_InputActionEvent_81()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Jump_K2Node_InputActionEvent_81");

	ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Jump_K2Node_InputActionEvent_81_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Run_K2Node_InputActionEvent_80
// ()

void ABuff_TekArmor_Shirt_Rework_C::InpActEvt_Run_K2Node_InputActionEvent_80()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Run_K2Node_InputActionEvent_80");

	ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Run_K2Node_InputActionEvent_80_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Run_K2Node_InputActionEvent_79
// ()

void ABuff_TekArmor_Shirt_Rework_C::InpActEvt_Run_K2Node_InputActionEvent_79()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Run_K2Node_InputActionEvent_79");

	ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Run_K2Node_InputActionEvent_79_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_RunToggle_K2Node_InputActionEvent_78
// ()

void ABuff_TekArmor_Shirt_Rework_C::InpActEvt_RunToggle_K2Node_InputActionEvent_78()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_RunToggle_K2Node_InputActionEvent_78");

	ABuff_TekArmor_Shirt_Rework_C_InpActEvt_RunToggle_K2Node_InputActionEvent_78_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_39
// ()

void ABuff_TekArmor_Shirt_Rework_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_39()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_39");

	ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_39_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_38
// ()

void ABuff_TekArmor_Shirt_Rework_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_38()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_38");

	ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_38_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnPlayerJump_Pressed
// ()

void ABuff_TekArmor_Shirt_Rework_C::OnPlayerJump_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnPlayerJump_Pressed");

	ABuff_TekArmor_Shirt_Rework_C_OnPlayerJump_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnPlayerJump_Released
// ()

void ABuff_TekArmor_Shirt_Rework_C::OnPlayerJump_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnPlayerJump_Released");

	ABuff_TekArmor_Shirt_Rework_C_OnPlayerJump_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Server_SetThrusterState
// ()
// Parameters:
// TEnumAsByte<E_TekThrusterState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Shirt_Rework_C::Server_SetThrusterState(TEnumAsByte<E_TekThrusterState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Server_SetThrusterState");

	ABuff_TekArmor_Shirt_Rework_C_Server_SetThrusterState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateCanBoostAfterCooldown
// ()

void ABuff_TekArmor_Shirt_Rework_C::UpdateCanBoostAfterCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateCanBoostAfterCooldown");

	ABuff_TekArmor_Shirt_Rework_C_UpdateCanBoostAfterCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.PlayBoostCooldownSound
// ()

void ABuff_TekArmor_Shirt_Rework_C::PlayBoostCooldownSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.PlayBoostCooldownSound");

	ABuff_TekArmor_Shirt_Rework_C_PlayBoostCooldownSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.FlashThrusterDuringBoost
// ()

void ABuff_TekArmor_Shirt_Rework_C::FlashThrusterDuringBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.FlashThrusterDuringBoost");

	ABuff_TekArmor_Shirt_Rework_C_FlashThrusterDuringBoost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BoostCleanupAfterDuration
// ()

void ABuff_TekArmor_Shirt_Rework_C::BoostCleanupAfterDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BoostCleanupAfterDuration");

	ABuff_TekArmor_Shirt_Rework_C_BoostCleanupAfterDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.ExecuteUbergraph_Buff_TekArmor_Shirt_Rework
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Shirt_Rework_C::ExecuteUbergraph_Buff_TekArmor_Shirt_Rework(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.ExecuteUbergraph_Buff_TekArmor_Shirt_Rework");

	ABuff_TekArmor_Shirt_Rework_C_ExecuteUbergraph_Buff_TekArmor_Shirt_Rework_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
