// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_TekGenerator_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.ReceiveDestroyed
// ()

void AStorageBox_TekGenerator_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.ReceiveDestroyed");

	AStorageBox_TekGenerator_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.PowerGeneratorBuiltNearbyPoweredStructure
// ()
// Parameters:
// class APrimalStructureItemContainer** PoweredStructure               (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_TekGenerator_C::PowerGeneratorBuiltNearbyPoweredStructure(class APrimalStructureItemContainer** PoweredStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.PowerGeneratorBuiltNearbyPoweredStructure");

	AStorageBox_TekGenerator_C_PowerGeneratorBuiltNearbyPoweredStructure_Params params;
	params.PoweredStructure = PoweredStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPChangedActorTeam
// ()

void AStorageBox_TekGenerator_C::BPChangedActorTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPChangedActorTeam");

	AStorageBox_TekGenerator_C_BPChangedActorTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.RefreshPoweredStructures
// ()

void AStorageBox_TekGenerator_C::RefreshPoweredStructures()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.RefreshPoweredStructures");

	AStorageBox_TekGenerator_C_RefreshPoweredStructures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.ReceiveBeginPlay
// ()

void AStorageBox_TekGenerator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.ReceiveBeginPlay");

	AStorageBox_TekGenerator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.CheckChargeEffect
// ()

void AStorageBox_TekGenerator_C::CheckChargeEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.CheckChargeEffect");

	AStorageBox_TekGenerator_C_CheckChargeEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.OnRep_PowerUpCompletionTime
// ()

void AStorageBox_TekGenerator_C::OnRep_PowerUpCompletionTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.OnRep_PowerUpCompletionTime");

	AStorageBox_TekGenerator_C_OnRep_PowerUpCompletionTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_TekGenerator_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPClientDoMultiUse");

	AStorageBox_TekGenerator_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BlueprintDrawHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_TekGenerator_C::BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BlueprintDrawHUD");

	AStorageBox_TekGenerator_C_BlueprintDrawHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPRefreshedStructureColors
// ()

void AStorageBox_TekGenerator_C::BPRefreshedStructureColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPRefreshedStructureColors");

	AStorageBox_TekGenerator_C_BPRefreshedStructureColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPGetFuelConsumptionMultiplier
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AStorageBox_TekGenerator_C::BPGetFuelConsumptionMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPGetFuelConsumptionMultiplier");

	AStorageBox_TekGenerator_C_BPGetFuelConsumptionMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPCanBeActivatedByPlayer
// ()
// Parameters:
// class AShooterPlayerController** PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStorageBox_TekGenerator_C::BPCanBeActivatedByPlayer(class AShooterPlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPCanBeActivatedByPlayer");

	AStorageBox_TekGenerator_C_BPCanBeActivatedByPlayer_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPOverrideAllowStructureAccess
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsAccessAllowed               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStorageBox_TekGenerator_C::BPOverrideAllowStructureAccess(class AShooterPlayerController** ForPC, bool* bIsAccessAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPOverrideAllowStructureAccess");

	AStorageBox_TekGenerator_C_BPOverrideAllowStructureAccess_Params params;
	params.ForPC = ForPC;
	params.bIsAccessAllowed = bIsAccessAllowed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.GetDesiredRadiusMultiplier
// ()
// Parameters:
// int                            IncrementAmount                (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutRadiusMultiplier            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStorageBox_TekGenerator_C::GetDesiredRadiusMultiplier(int IncrementAmount, float* OutRadiusMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.GetDesiredRadiusMultiplier");

	AStorageBox_TekGenerator_C_GetDesiredRadiusMultiplier_Params params;
	params.IncrementAmount = IncrementAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRadiusMultiplier != nullptr)
		*OutRadiusMultiplier = params.OutRadiusMultiplier;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStorageBox_TekGenerator_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPTryMultiUse");

	AStorageBox_TekGenerator_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPGetMultiUseEntries
// (Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetClient, BlueprintCallable, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AStorageBox_TekGenerator_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPGetMultiUseEntries");

	AStorageBox_TekGenerator_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPPostInitializeComponents
// ()

void AStorageBox_TekGenerator_C::BPPostInitializeComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPPostInitializeComponents");

	AStorageBox_TekGenerator_C_BPPostInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPPostSetStructureCollisionChannels
// ()

void AStorageBox_TekGenerator_C::BPPostSetStructureCollisionChannels()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPPostSetStructureCollisionChannels");

	AStorageBox_TekGenerator_C_BPPostSetStructureCollisionChannels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.SetShieldActive
// ()
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_TekGenerator_C::SetShieldActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.SetShieldActive");

	AStorageBox_TekGenerator_C_SetShieldActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPContainerDeactivated
// ()

void AStorageBox_TekGenerator_C::BPContainerDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPContainerDeactivated");

	AStorageBox_TekGenerator_C_BPContainerDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPContainerActivated
// ()

void AStorageBox_TekGenerator_C::BPContainerActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPContainerActivated");

	AStorageBox_TekGenerator_C_BPContainerActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.UserConstructionScript
// ()

void AStorageBox_TekGenerator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.UserConstructionScript");

	AStorageBox_TekGenerator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.NetRefreshRadiusScale
// ()
// Parameters:
// int                            NewUserRadiusValue             (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_TekGenerator_C::NetRefreshRadiusScale(int NewUserRadiusValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.NetRefreshRadiusScale");

	AStorageBox_TekGenerator_C_NetRefreshRadiusScale_Params params;
	params.NewUserRadiusValue = NewUserRadiusValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.UpdateShieldInterp
// ()

void AStorageBox_TekGenerator_C::UpdateShieldInterp()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.UpdateShieldInterp");

	AStorageBox_TekGenerator_C_UpdateShieldInterp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.UpdateShieldOpacity
// ()

void AStorageBox_TekGenerator_C::UpdateShieldOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.UpdateShieldOpacity");

	AStorageBox_TekGenerator_C_UpdateShieldOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.FinishPowerUp
// ()

void AStorageBox_TekGenerator_C::FinishPowerUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.FinishPowerUp");

	AStorageBox_TekGenerator_C_FinishPowerUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.DoRefreshPoweredStructures
// ()

void AStorageBox_TekGenerator_C::DoRefreshPoweredStructures()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.DoRefreshPoweredStructures");

	AStorageBox_TekGenerator_C_DoRefreshPoweredStructures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.NetSetForceDisplayRadius
// ()
// Parameters:
// bool                           newForceDisplayRadius          (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_TekGenerator_C::NetSetForceDisplayRadius(bool newForceDisplayRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.NetSetForceDisplayRadius");

	AStorageBox_TekGenerator_C_NetSetForceDisplayRadius_Params params;
	params.newForceDisplayRadius = newForceDisplayRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.DoNetPulseRadius
// ()

void AStorageBox_TekGenerator_C::DoNetPulseRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.DoNetPulseRadius");

	AStorageBox_TekGenerator_C_DoNetPulseRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.ExecuteUbergraph_StorageBox_TekGenerator
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_TekGenerator_C::ExecuteUbergraph_StorageBox_TekGenerator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.ExecuteUbergraph_StorageBox_TekGenerator");

	AStorageBox_TekGenerator_C_ExecuteUbergraph_StorageBox_TekGenerator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
