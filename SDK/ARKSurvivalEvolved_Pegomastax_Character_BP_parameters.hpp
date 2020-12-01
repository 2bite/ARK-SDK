#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Pegomastax_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPClientHandleNetExecCommand
struct APegomastax_Character_BP_C_BPClientHandleNetExecCommand_Params
{
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.UpdateWaitingState
struct APegomastax_Character_BP_C_UpdateWaitingState_Params
{
	class APrimalCharacter*                            TargetCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isInWaitingState;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.isInWaitingState
struct APegomastax_Character_BP_C_isInWaitingState_Params
{
	class APrimalCharacter*                            TargetCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isWaiting;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.WillRunToOwner
struct APegomastax_Character_BP_C_WillRunToOwner_Params
{
	class APawn*                                       ownerPawn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               willRun;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPTimerServer
struct APegomastax_Character_BP_C_BPTimerServer_Params
{
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.FindPawnToGoBackTo
struct APegomastax_Character_BP_C_FindPawnToGoBackTo_Params
{
	class APawn*                                       selectedPawn;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPOnAnimPlayedNotify
struct APegomastax_Character_BP_C_BPOnAnimPlayedNotify_Params
{
	class UAnimMontage**                               AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      StartSectionName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReplicate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReplicateToOwner;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceTickPoseAndServerUpdateMesh;                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceTickPoseOnServer;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.RestoreSecondaryAnims
struct APegomastax_Character_BP_C_RestoreSecondaryAnims_Params
{
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ClearSecondaryAnims
struct APegomastax_Character_BP_C_ClearSecondaryAnims_Params
{
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.PostAttackActions
struct APegomastax_Character_BP_C_PostAttackActions_Params
{
	bool                                               stoleItem;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ShouldStopHolding
struct APegomastax_Character_BP_C_ShouldStopHolding_Params
{
	bool                                               ShouldStop;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Can Play Holding Anim
struct APegomastax_Character_BP_C_Can_Play_Holding_Anim_Params
{
	bool                                               CanPlay;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPOnClearMountedDino
struct APegomastax_Character_BP_C_BPOnClearMountedDino_Params
{
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPOnSetMountedDino
struct APegomastax_Character_BP_C_BPOnSetMountedDino_Params
{
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.UpdateHoldingStatus
struct APegomastax_Character_BP_C_UpdateHoldingStatus_Params
{
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPCharacterSleeped
struct APegomastax_Character_BP_C_BPCharacterSleeped_Params
{
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPOnMovementModeChangedNotify
struct APegomastax_Character_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CreateTamedInventory
struct APegomastax_Character_BP_C_CreateTamedInventory_Params
{
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ProcessUsedItem
struct APegomastax_Character_BP_C_ProcessUsedItem_Params
{
	class UPrimalItem*                                 Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CalculateBuffTimeForGroup
struct APegomastax_Character_BP_C_CalculateBuffTimeForGroup_Params
{
	class APrimalBuff*                                 Buff;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              extraTime;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.NextPickPocketingMode
struct APegomastax_Character_BP_C_NextPickPocketingMode_Params
{
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CanReturnToCharacter
struct APegomastax_Character_BP_C_CanReturnToCharacter_Params
{
	class AShooterPlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               returnPossible;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CanStealItem
struct APegomastax_Character_BP_C_CanStealItem_Params
{
	class UPrimalItem*                                 Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canSteal;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.GoBackToOwner
struct APegomastax_Character_BP_C_GoBackToOwner_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Get NumPegosInGroup
struct APegomastax_Character_BP_C_Get_NumPegosInGroup_Params
{
	int                                                maxExtraItems;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.IsValidItemForTaming
struct APegomastax_Character_BP_C_IsValidItemForTaming_Params
{
	class UPrimalItem*                                 PrimalItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPInventoryItemUsed
struct APegomastax_Character_BP_C_BPInventoryItemUsed_Params
{
	class UObject**                                    InventoryItemObject;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ReceiveAnyDamage
struct APegomastax_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BlueprintDrawFloatingHUD
struct APegomastax_Character_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      K2Node_Select_ReturnValue;                                // (OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPTryMultiUse
struct APegomastax_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPGetMultiUseEntries
struct APegomastax_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.AddAffinityFromFood
struct APegomastax_Character_BP_C_AddAffinityFromFood_Params
{
	class UPrimalItem*                                 Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StealItemInSlot
struct APegomastax_Character_BP_C_StealItemInSlot_Params
{
	int                                                slotNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Can StealFromCharacter
struct APegomastax_Character_BP_C_Can_StealFromCharacter_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canSteal;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StealRandom Items
struct APegomastax_Character_BP_C_StealRandom_Items_Params
{
	int                                                NumItems;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               includeHotBarItems;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              totalChance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              chancePerItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               succeeded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Stop FleeingWithLoot
struct APegomastax_Character_BP_C_Stop_FleeingWithLoot_Params
{
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StartFleeingWithLoot
struct APegomastax_Character_BP_C_StartFleeingWithLoot_Params
{
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPShouldForceFlee
struct APegomastax_Character_BP_C_BPShouldForceFlee_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Do StealItem
struct APegomastax_Character_BP_C_Do_StealItem_Params
{
	class APrimalCharacter*                            characterToStealFrom;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem*                                 itemToSteal;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               consumeItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Steal from Character
struct APegomastax_Character_BP_C_Steal_from_Character_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               succeeded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BlueprintAdjustOutputDamage
struct APegomastax_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CreateWildInventory
struct APegomastax_Character_BP_C_CreateWildInventory_Params
{
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.OnJumped
struct APegomastax_Character_BP_C_OnJumped_Params
{
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPModifyHarvestingWeightsArray
struct APegomastax_Character_BP_C_BPModifyHarvestingWeightsArray_Params
{
	TArray<float>                                      resourceWeightsIn;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UPrimalItem*>                         resourceItems;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      resourceWeightsOut;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPModifyHarvestingQuantity
struct APegomastax_Character_BP_C_BPModifyHarvestingQuantity_Params
{
	float*                                             originalQuantity;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     resourceSelected;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BlueprintCanAttack
struct APegomastax_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.UserConstructionScript
struct APegomastax_Character_BP_C_UserConstructionScript_Params
{
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPUnstasis
struct APegomastax_Character_BP_C_BPUnstasis_Params
{
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.PlayHoldingForTime
struct APegomastax_Character_BP_C_PlayHoldingForTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              preDelay;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Idle;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               hideBag;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.hideBag
struct APegomastax_Character_BP_C_hideBag_Params
{
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StopHoldingAfterFleeing
struct APegomastax_Character_BP_C_StopHoldingAfterFleeing_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StopHoldingImmediate
struct APegomastax_Character_BP_C_StopHoldingImmediate_Params
{
	bool                                               stopIdleHoldingAnim;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               stopRunHoldingAnim;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               hideBag;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              idleBlendOutTime;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.PlayHoldingImmediate
struct APegomastax_Character_BP_C_PlayHoldingImmediate_Params
{
	bool                                               Idle;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ShowBag
struct APegomastax_Character_BP_C_ShowBag_Params
{
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ShowBagAfterDelay
struct APegomastax_Character_BP_C_ShowBagAfterDelay_Params
{
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.FleeAfterTime
struct APegomastax_Character_BP_C_FleeAfterTime_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.PlayCombinedHolding
struct APegomastax_Character_BP_C_PlayCombinedHolding_Params
{
	float                                              timeBeforeRun;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              preDelay;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               hideBag;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              runHoldDuration;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ExecuteUbergraph_Pegomastax_Character_BP
struct APegomastax_Character_BP_C_ExecuteUbergraph_Pegomastax_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
