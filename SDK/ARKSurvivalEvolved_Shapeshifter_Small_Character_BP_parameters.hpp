#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Shapeshifter_Small_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOnDinoCheat
struct AShapeshifter_Small_Character_BP_C_BPOnDinoCheat_Params
{
	struct FName*                                      CheatName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSetValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnRep_bAllowMating
struct AShapeshifter_Small_Character_BP_C_OnRep_bAllowMating_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPCanCryo
struct AShapeshifter_Small_Character_BP_C_BPCanCryo_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.UpdateAllowMating
struct AShapeshifter_Small_Character_BP_C_UpdateAllowMating_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BlueprintDrawFloatingHUD
struct AShapeshifter_Small_Character_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BP_OnSetDeath
struct AShapeshifter_Small_Character_BP_C_BP_OnSetDeath_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Spawn Bigly Fn
struct AShapeshifter_Small_Character_BP_C_Spawn_Bigly_Fn_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPTimerNonDedicated
struct AShapeshifter_Small_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Throttled TickFn
struct AShapeshifter_Small_Character_BP_C_Throttled_TickFn_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Check Wild Should Random TransformFn
struct AShapeshifter_Small_Character_BP_C_Check_Wild_Should_Random_TransformFn_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.StartTransform
struct AShapeshifter_Small_Character_BP_C_StartTransform_Params
{
	bool                                               SpawnBigly;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               QueueRoar;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.isTransforming
struct AShapeshifter_Small_Character_BP_C_isTransforming_Params
{
	bool                                               ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPCanMountOnCharacter
struct AShapeshifter_Small_Character_BP_C_BPCanMountOnCharacter_Params
{
	class APrimalCharacter**                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPGetMultiUseEntries
struct AShapeshifter_Small_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AllowPlayMontage
struct AShapeshifter_Small_Character_BP_C_AllowPlayMontage_Params
{
	class UAnimMontage**                               AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOverrideTamingDescriptionLabel
struct AShapeshifter_Small_Character_BP_C_BPOverrideTamingDescriptionLabel_Params
{
	struct FSlateColor                                 TextColor;                                                // (Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPDisplayTamedMessage
struct AShapeshifter_Small_Character_BP_C_BPDisplayTamedMessage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BlueprintTamedTick
struct AShapeshifter_Small_Character_BP_C_BlueprintTamedTick_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnRep_InitialReplicationComplete
struct AShapeshifter_Small_Character_BP_C_OnRep_InitialReplicationComplete_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnLanded
struct AShapeshifter_Small_Character_BP_C_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.DinoShoulderMountedLaunch
struct AShapeshifter_Small_Character_BP_C_DinoShoulderMountedLaunch_Params
{
	struct FVector*                                    launchDir;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          throwingCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPModifyAimOffsetNoTarget
struct AShapeshifter_Small_Character_BP_C_BPModifyAimOffsetNoTarget_Params
{
	struct FRotator                                    Aim;                                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPHandlePoop
struct AShapeshifter_Small_Character_BP_C_BPHandlePoop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BlueprintCanAttack
struct AShapeshifter_Small_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.CalculateTransformationCountRequiredForTame
struct AShapeshifter_Small_Character_BP_C_CalculateTransformationCountRequiredForTame_Params
{
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.UnTransform
struct AShapeshifter_Small_Character_BP_C_UnTransform_Params
{
	int                                                TransformationCount;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalDinoCharacter*                        Bigly;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController*                    TamingController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Calculate Current Element Count Required for Transform
struct AShapeshifter_Small_Character_BP_C_Calculate_Current_Element_Count_Required_for_Transform_Params
{
	int                                                cost;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPDinoTooltipCustomTorpidityProgressBar
struct AShapeshifter_Small_Character_BP_C_BPDinoTooltipCustomTorpidityProgressBar_Params
{
	bool                                               overrideTorpidityProgressBarIfActive;                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              progressPercent;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      Label;                                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPDinoTooltipCustomTamingProgressBar
struct AShapeshifter_Small_Character_BP_C_BPDinoTooltipCustomTamingProgressBar_Params
{
	bool                                               overrideTamingProgressBarIfActive;                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              progressPercent;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      Label;                                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.K2_OnMovementModeChanged
struct AShapeshifter_Small_Character_BP_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TryThrowPoop
struct AShapeshifter_Small_Character_BP_C_TryThrowPoop_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPAdjustDamage
struct AShapeshifter_Small_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOnTamedProcessOrder
struct AShapeshifter_Small_Character_BP_C_BPOnTamedProcessOrder_Params
{
	class APrimalCharacter**                           FromCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDinoTamedOrder>*                      OrderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     enemyTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              orderNotExecuted;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Try Digging
struct AShapeshifter_Small_Character_BP_C_Try_Digging_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.FindTargetWithElementEquipped
struct AShapeshifter_Small_Character_BP_C_FindTargetWithElementEquipped_Params
{
	class APrimalCharacter*                            ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPShouldForceFlee
struct AShapeshifter_Small_Character_BP_C_BPShouldForceFlee_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPPreventOrderAllowed
struct AShapeshifter_Small_Character_BP_C_BPPreventOrderAllowed_Params
{
	class APrimalCharacter**                           FromCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDinoTamedOrder>*                      OrderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     enemyTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              orderNotExecuted;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.SetAddictionAmount
struct AShapeshifter_Small_Character_BP_C_SetAddictionAmount_Params
{
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.GetAddictedAmount
struct AShapeshifter_Small_Character_BP_C_GetAddictedAmount_Params
{
	float                                              Addiction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.GetTarget
struct AShapeshifter_Small_Character_BP_C_GetTarget_Params
{
	class AActor*                                      Target;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TargetHasElement
struct AShapeshifter_Small_Character_BP_C_TargetHasElement_Params
{
	class AShooterCharacter*                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.DisableBegging
struct AShapeshifter_Small_Character_BP_C_DisableBegging_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.SetTarget
struct AShapeshifter_Small_Character_BP_C_SetTarget_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.No Controller RequestMountTransform to Bigly
struct AShapeshifter_Small_Character_BP_C_No_Controller_RequestMountTransform_to_Bigly_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPIsBasedOnActor
struct AShapeshifter_Small_Character_BP_C_BPIsBasedOnActor_Params
{
	class AActor**                                     Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPTimerServer
struct AShapeshifter_Small_Character_BP_C_BPTimerServer_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Check for ElementFn
struct AShapeshifter_Small_Character_BP_C_Check_for_ElementFn_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnUpdateUberpounce
struct AShapeshifter_Small_Character_BP_C_OnUpdateUberpounce_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TryPounce
struct AShapeshifter_Small_Character_BP_C_TryPounce_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOnClearMountedDino
struct AShapeshifter_Small_Character_BP_C_BPOnClearMountedDino_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOnSetMountedDino
struct AShapeshifter_Small_Character_BP_C_BPOnSetMountedDino_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Transform
struct AShapeshifter_Small_Character_BP_C_Transform_Params
{
	class UAnimMontage*                                TransformAnim;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TryBegFn
struct AShapeshifter_Small_Character_BP_C_TryBegFn_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ReceiveTick
struct AShapeshifter_Small_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ReceiveBeginPlay
struct AShapeshifter_Small_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPServerHandleNetExecCommand
struct AShapeshifter_Small_Character_BP_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.IsPlayerNearby
struct AShapeshifter_Small_Character_BP_C_IsPlayerNearby_Params
{
	bool                                               bNearby;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.UserConstructionScript
struct AShapeshifter_Small_Character_BP_C_UserConstructionScript_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_AteElement
struct AShapeshifter_Small_Character_BP_C_AnimNotify_AteElement_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_Transform
struct AShapeshifter_Small_Character_BP_C_AnimNotify_Transform_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.SpawnBigly
struct AShapeshifter_Small_Character_BP_C_SpawnBigly_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TryBeg
struct AShapeshifter_Small_Character_BP_C_TryBeg_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnBegEnd
struct AShapeshifter_Small_Character_BP_C_OnBegEnd_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_ThrowTransform
struct AShapeshifter_Small_Character_BP_C_AnimNotify_ThrowTransform_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_EatingElement
struct AShapeshifter_Small_Character_BP_C_AnimNotify_EatingElement_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ServerRequestMountTransformToBigly
struct AShapeshifter_Small_Character_BP_C_ServerRequestMountTransformToBigly_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_OnFinishedSniffing
struct AShapeshifter_Small_Character_BP_C_AnimNotify_OnFinishedSniffing_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ResetAllowFlee
struct AShapeshifter_Small_Character_BP_C_ResetAllowFlee_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_DiggingComplete
struct AShapeshifter_Small_Character_BP_C_AnimNotify_DiggingComplete_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_ThrowPoop
struct AShapeshifter_Small_Character_BP_C_AnimNotify_ThrowPoop_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_StartTransformScaling
struct AShapeshifter_Small_Character_BP_C_AnimNotify_StartTransformScaling_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TransformScaling
struct AShapeshifter_Small_Character_BP_C_TransformScaling_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_InitBigly
struct AShapeshifter_Small_Character_BP_C_AnimNotify_InitBigly_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_UnTransform
struct AShapeshifter_Small_Character_BP_C_AnimNotify_UnTransform_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.CheckWildShouldRandomTransform
struct AShapeshifter_Small_Character_BP_C_CheckWildShouldRandomTransform_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_StartSniff
struct AShapeshifter_Small_Character_BP_C_AnimNotify_StartSniff_Params
{
};

// Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ExecuteUbergraph_Shapeshifter_Small_Character_BP
struct AShapeshifter_Small_Character_BP_C_ExecuteUbergraph_Shapeshifter_Small_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
