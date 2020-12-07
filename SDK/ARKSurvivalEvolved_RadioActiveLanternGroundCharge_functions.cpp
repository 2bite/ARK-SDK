// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RadioActiveLanternGroundCharge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.GetNumBatteries
// ()
// Parameters:
// int                            numBatteries                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::GetNumBatteries(int* numBatteries)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.GetNumBatteries");

	ARadioActiveLanternGroundCharge_C_GetNumBatteries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (numBatteries != nullptr)
		*numBatteries = params.numBatteries;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Get Charge Variable Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::Get_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float* fValue, double* dValue, bool* bBValue, int* iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Get Charge Variable Interface");

	ARadioActiveLanternGroundCharge_C_Get_Charge_Variable_Interface_Params params;
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
	if (iValue != nullptr)
		*iValue = params.iValue;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPRefreshedStructureColors
// ()

void ARadioActiveLanternGroundCharge_C::BPRefreshedStructureColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPRefreshedStructureColors");

	ARadioActiveLanternGroundCharge_C_BPRefreshedStructureColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.PlacementInitialization
// ()
// Parameters:
// class AShooterWeapon*          constructorWeapon              (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::PlacementInitialization(class AShooterWeapon* constructorWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.PlacementInitialization");

	ARadioActiveLanternGroundCharge_C_PlacementInitialization_Params params;
	params.constructorWeapon = constructorWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Placement TickActions
// ()
// Parameters:
// bool                           reachedDestination             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::Placement_TickActions(bool* reachedDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Placement TickActions");

	ARadioActiveLanternGroundCharge_C_Placement_TickActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (reachedDestination != nullptr)
		*reachedDestination = params.reachedDestination;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPSetPlayerConstructor
// ()
// Parameters:
// class APlayerController**      PC                             (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::BPSetPlayerConstructor(class APlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPSetPlayerConstructor");

	ARadioActiveLanternGroundCharge_C_BPSetPlayerConstructor_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.TickUpdateLightEffects
// ()

void ARadioActiveLanternGroundCharge_C::TickUpdateLightEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.TickUpdateLightEffects");

	ARadioActiveLanternGroundCharge_C_TickUpdateLightEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ShouldLanternDeactivate
// ()
// Parameters:
// bool                           retShouldDeactivate            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::ShouldLanternDeactivate(bool* retShouldDeactivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ShouldLanternDeactivate");

	ARadioActiveLanternGroundCharge_C_ShouldLanternDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retShouldDeactivate != nullptr)
		*retShouldDeactivate = params.retShouldDeactivate;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.UpdateMaterial
// ()
// Parameters:
// bool                           StaticMesh                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           couldUpdateMaterials           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::UpdateMaterial(bool StaticMesh, bool* couldUpdateMaterials)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.UpdateMaterial");

	ARadioActiveLanternGroundCharge_C_UpdateMaterial_Params params;
	params.StaticMesh = StaticMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (couldUpdateMaterials != nullptr)
		*couldUpdateMaterials = params.couldUpdateMaterials;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DestroyChargeBuff
// ()

void ARadioActiveLanternGroundCharge_C::DestroyChargeBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DestroyChargeBuff");

	ARadioActiveLanternGroundCharge_C_DestroyChargeBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPTriggerStasisEvent
// ()

void ARadioActiveLanternGroundCharge_C::BPTriggerStasisEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPTriggerStasisEvent");

	ARadioActiveLanternGroundCharge_C_BPTriggerStasisEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ConsumeChargeAfterStasis
// ()
// Parameters:
// float                          consumedCharge                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::ConsumeChargeAfterStasis(float* consumedCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ConsumeChargeAfterStasis");

	ARadioActiveLanternGroundCharge_C_ConsumeChargeAfterStasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (consumedCharge != nullptr)
		*consumedCharge = params.consumedCharge;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.GetLightModeForRange
// ()
// Parameters:
// float                          Range                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            lightMode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::GetLightModeForRange(float Range, int* lightMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.GetLightModeForRange");

	ARadioActiveLanternGroundCharge_C_GetLightModeForRange_Params params;
	params.Range = Range;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (lightMode != nullptr)
		*lightMode = params.lightMode;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Update Light Effects
// ()
// Parameters:
// bool                           enableLight                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            newLightMode                   (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::Update_Light_Effects(bool enableLight, int newLightMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Update Light Effects");

	ARadioActiveLanternGroundCharge_C_Update_Light_Effects_Params params;
	params.enableLight = enableLight;
	params.newLightMode = newLightMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.OnChargeTakenFromBattery
