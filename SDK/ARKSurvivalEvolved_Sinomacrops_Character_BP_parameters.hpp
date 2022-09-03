#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sinomacrops_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ReceiveAnyDamage
struct ASinomacrops_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPNotifyStructurePlacedNearby
struct ASinomacrops_Character_BP_C_BPNotifyStructurePlacedNearby_Params
{
	class APrimalStructure**                           NewStructure;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ScreamStaminaCheck
struct ASinomacrops_Character_BP_C_ScreamStaminaCheck_Params
{
	bool                                               HasStamToScream;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ClearPreventInventoryAccess
struct ASinomacrops_Character_BP_C_ClearPreventInventoryAccess_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.MountedImmobilizationCheck
struct ASinomacrops_Character_BP_C_MountedImmobilizationCheck_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintDrawFloatingHUD
struct ASinomacrops_Character_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.TamingTrapCheck
struct ASinomacrops_Character_BP_C_TamingTrapCheck_Params
{
	bool                                               CheckPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsTrapped;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPNotifyLevelUp
struct ASinomacrops_Character_BP_C_BPNotifyLevelUp_Params
{
	int*                                               ExtraCharacterLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.AllowPlayMontage
struct ASinomacrops_Character_BP_C_AllowPlayMontage_Params
{
	class UAnimMontage**                               AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPOverrideGetAttackAnimationIndex
struct ASinomacrops_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        AnimationArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.LaunchToBuddyChar
struct ASinomacrops_Character_BP_C_LaunchToBuddyChar_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPGetGravityZScale
struct ASinomacrops_Character_BP_C_BPGetGravityZScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPTamedConsumeFoodItem
struct ASinomacrops_Character_BP_C_BPTamedConsumeFoodItem_Params
{
	class UPrimalItem**                                foodItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.OnRep_MountSocketIndex
struct ASinomacrops_Character_BP_C_OnRep_MountSocketIndex_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.SpawnMountedFlapVFX
struct ASinomacrops_Character_BP_C_SpawnMountedFlapVFX_Params
{
	bool                                               IsWings;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.UpdateEyeWingMat
struct ASinomacrops_Character_BP_C_UpdateEyeWingMat_Params
{
	float                                              val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ClearLastThrowAvoidActors
struct ASinomacrops_Character_BP_C_ClearLastThrowAvoidActors_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPClientHandleNetExecCommand
struct ASinomacrops_Character_BP_C_BPClientHandleNetExecCommand_Params
{
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.OnScreamStart
struct ASinomacrops_Character_BP_C_OnScreamStart_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPTryMultiUse
struct ASinomacrops_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPGetMultiUseEntries
struct ASinomacrops_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPOnClearMountedDino
struct ASinomacrops_Character_BP_C_BPOnClearMountedDino_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.AnimNotifyMountedDino
struct ASinomacrops_Character_BP_C_AnimNotifyMountedDino_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.RefreshSinoMountType
struct ASinomacrops_Character_BP_C_RefreshSinoMountType_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.GetCanBeMountedGlider
struct ASinomacrops_Character_BP_C_GetCanBeMountedGlider_Params
{
	bool                                               CanBeMountedGlider;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.FlyAfterTamingFeed
struct ASinomacrops_Character_BP_C_FlyAfterTamingFeed_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintOverrideWantsToRun
struct ASinomacrops_Character_BP_C_BlueprintOverrideWantsToRun_Params
{
	bool*                                              bInputWantsToRun;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ResetChanceToFlyLand
struct ASinomacrops_Character_BP_C_ResetChanceToFlyLand_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.AllowWakingTame
struct ASinomacrops_Character_BP_C_AllowWakingTame_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.UpdateChanceToFlyLand
struct ASinomacrops_Character_BP_C_UpdateChanceToFlyLand_Params
{
	bool                                               IsFly;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Chance;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsDefault;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.OverrideRandomWanderLocation
struct ASinomacrops_Character_BP_C_OverrideRandomWanderLocation_Params
{
	struct FVector                                     originalDestination;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     inVec;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPFedWakingTameEvent
struct ASinomacrops_Character_BP_C_BPFedWakingTameEvent_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BP_CanFly
struct ASinomacrops_Character_BP_C_BP_CanFly_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.RefreshWildFollowPlayer
struct ASinomacrops_Character_BP_C_RefreshWildFollowPlayer_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ClearWildFollowPlayer
struct ASinomacrops_Character_BP_C_ClearWildFollowPlayer_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.SetWildFollowPlayer
struct ASinomacrops_Character_BP_C_SetWildFollowPlayer_Params
{
	class AShooterCharacter*                           ShooterChar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.GetWildShouldFollowPlayer
struct ASinomacrops_Character_BP_C_GetWildShouldFollowPlayer_Params
{
	class AShooterCharacter*                           ShooterChar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SetOnSuccess;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldFollow;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ClearBuddyChar
struct ASinomacrops_Character_BP_C_ClearBuddyChar_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ArriveAtBuddyCheck
struct ASinomacrops_Character_BP_C_ArriveAtBuddyCheck_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.DinoShoulderMountedLaunch
struct ASinomacrops_Character_BP_C_DinoShoulderMountedLaunch_Params
{
	struct FVector*                                    launchDir;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          throwingCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.GetShouldScream
struct ASinomacrops_Character_BP_C_GetShouldScream_Params
{
	bool                                               IsAI;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldScream;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Scream
struct ASinomacrops_Character_BP_C_Scream_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPTimerServer
struct ASinomacrops_Character_BP_C_BPTimerServer_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintAdjustOutputDamage
struct ASinomacrops_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.GetShouldAttackActor
struct ASinomacrops_Character_BP_C_GetShouldAttackActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldAttack;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPShouldForceFlee
struct ASinomacrops_Character_BP_C_BPShouldForceFlee_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPSetupTamed
struct ASinomacrops_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintCanAttack
struct ASinomacrops_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.InitSino
struct ASinomacrops_Character_BP_C_InitSino_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.SinoMovementStamDrainTick
struct ASinomacrops_Character_BP_C_SinoMovementStamDrainTick_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPServerHandleNetExecCommand
struct ASinomacrops_Character_BP_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPOnSetMountedDino
struct ASinomacrops_Character_BP_C_BPOnSetMountedDino_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.UserConstructionScript
struct ASinomacrops_Character_BP_C_UserConstructionScript_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Timeline_LerpMountSocket__FinishedFunc
struct ASinomacrops_Character_BP_C_Timeline_LerpMountSocket__FinishedFunc_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Timeline_LerpMountSocket__UpdateFunc
struct ASinomacrops_Character_BP_C_Timeline_LerpMountSocket__UpdateFunc_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Timeline_ScreamEyeWing__FinishedFunc
struct ASinomacrops_Character_BP_C_Timeline_ScreamEyeWing__FinishedFunc_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Timeline_ScreamEyeWing__UpdateFunc
struct ASinomacrops_Character_BP_C_Timeline_ScreamEyeWing__UpdateFunc_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ReceiveBeginPlay
struct ASinomacrops_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct ASinomacrops_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_SpawnTamingVFX
struct ASinomacrops_Character_BP_C_Multi_SpawnTamingVFX_Params
{
	class AShooterCharacter*                           ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_PlayGliderMontage
struct ASinomacrops_Character_BP_C_Multi_PlayGliderMontage_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_LerpMountSockets
struct ASinomacrops_Character_BP_C_Multi_LerpMountSockets_Params
{
	int                                                ToIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.StopLerpMountSockets
struct ASinomacrops_Character_BP_C_StopLerpMountSockets_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ScreamUpdateEyeWing
struct ASinomacrops_Character_BP_C_ScreamUpdateEyeWing_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_ThrowToBuddy
struct ASinomacrops_Character_BP_C_Multi_ThrowToBuddy_Params
{
	struct UObject_FTransform                          Rot;                                                      // (Parm, IsPlainOldData)
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_PostImmobilizeRemount
struct ASinomacrops_Character_BP_C_Multi_PostImmobilizeRemount_Params
{
};

// Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ExecuteUbergraph_Sinomacrops_Character_BP
struct ASinomacrops_Character_BP_C_ExecuteUbergraph_Sinomacrops_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
