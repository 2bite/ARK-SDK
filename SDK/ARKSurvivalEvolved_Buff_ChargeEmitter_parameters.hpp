#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitter_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.EmitterIsBuffOfType
struct ABuff_ChargeEmitter_C_EmitterIsBuffOfType_Params
{
	TEnumAsByte<E_ChargeManagerType>                   typeToCheck;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isOfType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Get Extra Charge Consumed Multiplier for Receiver
struct ABuff_ChargeEmitter_C_Get_Extra_Charge_Consumed_Multiplier_for_Receiver_Params
{
	class ABuff_ChargeManager_C*                       Receiver;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              retMultiplier;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetDistanceAndAngleCheckOrigin
struct ABuff_ChargeEmitter_C_GetDistanceAndAngleCheckOrigin_Params
{
	class AActor*                                      emitterActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     distanceAngleOrigin;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.TakeChargeConsumedByReceivers
struct ABuff_ChargeEmitter_C_TakeChargeConsumedByReceivers_Params
{
	float                                              chargeToTake;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetChargeVariableExternalEmitter
struct ABuff_ChargeEmitter_C_GetChargeVariableExternalEmitter_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.ShouldProcessChargeConsumedByReceivers
struct ABuff_ChargeEmitter_C_ShouldProcessChargeConsumedByReceivers_Params
{
	bool                                               shouldProcess;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnChargeConsumedByReceiversChanged
struct ABuff_ChargeEmitter_C_OnChargeConsumedByReceiversChanged_Params
{
	float                                              newCharge;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.WillReceiverAffectChargeConsumption
struct ABuff_ChargeEmitter_C_WillReceiverAffectChargeConsumption_Params
{
	class ABuff_ChargeManager_C*                       Receiver;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canProcess;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Is Valid Receiver for Charge Consumption
struct ABuff_ChargeEmitter_C_Is_Valid_Receiver_for_Charge_Consumption_Params
{
	class ABuff_ChargeManager_C*                       Receiver;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Process Charge Consumed by Receivers
struct ABuff_ChargeEmitter_C_Process_Charge_Consumed_by_Receivers_Params
{
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Can Process New Receiver For Charge Consumption
struct ABuff_ChargeEmitter_C_Can_Process_New_Receiver_For_Charge_Consumption_Params
{
	bool                                               canProcess;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetRadiusForDistanceCheck
struct ABuff_ChargeEmitter_C_GetRadiusForDistanceCheck_Params
{
	float                                              radiusForCheck;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnActorEnteredEmitterArea
struct ABuff_ChargeEmitter_C_OnActorEnteredEmitterArea_Params
{
	class AActor*                                      enteringActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetEmitterLineTraceOrigin
struct ABuff_ChargeEmitter_C_GetEmitterLineTraceOrigin_Params
{
	class AActor*                                      emitterActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     lineTraceOrigin;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.On EnteredEmitterRadius
struct ABuff_ChargeEmitter_C_On_EnteredEmitterRadius_Params
{
	class ABuff_ChargeManager_C*                       chargeReceiver;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetActorsToIgnoreOnRaycast
struct ABuff_ChargeEmitter_C_GetActorsToIgnoreOnRaycast_Params
{
	class AActor*                                      emitterActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetEmitterActor
struct ABuff_ChargeEmitter_C_GetEmitterActor_Params
{
	class AActor*                                      emitterActor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Is Point Affected By Emitter
struct ABuff_ChargeEmitter_C_Is_Point_Affected_By_Emitter_Params
{
	struct FVector                                     affectedPoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      requestingActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isAffected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Take Harvesting Charge From Character
struct ABuff_ChargeEmitter_C_Take_Harvesting_Charge_From_Character_Params
{
	float                                              chargeHarvested;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              chargeTaken;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnChargeHarvested
struct ABuff_ChargeEmitter_C_OnChargeHarvested_Params
{
	float                                              amountHarvested;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.InitializeManager
struct ABuff_ChargeEmitter_C_InitializeManager_Params
{
	class AActor**                                     Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnEmitterIsActiveChanged
struct ABuff_ChargeEmitter_C_OnEmitterIsActiveChanged_Params
{
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.ChargeVariableEvent
struct ABuff_ChargeEmitter_C_ChargeVariableEvent_Params
{
	TEnumAsByte<E_ChargeVariableNames>*                variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double*                                            dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnEmitterRangeChanged
struct ABuff_ChargeEmitter_C_OnEmitterRangeChanged_Params
{
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Is EmitterAvailableForHarvesting
struct ABuff_ChargeEmitter_C_Is_EmitterAvailableForHarvesting_Params
{
	bool                                               available;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetEmitterForwardVector
struct ABuff_ChargeEmitter_C_GetEmitterForwardVector_Params
{
	struct FVector                                     ForwardVector;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.CanPlayerHarvest
struct ABuff_ChargeEmitter_C_CanPlayerHarvest_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               toBattery;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canHarvest;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.HarvestCharge
struct ABuff_ChargeEmitter_C_HarvestCharge_Params
{
	bool                                               MountedDino;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BPGetMultiUseEntries
struct ABuff_ChargeEmitter_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BPTryMultiUse
struct ABuff_ChargeEmitter_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BPDeactivated
struct ABuff_ChargeEmitter_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.ShouldEnableTimers
struct ABuff_ChargeEmitter_C_ShouldEnableTimers_Params
{
	bool                                               tickServer;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               TickClient;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.EmitterShouldUpdateChargeOnTimer
struct ABuff_ChargeEmitter_C_EmitterShouldUpdateChargeOnTimer_Params
{
	bool                                               shouldUpdateOnTimer;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BuffTickClient
struct ABuff_ChargeEmitter_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.EmitterUpdateChargeOnTimer
struct ABuff_ChargeEmitter_C_EmitterUpdateChargeOnTimer_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BuffTickServer
struct ABuff_ChargeEmitter_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.CanEmitCharge
struct ABuff_ChargeEmitter_C_CanEmitCharge_Params
{
	bool                                               canEmit;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Is ActorAffected by Emitter
struct ABuff_ChargeEmitter_C_Is_ActorAffected_by_Emitter_Params
{
	class AActor*                                      affectedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               skipLineTrace;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isAffected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.UserConstructionScript
struct ABuff_ChargeEmitter_C_UserConstructionScript_Params
{
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeInTimeline__FinishedFunc
struct ABuff_ChargeEmitter_C_FadeInTimeline__FinishedFunc_Params
{
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeInTimeline__UpdateFunc
struct ABuff_ChargeEmitter_C_FadeInTimeline__UpdateFunc_Params
{
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeOutTimeline__FinishedFunc
struct ABuff_ChargeEmitter_C_FadeOutTimeline__FinishedFunc_Params
{
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeOutTimeline__UpdateFunc
struct ABuff_ChargeEmitter_C_FadeOutTimeline__UpdateFunc_Params
{
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeInPulse
struct ABuff_ChargeEmitter_C_FadeInPulse_Params
{
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeInPulse_Multicast
struct ABuff_ChargeEmitter_C_FadeInPulse_Multicast_Params
{
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeOutPulse
struct ABuff_ChargeEmitter_C_FadeOutPulse_Params
{
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeOutPulse_Multicast
struct ABuff_ChargeEmitter_C_FadeOutPulse_Multicast_Params
{
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.UpdateEmitterEffectsRadius
struct ABuff_ChargeEmitter_C_UpdateEmitterEffectsRadius_Params
{
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.UpdateEmitterEffectsRadius_Multicast
struct ABuff_ChargeEmitter_C_UpdateEmitterEffectsRadius_Multicast_Params
{
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.InitializeEmitter
struct ABuff_ChargeEmitter_C_InitializeEmitter_Params
{
};

// Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.ExecuteUbergraph_Buff_ChargeEmitter
struct ABuff_ChargeEmitter_C_ExecuteUbergraph_Buff_ChargeEmitter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