// ()
// Parameters:
// float                          amountTaken                    (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::OnChargeTakenFromBattery(float amountTaken)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.OnChargeTakenFromBattery");

	ARadioActiveLanternGroundCharge_C_OnChargeTakenFromBattery_Params params;
	params.amountTaken = amountTaken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Get Available Charge
// ()
// Parameters:
// float                          available                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::Get_Available_Charge(float* available)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Get Available Charge");

	ARadioActiveLanternGroundCharge_C_Get_Available_Charge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (available != nullptr)
		*available = params.available;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPGetInfoFromConsumedItemForPlacedStructure
// ()
// Parameters:
// class UPrimalItem**            ItemToConsumed                 (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::BPGetInfoFromConsumedItemForPlacedStructure(class UPrimalItem** ItemToConsumed)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPGetInfoFromConsumedItemForPlacedStructure");

	ARadioActiveLanternGroundCharge_C_BPGetInfoFromConsumedItemForPlacedStructure_Params params;
	params.ItemToConsumed = ItemToConsumed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Update ChargeVariableFromBatteries
// ()

void ARadioActiveLanternGroundCharge_C::Update_ChargeVariableFromBatteries()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Update ChargeVariableFromBatteries");

	ARadioActiveLanternGroundCharge_C_Update_ChargeVariableFromBatteries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Set Light Mode
// ()
// Parameters:
// int                            NewMode                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           nextMode                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicastChange                (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::Set_Light_Mode(int NewMode, bool nextMode, bool multicastChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Set Light Mode");

	ARadioActiveLanternGroundCharge_C_Set_Light_Mode_Params params;
	params.NewMode = NewMode;
	params.nextMode = nextMode;
	params.multicastChange = multicastChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.CreateChargeManager
// ()

void ARadioActiveLanternGroundCharge_C::CreateChargeManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.CreateChargeManager");

	ARadioActiveLanternGroundCharge_C_CreateChargeManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ReceiveDestroyed
// ()

void ARadioActiveLanternGroundCharge_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ReceiveDestroyed");

	ARadioActiveLanternGroundCharge_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPNotifyInventoryItemChange
// ()
// Parameters:
// bool*                          bIsItemAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPNotifyInventoryItemChange");

	ARadioActiveLanternGroundCharge_C_BPNotifyInventoryItemChange_Params params;
	params.bIsItemAdd = bIsItemAdd;
	params.theItem = theItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.GetLight ModeValues
// ()
// Parameters:
// int                            lightMode                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Intensity                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Emissiveness                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Range                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          chargeEmittedPerSecond         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          chargeConsumedPerSecond        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::GetLight_ModeValues(int lightMode, float* Intensity, float* Emissiveness, float* Range, float* chargeEmittedPerSecond, float* chargeConsumedPerSecond)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.GetLight ModeValues");

	ARadioActiveLanternGroundCharge_C_GetLight_ModeValues_Params params;
	params.lightMode = lightMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Intensity != nullptr)
		*Intensity = params.Intensity;
	if (Emissiveness != nullptr)
		*Emissiveness = params.Emissiveness;
	if (Range != nullptr)
		*Range = params.Range;
	if (chargeEmittedPerSecond != nullptr)
		*chargeEmittedPerSecond = params.chargeEmittedPerSecond;
	if (chargeConsumedPerSecond != nullptr)
		*chargeConsumedPerSecond = params.chargeConsumedPerSecond;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BlueprintDrawHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BlueprintDrawHUD");

	ARadioActiveLanternGroundCharge_C_BlueprintDrawHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARadioActiveLanternGroundCharge_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPTryMultiUse");

	ARadioActiveLanternGroundCharge_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPGetMultiUseEntries
// (NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ARadioActiveLanternGroundCharge_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPGetMultiUseEntries");

	ARadioActiveLanternGroundCharge_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.UserConstructionScript
// ()

void ARadioActiveLanternGroundCharge_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.UserConstructionScript");

	ARadioActiveLanternGroundCharge_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.FadeInLightTimeline__FinishedFunc
// ()

void ARadioActiveLanternGroundCharge_C::FadeInLightTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.FadeInLightTimeline__FinishedFunc");

	ARadioActiveLanternGroundCharge_C_FadeInLightTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.FadeInLightTimeline__UpdateFunc
// ()

void ARadioActiveLanternGroundCharge_C::FadeInLightTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.FadeInLightTimeline__UpdateFunc");

	ARadioActiveLanternGroundCharge_C_FadeInLightTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::Charge_Variable_Event_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Interface");

	ARadioActiveLanternGroundCharge_C_Charge_Variable_Event_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Trigger Multicast Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            iVariable                      (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::Charge_Variable_Event_Trigger_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iVariable)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Trigger Multicast Interface");

	ARadioActiveLanternGroundCharge_C_Charge_Variable_Event_Trigger_Multicast_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.iVariable = iVariable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPUnstasis
// ()

void ARadioActiveLanternGroundCharge_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPUnstasis");

	ARadioActiveLanternGroundCharge_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ReceiveBeginPlay
// ()

void ARadioActiveLanternGroundCharge_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ReceiveBeginPlay");

	ARadioActiveLanternGroundCharge_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Set Charge Variable Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicast                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           triggerEvent                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicastEvent                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::Set_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool multicast, float fValue, double dValue, bool bBValue, bool triggerEvent, bool multicastEvent, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Set Charge Variable Interface");

	ARadioActiveLanternGroundCharge_C_Set_Charge_Variable_Interface_Params params;
	params.variableType = variableType;
	params.multicast = multicast;
	params.fValue = fValue;
	params.dValue = dValue;
	params.bBValue = bBValue;
	params.triggerEvent = triggerEvent;
	params.multicastEvent = multicastEvent;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.CheckForBatteriesAndUpdate_Multicast
// ()

void ARadioActiveLanternGroundCharge_C::CheckForBatteriesAndUpdate_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.CheckForBatteriesAndUpdate_Multicast");

	ARadioActiveLanternGroundCharge_C_CheckForBatteriesAndUpdate_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Interface Check for Batteries and Update Multicast
// ()

void ARadioActiveLanternGroundCharge_C::Interface_Check_for_Batteries_and_Update_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Interface Check for Batteries and Update Multicast");

	ARadioActiveLanternGroundCharge_C_Interface_Check_for_Batteries_and_Update_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPApplyCustomDurabilityOnPickup
// ()
// Parameters:
// class UPrimalItem**            pickedup                       (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::BPApplyCustomDurabilityOnPickup(class UPrimalItem** pickedup)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPApplyCustomDurabilityOnPickup");

	ARadioActiveLanternGroundCharge_C_BPApplyCustomDurabilityOnPickup_Params params;
	params.pickedup = pickedup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ActivateLantern_Multicast
// ()
// Parameters:
// bool                           fastActivate                   (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::ActivateLantern_Multicast(bool fastActivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ActivateLantern_Multicast");

	ARadioActiveLanternGroundCharge_C_ActivateLantern_Multicast_Params params;
	params.fastActivate = fastActivate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ActivateLantern
// ()
// Parameters:
// bool                           fastActivate                   (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::ActivateLantern(bool fastActivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ActivateLantern");

	ARadioActiveLanternGroundCharge_C_ActivateLantern_Params params;
	params.fastActivate = fastActivate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.TransitionLight
// ()
// Parameters:
// float                          targetIntensity                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           disableVisibility              (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          startingIntensity              (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::TransitionLight(float targetIntensity, bool disableVisibility, float PlayRate, float startingIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.TransitionLight");

	ARadioActiveLanternGroundCharge_C_TransitionLight_Params params;
	params.targetIntensity = targetIntensity;
	params.disableVisibility = disableVisibility;
	params.PlayRate = PlayRate;
	params.startingIntensity = startingIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DestroyChargeBuff_Multicast
// ()

void ARadioActiveLanternGroundCharge_C::DestroyChargeBuff_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DestroyChargeBuff_Multicast");

	ARadioActiveLanternGroundCharge_C_DestroyChargeBuff_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.CreateChargeBuff_Multicast
// ()

void ARadioActiveLanternGroundCharge_C::CreateChargeBuff_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.CreateChargeBuff_Multicast");

	ARadioActiveLanternGroundCharge_C_CreateChargeBuff_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.OnLightModeChanged_Multicast
// ()
// Parameters:
// int                            lightMode                      (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::OnLightModeChanged_Multicast(int lightMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.OnLightModeChanged_Multicast");

	ARadioActiveLanternGroundCharge_C_OnLightModeChanged_Multicast_Params params;
	params.lightMode = lightMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.OnLightModeChanged
