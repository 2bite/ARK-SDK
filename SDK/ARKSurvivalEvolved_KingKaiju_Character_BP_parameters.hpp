#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_KingKaiju_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.GetVar_DifficultyIndex
struct AKingKaiju_Character_BP_C_GetVar_DifficultyIndex_Params
{
	int                                                Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.GetKingKaijuCharStatusComponent
struct AKingKaiju_Character_BP_C_GetKingKaijuCharStatusComponent_Params
{
	class UPrimalCharacterStatusComponent*             Component;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.GetVar_InHordeMode
struct AKingKaiju_Character_BP_C_GetVar_InHordeMode_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.GetKaijuEnemyList
struct AKingKaiju_Character_BP_C_GetKaijuEnemyList_Params
{
	TArray<class APrimalCharacter*>                    EnemyList;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.GetClosestEnemy
struct AKingKaiju_Character_BP_C_GetClosestEnemy_Params
{
	class AActor*                                      Enemy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPCanBaseOnCharacter
struct AKingKaiju_Character_BP_C_BPCanBaseOnCharacter_Params
{
	class APrimalCharacter**                           BaseCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.DoStepDmg
struct AKingKaiju_Character_BP_C_DoStepDmg_Params
{
	struct FName                                       Socket;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Spawn Loot Crate on Ascension Platform
struct AKingKaiju_Character_BP_C_Spawn_Loot_Crate_on_Ascension_Platform_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPOverrideDamageCauserHitMarker
struct AKingKaiju_Character_BP_C_BPOverrideDamageCauserHitMarker_Params
{
	class AShooterPlayerController**                   DamageCauserController;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bHitFriendlyTarget;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PreDamageHealth;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  PointDamageHitResult;                                     // (Parm, OutParm, ReferenceParm)
	struct FHitMarkerSettings                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPSentKilledNotification
struct AKingKaiju_Character_BP_C_BPSentKilledNotification_Params
{
	class AShooterPlayerController**                   ToPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.InterpSpawnInMICs
struct AKingKaiju_Character_BP_C_InterpSpawnInMICs_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.TraceLeftHandChargeCapsule
struct AKingKaiju_Character_BP_C_TraceLeftHandChargeCapsule_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPTimerServer
struct AKingKaiju_Character_BP_C_BPTimerServer_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.TraceRightHandChargeCapsule
struct AKingKaiju_Character_BP_C_TraceRightHandChargeCapsule_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.MaybeStunKaijusFromBasicAttacks
struct AKingKaiju_Character_BP_C_MaybeStunKaijusFromBasicAttacks_Params
{
	class AActor*                                      HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.MaybeApplyHealthBarBuff
struct AKingKaiju_Character_BP_C_MaybeApplyHealthBarBuff_Params
{
	class AActor*                                      DmgCauser;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BP_OnSetDeath
struct AKingKaiju_Character_BP_C_BP_OnSetDeath_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Wipeout Small Knockback
struct AKingKaiju_Character_BP_C_Wipeout_Small_Knockback_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.TriggerWipeout
struct AKingKaiju_Character_BP_C_TriggerWipeout_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.LerpDynamicMAT
struct AKingKaiju_Character_BP_C_LerpDynamicMAT_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPDinoPostBeginPlay
struct AKingKaiju_Character_BP_C_BPDinoPostBeginPlay_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.SetDamageState
struct AKingKaiju_Character_BP_C_SetDamageState_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                State;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.UpdateDamageStateFX
struct AKingKaiju_Character_BP_C_UpdateDamageStateFX_Params
{
	int                                                InIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InState;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPOnAnimPlayedNotify
struct AKingKaiju_Character_BP_C_BPOnAnimPlayedNotify_Params
{
	class UAnimMontage**                               AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      StartSectionName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReplicate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReplicateToOwner;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceTickPoseAndServerUpdateMesh;                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceTickPoseOnServer;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.IsLocomotionBlocked
struct AKingKaiju_Character_BP_C_IsLocomotionBlocked_Params
{
	bool                                               bLocked;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.GetMovementMontage
struct AKingKaiju_Character_BP_C_GetMovementMontage_Params
{
	TEnumAsByte<ERootMotionMovementMode>*              Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.SpawnCorruptionWave
struct AKingKaiju_Character_BP_C_SpawnCorruptionWave_Params
{
	struct FVector                                     Center;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.StartHordeMode
struct AKingKaiju_Character_BP_C_StartHordeMode_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.CheckForNextStage
struct AKingKaiju_Character_BP_C_CheckForNextStage_Params
{
	bool                                               StartHordeMode;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.FindBodySectionNearestPoint
struct AKingKaiju_Character_BP_C_FindBodySectionNearestPoint_Params
{
	struct FVector                                     DamagePoint;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Section;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.FindBodySectionByBone
struct AKingKaiju_Character_BP_C_FindBodySectionByBone_Params
{
	struct FName                                       Bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FoundSection;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Section;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.InitializeDamageStates
struct AKingKaiju_Character_BP_C_InitializeDamageStates_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.OnRep_DamageState
struct AKingKaiju_Character_BP_C_OnRep_DamageState_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPModifyRootMotionDeltaRotation
struct AKingKaiju_Character_BP_C_BPModifyRootMotionDeltaRotation_Params
{
	struct FRotator                                    Delta;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.RegisterHitForSwipeCharge
struct AKingKaiju_Character_BP_C_RegisterHitForSwipeCharge_Params
{
	class AActor*                                      HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPAdjustDamage
struct AKingKaiju_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.SummonCorruptDinos
struct AKingKaiju_Character_BP_C_SummonCorruptDinos_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BlueprintAdjustOutputDamage
struct AKingKaiju_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Stun KaijusFromCharge
struct AKingKaiju_Character_BP_C_Stun_KaijusFromCharge_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StunnedKaiju;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.MoveBlocked
struct AKingKaiju_Character_BP_C_MoveBlocked_Params
{
	bool                                               bLocked;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.UpdateLocomotion
struct AKingKaiju_Character_BP_C_UpdateLocomotion_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.ReceiveTick
struct AKingKaiju_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPCanTargetCorpse
struct AKingKaiju_Character_BP_C_BPCanTargetCorpse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.UpdateArenaEnemies
struct AKingKaiju_Character_BP_C_UpdateArenaEnemies_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.GroundPoundBigKnockback
struct AKingKaiju_Character_BP_C_GroundPoundBigKnockback_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.UserConstructionScript
struct AKingKaiju_Character_BP_C_UserConstructionScript_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.SetVar_KKArenaManager
struct AKingKaiju_Character_BP_C_SetVar_KKArenaManager_Params
{
	class AActor*                                      ArenaManager;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.SetVar_FinishCurrentHordeMode
struct AKingKaiju_Character_BP_C_SetVar_FinishCurrentHordeMode_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.SetVar_PlayersLostHordeMode
struct AKingKaiju_Character_BP_C_SetVar_PlayersLostHordeMode_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.ReceiveBeginPlay
struct AKingKaiju_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BndEvt__ChargeOverlapComponent_K2Node_ComponentBoundEvent_198_ComponentBeginOverlapSignature__DelegateSignature
struct AKingKaiju_Character_BP_C_BndEvt__ChargeOverlapComponent_K2Node_ComponentBoundEvent_198_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_StartCharging
struct AKingKaiju_Character_BP_C_AnimNotify_StartCharging_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_SummonDinos
struct AKingKaiju_Character_BP_C_AnimNotify_SummonDinos_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_SpawnFXAtLocation
struct AKingKaiju_Character_BP_C_Multi_SpawnFXAtLocation_Params
{
	class UParticleSystem*                             FX;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_RoarKnockback
struct AKingKaiju_Character_BP_C_AnimNotify_RoarKnockback_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BndEvt__LeftArmPusher_K2Node_ComponentBoundEvent_352_ComponentBeginOverlapSignature__DelegateSignature
struct AKingKaiju_Character_BP_C_BndEvt__LeftArmPusher_K2Node_ComponentBoundEvent_352_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BndEvt__RightArmPusher_K2Node_ComponentBoundEvent_431_ComponentBeginOverlapSignature__DelegateSignature
struct AKingKaiju_Character_BP_C_BndEvt__RightArmPusher_K2Node_ComponentBoundEvent_431_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_RightHandOn
struct AKingKaiju_Character_BP_C_AnimNotify_RightHandOn_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_RightHandOff
struct AKingKaiju_Character_BP_C_AnimNotify_RightHandOff_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_LeftHandOn
struct AKingKaiju_Character_BP_C_AnimNotify_LeftHandOn_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_LeftHandOff
struct AKingKaiju_Character_BP_C_AnimNotify_LeftHandOff_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_StopActiveState
struct AKingKaiju_Character_BP_C_AnimNotify_StopActiveState_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_SpawnCorruptWave
struct AKingKaiju_Character_BP_C_AnimNotify_SpawnCorruptWave_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_PlayArmorBreakReact
struct AKingKaiju_Character_BP_C_Multi_PlayArmorBreakReact_Params
{
	int                                                ArmorIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_DisableMeks
struct AKingKaiju_Character_BP_C_AnimNotify_DisableMeks_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_SetVulnerable
struct AKingKaiju_Character_BP_C_Multi_SetVulnerable_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_SetInvulnerable
struct AKingKaiju_Character_BP_C_Multi_SetInvulnerable_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.LaunchMeteor
struct AKingKaiju_Character_BP_C_LaunchMeteor_Params
{
	struct UObject_FTransform                          Transform;                                                // (Parm, IsPlainOldData)
	bool                                               CreateWarning;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WarningLoc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    WarningRot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_KillCorruptDinos
struct AKingKaiju_Character_BP_C_AnimNotify_KillCorruptDinos_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_ExecuteArenaWipeout
struct AKingKaiju_Character_BP_C_AnimNotify_ExecuteArenaWipeout_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_PlayWipeoutLightningFX
struct AKingKaiju_Character_BP_C_Multi_PlayWipeoutLightningFX_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_FinishedArenaWipeout
struct AKingKaiju_Character_BP_C_AnimNotify_FinishedArenaWipeout_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_WipeoutSmallKnockback
struct AKingKaiju_Character_BP_C_AnimNotify_WipeoutSmallKnockback_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_ToggleWipeoutChargeFX
struct AKingKaiju_Character_BP_C_Multi_ToggleWipeoutChargeFX_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_SpawnESLightning
struct AKingKaiju_Character_BP_C_Multi_SpawnESLightning_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_TurnOffInvulnerable
struct AKingKaiju_Character_BP_C_AnimNotify_TurnOffInvulnerable_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_SpawnMeteorLandLocationFX
struct AKingKaiju_Character_BP_C_Multi_SpawnMeteorLandLocationFX_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rot;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_PlayLoopingWipeoutFX
struct AKingKaiju_Character_BP_C_AnimNotify_PlayLoopingWipeoutFX_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_SpawnLoopingWipeoutFX
struct AKingKaiju_Character_BP_C_Multi_SpawnLoopingWipeoutFX_Params
{
	bool                                               TurnOn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.DebugCapsuleSweep
struct AKingKaiju_Character_BP_C_DebugCapsuleSweep_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rot;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.EnableMeks
struct AKingKaiju_Character_BP_C_EnableMeks_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_RightFootStepDmg
struct AKingKaiju_Character_BP_C_AnimNotify_RightFootStepDmg_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_LeftFootStepDmg
struct AKingKaiju_Character_BP_C_AnimNotify_LeftFootStepDmg_Params
{
};

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.ExecuteUbergraph_KingKaiju_Character_BP
struct AKingKaiju_Character_BP_C_ExecuteUbergraph_KingKaiju_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
