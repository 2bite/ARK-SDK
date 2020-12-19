// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.EmitterIsBuffOfType
// ()
// Parameters:
// TEnumAsByte<E_ChargeManagerType> typeToCheck                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isOfType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::EmitterIsBuffOfType(TEnumAsByte<E_ChargeManagerType> typeToCheck, bool* isOfType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.EmitterIsBuffOfType");

	ABuff_ChargeEmitter_C_EmitterIsBuffOfType_Params params;
	params.typeToCheck = typeToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isOfType != nullptr)
		*isOfType = params.isOfType;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Get Extra Charge Consumed Multiplier for Receiver
// ()
// Parameters:
// class ABuff_ChargeManager_C*   Receiver                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          retMultiplier                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::Get_Extra_Charge_Consumed_Multiplier_for_Receiver(class ABuff_ChargeManager_C* Receiver, float* retMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Get Extra Charge Consumed Multiplier for Receiver");

	ABuff_ChargeEmitter_C_Get_Extra_Charge_Consumed_Multiplier_for_Receiver_Params params;
	params.Receiver = Receiver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retMultiplier != nullptr)
		*retMultiplier = params.retMultiplier;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetDistanceAndAngleCheckOrigin
// ()
// Parameters:
// class AActor*                  emitterActor                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 distanceAngleOrigin            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::GetDistanceAndAngleCheckOrigin(class AActor* emitterActor, struct FVector* distanceAngleOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetDistanceAndAngleCheckOrigin");

	ABuff_ChargeEmitter_C_GetDistanceAndAngleCheckOrigin_Params params;
	params.emitterActor = emitterActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (distanceAngleOrigin != nullptr)
		*distanceAngleOrigin = params.distanceAngleOrigin;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.TakeChargeConsumedByReceivers
// ()
// Parameters:
// float                          chargeToTake                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::TakeChargeConsumedByReceivers(float chargeToTake)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.TakeChargeConsumedByReceivers");

	ABuff_ChargeEmitter_C_TakeChargeConsumedByReceivers_Params params;
	params.chargeToTake = chargeToTake;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetChargeVariableExternalEmitter
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ivalue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::GetChargeVariableExternalEmitter(TEnumAsByte<E_ChargeVariableNames> variableType, float* fValue, double* dValue, bool* bBValue, int* ivalue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetChargeVariableExternalEmitter");

	ABuff_ChargeEmitter_C_GetChargeVariableExternalEmitter_Params params;
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


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.ShouldProcessChargeConsumedByReceivers
// ()
// Parameters:
// bool                           shouldProcess                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::ShouldProcessChargeConsumedByReceivers(bool* shouldProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.ShouldProcessChargeConsumedByReceivers");

	ABuff_ChargeEmitter_C_ShouldProcessChargeConsumedByReceivers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldProcess != nullptr)
		*shouldProcess = params.shouldProcess;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnChargeConsumedByReceiversChanged
// ()
// Parameters:
// float                          newCharge                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::OnChargeConsumedByReceiversChanged(float newCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnChargeConsumedByReceiversChanged");

	ABuff_ChargeEmitter_C_OnChargeConsumedByReceiversChanged_Params params;
	params.newCharge = newCharge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.WillReceiverAffectChargeConsumption
// ()
// Parameters:
// class ABuff_ChargeManager_C*   Receiver                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canProcess                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::WillReceiverAffectChargeConsumption(class ABuff_ChargeManager_C* Receiver, bool* canProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.WillReceiverAffectChargeConsumption");

	ABuff_ChargeEmitter_C_WillReceiverAffectChargeConsumption_Params params;
	params.Receiver = Receiver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canProcess != nullptr)
		*canProcess = params.canProcess;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Is Valid Receiver for Charge Consumption
// ()
// Parameters:
// class ABuff_ChargeManager_C*   Receiver                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::Is_Valid_Receiver_for_Charge_Consumption(class ABuff_ChargeManager_C* Receiver, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Is Valid Receiver for Charge Consumption");

	ABuff_ChargeEmitter_C_Is_Valid_Receiver_for_Charge_Consumption_Params params;
	params.Receiver = Receiver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Process Charge Consumed by Receivers
