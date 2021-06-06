#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Tentacle_HazardBP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_AdjustedAnimRate
struct ATentacle_HazardBP_C_OnRep_AdjustedAnimRate_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.SpawnDeathVFX
struct ATentacle_HazardBP_C_SpawnDeathVFX_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnAttackTentacleSpawned
struct ATentacle_HazardBP_C_OnAttackTentacleSpawned_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetIsHurtAnimPlaying
struct ATentacle_HazardBP_C_GetIsHurtAnimPlaying_Params
{
	bool                                               AnimIsPlaying;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetCharToGrabFromTarget
struct ATentacle_HazardBP_C_GetCharToGrabFromTarget_Params
{
	class APrimalCharacter*                            Char;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_AnimTypeIndex
struct ATentacle_HazardBP_C_OnRep_AnimTypeIndex_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.UpdateTentaclesAnims
struct ATentacle_HazardBP_C_UpdateTentaclesAnims_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.UpdateRetraction
struct ATentacle_HazardBP_C_UpdateRetraction_Params
{
	bool                                               NewIsRetracted;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.ForceTargetChar
struct ATentacle_HazardBP_C_ForceTargetChar_Params
{
	class APrimalCharacter*                            Char;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_bIsHalfRetracted
struct ATentacle_HazardBP_C_OnRep_bIsHalfRetracted_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.UpdateRetractedCollision
struct ATentacle_HazardBP_C_UpdateRetractedCollision_Params
{
	bool                                               IsRetracted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.ReleaseGrabbedChar
struct ATentacle_HazardBP_C_ReleaseGrabbedChar_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.CanTargetValidActor
struct ATentacle_HazardBP_C_CanTargetValidActor_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsValid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPDied
struct ATentacle_HazardBP_C_BPDied_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.SpawnTentacleFromAttack
struct ATentacle_HazardBP_C_SpawnTentacleFromAttack_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.SpawnedTentacleTimedDeath
struct ATentacle_HazardBP_C_SpawnedTentacleTimedDeath_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetIsInOutAnimPlaying
struct ATentacle_HazardBP_C_GetIsInOutAnimPlaying_Params
{
	bool                                               AnimIsPlaying;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_bIsUnderground
struct ATentacle_HazardBP_C_OnRep_bIsUnderground_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetEffectiveRot
struct ATentacle_HazardBP_C_SetEffectiveRot_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetServerTargetRot
struct ATentacle_HazardBP_C_SetServerTargetRot_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.RandomizeAnimVars
struct ATentacle_HazardBP_C_RandomizeAnimVars_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetCanGrabTarget
struct ATentacle_HazardBP_C_GetCanGrabTarget_Params
{
	class APrimalCharacter*                            Char;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanGrab;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.ShouldApplyKBToChar
struct ATentacle_HazardBP_C_ShouldApplyKBToChar_Params
{
	class APrimalCharacter*                            Char;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldApply;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetAttackCDVariance
struct ATentacle_HazardBP_C_SetAttackCDVariance_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetIsAttackAnimPlaying
struct ATentacle_HazardBP_C_GetIsAttackAnimPlaying_Params
{
	bool                                               AnimIsPlaying;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.RandomizeTentacleScale
struct ATentacle_HazardBP_C_RandomizeTentacleScale_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_AdjustedServerScale
struct ATentacle_HazardBP_C_OnRep_AdjustedServerScale_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.ResizeTentacle
struct ATentacle_HazardBP_C_ResizeTentacle_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.ManualOverlapCheck
struct ATentacle_HazardBP_C_ManualOverlapCheck_Params
{
	bool                                               FoundTarget;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.find or create dynamic materials
struct ATentacle_HazardBP_C_find_or_create_dynamic_materials_Params
{
	TArray<class UMaterialInstanceDynamic*>            dynamic_materials;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.Find Valid Spawn Location
struct ATentacle_HazardBP_C_Find_Valid_Spawn_Location_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             OutLocations;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.Ranged Attack target
struct ATentacle_HazardBP_C_Ranged_Attack_target_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPGetAggroDinoOnDamageSettings
struct ATentacle_HazardBP_C_BPGetAggroDinoOnDamageSettings_Params
{
	TArray<struct FName>                               AggroDinoClassesCustomTags;                               // (Parm, OutParm, ZeroConstructor)
	float                                              AggroDinoClassesRange;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.attackTarget
struct ATentacle_HazardBP_C_attackTarget_Params
{
	class APrimalCharacter*                            attackTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.EffectiveRotation
struct ATentacle_HazardBP_C_EffectiveRotation_Params
{
	struct FRotator                                    ActualRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetTargetAimAtLocation
struct ATentacle_HazardBP_C_GetTargetAimAtLocation_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetIsDead
struct ATentacle_HazardBP_C_SetIsDead_Params
{
	bool                                               bNewIsDead;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.CanRevive
struct ATentacle_HazardBP_C_CanRevive_Params
{
	bool                                               bCanRevive;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPUpdatedHealth
struct ATentacle_HazardBP_C_BPUpdatedHealth_Params
{
	bool*                                              bDoReplication;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPAdjustDamage
struct ATentacle_HazardBP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPImpactEffect
struct ATentacle_HazardBP_C_BPImpactEffect_Params
{
	struct FHitResult                                  HitRes;                                                   // (Parm, OutParm, ReferenceParm)
	struct FVector                                     ShootDirection;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPReleasedPlayer
struct ATentacle_HazardBP_C_BPReleasedPlayer_Params
{
	class AShooterCharacter**                          ReleasedChar;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AtSeatNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPPreventReleaseSeatingStructure
struct ATentacle_HazardBP_C_BPPreventReleaseSeatingStructure_Params
{
	class AShooterCharacter**                          ForSitter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPSeatedPlayer
struct ATentacle_HazardBP_C_BPSeatedPlayer_Params
{
	class AShooterCharacter**                          SeatedChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AtSeatNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.CanAttack
struct ATentacle_HazardBP_C_CanAttack_Params
{
	bool                                               bCanAttack;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.BlueprintAnimNotifyCustomEvent
struct ATentacle_HazardBP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.IsActorValidTarget
struct ATentacle_HazardBP_C_IsActorValidTarget_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanTarget;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.FindBestTarget
struct ATentacle_HazardBP_C_FindBestTarget_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPTriggerStasisEvent
struct ATentacle_HazardBP_C_BPTriggerStasisEvent_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.UpdateDediMesh
struct ATentacle_HazardBP_C_UpdateDediMesh_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetSleeping
struct ATentacle_HazardBP_C_SetSleeping_Params
{
	bool                                               IsSleeping;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPUnstasis
struct ATentacle_HazardBP_C_BPUnstasis_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.UserConstructionScript
struct ATentacle_HazardBP_C_UserConstructionScript_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.Timeline_Dissolve__FinishedFunc
struct ATentacle_HazardBP_C_Timeline_Dissolve__FinishedFunc_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.Timeline_Dissolve__UpdateFunc
struct ATentacle_HazardBP_C_Timeline_Dissolve__UpdateFunc_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.ReceiveBeginPlay
struct ATentacle_HazardBP_C_ReceiveBeginPlay_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_324_ComponentBeginOverlapSignature__DelegateSignature
struct ATentacle_HazardBP_C_BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_324_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.ServerTick
struct ATentacle_HazardBP_C_ServerTick_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.StartTimers
struct ATentacle_HazardBP_C_StartTimers_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_DoAttack
struct ATentacle_HazardBP_C_Multi_DoAttack_Params
{
	class UAnimMontage*                                SelectedAttack;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.DoAttack
struct ATentacle_HazardBP_C_DoAttack_Params
{
	class UAnimMontage*                                SelectedAttack;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.PlayAnimMontage
struct ATentacle_HazardBP_C_PlayAnimMontage_Params
{
	class UAnimMontage*                                MontageToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Play_Rate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendIn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendOut;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.PlayAnimMontage_Multi
struct ATentacle_HazardBP_C_PlayAnimMontage_Multi_Params
{
	class UAnimMontage*                                MontageToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Play_Rate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendIn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendOut;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.Server_StartDying
struct ATentacle_HazardBP_C_Server_StartDying_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_StartDying
struct ATentacle_HazardBP_C_Multi_StartDying_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.EventNextTick
struct ATentacle_HazardBP_C_EventNextTick_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.CheckRevive
struct ATentacle_HazardBP_C_CheckRevive_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_Revive
struct ATentacle_HazardBP_C_Multi_Revive_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_96_ComponentEndOverlapSignature__DelegateSignature
struct ATentacle_HazardBP_C_BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_96_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.DoRangedAttack
struct ATentacle_HazardBP_C_DoRangedAttack_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_RangedAttack
struct ATentacle_HazardBP_C_Multi_RangedAttack_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_DeleteActor
struct ATentacle_HazardBP_C_Multi_DeleteActor_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.SpawnTentacleAttack
struct ATentacle_HazardBP_C_SpawnTentacleAttack_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_RangeAttackMuzzleFXEmitter
struct ATentacle_HazardBP_C_Multi_RangeAttackMuzzleFXEmitter_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.MultiMaterialChange
struct ATentacle_HazardBP_C_MultiMaterialChange_Params
{
	class UPrimitiveComponent*                         MaterialToChange;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.StopDissolve
struct ATentacle_HazardBP_C_StopDissolve_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.ClearDissolve
struct ATentacle_HazardBP_C_ClearDissolve_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.FullDissolve
struct ATentacle_HazardBP_C_FullDissolve_Params
{
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.StopMontage_Multi
struct ATentacle_HazardBP_C_StopMontage_Multi_Params
{
	class UAnimMontage*                                MontageToStop;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.DelayForceTargetChar
struct ATentacle_HazardBP_C_DelayForceTargetChar_Params
{
	class APrimalCharacter*                            Char;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetRetractionWithDelay
struct ATentacle_HazardBP_C_SetRetractionWithDelay_Params
{
	bool                                               NewIsRetracted;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.ExecuteUbergraph_Tentacle_HazardBP
struct ATentacle_HazardBP_C_ExecuteUbergraph_Tentacle_HazardBP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnTentacleDied__DelegateSignature
struct ATentacle_HazardBP_C_OnTentacleDied__DelegateSignature_Params
{
	class APrimalStructure*                            ForTentacle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
