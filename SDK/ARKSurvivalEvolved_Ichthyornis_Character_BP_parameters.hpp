#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ichthyornis_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPClientHandleNetExecCommand
struct AIchthyornis_Character_BP_C_BPClientHandleNetExecCommand_Params
{
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.IsOverweightThreshold_F
struct AIchthyornis_Character_BP_C_IsOverweightThreshold_F_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPModifyHarvestingQuantity
struct AIchthyornis_Character_BP_C_BPModifyHarvestingQuantity_Params
{
	float*                                             originalQuantity;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     resourceSelected;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CheckWeightCondition
struct AIchthyornis_Character_BP_C_CheckWeightCondition_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               shouldntAttack;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPDidClearCarriedCharacter
struct AIchthyornis_Character_BP_C_BPDidClearCarriedCharacter_Params
{
	class APrimalCharacter**                           PreviousCarriedCharacter;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.RemoveDragWeightIfNeeded
struct AIchthyornis_Character_BP_C_RemoveDragWeightIfNeeded_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CancelAttack
struct AIchthyornis_Character_BP_C_CancelAttack_Params
{
	bool                                               goBackToOwner;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GetTamedOrderFromAggressionState
struct AIchthyornis_Character_BP_C_GetTamedOrderFromAggressionState_Params
{
	int                                                aggressionState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDinoTamedOrder>                       tamedOrder;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnClearMountedDino
struct AIchthyornis_Character_BP_C_BPOnClearMountedDino_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnCancelledAttack
struct AIchthyornis_Character_BP_C_OnCancelledAttack_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetLastPlayerOrder
struct AIchthyornis_Character_BP_C_SetLastPlayerOrder_Params
{
	class APawn*                                       Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.StartGoBackToOwner
struct AIchthyornis_Character_BP_C_StartGoBackToOwner_Params
{
	bool                                               isFailedLaunch;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Disable Landing
struct AIchthyornis_Character_BP_C_Disable_Landing_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetAttackStage
struct AIchthyornis_Character_BP_C_SetAttackStage_Params
{
	int                                                attackStage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BackToOwnerRadius;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isFailedLaunch;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.AllowLanding
struct AIchthyornis_Character_BP_C_AllowLanding_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Set Aggression State
struct AIchthyornis_Character_BP_C_Set_Aggression_State_Params
{
	int                                                aggressionState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Finish Attack
struct AIchthyornis_Character_BP_C_Finish_Attack_Params
{
	bool                                               forceFinish;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.On DeadPrey Actions
struct AIchthyornis_Character_BP_C_On_DeadPrey_Actions_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Going Back to Owner Actions
struct AIchthyornis_Character_BP_C_Going_Back_to_Owner_Actions_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DivingActions
struct AIchthyornis_Character_BP_C_DivingActions_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPSetupTamed
struct AIchthyornis_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Improve HarvestingComponent for Dragged Character
struct AIchthyornis_Character_BP_C_Improve_HarvestingComponent_for_Dragged_Character_Params
{
	class APrimalCharacter*                            killedCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPKilledSomethingEvent
struct AIchthyornis_Character_BP_C_BPKilledSomethingEvent_Params
{
	class APrimalCharacter**                           killedTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetTargetForLaunchedAttack
struct AIchthyornis_Character_BP_C_SetTargetForLaunchedAttack_Params
{
	class APrimalCharacter*                            NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DoLaunchAttack
struct AIchthyornis_Character_BP_C_DoLaunchAttack_Params
{
	class APrimalCharacter*                            launchedTarget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnTamedProcessOrder
struct AIchthyornis_Character_BP_C_BPOnTamedProcessOrder_Params
{
	class APrimalCharacter**                           FromCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDinoTamedOrder>*                      OrderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     enemyTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              orderNotExecuted;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GetOwnerCharacter
struct AIchthyornis_Character_BP_C_GetOwnerCharacter_Params
{
	class APawn*                                       Owner;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Clear FocusAndAggression
struct AIchthyornis_Character_BP_C_Clear_FocusAndAggression_Params
{
	TEnumAsByte<EDinoTamedOrder>                       overrideTamedMode;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               useTameModeOverride;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Start LaunchAttack
struct AIchthyornis_Character_BP_C_Start_LaunchAttack_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Clear Launched Throw
struct AIchthyornis_Character_BP_C_Clear_Launched_Throw_Params
{
	bool                                               disableLaunchVariable;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPCanAutodrag
struct AIchthyornis_Character_BP_C_BPCanAutodrag_Params
{
	class APrimalCharacter**                           characterToDrag;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SpawnWaterEffectsIfNeeded
struct AIchthyornis_Character_BP_C_SpawnWaterEffectsIfNeeded_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.UpdateDamageFlag
struct AIchthyornis_Character_BP_C_UpdateDamageFlag_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Is Water Dino or Swimming Amphibious
struct AIchthyornis_Character_BP_C_Is_Water_Dino_or_Swimming_Amphibious_Params
{
	class APrimalCharacter*                            Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isWaterOrAmph;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Can StealFromCharacter
struct AIchthyornis_Character_BP_C_Can_StealFromCharacter_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanUse;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnOwnerReached
struct AIchthyornis_Character_BP_C_OnOwnerReached_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PreDiveDownRotationActions
struct AIchthyornis_Character_BP_C_PreDiveDownRotationActions_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.UseEmergencyDiveUp
struct AIchthyornis_Character_BP_C_UseEmergencyDiveUp_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanUseBiteAttack
struct AIchthyornis_Character_BP_C_CanUseBiteAttack_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanUse;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnLaunched
struct AIchthyornis_Character_BP_C_OnLaunched_Params
{
	struct FVector*                                    LaunchVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bXYOverride;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bZOverride;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPCharacterSleeped
struct AIchthyornis_Character_BP_C_BPCharacterSleeped_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GetDiveDownDelay
struct AIchthyornis_Character_BP_C_GetDiveDownDelay_Params
{
	float                                              Delay;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnMovementModeChangedNotify
struct AIchthyornis_Character_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnClearCarriedCharacter
struct AIchthyornis_Character_BP_C_OnClearCarriedCharacter_Params
{
	bool                                               stopTimerServer;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            PreviousCarriedCharacter;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Can Use Wild Dive
struct AIchthyornis_Character_BP_C_Can_Use_Wild_Dive_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canDoAttack;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanUseDiveAttack
struct AIchthyornis_Character_BP_C_CanUseDiveAttack_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canUseAttack;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ApplyChewDamage
struct AIchthyornis_Character_BP_C_ApplyChewDamage_Params
{
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetDivingState
struct AIchthyornis_Character_BP_C_SetDivingState_Params
{
	int                                                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               forceSetState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnRep_divingStatus
struct AIchthyornis_Character_BP_C_OnRep_divingStatus_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnSetMountedDino
struct AIchthyornis_Character_BP_C_BPOnSetMountedDino_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.UnequipOrSteal
struct AIchthyornis_Character_BP_C_UnequipOrSteal_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               couldSteal;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ChangeHuntingMode
struct AIchthyornis_Character_BP_C_ChangeHuntingMode_Params
{
	int                                                NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               changeToNextMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               onlyUpdateOffsets;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanUseGrabAttack
struct AIchthyornis_Character_BP_C_CanUseGrabAttack_Params
{
	class APrimalCharacter*                            PrimalCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanUse;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Remove Weapon
struct AIchthyornis_Character_BP_C_Remove_Weapon_Params
{
	class APrimalCharacter*                            Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Remove Helmet
struct AIchthyornis_Character_BP_C_Remove_Helmet_Params
{
	class APrimalCharacter*                            Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanStealItem
struct AIchthyornis_Character_BP_C_CanStealItem_Params
{
	class UPrimalItem*                                 Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isFoodItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canSteal;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DoStealItem
struct AIchthyornis_Character_BP_C_DoStealItem_Params
{
	class APrimalCharacter*                            CharacterToStealFrom;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem*                                 itemToSteal;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.TryToStealFoodItem
struct AIchthyornis_Character_BP_C_TryToStealFoodItem_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumItems;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               stoleFood;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ReceiveAnyDamage
struct AIchthyornis_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CarryingLivePreyActions
struct AIchthyornis_Character_BP_C_CarryingLivePreyActions_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Rotate Z To Point
struct AIchthyornis_Character_BP_C_Rotate_Z_To_Point_Params
{
	struct FVector                                     offsetFromCurrentLocation;                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnCarriedCharacter
struct AIchthyornis_Character_BP_C_OnCarriedCharacter_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Start Follow Player
struct AIchthyornis_Character_BP_C_Start_Follow_Player_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintDrawFloatingHUD
struct AIchthyornis_Character_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      K2Node_Select_ReturnValue;                                // (OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPGetMultiUseEntries
struct AIchthyornis_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPTryMultiUse
struct AIchthyornis_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPCanDragCharacter
struct AIchthyornis_Character_BP_C_BPCanDragCharacter_Params
{
	class APrimalCharacter**                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintAdjustOutputDamage
struct AIchthyornis_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPTimerServer
struct AIchthyornis_Character_BP_C_BPTimerServer_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPDidSetCarriedCharacter
struct AIchthyornis_Character_BP_C_BPDidSetCarriedCharacter_Params
{
	class APrimalCharacter**                           PreviousCarriedCharacter;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Calculate Dive Up Impulse
struct AIchthyornis_Character_BP_C_Calculate_Dive_Up_Impulse_Params
{
	float                                              immersionDepth;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Impulse;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanGrabPawn
struct AIchthyornis_Character_BP_C_CanGrabPawn_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanGrab;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Rotate Z to Target
struct AIchthyornis_Character_BP_C_Rotate_Z_to_Target_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Calculate DiveDown Impulse
struct AIchthyornis_Character_BP_C_Calculate_DiveDown_Impulse_Params
{
	struct FVector                                     Impulse;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Can UseRegularDive
struct AIchthyornis_Character_BP_C_Can_UseRegularDive_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canDoAttack;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPDoAttack
struct AIchthyornis_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintCanAttack
struct AIchthyornis_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.UserConstructionScript
struct AIchthyornis_Character_BP_C_UserConstructionScript_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.RotationToTarget__FinishedFunc
struct AIchthyornis_Character_BP_C_RotationToTarget__FinishedFunc_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.RotationToTarget__UpdateFunc
struct AIchthyornis_Character_BP_C_RotationToTarget__UpdateFunc_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DiveAttack
struct AIchthyornis_Character_BP_C_DiveAttack_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PreDiveDownActions
struct AIchthyornis_Character_BP_C_PreDiveDownActions_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.StartDiveUp
struct AIchthyornis_Character_BP_C_StartDiveUp_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.FinishDiveDown
struct AIchthyornis_Character_BP_C_FinishDiveDown_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PreDiveUpActions
struct AIchthyornis_Character_BP_C_PreDiveUpActions_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PostDiveUpActions
struct AIchthyornis_Character_BP_C_PostDiveUpActions_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SlowlyRotateZTo
struct AIchthyornis_Character_BP_C_SlowlyRotateZTo_Params
{
	struct FRotator                                    TargetRotation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    initialRotation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DropCarriedAfterTime
struct AIchthyornis_Character_BP_C_DropCarriedAfterTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dropDragged;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DropCarried;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               restoreFollowingVariables;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DropCarried
struct AIchthyornis_Character_BP_C_DropCarried_Params
{
	bool                                               dropDragged;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DropCarried;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               restoreFollowingVariables;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SpawnWaterParticles
struct AIchthyornis_Character_BP_C_SpawnWaterParticles_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct AIchthyornis_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectory_Multicast
struct AIchthyornis_Character_BP_C_DebugTrajectory_Multicast_Params
{
	struct FVector                                     beginning;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectory
struct AIchthyornis_Character_BP_C_DebugTrajectory_Params
{
	struct FVector                                     beginning;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.FinishDiveUp
struct AIchthyornis_Character_BP_C_FinishDiveUp_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CheckForWaterEffects
struct AIchthyornis_Character_BP_C_CheckForWaterEffects_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ShowBag_Multicast
struct AIchthyornis_Character_BP_C_ShowBag_Multicast_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.HideBag_Multicast
struct AIchthyornis_Character_BP_C_HideBag_Multicast_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ShowBag
struct AIchthyornis_Character_BP_C_ShowBag_Params
{
	bool                                               IsDiving;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.EnablePendingEatAnim
struct AIchthyornis_Character_BP_C_EnablePendingEatAnim_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.HarvestPreyAfterDelay
struct AIchthyornis_Character_BP_C_HarvestPreyAfterDelay_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SpawnVitaminEffects_Multicast
struct AIchthyornis_Character_BP_C_SpawnVitaminEffects_Multicast_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectorySphere_Multicast
struct AIchthyornis_Character_BP_C_DebugTrajectorySphere_Multicast_Params
{
	struct FVector                                     beginning;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectorySphere
struct AIchthyornis_Character_BP_C_DebugTrajectorySphere_Params
{
	struct FVector                                     beginning;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPUnstasis
struct AIchthyornis_Character_BP_C_BPUnstasis_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ReceiveBeginPlay
struct AIchthyornis_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.InitializeLandingVariables
struct AIchthyornis_Character_BP_C_InitializeLandingVariables_Params
{
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Debug_TorporAfterTime
struct AIchthyornis_Character_BP_C_Debug_TorporAfterTime_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GoBackToOwnerAfterDelay
struct AIchthyornis_Character_BP_C_GoBackToOwnerAfterDelay_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isFailedLaunch;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ExecuteUbergraph_Ichthyornis_Character_BP
struct AIchthyornis_Character_BP_C_ExecuteUbergraph_Ichthyornis_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