// ()

void ABuff_ChargeEmitter_C::Process_Charge_Consumed_by_Receivers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Process Charge Consumed by Receivers");

	ABuff_ChargeEmitter_C_Process_Charge_Consumed_by_Receivers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Can Process New Receiver For Charge Consumption
// ()
// Parameters:
// bool                           canProcess                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::Can_Process_New_Receiver_For_Charge_Consumption(bool* canProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Can Process New Receiver For Charge Consumption");

	ABuff_ChargeEmitter_C_Can_Process_New_Receiver_For_Charge_Consumption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canProcess != nullptr)
		*canProcess = params.canProcess;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetRadiusForDistanceCheck
// ()
// Parameters:
// float                          radiusForCheck                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::GetRadiusForDistanceCheck(float* radiusForCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetRadiusForDistanceCheck");

	ABuff_ChargeEmitter_C_GetRadiusForDistanceCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (radiusForCheck != nullptr)
		*radiusForCheck = params.radiusForCheck;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnActorEnteredEmitterArea
// ()
// Parameters:
// class AActor*                  enteringActor                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::OnActorEnteredEmitterArea(class AActor* enteringActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnActorEnteredEmitterArea");

	ABuff_ChargeEmitter_C_OnActorEnteredEmitterArea_Params params;
	params.enteringActor = enteringActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetEmitterLineTraceOrigin
// ()
// Parameters:
// class AActor*                  emitterActor                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 lineTraceOrigin                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::GetEmitterLineTraceOrigin(class AActor* emitterActor, struct FVector* lineTraceOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetEmitterLineTraceOrigin");

	ABuff_ChargeEmitter_C_GetEmitterLineTraceOrigin_Params params;
	params.emitterActor = emitterActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (lineTraceOrigin != nullptr)
		*lineTraceOrigin = params.lineTraceOrigin;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.On EnteredEmitterRadius
// ()
// Parameters:
// class ABuff_ChargeManager_C*   chargeReceiver                 (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::On_EnteredEmitterRadius(class ABuff_ChargeManager_C* chargeReceiver)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.On EnteredEmitterRadius");

	ABuff_ChargeEmitter_C_On_EnteredEmitterRadius_Params params;
	params.chargeReceiver = chargeReceiver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetActorsToIgnoreOnRaycast
// ()
// Parameters:
// class AActor*                  emitterActor                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (Parm, OutParm, ZeroConstructor)

void ABuff_ChargeEmitter_C::GetActorsToIgnoreOnRaycast(class AActor* emitterActor, TArray<class AActor*>* ActorsToIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetActorsToIgnoreOnRaycast");

	ABuff_ChargeEmitter_C_GetActorsToIgnoreOnRaycast_Params params;
	params.emitterActor = emitterActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorsToIgnore != nullptr)
		*ActorsToIgnore = params.ActorsToIgnore;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetEmitterActor
// ()
// Parameters:
// class AActor*                  emitterActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::GetEmitterActor(class AActor** emitterActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetEmitterActor");

	ABuff_ChargeEmitter_C_GetEmitterActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (emitterActor != nullptr)
		*emitterActor = params.emitterActor;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Is Point Affected By Emitter
// (NetReliable, NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Private, Protected, HasDefaults, NetClient, BlueprintCallable, Const)
// Parameters:
// struct FVector                 affectedPoint                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  requestingActor                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isAffected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::Is_Point_Affected_By_Emitter(const struct FVector& affectedPoint, class AActor* requestingActor, bool* isAffected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Is Point Affected By Emitter");

	ABuff_ChargeEmitter_C_Is_Point_Affected_By_Emitter_Params params;
	params.affectedPoint = affectedPoint;
	params.requestingActor = requestingActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isAffected != nullptr)
		*isAffected = params.isAffected;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Take Harvesting Charge From Character
