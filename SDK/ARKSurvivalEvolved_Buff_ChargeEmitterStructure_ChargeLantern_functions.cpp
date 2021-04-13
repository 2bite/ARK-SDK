// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitterStructure_ChargeLantern_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.GetDistanceAndAngleCheckOrigin
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, Public, Private, HasDefaults, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// class AActor**                 emitterActor                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 distanceAngleOrigin            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterStructure_ChargeLantern_C::STATIC_GetDistanceAndAngleCheckOrigin(class AActor** emitterActor, struct FVector* distanceAngleOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.GetDistanceAndAngleCheckOrigin");

	ABuff_ChargeEmitterStructure_ChargeLantern_C_GetDistanceAndAngleCheckOrigin_Params params;
	params.emitterActor = emitterActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (distanceAngleOrigin != nullptr)
		*distanceAngleOrigin = params.distanceAngleOrigin;
}


// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterStructure_ChargeLantern_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.BuffTickClient");

	ABuff_ChargeEmitterStructure_ChargeLantern_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.TakeChargeConsumedByReceivers
// ()
// Parameters:
// float*                         chargeToTake                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterStructure_ChargeLantern_C::TakeChargeConsumedByReceivers(float* chargeToTake)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.TakeChargeConsumedByReceivers");

	ABuff_ChargeEmitterStructure_ChargeLantern_C_TakeChargeConsumedByReceivers_Params params;
	params.chargeToTake = chargeToTake;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.WillReceiverAffectChargeConsumption
// ()
// Parameters:
// class ABuff_ChargeManager_C**  Receiver                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canProcess                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterStructure_ChargeLantern_C::WillReceiverAffectChargeConsumption(class ABuff_ChargeManager_C** Receiver, bool* canProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.WillReceiverAffectChargeConsumption");

	ABuff_ChargeEmitterStructure_ChargeLantern_C_WillReceiverAffectChargeConsumption_Params params;
	params.Receiver = Receiver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canProcess != nullptr)
		*canProcess = params.canProcess;
}


// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.Is Valid Receiver for Charge Consumption
// ()
// Parameters:
// class ABuff_ChargeManager_C**  Receiver                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterStructure_ChargeLantern_C::Is_Valid_Receiver_for_Charge_Consumption(class ABuff_ChargeManager_C** Receiver, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.Is Valid Receiver for Charge Consumption");

	ABuff_ChargeEmitterStructure_ChargeLantern_C_Is_Valid_Receiver_for_Charge_Consumption_Params params;
	params.Receiver = Receiver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.OnChargeConsumedByReceiversChanged
// ()
// Parameters:
// float*                         newCharge                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterStructure_ChargeLantern_C::OnChargeConsumedByReceiversChanged(float* newCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.OnChargeConsumedByReceiversChanged");

	ABuff_ChargeEmitterStructure_ChargeLantern_C_OnChargeConsumedByReceiversChanged_Params params;
	params.newCharge = newCharge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.ShouldProcessChargeConsumedByReceivers
// ()
// Parameters:
// bool                           shouldProcess                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterStructure_ChargeLantern_C::ShouldProcessChargeConsumedByReceivers(bool* shouldProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.ShouldProcessChargeConsumedByReceivers");

	ABuff_ChargeEmitterStructure_ChargeLantern_C_ShouldProcessChargeConsumedByReceivers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldProcess != nullptr)
		*shouldProcess = params.shouldProcess;
}


// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.Can Process New Receiver For Charge Consumption
// ()
// Parameters:
// bool                           canProcess                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterStructure_ChargeLantern_C::Can_Process_New_Receiver_For_Charge_Consumption(bool* canProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.Can Process New Receiver For Charge Consumption");

	ABuff_ChargeEmitterStructure_ChargeLantern_C_Can_Process_New_Receiver_For_Charge_Consumption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canProcess != nullptr)
		*canProcess = params.canProcess;
}


// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.GetEmitterForwardVector
// ()
// Parameters:
// struct FVector                 ForwardVector                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterStructure_ChargeLantern_C::GetEmitterForwardVector(struct FVector* ForwardVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.GetEmitterForwardVector");

	ABuff_ChargeEmitterStructure_ChargeLantern_C_GetEmitterForwardVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForwardVector != nullptr)
		*ForwardVector = params.ForwardVector;
}


// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.GetEmitterLineTraceOrigin
// (NetReliable, NetRequest, Native, Event, NetMulticast, Public, Private, HasDefaults, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// class AActor**                 emitterActor                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 lineTraceOrigin                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterStructure_ChargeLantern_C::GetEmitterLineTraceOrigin(class AActor** emitterActor, struct FVector* lineTraceOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.GetEmitterLineTraceOrigin");

	ABuff_ChargeEmitterStructure_ChargeLantern_C_GetEmitterLineTraceOrigin_Params params;
	params.emitterActor = emitterActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (lineTraceOrigin != nullptr)
		*lineTraceOrigin = params.lineTraceOrigin;
}


// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.Modify Charge
// ()
// Parameters:
// bool*                          SetValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         amount                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          multicast                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          triggerEvent                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          multicastEvent                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          chargeAdded                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterStructure_ChargeLantern_C::Modify_Charge(bool* SetValue, float* amount, bool* multicast, bool* triggerEvent, bool* multicastEvent, float* chargeAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.Modify Charge");

	ABuff_ChargeEmitterStructure_ChargeLantern_C_Modify_Charge_Params params;
	params.SetValue = SetValue;
	params.amount = amount;
	params.multicast = multicast;
	params.triggerEvent = triggerEvent;
	params.multicastEvent = multicastEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (chargeAdded != nullptr)
		*chargeAdded = params.chargeAdded;
}


// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.EmitterUpdateChargeOnTimer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterStructure_ChargeLantern_C::EmitterUpdateChargeOnTimer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.EmitterUpdateChargeOnTimer");

	ABuff_ChargeEmitterStructure_ChargeLantern_C_EmitterUpdateChargeOnTimer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.ShouldEnableTimers
// ()
// Parameters:
// bool                           tickServer                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           TickClient                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterStructure_ChargeLantern_C::ShouldEnableTimers(bool* tickServer, bool* TickClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.ShouldEnableTimers");

	ABuff_ChargeEmitterStructure_ChargeLantern_C_ShouldEnableTimers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (tickServer != nullptr)
		*tickServer = params.tickServer;
	if (TickClient != nullptr)
		*TickClient = params.TickClient;
}


// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.ChargeVariableEvent
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames>* variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double*                        dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterStructure_ChargeLantern_C::ChargeVariableEvent(TEnumAsByte<E_ChargeVariableNames>* variableType, bool* bBValue, float* fValue, double* dValue, int* iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.ChargeVariableEvent");

	ABuff_ChargeEmitterStructure_ChargeLantern_C_ChargeVariableEvent_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.InitializeEmitter
// (NetReliable, Native, Static, NetMulticast, Public, Private, HasDefaults, DLLImport, BlueprintEvent, Const, NetValidate)

void ABuff_ChargeEmitterStructure_ChargeLantern_C::STATIC_InitializeEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.InitializeEmitter");

	ABuff_ChargeEmitterStructure_ChargeLantern_C_InitializeEmitter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.UserConstructionScript
// ()

void ABuff_ChargeEmitterStructure_ChargeLantern_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.UserConstructionScript");

	ABuff_ChargeEmitterStructure_ChargeLantern_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.ExecuteUbergraph_Buff_ChargeEmitterStructure_ChargeLantern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterStructure_ChargeLantern_C::ExecuteUbergraph_Buff_ChargeEmitterStructure_ChargeLantern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.ExecuteUbergraph_Buff_ChargeEmitterStructure_ChargeLantern");

	ABuff_ChargeEmitterStructure_ChargeLantern_C_ExecuteUbergraph_Buff_ChargeEmitterStructure_ChargeLantern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
