#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitterStructure_ChargeLantern_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.GetDistanceAndAngleCheckOrigin
struct ABuff_ChargeEmitterStructure_ChargeLantern_C_GetDistanceAndAngleCheckOrigin_Params
{
	class AActor**                                     emitterActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     distanceAngleOrigin;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.BuffTickClient
struct ABuff_ChargeEmitterStructure_ChargeLantern_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.TakeChargeConsumedByReceivers
struct ABuff_ChargeEmitterStructure_ChargeLantern_C_TakeChargeConsumedByReceivers_Params
{
	float*                                             chargeToTake;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.WillReceiverAffectChargeConsumption
struct ABuff_ChargeEmitterStructure_ChargeLantern_C_WillReceiverAffectChargeConsumption_Params
{
	class ABuff_ChargeManager_C**                      Receiver;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canProcess;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.Is Valid Receiver for Charge Consumption
struct ABuff_ChargeEmitterStructure_ChargeLantern_C_Is_Valid_Receiver_for_Charge_Consumption_Params
{
	class ABuff_ChargeManager_C**                      Receiver;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.OnChargeConsumedByReceiversChanged
struct ABuff_ChargeEmitterStructure_ChargeLantern_C_OnChargeConsumedByReceiversChanged_Params
{
	float*                                             newCharge;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.ShouldProcessChargeConsumedByReceivers
struct ABuff_ChargeEmitterStructure_ChargeLantern_C_ShouldProcessChargeConsumedByReceivers_Params
{
	bool                                               shouldProcess;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.Can Process New Receiver For Charge Consumption
struct ABuff_ChargeEmitterStructure_ChargeLantern_C_Can_Process_New_Receiver_For_Charge_Consumption_Params
{
	bool                                               canProcess;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.GetEmitterForwardVector
struct ABuff_ChargeEmitterStructure_ChargeLantern_C_GetEmitterForwardVector_Params
{
	struct FVector                                     ForwardVector;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.GetEmitterLineTraceOrigin
struct ABuff_ChargeEmitterStructure_ChargeLantern_C_GetEmitterLineTraceOrigin_Params
{
	class AActor**                                     emitterActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     lineTraceOrigin;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.Modify Charge
struct ABuff_ChargeEmitterStructure_ChargeLantern_C_Modify_Charge_Params
{
	bool*                                              SetValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              multicast;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              triggerEvent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              multicastEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              chargeAdded;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.EmitterUpdateChargeOnTimer
struct ABuff_ChargeEmitterStructure_ChargeLantern_C_EmitterUpdateChargeOnTimer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.ShouldEnableTimers
struct ABuff_ChargeEmitterStructure_ChargeLantern_C_ShouldEnableTimers_Params
{
	bool                                               tickServer;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               TickClient;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.ChargeVariableEvent
struct ABuff_ChargeEmitterStructure_ChargeLantern_C_ChargeVariableEvent_Params
{
	TEnumAsByte<E_ChargeVariableNames>*                variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double*                                            dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ivalue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.InitializeEmitter
struct ABuff_ChargeEmitterStructure_ChargeLantern_C_InitializeEmitter_Params
{
};

// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.UserConstructionScript
struct ABuff_ChargeEmitterStructure_ChargeLantern_C_UserConstructionScript_Params
{
};

// Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.ExecuteUbergraph_Buff_ChargeEmitterStructure_ChargeLantern
struct ABuff_ChargeEmitterStructure_ChargeLantern_C_ExecuteUbergraph_Buff_ChargeEmitterStructure_ChargeLantern_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