// ()
// Parameters:
// float                          chargeHarvested                (Parm, ZeroConstructor, IsPlainOldData)
// float                          chargeTaken                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::Take_Harvesting_Charge_From_Character(float chargeHarvested, float* chargeTaken)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Take Harvesting Charge From Character");

	ABuff_ChargeEmitter_C_Take_Harvesting_Charge_From_Character_Params params;
	params.chargeHarvested = chargeHarvested;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (chargeTaken != nullptr)
		*chargeTaken = params.chargeTaken;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnChargeHarvested
// ()
// Parameters:
// float                          amountHarvested                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::OnChargeHarvested(float amountHarvested)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnChargeHarvested");

	ABuff_ChargeEmitter_C_OnChargeHarvested_Params params;
	params.amountHarvested = amountHarvested;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.InitializeManager
// ()
// Parameters:
// class AActor**                 Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::InitializeManager(class AActor** Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.InitializeManager");

	ABuff_ChargeEmitter_C_InitializeManager_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnEmitterIsActiveChanged
// ()

void ABuff_ChargeEmitter_C::OnEmitterIsActiveChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnEmitterIsActiveChanged");

	ABuff_ChargeEmitter_C_OnEmitterIsActiveChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.ChargeVariableEvent
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames>* variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double*                        dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ivalue                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::ChargeVariableEvent(TEnumAsByte<E_ChargeVariableNames>* variableType, bool* bBValue, float* fValue, double* dValue, int* ivalue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.ChargeVariableEvent");

	ABuff_ChargeEmitter_C_ChargeVariableEvent_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.ivalue = ivalue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnEmitterRangeChanged
// ()

void ABuff_ChargeEmitter_C::OnEmitterRangeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnEmitterRangeChanged");

	ABuff_ChargeEmitter_C_OnEmitterRangeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Is EmitterAvailableForHarvesting
// ()
// Parameters:
// bool                           available                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::Is_EmitterAvailableForHarvesting(bool* available)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Is EmitterAvailableForHarvesting");

	ABuff_ChargeEmitter_C_Is_EmitterAvailableForHarvesting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (available != nullptr)
		*available = params.available;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetEmitterForwardVector
// ()
// Parameters:
// struct FVector                 ForwardVector                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::GetEmitterForwardVector(struct FVector* ForwardVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetEmitterForwardVector");

	ABuff_ChargeEmitter_C_GetEmitterForwardVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForwardVector != nullptr)
		*ForwardVector = params.ForwardVector;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.CanPlayerHarvest
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           toBattery                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canHarvest                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::CanPlayerHarvest(class APlayerController* Controller, bool toBattery, bool* canHarvest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.CanPlayerHarvest");

	ABuff_ChargeEmitter_C_CanPlayerHarvest_Params params;
	params.Controller = Controller;
	params.toBattery = toBattery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canHarvest != nullptr)
		*canHarvest = params.canHarvest;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.HarvestCharge
// ()
// Parameters:
// bool                           MountedDino                    (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::HarvestCharge(bool MountedDino, class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.HarvestCharge");

	ABuff_ChargeEmitter_C_HarvestCharge_Params params;
	params.MountedDino = MountedDino;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, HasDefaults, NetClient, BlueprintCallable, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABuff_ChargeEmitter_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BPGetMultiUseEntries");

	ABuff_ChargeEmitter_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_ChargeEmitter_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BPTryMultiUse");

	ABuff_ChargeEmitter_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BPDeactivated");

	ABuff_ChargeEmitter_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.ShouldEnableTimers
// ()
// Parameters:
// bool                           tickServer                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           TickClient                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::ShouldEnableTimers(bool* tickServer, bool* TickClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.ShouldEnableTimers");

	ABuff_ChargeEmitter_C_ShouldEnableTimers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (tickServer != nullptr)
		*tickServer = params.tickServer;
	if (TickClient != nullptr)
		*TickClient = params.TickClient;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.EmitterShouldUpdateChargeOnTimer
