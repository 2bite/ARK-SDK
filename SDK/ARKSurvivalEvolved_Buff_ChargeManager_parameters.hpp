#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeManager_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ChargeManager.Buff_ChargeManager_C.ManagerCustomEvent
struct ABuff_ChargeManager_C_ManagerCustomEvent_Params
{
	class AActor*                                      requestingActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_ChargeManagerType>                   requiresManagerOfType;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.ManagerIsBuffOfType
struct ABuff_ChargeManager_C_ManagerIsBuffOfType_Params
{
	TEnumAsByte<E_ChargeManagerType>                   typeToCheck;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isOfType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.Should Receive Charge FromEmitter
struct ABuff_ChargeManager_C_Should_Receive_Charge_FromEmitter_Params
{
	class ABuff_ChargeEmitter_C*                       Emitter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               shouldReceive;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.GetChargeVariableExternalManager
struct ABuff_ChargeManager_C_GetChargeVariableExternalManager_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.Update Tick Delta Time
struct ABuff_ChargeManager_C_Update_Tick_Delta_Time_Params
{
	float                                              deltaTimeServer;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              deltaTimeClient;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.ForceEnableTimer
struct ABuff_ChargeManager_C_ForceEnableTimer_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.On Batteries Charged Client
struct ABuff_ChargeManager_C_On_Batteries_Charged_Client_Params
{
	float                                              chargeAdded;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.Batteries Logic Client
struct ABuff_ChargeManager_C_Batteries_Logic_Client_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.Pre Timer Modify Charge Actions
struct ABuff_ChargeManager_C_Pre_Timer_Modify_Charge_Actions_Params
{
	bool                                               shouldSkipModify;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.Get Charge Actor Inventory And Items
struct ABuff_ChargeManager_C_Get_Charge_Actor_Inventory_And_Items_Params
{
	class AActor*                                      OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPrimalItem*>                         ownerItems;                                               // (Parm, OutParm, ZeroConstructor)
	class UPrimalInventoryComponent*                   actorInventory;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.Add Charge To Batteries Parallel
struct ABuff_ChargeManager_C_Add_Charge_To_Batteries_Parallel_Params
{
	float                                              amountToAddPerBattery;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      inventoryOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               takeChargeFromBuff;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicastCharge;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              maxChargeToAdd;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceUseAllCharge;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              chargeAddedToBattery;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                accessedBatteries;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.GetChargePercent
struct ABuff_ChargeManager_C_GetChargePercent_Params
{
	float                                              OutPercent;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.ShouldExecuteBatteriesLogic
struct ABuff_ChargeManager_C_ShouldExecuteBatteriesLogic_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.DestroyBuff
struct ABuff_ChargeManager_C_DestroyBuff_Params
{
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.AddChargeToBattery
struct ABuff_ChargeManager_C_AddChargeToBattery_Params
{
	class UPrimalItem_ChargeBattery_C*                 battery;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               takeChargeFromBuff;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicastCharge;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              chargeToAdd;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              chargeAddedToBattery;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              chargeTakenFromBuff;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.Batteries Logic Server
struct ABuff_ChargeManager_C_Batteries_Logic_Server_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.Take Charge from Batteries
struct ABuff_ChargeManager_C_Take_Charge_from_Batteries_Params
{
	float                                              AmountToTake;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      inventoryOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               addChargeToBuff;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               updateItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicastCharge;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              chargeTaken;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                accessedBatteries;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.Add Charge to Batteries
struct ABuff_ChargeManager_C_Add_Charge_to_Batteries_Params
{
	float                                              amountToAdd;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      inventoryOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               takeChargeFromBuff;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicastCharge;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              chargeAddedToBattery;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                accessedBatteries;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.OnBatteryItemChange
struct ABuff_ChargeManager_C_OnBatteryItemChange_Params
{
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.Has Relevant Battery in Inventory
struct ABuff_ChargeManager_C_Has_Relevant_Battery_in_Inventory_Params
{
	bool                                               shouldExecuteLogic;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.Check BatteriesAndUpdate
struct ABuff_ChargeManager_C_Check_BatteriesAndUpdate_Params
{
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.ChargeVariableEvent
struct ABuff_ChargeManager_C_ChargeVariableEvent_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.SetChargeVariable
struct ABuff_ChargeManager_C_SetChargeVariable_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicast;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               triggerEvent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicastEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.Get Charge Variable
struct ABuff_ChargeManager_C_Get_Charge_Variable_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 VariableName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.GetChargeMultiplierForSource
struct ABuff_ChargeManager_C_GetChargeMultiplierForSource_Params
{
	class ABuff_ChargeEmitter_C*                       buffSource;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isHarvesting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.AddChargeSource
struct ABuff_ChargeManager_C_AddChargeSource_Params
{
	class ABuff_ChargeEmitter_C*                       Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.ShouldEnableTimers
struct ABuff_ChargeManager_C_ShouldEnableTimers_Params
{
	bool                                               tickServer;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               TickClient;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.InitializeManager
struct ABuff_ChargeManager_C_InitializeManager_Params
{
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.EnableTimersIfNeeded
struct ABuff_ChargeManager_C_EnableTimersIfNeeded_Params
{
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.Should Update Charge On Timer
struct ABuff_ChargeManager_C_Should_Update_Charge_On_Timer_Params
{
	bool                                               shouldUpdateWithTimer;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.isGainingCharge
struct ABuff_ChargeManager_C_isGainingCharge_Params
{
	bool                                               isGainingCharge;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.isGettingCharge
struct ABuff_ChargeManager_C_isGettingCharge_Params
{
	bool                                               isGettingCharge;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.CalculateChargeReceivedPerSecond
struct ABuff_ChargeManager_C_CalculateChargeReceivedPerSecond_Params
{
	float                                              receivedCharge;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.OnChargeEvent
struct ABuff_ChargeManager_C_OnChargeEvent_Params
{
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.IsFirstCharge
struct ABuff_ChargeManager_C_IsFirstCharge_Params
{
	bool                                               IsFirstCharge;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.BuffTickClient
struct ABuff_ChargeManager_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.Modify Charge
struct ABuff_ChargeManager_C_Modify_Charge_Params
{
	bool                                               SetValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicast;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               triggerEvent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicastEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              chargeAdded;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.Update Charge on Timer
struct ABuff_ChargeManager_C_Update_Charge_on_Timer_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.Get ChargeInEnvironment
struct ABuff_ChargeManager_C_Get_ChargeInEnvironment_Params
{
	bool                                               getRawValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              receivedCharge;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.BuffTickServer
struct ABuff_ChargeManager_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.OnReceivedCharge
struct ABuff_ChargeManager_C_OnReceivedCharge_Params
{
	float                                              chargeAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.CanReceive Charge
struct ABuff_ChargeManager_C_CanReceive_Charge_Params
{
	bool                                               canReceive;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.UserConstructionScript
struct ABuff_ChargeManager_C_UserConstructionScript_Params
{
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.OnIsReceiverChange
struct ABuff_ChargeManager_C_OnIsReceiverChange_Params
{
};

// Function Buff_ChargeManager.Buff_ChargeManager_C.ExecuteUbergraph_Buff_ChargeManager
struct ABuff_ChargeManager_C_ExecuteUbergraph_Buff_ChargeManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
