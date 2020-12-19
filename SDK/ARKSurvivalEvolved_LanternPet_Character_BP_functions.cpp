// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LanternPet_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.GetNumBatteries
// ()
// Parameters:
// int                            numBatteries                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::GetNumBatteries(int* numBatteries)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.GetNumBatteries");

	ALanternPet_Character_BP_C_GetNumBatteries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (numBatteries != nullptr)
		*numBatteries = params.numBatteries;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.Get Charge Variable Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ivalue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::Get_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float* fValue, double* dValue, bool* bBValue, int* ivalue)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.Get Charge Variable Interface");

	ALanternPet_Character_BP_C_Get_Charge_Variable_Interface_Params params;
	params.variableType = variableType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (fValue != nullptr)
		*fValue = params.fValue;
	if (dValue != nullptr)
		*dValue = params.dValue;
	if (bBValue != nullptr)
		*bBValue = params.bBValue;
	if (ivalue != nullptr)
		*ivalue = params.ivalue;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateMaxCharge
// ()

void ALanternPet_Character_BP_C::UpdateMaxCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateMaxCharge");

	ALanternPet_Character_BP_C_UpdateMaxCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateFoundHighLevelDinos
// ()

void ALanternPet_Character_BP_C::UpdateFoundHighLevelDinos()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateFoundHighLevelDinos");

	ALanternPet_Character_BP_C_UpdateFoundHighLevelDinos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateFoundEnemyPlayers
// ()

void ALanternPet_Character_BP_C::UpdateFoundEnemyPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateFoundEnemyPlayers");

	ALanternPet_Character_BP_C_UpdateFoundEnemyPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.GetPassiveChargeGain
// ()
// Parameters:
// float                          chargeGain                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::GetPassiveChargeGain(float* chargeGain)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.GetPassiveChargeGain");

	ALanternPet_Character_BP_C_GetPassiveChargeGain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (chargeGain != nullptr)
		*chargeGain = params.chargeGain;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.UnstasisLogic
// ()

void ALanternPet_Character_BP_C::UnstasisLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.UnstasisLogic");

	ALanternPet_Character_BP_C_UnstasisLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPTriggerStasisEvent
// ()

void ALanternPet_Character_BP_C::BPTriggerStasisEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPTriggerStasisEvent");

	ALanternPet_Character_BP_C_BPTriggerStasisEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.DestroyChargeBuff
// ()

void ALanternPet_Character_BP_C::DestroyChargeBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.DestroyChargeBuff");

	ALanternPet_Character_BP_C_DestroyChargeBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPSetupTamed");

	ALanternPet_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.CreateChargeManager
// ()

void ALanternPet_Character_BP_C::CreateChargeManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.CreateChargeManager");

	ALanternPet_Character_BP_C_CreateChargeManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateChargeRadius
// ()

void ALanternPet_Character_BP_C::UpdateChargeRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateChargeRadius");

	ALanternPet_Character_BP_C_UpdateChargeRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.GetActualRadius
// ()
// Parameters:
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::GetActualRadius(float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.GetActualRadius");

	ALanternPet_Character_BP_C_GetActualRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Radius != nullptr)
		*Radius = params.Radius;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPNotifyInventoryItemChange
// ()
// Parameters:
// bool*                          bIsItemAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPNotifyInventoryItemChange");

	ALanternPet_Character_BP_C_BPNotifyInventoryItemChange_Params params;
	params.bIsItemAdd = bIsItemAdd;
	params.theItem = theItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPOnClearMountedDino
// ()

void ALanternPet_Character_BP_C::BPOnClearMountedDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPOnClearMountedDino");

	ALanternPet_Character_BP_C_BPOnClearMountedDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPNotifyLevelUp
// ()
// Parameters:
// int*                           ExtraCharacterLevel            (Parm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::BPNotifyLevelUp(int* ExtraCharacterLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPNotifyLevelUp");

	ALanternPet_Character_BP_C_BPNotifyLevelUp_Params params;
	params.ExtraCharacterLevel = ExtraCharacterLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.InitializeChargeBuff
// ()

void ALanternPet_Character_BP_C::InitializeChargeBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.InitializeChargeBuff");

	ALanternPet_Character_BP_C_InitializeChargeBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPOnSetMountedDino
// ()

void ALanternPet_Character_BP_C::BPOnSetMountedDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPOnSetMountedDino");

	ALanternPet_Character_BP_C_BPOnSetMountedDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.AnimNotifyMountedDino
// ()

void ALanternPet_Character_BP_C::AnimNotifyMountedDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.AnimNotifyMountedDino");

	ALanternPet_Character_BP_C_AnimNotifyMountedDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.SetLightColor
// ()

void ALanternPet_Character_BP_C::SetLightColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.SetLightColor");

	ALanternPet_Character_BP_C_SetLightColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.OnLaunched
