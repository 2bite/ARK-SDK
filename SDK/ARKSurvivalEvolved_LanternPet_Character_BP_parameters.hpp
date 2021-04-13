#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LanternPet_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.GetNumBatteries
struct ALanternPet_Character_BP_C_GetNumBatteries_Params
{
	int                                                numBatteries;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.Get Charge Variable Interface
struct ALanternPet_Character_BP_C_Get_Charge_Variable_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateMaxCharge
struct ALanternPet_Character_BP_C_UpdateMaxCharge_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateFoundHighLevelDinos
struct ALanternPet_Character_BP_C_UpdateFoundHighLevelDinos_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateFoundEnemyPlayers
struct ALanternPet_Character_BP_C_UpdateFoundEnemyPlayers_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.GetPassiveChargeGain
struct ALanternPet_Character_BP_C_GetPassiveChargeGain_Params
{
	float                                              chargeGain;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.UnstasisLogic
struct ALanternPet_Character_BP_C_UnstasisLogic_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPTriggerStasisEvent
struct ALanternPet_Character_BP_C_BPTriggerStasisEvent_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.DestroyChargeBuff
struct ALanternPet_Character_BP_C_DestroyChargeBuff_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPSetupTamed
struct ALanternPet_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.CreateChargeManager
struct ALanternPet_Character_BP_C_CreateChargeManager_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateChargeRadius
struct ALanternPet_Character_BP_C_UpdateChargeRadius_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.GetActualRadius
struct ALanternPet_Character_BP_C_GetActualRadius_Params
{
	float                                              Radius;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPNotifyInventoryItemChange
struct ALanternPet_Character_BP_C_BPNotifyInventoryItemChange_Params
{
	bool*                                              bIsItemAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPOnClearMountedDino
struct ALanternPet_Character_BP_C_BPOnClearMountedDino_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPNotifyLevelUp
struct ALanternPet_Character_BP_C_BPNotifyLevelUp_Params
{
	int*                                               ExtraCharacterLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.InitializeChargeBuff
struct ALanternPet_Character_BP_C_InitializeChargeBuff_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPOnSetMountedDino
struct ALanternPet_Character_BP_C_BPOnSetMountedDino_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.AnimNotifyMountedDino
struct ALanternPet_Character_BP_C_AnimNotifyMountedDino_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.SetLightColor
struct ALanternPet_Character_BP_C_SetLightColor_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.OnLaunched
struct ALanternPet_Character_BP_C_OnLaunched_Params
{
	struct FVector*                                    LaunchVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bXYOverride;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bZOverride;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.Can Generate Charge OverTime
struct ALanternPet_Character_BP_C_Can_Generate_Charge_OverTime_Params
{
	bool                                               CanCharge;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.CanPlaySpecialAnim
struct ALanternPet_Character_BP_C_CanPlaySpecialAnim_Params
{
	bool                                               CanPlay;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.Init
struct ALanternPet_Character_BP_C_Init_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.AutoChargeNotify
struct ALanternPet_Character_BP_C_AutoChargeNotify_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPClientDoMultiUse
struct ALanternPet_Character_BP_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPGetMultiUseEntries
struct ALanternPet_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPTryMultiUse
struct ALanternPet_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.OnRep_bAutoChargeActive
struct ALanternPet_Character_BP_C_OnRep_bAutoChargeActive_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPTimerNonDedicated
struct ALanternPet_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.OnUpdateMountedDinoMeshHiding
struct ALanternPet_Character_BP_C_OnUpdateMountedDinoMeshHiding_Params
{
	bool*                                              bshouldBeVisible;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.BlueprintDrawFloatingHUD
struct ALanternPet_Character_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.Get Charge Receive Montage
struct ALanternPet_Character_BP_C_Get_Charge_Receive_Montage_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.GetChargeFinishedMontage
struct ALanternPet_Character_BP_C_GetChargeFinishedMontage_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.Update ChargeAnimation
struct ALanternPet_Character_BP_C_Update_ChargeAnimation_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPTimerServer
struct ALanternPet_Character_BP_C_BPTimerServer_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.UpdateLightIntensity
struct ALanternPet_Character_BP_C_UpdateLightIntensity_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Emmissive;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.UserConstructionScript
struct ALanternPet_Character_BP_C_UserConstructionScript_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Boolean MulticastInterface
struct ALanternPet_Character_BP_C_Charge_Variable_Event_Boolean_MulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Float Multicast Interface
struct ALanternPet_Character_BP_C_Charge_Variable_Event_Float_Multicast_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Double MulticastInterface
struct ALanternPet_Character_BP_C_Charge_Variable_Event_Double_MulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Boolean Interface
struct ALanternPet_Character_BP_C_Charge_Variable_Event_Boolean_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEventFloatInterface
struct ALanternPet_Character_BP_C_ChargeVariableEventFloatInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEventDoubleInterface
struct ALanternPet_Character_BP_C_ChargeVariableEventDoubleInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEventIntInterface
struct ALanternPet_Character_BP_C_ChargeVariableEventIntInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEventIntMulticastInterface
struct ALanternPet_Character_BP_C_ChargeVariableEventIntMulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.NetUpdateCharge
struct ALanternPet_Character_BP_C_NetUpdateCharge_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.BPUnstasis
struct ALanternPet_Character_BP_C_BPUnstasis_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.NetRestartParticles
struct ALanternPet_Character_BP_C_NetRestartParticles_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.PlayPetAnimAfterDelay
struct ALanternPet_Character_BP_C_PlayPetAnimAfterDelay_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.AnimNotify_FinishParticle
struct ALanternPet_Character_BP_C_AnimNotify_FinishParticle_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.Set Charge Variable Interface
struct ALanternPet_Character_BP_C_Set_Charge_Variable_Interface_Params
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

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Interface
struct ALanternPet_Character_BP_C_Charge_Variable_Event_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.Charge Variable Event Trigger Multicast Interface
struct ALanternPet_Character_BP_C_Charge_Variable_Event_Trigger_Multicast_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iVariable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEvent
struct ALanternPet_Character_BP_C_ChargeVariableEvent_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.ChargeVariableEvent_Multicast
struct ALanternPet_Character_BP_C_ChargeVariableEvent_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.CheckForBatteriesAndUpdate_Multicast
struct ALanternPet_Character_BP_C_CheckForBatteriesAndUpdate_Multicast_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.Interface Check for Batteries and Update Multicast
struct ALanternPet_Character_BP_C_Interface_Check_for_Batteries_and_Update_Multicast_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.ReceiveBeginPlay
struct ALanternPet_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.OnDied_Event
struct ALanternPet_Character_BP_C_OnDied_Event_Params
{
	class APrimalCharacter*                            DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.RandomizeUntamedStart
struct ALanternPet_Character_BP_C_RandomizeUntamedStart_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.CreateChargeBuff_Multicast
struct ALanternPet_Character_BP_C_CreateChargeBuff_Multicast_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.CreateChargeBuff
struct ALanternPet_Character_BP_C_CreateChargeBuff_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.DestroyChargeBuff_Multicast
struct ALanternPet_Character_BP_C_DestroyChargeBuff_Multicast_Params
{
};

// Function LanternPet_Character_BP.LanternPet_Character_BP_C.ExecuteUbergraph_LanternPet_Character_BP
struct ALanternPet_Character_BP_C_ExecuteUbergraph_LanternPet_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
