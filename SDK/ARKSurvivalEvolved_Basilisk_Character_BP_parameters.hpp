#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Basilisk_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPPreventAttachments
struct ABasilisk_Character_BP_C_BPPreventAttachments_Params
{
	class UObject**                                    ForItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.RefreshTamedAttachments
struct ABasilisk_Character_BP_C_RefreshTamedAttachments_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.AllowPlayMontage
struct ABasilisk_Character_BP_C_AllowPlayMontage_Params
{
	class UAnimMontage**                               AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPIsHidden
struct ABasilisk_Character_BP_C_BPIsHidden_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPPostLoadedFromSaveGame
struct ABasilisk_Character_BP_C_BPPostLoadedFromSaveGame_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.SetTurretMode
struct ABasilisk_Character_BP_C_SetTurretMode_Params
{
	bool*                                              Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPPreventFirstPerson
struct ABasilisk_Character_BP_C_BPPreventFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.SetSaddleHidden
struct ABasilisk_Character_BP_C_SetSaddleHidden_Params
{
	bool                                               NewHidden;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPNotifyInventoryItemChange
struct ABasilisk_Character_BP_C_BPNotifyInventoryItemChange_Params
{
	bool*                                              bIsItemAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.UpdatedTracedMoundTransform
struct ABasilisk_Character_BP_C_UpdatedTracedMoundTransform_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.GetBuriedMoundTransform
struct ABasilisk_Character_BP_C_GetBuriedMoundTransform_Params
{
	float                                              HeightAlpha;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct UObject_FTransform                          ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.Check Unburied State and Add Hungry Ineffectiveness
struct ABasilisk_Character_BP_C_Check_Unburied_State_and_Add_Hungry_Ineffectiveness_Params
{
	class FString                                      State;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.AddTameIneffectiveness
struct ABasilisk_Character_BP_C_AddTameIneffectiveness_Params
{
	float                                              IneffectivenessValue;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.SetTailMoundVisibility
struct ABasilisk_Character_BP_C_SetTailMoundVisibility_Params
{
	bool                                               bNewVisibility;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.FindNearbyEggs
struct ABasilisk_Character_BP_C_FindNearbyEggs_Params
{
	bool                                               StartSeeking;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPSetupTamed
struct ABasilisk_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPHandleControllerInitiatedAttack
struct ABasilisk_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPOnTamedProcessOrder
struct ABasilisk_Character_BP_C_BPOnTamedProcessOrder_Params
{
	class APrimalCharacter**                           FromCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDinoTamedOrder>*                      OrderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     enemyTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              orderNotExecuted;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.PlayUndergroundEffectPulse
struct ABasilisk_Character_BP_C_PlayUndergroundEffectPulse_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.TraceForInvalidGround
struct ABasilisk_Character_BP_C_TraceForInvalidGround_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPNotifySetRider
struct ABasilisk_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.MeshVisibility
struct ABasilisk_Character_BP_C_MeshVisibility_Params
{
	class USceneComponent*                             InputComponent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPNotifyClearPassenger
struct ABasilisk_Character_BP_C_BPNotifyClearPassenger_Params
{
	class APrimalCharacter**                           PassengerChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPNotifyClearRider
struct ABasilisk_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.Set Visibility Of Riding and Dino Meshes
struct ABasilisk_Character_BP_C_Set_Visibility_Of_Riding_and_Dino_Meshes_Params
{
	bool                                               NewVisibility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.OffSetFromBuriedGroundLocation
struct ABasilisk_Character_BP_C_OffSetFromBuriedGroundLocation_Params
{
	struct FVector                                     InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.K2_OnMovementModeChanged
struct ABasilisk_Character_BP_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.SharedCanAttack
struct ABasilisk_Character_BP_C_SharedCanAttack_Params
{
	int                                                AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BlueprintCanRiderAttack
struct ABasilisk_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BlueprintCanAttack
struct ABasilisk_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPGetMultiUseEntries
struct ABasilisk_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPTryMultiUse
struct ABasilisk_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.TimeSinceLastAttackForIndex
struct ABasilisk_Character_BP_C_TimeSinceLastAttackForIndex_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.ShouldUnbury
struct ABasilisk_Character_BP_C_ShouldUnbury_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.ShouldBury
struct ABasilisk_Character_BP_C_ShouldBury_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPTimerServer
struct ABasilisk_Character_BP_C_BPTimerServer_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.Update Bury Mound
struct ABasilisk_Character_BP_C_Update_Bury_Mound_Params
{
	bool                                               ShouldShow;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.UpdateUndergroundTrail
struct ABasilisk_Character_BP_C_UpdateUndergroundTrail_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPTimerNonDedicated
struct ABasilisk_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.InitializeDive
struct ABasilisk_Character_BP_C_InitializeDive_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.IsAnimationPlaying
struct ABasilisk_Character_BP_C_IsAnimationPlaying_Params
{
	TArray<class UAnimMontage*>                        Montages;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.DetachChildren
struct ABasilisk_Character_BP_C_DetachChildren_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.DiveEnd
struct ABasilisk_Character_BP_C_DiveEnd_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.DiveSetup
struct ABasilisk_Character_BP_C_DiveSetup_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.DiveIdle
struct ABasilisk_Character_BP_C_DiveIdle_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.CanDive
struct ABasilisk_Character_BP_C_CanDive_Params
{
	bool                                               DiveInCheck;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.Get Scaled Affinity Based on Dino
struct ABasilisk_Character_BP_C_Get_Scaled_Affinity_Based_on_Dino_Params
{
	float                                              InputAffinity;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPAdjustDamage
struct ABasilisk_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.TameIfAllowed
struct ABasilisk_Character_BP_C_TameIfAllowed_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.ResetEggSeeking
struct ABasilisk_Character_BP_C_ResetEggSeeking_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.IncreaseTamingAffinity
struct ABasilisk_Character_BP_C_IncreaseTamingAffinity_Params
{
	class AShooterCharacter*                           TamingPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ValueForTaming;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.UserConstructionScript
struct ABasilisk_Character_BP_C_UserConstructionScript_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.Timeline_0__FinishedFunc
struct ABasilisk_Character_BP_C_Timeline_0__FinishedFunc_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.Timeline_0__UpdateFunc
struct ABasilisk_Character_BP_C_Timeline_0__UpdateFunc_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.MoundTimeline__FinishedFunc
struct ABasilisk_Character_BP_C_MoundTimeline__FinishedFunc_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.MoundTimeline__UpdateFunc
struct ABasilisk_Character_BP_C_MoundTimeline__UpdateFunc_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.ReceiveBeginPlay
struct ABasilisk_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPUnstasis
struct ABasilisk_Character_BP_C_BPUnstasis_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPDinoPostBeginPlay
struct ABasilisk_Character_BP_C_BPDinoPostBeginPlay_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.AnimNotify_Death
struct ABasilisk_Character_BP_C_AnimNotify_Death_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BP_OnJumpPressed
struct ABasilisk_Character_BP_C_BP_OnJumpPressed_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.Proxy_RefreshAttachments
struct ABasilisk_Character_BP_C_Proxy_RefreshAttachments_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.MoveToEgg
struct ABasilisk_Character_BP_C_MoveToEgg_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.StartUpdateEggSeekTimer
struct ABasilisk_Character_BP_C_StartUpdateEggSeekTimer_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.StartEggMoving
struct ABasilisk_Character_BP_C_StartEggMoving_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.RestartBrain
struct ABasilisk_Character_BP_C_RestartBrain_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.UpdateSeekEgg
struct ABasilisk_Character_BP_C_UpdateSeekEgg_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.EatEgg
struct ABasilisk_Character_BP_C_EatEgg_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.DissolveEggItem
struct ABasilisk_Character_BP_C_DissolveEggItem_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.PlayGroundParticleVFX
struct ABasilisk_Character_BP_C_PlayGroundParticleVFX_Params
{
	bool                                               orientToGround;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleSystem;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OffsetFromRoot;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.Multi_SetSaddleHidden
struct ABasilisk_Character_BP_C_Multi_SetSaddleHidden_Params
{
	bool                                               NewHidden;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.ForceUpdateBuriedMound
struct ABasilisk_Character_BP_C_ForceUpdateBuriedMound_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.ResetInterp
struct ABasilisk_Character_BP_C_ResetInterp_Params
{
	bool                                               BuriedState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.PlayGatedFXPulse
struct ABasilisk_Character_BP_C_PlayGatedFXPulse_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.StartMoundVisual
struct ABasilisk_Character_BP_C_StartMoundVisual_Params
{
	bool                                               NewVisibility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.Multi_ForceDiveEnd
struct ABasilisk_Character_BP_C_Multi_ForceDiveEnd_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.ForceDiveEnd
struct ABasilisk_Character_BP_C_ForceDiveEnd_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.StartBuried
struct ABasilisk_Character_BP_C_StartBuried_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.Multi_DiveIn
struct ABasilisk_Character_BP_C_Multi_DiveIn_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.Attempt Dive In
struct ABasilisk_Character_BP_C_Attempt_Dive_In_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.AttemptDiveOut
struct ABasilisk_Character_BP_C_AttemptDiveOut_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.Multi_DiveOut
struct ABasilisk_Character_BP_C_Multi_DiveOut_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.AnimNotify_EndBury
struct ABasilisk_Character_BP_C_AnimNotify_EndBury_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.AnimNotify_StartBury
struct ABasilisk_Character_BP_C_AnimNotify_StartBury_Params
{
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.Server_TryDive
struct ABasilisk_Character_BP_C_Server_TryDive_Params
{
	bool                                               NewUnderground;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ImmediateOut;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.ExecuteUbergraph_Basilisk_Character_BP
struct ABasilisk_Character_BP_C_ExecuteUbergraph_Basilisk_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
