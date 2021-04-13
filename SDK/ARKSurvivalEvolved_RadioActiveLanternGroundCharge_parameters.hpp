#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RadioActiveLanternGroundCharge_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.GetNumBatteries
struct ARadioActiveLanternGroundCharge_C_GetNumBatteries_Params
{
	int                                                numBatteries;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Get Charge Variable Interface
struct ARadioActiveLanternGroundCharge_C_Get_Charge_Variable_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPRefreshedStructureColors
struct ARadioActiveLanternGroundCharge_C_BPRefreshedStructureColors_Params
{
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.PlacementInitialization
struct ARadioActiveLanternGroundCharge_C_PlacementInitialization_Params
{
	class AShooterWeapon*                              constructorWeapon;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Placement TickActions
struct ARadioActiveLanternGroundCharge_C_Placement_TickActions_Params
{
	bool                                               reachedDestination;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPSetPlayerConstructor
struct ARadioActiveLanternGroundCharge_C_BPSetPlayerConstructor_Params
{
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.TickUpdateLightEffects
struct ARadioActiveLanternGroundCharge_C_TickUpdateLightEffects_Params
{
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ShouldLanternDeactivate
struct ARadioActiveLanternGroundCharge_C_ShouldLanternDeactivate_Params
{
	bool                                               retShouldDeactivate;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.UpdateMaterial
struct ARadioActiveLanternGroundCharge_C_UpdateMaterial_Params
{
	bool                                               StaticMesh;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               couldUpdateMaterials;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DestroyChargeBuff
struct ARadioActiveLanternGroundCharge_C_DestroyChargeBuff_Params
{
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPTriggerStasisEvent
struct ARadioActiveLanternGroundCharge_C_BPTriggerStasisEvent_Params
{
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ConsumeChargeAfterStasis
struct ARadioActiveLanternGroundCharge_C_ConsumeChargeAfterStasis_Params
{
	float                                              consumedCharge;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.GetLightModeForRange
struct ARadioActiveLanternGroundCharge_C_GetLightModeForRange_Params
{
	float                                              Range;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LightMode;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Update Light Effects
struct ARadioActiveLanternGroundCharge_C_Update_Light_Effects_Params
{
	bool                                               enableLight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                newLightMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.OnChargeTakenFromBattery
struct ARadioActiveLanternGroundCharge_C_OnChargeTakenFromBattery_Params
{
	float                                              amountTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Get Available Charge
struct ARadioActiveLanternGroundCharge_C_Get_Available_Charge_Params
{
	float                                              available;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPGetInfoFromConsumedItemForPlacedStructure
struct ARadioActiveLanternGroundCharge_C_BPGetInfoFromConsumedItemForPlacedStructure_Params
{
	class UPrimalItem**                                ItemToConsumed;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Update ChargeVariableFromBatteries
struct ARadioActiveLanternGroundCharge_C_Update_ChargeVariableFromBatteries_Params
{
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Set Light Mode
struct ARadioActiveLanternGroundCharge_C_Set_Light_Mode_Params
{
	int                                                NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               nextMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicastChange;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.CreateChargeManager
struct ARadioActiveLanternGroundCharge_C_CreateChargeManager_Params
{
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ReceiveDestroyed
struct ARadioActiveLanternGroundCharge_C_ReceiveDestroyed_Params
{
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPNotifyInventoryItemChange
struct ARadioActiveLanternGroundCharge_C_BPNotifyInventoryItemChange_Params
{
	bool*                                              bIsItemAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.GetLight ModeValues
struct ARadioActiveLanternGroundCharge_C_GetLight_ModeValues_Params
{
	int                                                LightMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Emissiveness;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              chargeEmittedPerSecond;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              chargeConsumedPerSecond;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BlueprintDrawHUD
struct ARadioActiveLanternGroundCharge_C_BlueprintDrawHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPTryMultiUse
struct ARadioActiveLanternGroundCharge_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPGetMultiUseEntries
struct ARadioActiveLanternGroundCharge_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.UserConstructionScript
struct ARadioActiveLanternGroundCharge_C_UserConstructionScript_Params
{
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.FadeInLightTimeline__FinishedFunc
struct ARadioActiveLanternGroundCharge_C_FadeInLightTimeline__FinishedFunc_Params
{
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.FadeInLightTimeline__UpdateFunc
struct ARadioActiveLanternGroundCharge_C_FadeInLightTimeline__UpdateFunc_Params
{
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Interface
struct ARadioActiveLanternGroundCharge_C_Charge_Variable_Event_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Trigger Multicast Interface
struct ARadioActiveLanternGroundCharge_C_Charge_Variable_Event_Trigger_Multicast_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iVariable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPUnstasis
struct ARadioActiveLanternGroundCharge_C_BPUnstasis_Params
{
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ReceiveBeginPlay
struct ARadioActiveLanternGroundCharge_C_ReceiveBeginPlay_Params
{
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Set Charge Variable Interface
struct ARadioActiveLanternGroundCharge_C_Set_Charge_Variable_Interface_Params
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

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.CheckForBatteriesAndUpdate_Multicast
struct ARadioActiveLanternGroundCharge_C_CheckForBatteriesAndUpdate_Multicast_Params
{
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Interface Check for Batteries and Update Multicast
struct ARadioActiveLanternGroundCharge_C_Interface_Check_for_Batteries_and_Update_Multicast_Params
{
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPApplyCustomDurabilityOnPickup
struct ARadioActiveLanternGroundCharge_C_BPApplyCustomDurabilityOnPickup_Params
{
	class UPrimalItem**                                pickedup;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ActivateLantern_Multicast
struct ARadioActiveLanternGroundCharge_C_ActivateLantern_Multicast_Params
{
	bool                                               fastActivate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ActivateLantern
struct ARadioActiveLanternGroundCharge_C_ActivateLantern_Params
{
	bool                                               fastActivate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.TransitionLight
struct ARadioActiveLanternGroundCharge_C_TransitionLight_Params
{
	float                                              targetIntensity;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               disableVisibility;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              startingIntensity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DestroyChargeBuff_Multicast
struct ARadioActiveLanternGroundCharge_C_DestroyChargeBuff_Multicast_Params
{
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.CreateChargeBuff_Multicast
struct ARadioActiveLanternGroundCharge_C_CreateChargeBuff_Multicast_Params
{
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.OnLightModeChanged_Multicast
struct ARadioActiveLanternGroundCharge_C_OnLightModeChanged_Multicast_Params
{
	int                                                LightMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.OnLightModeChanged
struct ARadioActiveLanternGroundCharge_C_OnLightModeChanged_Params
{
	int                                                LightMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Boolean
struct ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Boolean_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Float
struct ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Float_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Float_Multicast
struct ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Float_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Boolean Interface
struct ARadioActiveLanternGroundCharge_C_Charge_Variable_Event_Boolean_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEventFloatInterface
struct ARadioActiveLanternGroundCharge_C_ChargeVariableEventFloatInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Boolean_Multicast
struct ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Boolean_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Boolean MulticastInterface
struct ARadioActiveLanternGroundCharge_C_Charge_Variable_Event_Boolean_MulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Float Multicast Interface
struct ARadioActiveLanternGroundCharge_C_Charge_Variable_Event_Float_Multicast_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Double
struct ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Double_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Double_Multicast
struct ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Double_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEventDoubleInterface
struct ARadioActiveLanternGroundCharge_C_ChargeVariableEventDoubleInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Double MulticastInterface
struct ARadioActiveLanternGroundCharge_C_Charge_Variable_Event_Double_MulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.CreateChargeBuff
struct ARadioActiveLanternGroundCharge_C_CreateChargeBuff_Params
{
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DeactivateLantern
struct ARadioActiveLanternGroundCharge_C_DeactivateLantern_Params
{
	bool                                               fast;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DeactivateLantern_Multicast
struct ARadioActiveLanternGroundCharge_C_DeactivateLantern_Multicast_Params
{
	bool                                               fast;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEventIntInterface
struct ARadioActiveLanternGroundCharge_C_ChargeVariableEventIntInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEventIntMulticastInterface
struct ARadioActiveLanternGroundCharge_C_ChargeVariableEventIntMulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Int
struct ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Int_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Int_Multicast
struct ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Int_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.InitialUpdateMaterial
struct ARadioActiveLanternGroundCharge_C_InitialUpdateMaterial_Params
{
	bool                                               StaticMesh;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.OnChargeFromBatteriesChanged_Multicast
struct ARadioActiveLanternGroundCharge_C_OnChargeFromBatteriesChanged_Multicast_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.StartPlacement_Multicast
struct ARadioActiveLanternGroundCharge_C_StartPlacement_Multicast_Params
{
	class AShooterCharacter*                           constructor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.PlacementAnimationTickEvent
struct ARadioActiveLanternGroundCharge_C_PlacementAnimationTickEvent_Params
{
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DebugCylinders_Multicast
struct ARadioActiveLanternGroundCharge_C_DebugCylinders_Multicast_Params
{
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     cylinder1Direction;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ExecuteUbergraph_RadioActiveLanternGroundCharge
struct ARadioActiveLanternGroundCharge_C_ExecuteUbergraph_RadioActiveLanternGroundCharge_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
