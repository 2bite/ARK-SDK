#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Amargasaurus_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RefreshNearbyTamingPCs
struct AAmargasaurus_Character_BP_C_RefreshNearbyTamingPCs_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpawnWaterBubbleVFX
struct AAmargasaurus_Character_BP_C_SpawnWaterBubbleVFX_Params
{
	struct FName                                       NotifyName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateWaterTrailVFX
struct AAmargasaurus_Character_BP_C_UpdateWaterTrailVFX_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpawnWaterEntryVFX
struct AAmargasaurus_Character_BP_C_SpawnWaterEntryVFX_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateRiddenBuff
struct AAmargasaurus_Character_BP_C_UpdateRiddenBuff_Params
{
	class AShooterCharacter*                           Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsClear;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPNotifySetRider
struct AAmargasaurus_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.K2_OnMovementModeChanged
struct AAmargasaurus_Character_BP_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ToggleLockedAim
struct AAmargasaurus_Character_BP_C_ToggleLockedAim_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SendTamingHUDMessage
struct AAmargasaurus_Character_BP_C_SendTamingHUDMessage_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ColorIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.CharacterNonAggroBuffCheck
struct AAmargasaurus_Character_BP_C_CharacterNonAggroBuffCheck_Params
{
	class AShooterCharacter*                           ShooterChar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasNonAggroBuff;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ApplyTempDebuffToHitActors
struct AAmargasaurus_Character_BP_C_ApplyTempDebuffToHitActors_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintAdjustOutputDamage
struct AAmargasaurus_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPLocalPossessedBy
struct AAmargasaurus_Character_BP_C_BPLocalPossessedBy_Params
{
	class APlayerController**                          ByController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPLocalUnpossessed
struct AAmargasaurus_Character_BP_C_BPLocalUnpossessed_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RefreshNonRiderPossessedCrosshair
struct AAmargasaurus_Character_BP_C_RefreshNonRiderPossessedCrosshair_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpawnSpikeTypeToggleVFX
struct AAmargasaurus_Character_BP_C_SpawnSpikeTypeToggleVFX_Params
{
	int                                                SpikeTypeIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateSpikeColor
struct AAmargasaurus_Character_BP_C_UpdateSpikeColor_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnRep_CurrentSpikeType
struct AAmargasaurus_Character_BP_C_OnRep_CurrentSpikeType_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpawnSpikeMuzzleVFX
struct AAmargasaurus_Character_BP_C_SpawnSpikeMuzzleVFX_Params
{
	int                                                SpikeBoneIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SpikeTypeIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPModifyDesiredRotation
struct AAmargasaurus_Character_BP_C_BPModifyDesiredRotation_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InDesiredRotation;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    OutDesiredRotation;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnRep_ActiveSpikes
struct AAmargasaurus_Character_BP_C_OnRep_ActiveSpikes_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPTimerNonDedicated
struct AAmargasaurus_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetNextSpikeToRegen
struct AAmargasaurus_Character_BP_C_GetNextSpikeToRegen_Params
{
	int                                                NextIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPDoAttack
struct AAmargasaurus_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPOverrideCameraViewTarget
struct AAmargasaurus_Character_BP_C_BPOverrideCameraViewTarget_Params
{
	struct FName*                                      CurrentCameraMode;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    DesiredCameraLocation;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   DesiredCameraRotation;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DesiredFOV;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideCameraLocation;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideCameraRotation;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CameraRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideCameraFOV;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CameraFOV;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPGetCrosshairColor
struct AAmargasaurus_Character_BP_C_BPGetCrosshairColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnRep_bIsAimTargeting
struct AAmargasaurus_Character_BP_C_OnRep_bIsAimTargeting_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateTamingParticleEmitting
struct AAmargasaurus_Character_BP_C_UpdateTamingParticleEmitting_Params
{
	bool                                               Emit;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPShouldForceFlee
struct AAmargasaurus_Character_BP_C_BPShouldForceFlee_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintDrawFloatingHUD
struct AAmargasaurus_Character_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.AllowWakingTame
struct AAmargasaurus_Character_BP_C_AllowWakingTame_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPFedWakingTameEvent
struct AAmargasaurus_Character_BP_C_BPFedWakingTameEvent_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnRep_bTamingWantsFed
struct AAmargasaurus_Character_BP_C_OnRep_bTamingWantsFed_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPServerHandleNetExecCommand
struct AAmargasaurus_Character_BP_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SetTamingPC
struct AAmargasaurus_Character_BP_C_SetTamingPC_Params
{
	class AShooterPlayerController*                    PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Set;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.TamingTakeDamage
struct AAmargasaurus_Character_BP_C_TamingTakeDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPTimerServer
struct AAmargasaurus_Character_BP_C_BPTimerServer_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SetWildFollowTargetFromTamingPC
struct AAmargasaurus_Character_BP_C_SetWildFollowTargetFromTamingPC_Params
{
	bool                                               Set;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ConvertDamageToAffinity
struct AAmargasaurus_Character_BP_C_ConvertDamageToAffinity_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
struct AAmargasaurus_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetNextSpikeType
struct AAmargasaurus_Character_BP_C_GetNextSpikeType_Params
{
	int                                                FromIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NextSpikeIndex;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPOverrideFloatingHUDLocation
struct AAmargasaurus_Character_BP_C_BPOverrideFloatingHUDLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPOverrideHurtAnim
struct AAmargasaurus_Character_BP_C_BPOverrideHurtAnim_Params
{
	float*                                             DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      PawnInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsLocalPath;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    PointDamageLocation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    PointDamageHitNormal;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BP_OnJumpPressed
struct AAmargasaurus_Character_BP_C_BP_OnJumpPressed_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPOverrideGetAttackAnimationIndex
struct AAmargasaurus_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        AnimationArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpikeStaminaCheck
struct AAmargasaurus_Character_BP_C_SpikeStaminaCheck_Params
{
	bool                                               NotifyRiderOfFail;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPDinoARKDownloadedBegin
struct AAmargasaurus_Character_BP_C_BPDinoARKDownloadedBegin_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintCanRiderAttack
struct AAmargasaurus_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPSetupTamed
struct AAmargasaurus_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RemoveSpike
struct AAmargasaurus_Character_BP_C_RemoveSpike_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPTryMultiUse
struct AAmargasaurus_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPGetMultiUseEntries
struct AAmargasaurus_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RidingTick
struct AAmargasaurus_Character_BP_C_RidingTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetAimedSpikeTargetLoc
struct AAmargasaurus_Character_BP_C_GetAimedSpikeTargetLoc_Params
{
	struct FVector                                     Loc;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPTriggerStasisEvent
struct AAmargasaurus_Character_BP_C_BPTriggerStasisEvent_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetNextSpikeIndex
struct AAmargasaurus_Character_BP_C_GetNextSpikeIndex_Params
{
	int                                                NextIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BP_OnUncryo
struct AAmargasaurus_Character_BP_C_BP_OnUncryo_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UnstasisRegenSpikes
struct AAmargasaurus_Character_BP_C_UnstasisRegenSpikes_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPUnstasis
struct AAmargasaurus_Character_BP_C_BPUnstasis_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetNumActiveSpikes
struct AAmargasaurus_Character_BP_C_GetNumActiveSpikes_Params
{
	int                                                NumSpikes;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SetupSpikes
struct AAmargasaurus_Character_BP_C_SetupSpikes_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RefreshSpikeVisuals
struct AAmargasaurus_Character_BP_C_RefreshSpikeVisuals_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.CanShootSpike
struct AAmargasaurus_Character_BP_C_CanShootSpike_Params
{
	bool                                               CanShoot;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RegenSpike
struct AAmargasaurus_Character_BP_C_RegenSpike_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPGetHUDElements
struct AAmargasaurus_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintCanAttack
struct AAmargasaurus_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPNotifyClearRider
struct AAmargasaurus_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPHandleOnStopTargeting
struct AAmargasaurus_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPHandleControllerInitiatedAttack
struct AAmargasaurus_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UserConstructionScript
struct AAmargasaurus_Character_BP_C_UserConstructionScript_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Timeline_SpikeEmissive__FinishedFunc
struct AAmargasaurus_Character_BP_C_Timeline_SpikeEmissive__FinishedFunc_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Timeline_SpikeEmissive__UpdateFunc
struct AAmargasaurus_Character_BP_C_Timeline_SpikeEmissive__UpdateFunc_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Server_ShootSpike
struct AAmargasaurus_Character_BP_C_Server_ShootSpike_Params
{
	struct FVector                                     TargetLoc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Multi_LockRotRate
struct AAmargasaurus_Character_BP_C_Multi_LockRotRate_Params
{
	bool                                               Lock;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Server_LockRotRate
struct AAmargasaurus_Character_BP_C_Server_LockRotRate_Params
{
	bool                                               Lock;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ReceiveBeginPlay
struct AAmargasaurus_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPAnimNotifyCustomState_End
struct AAmargasaurus_Character_BP_C_BPAnimNotifyCustomState_End_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyState**                           AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Multi_SpawnSpikeVFX
struct AAmargasaurus_Character_BP_C_Multi_SpawnSpikeVFX_Params
{
	int                                                SpikeBoneIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SpikeTypeIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SetupTamingPCDamBind
struct AAmargasaurus_Character_BP_C_SetupTamingPCDamBind_Params
{
	bool                                               Bind;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnInstigatedAnyDamage_Event
struct AAmargasaurus_Character_BP_C_OnInstigatedAnyDamage_Event_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ReceiveAnyDamage
struct AAmargasaurus_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Multi_SetTamingParticleEmitting
struct AAmargasaurus_Character_BP_C_Multi_SetTamingParticleEmitting_Params
{
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ReceiveTick
struct AAmargasaurus_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Server_SetIsTargeting
struct AAmargasaurus_Character_BP_C_Server_SetIsTargeting_Params
{
	bool                                               IsTargeting;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPAnimNotifyCustomState_Begin
struct AAmargasaurus_Character_BP_C_BPAnimNotifyCustomState_Begin_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TotalDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyState**                           AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct AAmargasaurus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Multi_UpdateSpikeAimMats
struct AAmargasaurus_Character_BP_C_Multi_UpdateSpikeAimMats_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Interp;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateSpikeAimMats
struct AAmargasaurus_Character_BP_C_UpdateSpikeAimMats_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Interp;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ExecuteUbergraph_Amargasaurus_Character_BP
struct AAmargasaurus_Character_BP_C_ExecuteUbergraph_Amargasaurus_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
