#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitter_Strider_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.BPGetHUDElements
struct ABuff_ChargeEmitter_Strider_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.BPGetMultiUseEntries
struct ABuff_ChargeEmitter_Strider_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Get Current Charge
struct ABuff_ChargeEmitter_Strider_C_Get_Current_Charge_Params
{
	float                                              Current_Charge;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.ChargeVariableEvent
struct ABuff_ChargeEmitter_Strider_C_ChargeVariableEvent_Params
{
	TEnumAsByte<E_ChargeVariableNames>*                variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double*                                            dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Modify Charge
struct ABuff_ChargeEmitter_Strider_C_Modify_Charge_Params
{
	bool*                                              SetValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              multicast;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              triggerEvent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              multicastEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              chargeAdded;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Pre Timer Modify Charge Actions
struct ABuff_ChargeEmitter_Strider_C_Pre_Timer_Modify_Charge_Actions_Params
{
	bool                                               shouldSkipModify;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Is Harvest Cooldown Over
struct ABuff_ChargeEmitter_Strider_C_Is_Harvest_Cooldown_Over_Params
{
	bool                                               isOver;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.CanPlayerHarvest
struct ABuff_ChargeEmitter_Strider_C_CanPlayerHarvest_Params
{
	class APlayerController**                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              toBattery;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canHarvest;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.CanEmitCharge
struct ABuff_ChargeEmitter_Strider_C_CanEmitCharge_Params
{
	bool                                               canEmit;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Take Harvesting Charge From Character
struct ABuff_ChargeEmitter_Strider_C_Take_Harvesting_Charge_From_Character_Params
{
	float*                                             chargeHarvested;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              chargeTaken;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.ShouldEnableTimers
struct ABuff_ChargeEmitter_Strider_C_ShouldEnableTimers_Params
{
	bool                                               tickServer;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               TickClient;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.OnChargeHarvested
struct ABuff_ChargeEmitter_Strider_C_OnChargeHarvested_Params
{
	float*                                             amountHarvested;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Is EmitterAvailableForHarvesting
struct ABuff_ChargeEmitter_Strider_C_Is_EmitterAvailableForHarvesting_Params
{
	bool                                               available;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.Should Update Charge On Timer
struct ABuff_ChargeEmitter_Strider_C_Should_Update_Charge_On_Timer_Params
{
	bool                                               shouldUpdateWithTimer;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.CanReceive Charge
struct ABuff_ChargeEmitter_Strider_C_CanReceive_Charge_Params
{
	bool                                               canReceive;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.UserConstructionScript
struct ABuff_ChargeEmitter_Strider_C_UserConstructionScript_Params
{
};

// Function Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C.ExecuteUbergraph_Buff_ChargeEmitter_Strider
struct ABuff_ChargeEmitter_Strider_C_ExecuteUbergraph_Buff_ChargeEmitter_Strider_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