// ()
// Parameters:
// struct FVector*                LaunchVelocity                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bXYOverride                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bZOverride                     (Parm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::OnLaunched(struct FVector* LaunchVelocity, bool* bXYOverride, bool* bZOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.OnLaunched");

	ALanternPet_Character_BP_C_OnLaunched_Params params;
	params.LaunchVelocity = LaunchVelocity;
	params.bXYOverride = bXYOverride;
	params.bZOverride = bZOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.Can Generate Charge OverTime
// ()
// Parameters:
// bool                           CanCharge                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::Can_Generate_Charge_OverTime(bool* CanCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.Can Generate Charge OverTime");

	ALanternPet_Character_BP_C_Can_Generate_Charge_OverTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanCharge != nullptr)
		*CanCharge = params.CanCharge;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.CanPlaySpecialAnim
// ()
// Parameters:
// bool                           CanPlay                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::CanPlaySpecialAnim(bool* CanPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.CanPlaySpecialAnim");

	ALanternPet_Character_BP_C_CanPlaySpecialAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanPlay != nullptr)
		*CanPlay = params.CanPlay;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.Init
// ()

void ALanternPet_Character_BP_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.Init");

	ALanternPet_Character_BP_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.AutoChargeNotify
// ()

void ALanternPet_Character_BP_C::AutoChargeNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.AutoChargeNotify");

	ALanternPet_Character_BP_C_AutoChargeNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPClientDoMultiUse");

	ALanternPet_Character_BP_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPGetMultiUseEntries
// (Native, Event, Static, Public, Private, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ALanternPet_Character_BP_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPGetMultiUseEntries");

	ALanternPet_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALanternPet_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPTryMultiUse");

	ALanternPet_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.OnRep_bAutoChargeActive
// ()

void ALanternPet_Character_BP_C::OnRep_bAutoChargeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.OnRep_bAutoChargeActive");

	ALanternPet_Character_BP_C_OnRep_bAutoChargeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPTimerNonDedicated
// ()

void ALanternPet_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPTimerNonDedicated");

	ALanternPet_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.OnUpdateMountedDinoMeshHiding
// ()
// Parameters:
// bool*                          bshouldBeVisible               (Parm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::OnUpdateMountedDinoMeshHiding(bool* bshouldBeVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.OnUpdateMountedDinoMeshHiding");

	ALanternPet_Character_BP_C_OnUpdateMountedDinoMeshHiding_Params params;
	params.bshouldBeVisible = bshouldBeVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.BlueprintDrawFloatingHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.BlueprintDrawFloatingHUD");

	ALanternPet_Character_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.Get Charge Receive Montage
// ()
// Parameters:
// class UAnimMontage*            Montage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::Get_Charge_Receive_Montage(class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.Get Charge Receive Montage");

	ALanternPet_Character_BP_C_Get_Charge_Receive_Montage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Montage != nullptr)
		*Montage = params.Montage;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.GetChargeFinishedMontage
// ()
// Parameters:
// class UAnimMontage*            Montage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::GetChargeFinishedMontage(class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.GetChargeFinishedMontage");

	ALanternPet_Character_BP_C_GetChargeFinishedMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Montage != nullptr)
		*Montage = params.Montage;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.Update ChargeAnimation
// ()

void ALanternPet_Character_BP_C::Update_ChargeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.Update ChargeAnimation");

	ALanternPet_Character_BP_C_Update_ChargeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPTimerServer
// ()

void ALanternPet_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPTimerServer");

	ALanternPet_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateLightIntensity
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Emmissive                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::UpdateLightIntensity(float DeltaTime, float* Alpha, float* Emmissive)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateLightIntensity");

	ALanternPet_Character_BP_C_UpdateLightIntensity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Alpha != nullptr)
		*Alpha = params.Alpha;
	if (Emmissive != nullptr)
		*Emmissive = params.Emmissive;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.UserConstructionScript
// ()

void ALanternPet_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.UserConstructionScript");

	ALanternPet_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Boolean MulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::Charge_Variable_Event_Boolean_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Boolean MulticastInterface");

	ALanternPet_Character_BP_C_Charge_Variable_Event_Boolean_MulticastInterface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Float Multicast Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::Charge_Variable_Event_Float_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Float Multicast Interface");

	ALanternPet_Character_BP_C_Charge_Variable_Event_Float_Multicast_Interface_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Double MulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::Charge_Variable_Event_Double_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Double MulticastInterface");

	ALanternPet_Character_BP_C_Charge_Variable_Event_Double_MulticastInterface_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Boolean Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::Charge_Variable_Event_Boolean_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Boolean Interface");

	ALanternPet_Character_BP_C_Charge_Variable_Event_Boolean_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEventFloatInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::ChargeVariableEventFloatInterface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEventFloatInterface");

	ALanternPet_Character_BP_C_ChargeVariableEventFloatInterface_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEventDoubleInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::ChargeVariableEventDoubleInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEventDoubleInterface");

	ALanternPet_Character_BP_C_ChargeVariableEventDoubleInterface_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEventIntInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ivalue                         (Parm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::ChargeVariableEventIntInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int ivalue)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEventIntInterface");

	ALanternPet_Character_BP_C_ChargeVariableEventIntInterface_Params params;
	params.variableType = variableType;
	params.ivalue = ivalue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEventIntMulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ivalue                         (Parm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::ChargeVariableEventIntMulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int ivalue)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEventIntMulticastInterface");

	ALanternPet_Character_BP_C_ChargeVariableEventIntMulticastInterface_Params params;
	params.variableType = variableType;
	params.ivalue = ivalue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.NetUpdateCharge