// ()
// Parameters:
// bool                           shouldUpdateOnTimer            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::EmitterShouldUpdateChargeOnTimer(bool* shouldUpdateOnTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.EmitterShouldUpdateChargeOnTimer");

	ABuff_ChargeEmitter_C_EmitterShouldUpdateChargeOnTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldUpdateOnTimer != nullptr)
		*shouldUpdateOnTimer = params.shouldUpdateOnTimer;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BuffTickClient");

	ABuff_ChargeEmitter_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.EmitterUpdateChargeOnTimer
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::EmitterUpdateChargeOnTimer(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.EmitterUpdateChargeOnTimer");

	ABuff_ChargeEmitter_C_EmitterUpdateChargeOnTimer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BuffTickServer");

	ABuff_ChargeEmitter_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.CanEmitCharge
// ()
// Parameters:
// bool                           canEmit                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::CanEmitCharge(bool* canEmit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.CanEmitCharge");

	ABuff_ChargeEmitter_C_CanEmitCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canEmit != nullptr)
		*canEmit = params.canEmit;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Is ActorAffected by Emitter
// (NetResponse, MulticastDelegate, Private, Protected, HasDefaults, NetClient, BlueprintCallable, Const)
// Parameters:
// class AActor*                  affectedActor                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           skipLineTrace                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isAffected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::Is_ActorAffected_by_Emitter(class AActor* affectedActor, bool skipLineTrace, bool* isAffected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Is ActorAffected by Emitter");

	ABuff_ChargeEmitter_C_Is_ActorAffected_by_Emitter_Params params;
	params.affectedActor = affectedActor;
	params.skipLineTrace = skipLineTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isAffected != nullptr)
		*isAffected = params.isAffected;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.UserConstructionScript
// ()

void ABuff_ChargeEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.UserConstructionScript");

	ABuff_ChargeEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeInTimeline__FinishedFunc
// ()

void ABuff_ChargeEmitter_C::FadeInTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeInTimeline__FinishedFunc");

	ABuff_ChargeEmitter_C_FadeInTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeInTimeline__UpdateFunc
// ()

void ABuff_ChargeEmitter_C::FadeInTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeInTimeline__UpdateFunc");

	ABuff_ChargeEmitter_C_FadeInTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeOutTimeline__FinishedFunc
// ()

void ABuff_ChargeEmitter_C::FadeOutTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeOutTimeline__FinishedFunc");

	ABuff_ChargeEmitter_C_FadeOutTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeOutTimeline__UpdateFunc
// ()

void ABuff_ChargeEmitter_C::FadeOutTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeOutTimeline__UpdateFunc");

	ABuff_ChargeEmitter_C_FadeOutTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeInPulse
// ()

void ABuff_ChargeEmitter_C::FadeInPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeInPulse");

	ABuff_ChargeEmitter_C_FadeInPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeInPulse_Multicast
// ()

void ABuff_ChargeEmitter_C::FadeInPulse_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeInPulse_Multicast");

	ABuff_ChargeEmitter_C_FadeInPulse_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeOutPulse
// ()

void ABuff_ChargeEmitter_C::FadeOutPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeOutPulse");

	ABuff_ChargeEmitter_C_FadeOutPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeOutPulse_Multicast
// ()

void ABuff_ChargeEmitter_C::FadeOutPulse_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeOutPulse_Multicast");

	ABuff_ChargeEmitter_C_FadeOutPulse_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.UpdateEmitterEffectsRadius
// ()

void ABuff_ChargeEmitter_C::UpdateEmitterEffectsRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.UpdateEmitterEffectsRadius");

	ABuff_ChargeEmitter_C_UpdateEmitterEffectsRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.UpdateEmitterEffectsRadius_Multicast
// ()

void ABuff_ChargeEmitter_C::UpdateEmitterEffectsRadius_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.UpdateEmitterEffectsRadius_Multicast");

	ABuff_ChargeEmitter_C_UpdateEmitterEffectsRadius_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.InitializeEmitter
// ()

void ABuff_ChargeEmitter_C::InitializeEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.InitializeEmitter");

	ABuff_ChargeEmitter_C_InitializeEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.ExecuteUbergraph_Buff_ChargeEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_C::ExecuteUbergraph_Buff_ChargeEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.ExecuteUbergraph_Buff_ChargeEmitter");

	ABuff_ChargeEmitter_C_ExecuteUbergraph_Buff_ChargeEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