// ()
// Parameters:
// int                            lightMode                      (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::OnLightModeChanged(int lightMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.OnLightModeChanged");

	ARadioActiveLanternGroundCharge_C_OnLightModeChanged_Params params;
	params.lightMode = lightMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Boolean
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::ChargeVariableEvent_Boolean(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Boolean");

	ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Boolean_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Float
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::ChargeVariableEvent_Float(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Float");

	ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Float_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Float_Multicast
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::ChargeVariableEvent_Float_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Float_Multicast");

	ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Float_Multicast_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Boolean Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::Charge_Variable_Event_Boolean_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Boolean Interface");

	ARadioActiveLanternGroundCharge_C_Charge_Variable_Event_Boolean_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEventFloatInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::ChargeVariableEventFloatInterface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEventFloatInterface");

	ARadioActiveLanternGroundCharge_C_ChargeVariableEventFloatInterface_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Boolean_Multicast
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::ChargeVariableEvent_Boolean_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Boolean_Multicast");

	ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Boolean_Multicast_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Boolean MulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::Charge_Variable_Event_Boolean_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Boolean MulticastInterface");

	ARadioActiveLanternGroundCharge_C_Charge_Variable_Event_Boolean_MulticastInterface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Float Multicast Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::Charge_Variable_Event_Float_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Float Multicast Interface");

	ARadioActiveLanternGroundCharge_C_Charge_Variable_Event_Float_Multicast_Interface_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Double
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::ChargeVariableEvent_Double(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Double");

	ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Double_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Double_Multicast
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::ChargeVariableEvent_Double_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Double_Multicast");

	ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Double_Multicast_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEventDoubleInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::ChargeVariableEventDoubleInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEventDoubleInterface");

	ARadioActiveLanternGroundCharge_C_ChargeVariableEventDoubleInterface_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Double MulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::Charge_Variable_Event_Double_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Double MulticastInterface");

	ARadioActiveLanternGroundCharge_C_Charge_Variable_Event_Double_MulticastInterface_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.CreateChargeBuff
// ()

void ARadioActiveLanternGroundCharge_C::CreateChargeBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.CreateChargeBuff");

	ARadioActiveLanternGroundCharge_C_CreateChargeBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DeactivateLantern
// ()
// Parameters:
// bool                           Fast                           (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::DeactivateLantern(bool Fast)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DeactivateLantern");

	ARadioActiveLanternGroundCharge_C_DeactivateLantern_Params params;
	params.Fast = Fast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DeactivateLantern_Multicast
// ()
// Parameters:
// bool                           Fast                           (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::DeactivateLantern_Multicast(bool Fast)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DeactivateLantern_Multicast");

	ARadioActiveLanternGroundCharge_C_DeactivateLantern_Multicast_Params params;
	params.Fast = Fast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEventIntInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::ChargeVariableEventIntInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEventIntInterface");

	ARadioActiveLanternGroundCharge_C_ChargeVariableEventIntInterface_Params params;
	params.variableType = variableType;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEventIntMulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::ChargeVariableEventIntMulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEventIntMulticastInterface");

	ARadioActiveLanternGroundCharge_C_ChargeVariableEventIntMulticastInterface_Params params;
	params.variableType = variableType;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Int
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::ChargeVariableEvent_Int(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Int");

	ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Int_Params params;
	params.variableType = variableType;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Int_Multicast
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::ChargeVariableEvent_Int_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Int_Multicast");

	ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Int_Multicast_Params params;
	params.variableType = variableType;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.InitialUpdateMaterial
// ()
// Parameters:
// bool                           StaticMesh                     (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::InitialUpdateMaterial(bool StaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.InitialUpdateMaterial");

	ARadioActiveLanternGroundCharge_C_InitialUpdateMaterial_Params params;
	params.StaticMesh = StaticMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.OnChargeFromBatteriesChanged_Multicast
// ()
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::OnChargeFromBatteriesChanged_Multicast(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.OnChargeFromBatteriesChanged_Multicast");

	ARadioActiveLanternGroundCharge_C_OnChargeFromBatteriesChanged_Multicast_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.StartPlacement_Multicast
// ()
// Parameters:
// class AShooterCharacter*       constructor                    (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::StartPlacement_Multicast(class AShooterCharacter* constructor)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.StartPlacement_Multicast");

	ARadioActiveLanternGroundCharge_C_StartPlacement_Multicast_Params params;
	params.constructor = constructor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.PlacementAnimationTickEvent
// ()

void ARadioActiveLanternGroundCharge_C::PlacementAnimationTickEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.PlacementAnimationTickEvent");

	ARadioActiveLanternGroundCharge_C_PlacementAnimationTickEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DebugCylinders_Multicast
// ()
// Parameters:
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 cylinder1Direction             (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::DebugCylinders_Multicast(const struct FVector& Origin, const struct FVector& cylinder1Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DebugCylinders_Multicast");

	ARadioActiveLanternGroundCharge_C_DebugCylinders_Multicast_Params params;
	params.Origin = Origin;
	params.cylinder1Direction = cylinder1Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ExecuteUbergraph_RadioActiveLanternGroundCharge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARadioActiveLanternGroundCharge_C::ExecuteUbergraph_RadioActiveLanternGroundCharge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ExecuteUbergraph_RadioActiveLanternGroundCharge");

	ARadioActiveLanternGroundCharge_C_ExecuteUbergraph_RadioActiveLanternGroundCharge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
