#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Xenomorph_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.GetNumBatteries
struct AXenomorph_Character_BP_C_GetNumBatteries_Params
{
	int                                                numBatteries;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Get Charge Variable Interface
struct AXenomorph_Character_BP_C_Get_Charge_Variable_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.HasSelfBuried
struct AXenomorph_Character_BP_C_HasSelfBuried_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPPreventAttachments
struct AXenomorph_Character_BP_C_BPPreventAttachments_Params
{
	class UObject**                                    ForItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.RefreshTamedAttachments
struct AXenomorph_Character_BP_C_RefreshTamedAttachments_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.AllowPlayMontage
struct AXenomorph_Character_BP_C_AllowPlayMontage_Params
{
	class UAnimMontage**                               AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.GetDinoLevelUpAnimation
struct AXenomorph_Character_BP_C_GetDinoLevelUpAnimation_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
struct AXenomorph_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPIsHidden
struct AXenomorph_Character_BP_C_BPIsHidden_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPSetupTamed
struct AXenomorph_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ShouldBury
struct AXenomorph_Character_BP_C_ShouldBury_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ShouldUnbury
struct AXenomorph_Character_BP_C_ShouldUnbury_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.OnRep_isUnderground
struct AXenomorph_Character_BP_C_OnRep_isUnderground_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.OnRep_bIsOffspringMode
struct AXenomorph_Character_BP_C_OnRep_bIsOffspringMode_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.DisableEyeGlow
struct AXenomorph_Character_BP_C_DisableEyeGlow_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.UpdateBuryMound
struct AXenomorph_Character_BP_C_UpdateBuryMound_Params
{
	bool                                               ShouldShow;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPTryMultiUse
struct AXenomorph_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.OnChargeEvent
struct AXenomorph_Character_BP_C_OnChargeEvent_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.CreateChargeManager
struct AXenomorph_Character_BP_C_CreateChargeManager_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.InitializeDive
struct AXenomorph_Character_BP_C_InitializeDive_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.DiveEnd
struct AXenomorph_Character_BP_C_DiveEnd_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BuriedWithNoTarget
struct AXenomorph_Character_BP_C_BuriedWithNoTarget_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPAllowCarryCharacter
struct AXenomorph_Character_BP_C_BPAllowCarryCharacter_Params
{
	class APrimalCharacter**                           checkCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.TimeSinceLastAttackForIndex
struct AXenomorph_Character_BP_C_TimeSinceLastAttackForIndex_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPDidClearCarriedCharacter
struct AXenomorph_Character_BP_C_BPDidClearCarriedCharacter_Params
{
	class APrimalCharacter**                           PreviousCarriedCharacter;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.HasValidAggroTarget
struct AXenomorph_Character_BP_C_HasValidAggroTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.CancelImpregnateGrab
struct AXenomorph_Character_BP_C_CancelImpregnateGrab_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.IncreaseTameAffinity
struct AXenomorph_Character_BP_C_IncreaseTameAffinity_Params
{
	float                                              AffinityToAdd;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           PlayerChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPOnTamedProcessOrder
struct AXenomorph_Character_BP_C_BPOnTamedProcessOrder_Params
{
	class APrimalCharacter**                           FromCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDinoTamedOrder>*                      OrderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     enemyTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              orderNotExecuted;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPGetMultiUseEntries
struct AXenomorph_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.K2_OnMovementModeChanged
struct AXenomorph_Character_BP_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPDoAttack
struct AXenomorph_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BlueprintCanRiderAttack
struct AXenomorph_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Can Dive
struct AXenomorph_Character_BP_C_Can_Dive_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Tamed Has Valid Enemy
struct AXenomorph_Character_BP_C_Tamed_Has_Valid_Enemy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.AcidDamageEvent
struct AXenomorph_Character_BP_C_AcidDamageEvent_Params
{
	struct FVector                                     OriginLoc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SprayDir;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.DiveSetup
struct AXenomorph_Character_BP_C_DiveSetup_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.DiveIdle
struct AXenomorph_Character_BP_C_DiveIdle_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Is Animation Playing
struct AXenomorph_Character_BP_C_Is_Animation_Playing_Params
{
	TArray<class UAnimMontage*>                        Montage;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BlueprintGetAttackWeight
struct AXenomorph_Character_BP_C_BlueprintGetAttackWeight_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             inputWeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPAdjustDamage
struct AXenomorph_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BlueprintOverrideWantsToRun
struct AXenomorph_Character_BP_C_BlueprintOverrideWantsToRun_Params
{
	bool*                                              bInputWantsToRun;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Update Underground Trail
struct AXenomorph_Character_BP_C_Update_Underground_Trail_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.SetDinoCollisionState
struct AXenomorph_Character_BP_C_SetDinoCollisionState_Params
{
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.DetachChildren
struct AXenomorph_Character_BP_C_DetachChildren_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPTimerNonDedicated
struct AXenomorph_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPTimerServer
struct AXenomorph_Character_BP_C_BPTimerServer_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BlueprintCanAttack
struct AXenomorph_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.UserConstructionScript
struct AXenomorph_Character_BP_C_UserConstructionScript_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_76
struct AXenomorph_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_76_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.InpActEvt_Reload_K2Node_InputActionEvent_75
struct AXenomorph_Character_BP_C_InpActEvt_Reload_K2Node_InputActionEvent_75_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_74
struct AXenomorph_Character_BP_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_74_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_73
struct AXenomorph_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_73_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Interface Check for Batteries and Update Multicast
struct AXenomorph_Character_BP_C_Interface_Check_for_Batteries_and_Update_Multicast_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Charge Variable Event Boolean MulticastInterface
struct AXenomorph_Character_BP_C_Charge_Variable_Event_Boolean_MulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Charge Variable Event Float Multicast Interface
struct AXenomorph_Character_BP_C_Charge_Variable_Event_Float_Multicast_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Charge Variable Event Double MulticastInterface
struct AXenomorph_Character_BP_C_Charge_Variable_Event_Double_MulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Charge Variable Event Boolean Interface
struct AXenomorph_Character_BP_C_Charge_Variable_Event_Boolean_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEventFloatInterface
struct AXenomorph_Character_BP_C_ChargeVariableEventFloatInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEventDoubleInterface
struct AXenomorph_Character_BP_C_ChargeVariableEventDoubleInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEventIntInterface
struct AXenomorph_Character_BP_C_ChargeVariableEventIntInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEventIntMulticastInterface
struct AXenomorph_Character_BP_C_ChargeVariableEventIntMulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ReceiveBeginPlay
struct AXenomorph_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.StartAcidSpray
struct AXenomorph_Character_BP_C_StartAcidSpray_Params
{
	struct FVector                                     hitLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitDir;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       HitBone;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Server_StartAcidSpray
struct AXenomorph_Character_BP_C_Server_StartAcidSpray_Params
{
	struct FVector                                     hitLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitDir;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       HitBone;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Server_TryDive
struct AXenomorph_Character_BP_C_Server_TryDive_Params
{
	bool                                               NewUnderground;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.AnimNotify_StartBury
struct AXenomorph_Character_BP_C_AnimNotify_StartBury_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.AnimNotify_EndBury
struct AXenomorph_Character_BP_C_AnimNotify_EndBury_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Multi_DiveOut
struct AXenomorph_Character_BP_C_Multi_DiveOut_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.AttemptDiveOut
struct AXenomorph_Character_BP_C_AttemptDiveOut_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Attempt Dive In
struct AXenomorph_Character_BP_C_Attempt_Dive_In_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Multi_DiveIn
struct AXenomorph_Character_BP_C_Multi_DiveIn_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPUnstasis
struct AXenomorph_Character_BP_C_BPUnstasis_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPDinoPostBeginPlay
struct AXenomorph_Character_BP_C_BPDinoPostBeginPlay_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.StartBuried
struct AXenomorph_Character_BP_C_StartBuried_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.AnimNotify_Death
struct AXenomorph_Character_BP_C_AnimNotify_Death_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.UpdateHurtFX
struct AXenomorph_Character_BP_C_UpdateHurtFX_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.DelayUpdateHurtFX
struct AXenomorph_Character_BP_C_DelayUpdateHurtFX_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ForceDiveEnd
struct AXenomorph_Character_BP_C_ForceDiveEnd_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Multi_ForceDiveEnd
struct AXenomorph_Character_BP_C_Multi_ForceDiveEnd_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Server_Roar
struct AXenomorph_Character_BP_C_Server_Roar_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BP_OnJumpPressed
struct AXenomorph_Character_BP_C_BP_OnJumpPressed_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Server_TailWeb
struct AXenomorph_Character_BP_C_Server_TailWeb_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Server_ImpregnateAttack
struct AXenomorph_Character_BP_C_Server_ImpregnateAttack_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Proxy_RefreshAttachments
struct AXenomorph_Character_BP_C_Proxy_RefreshAttachments_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.StopDissolveVisuals_Multicast
struct AXenomorph_Character_BP_C_StopDissolveVisuals_Multicast_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.StartDissolveVisuals_Multicast
struct AXenomorph_Character_BP_C_StartDissolveVisuals_Multicast_Params
{
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent_Double
struct AXenomorph_Character_BP_C_ChargeVariableEvent_Double_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent_Float
struct AXenomorph_Character_BP_C_ChargeVariableEvent_Float_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent_Boolean
struct AXenomorph_Character_BP_C_ChargeVariableEvent_Boolean_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent_Double_Multicast
struct AXenomorph_Character_BP_C_ChargeVariableEvent_Double_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent_Float_Multicast
struct AXenomorph_Character_BP_C_ChargeVariableEvent_Float_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent_Boolean_Multicast
struct AXenomorph_Character_BP_C_ChargeVariableEvent_Boolean_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent
struct AXenomorph_Character_BP_C_ChargeVariableEvent_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Charge Variable Event Trigger Multicast Interface
struct AXenomorph_Character_BP_C_Charge_Variable_Event_Trigger_Multicast_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iVariable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Charge Variable Event Interface
struct AXenomorph_Character_BP_C_Charge_Variable_Event_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Set Charge Variable Interface
struct AXenomorph_Character_BP_C_Set_Charge_Variable_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicast;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               triggerEvent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicastEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.PlayGroundParticleVFX
struct AXenomorph_Character_BP_C_PlayGroundParticleVFX_Params
{
	bool                                               orientToGround;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleSystem;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OffsetFromRoot;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ExecuteUbergraph_Xenomorph_Character_BP
struct AXenomorph_Character_BP_C_ExecuteUbergraph_Xenomorph_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