// ()

void ALanternPet_Character_BP_C::NetUpdateCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.NetUpdateCharge");

	ALanternPet_Character_BP_C_NetUpdateCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPUnstasis
// ()

void ALanternPet_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPUnstasis");

	ALanternPet_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.NetRestartParticles
// ()

void ALanternPet_Character_BP_C::NetRestartParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.NetRestartParticles");

	ALanternPet_Character_BP_C_NetRestartParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.PlayPetAnimAfterDelay
// ()

void ALanternPet_Character_BP_C::PlayPetAnimAfterDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.PlayPetAnimAfterDelay");

	ALanternPet_Character_BP_C_PlayPetAnimAfterDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.AnimNotify_FinishParticle
// ()

void ALanternPet_Character_BP_C::AnimNotify_FinishParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.AnimNotify_FinishParticle");

	ALanternPet_Character_BP_C_AnimNotify_FinishParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.Set Charge Variable Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicast                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           triggerEvent                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicastEvent                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ivalue                         (Parm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::Set_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool multicast, float fValue, double dValue, bool bBValue, bool triggerEvent, bool multicastEvent, int ivalue)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.Set Charge Variable Interface");

	ALanternPet_Character_BP_C_Set_Charge_Variable_Interface_Params params;
	params.variableType = variableType;
	params.multicast = multicast;
	params.fValue = fValue;
	params.dValue = dValue;
	params.bBValue = bBValue;
	params.triggerEvent = triggerEvent;
	params.multicastEvent = multicastEvent;
	params.ivalue = ivalue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ivalue                         (Parm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::Charge_Variable_Event_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int ivalue)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Interface");

	ALanternPet_Character_BP_C_Charge_Variable_Event_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.ivalue = ivalue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Trigger Multicast Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            iVariable                      (Parm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::Charge_Variable_Event_Trigger_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iVariable)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Trigger Multicast Interface");

	ALanternPet_Character_BP_C_Charge_Variable_Event_Trigger_Multicast_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.iVariable = iVariable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEvent
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::ChargeVariableEvent(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEvent");

	ALanternPet_Character_BP_C_ChargeVariableEvent_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEvent_Multicast
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::ChargeVariableEvent_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEvent_Multicast");

	ALanternPet_Character_BP_C_ChargeVariableEvent_Multicast_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.CheckForBatteriesAndUpdate_Multicast
// ()

void ALanternPet_Character_BP_C::CheckForBatteriesAndUpdate_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.CheckForBatteriesAndUpdate_Multicast");

	ALanternPet_Character_BP_C_CheckForBatteriesAndUpdate_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.Interface Check for Batteries and Update Multicast
// ()

void ALanternPet_Character_BP_C::Interface_Check_for_Batteries_and_Update_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.Interface Check for Batteries and Update Multicast");

	ALanternPet_Character_BP_C_Interface_Check_for_Batteries_and_Update_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.ReceiveBeginPlay
// ()

void ALanternPet_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.ReceiveBeginPlay");

	ALanternPet_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.OnDied_Event
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::OnDied_Event(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.OnDied_Event");

	ALanternPet_Character_BP_C_OnDied_Event_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.RandomizeUntamedStart
// ()

void ALanternPet_Character_BP_C::RandomizeUntamedStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.RandomizeUntamedStart");

	ALanternPet_Character_BP_C_RandomizeUntamedStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.CreateChargeBuff_Multicast
// ()

void ALanternPet_Character_BP_C::CreateChargeBuff_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.CreateChargeBuff_Multicast");

	ALanternPet_Character_BP_C_CreateChargeBuff_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.CreateChargeBuff
// ()

void ALanternPet_Character_BP_C::CreateChargeBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.CreateChargeBuff");

	ALanternPet_Character_BP_C_CreateChargeBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.DestroyChargeBuff_Multicast
// ()

void ALanternPet_Character_BP_C::DestroyChargeBuff_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.DestroyChargeBuff_Multicast");

	ALanternPet_Character_BP_C_DestroyChargeBuff_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_Character_BP.LanternPet_Character_BP_C.ExecuteUbergraph_LanternPet_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALanternPet_Character_BP_C::ExecuteUbergraph_LanternPet_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_Character_BP.LanternPet_Character_BP_C.ExecuteUbergraph_LanternPet_Character_BP");

	ALanternPet_Character_BP_C_ExecuteUbergraph_LanternPet_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
