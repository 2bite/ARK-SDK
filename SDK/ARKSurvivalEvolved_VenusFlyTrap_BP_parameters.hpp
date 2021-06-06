#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_VenusFlyTrap_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.OnRep_bToggleUnstasis
struct AVenusFlyTrap_BP_C_OnRep_bToggleUnstasis_Params
{
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPPreventCharacterBasing
struct AVenusFlyTrap_BP_C_BPPreventCharacterBasing_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        BasedOnComponent;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ValidLOSTarget
struct AVenusFlyTrap_BP_C_ValidLOSTarget_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RetValid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.get anim index
struct AVenusFlyTrap_BP_C_get_anim_index_Params
{
	int                                                AnimIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Can Target WakeSelf
struct AVenusFlyTrap_BP_C_Can_Target_WakeSelf_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValidTarget;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPHitEffect
struct AVenusFlyTrap_BP_C_BPHitEffect_Params
{
	float*                                             DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      PawnInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsLocalPath;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        HitComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    DamageLoc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.EffectiveRotation
struct AVenusFlyTrap_BP_C_EffectiveRotation_Params
{
	struct FRotator                                    ActualRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.GetTargetAimAtLocation
struct AVenusFlyTrap_BP_C_GetTargetAimAtLocation_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.GetAimOffsets
struct AVenusFlyTrap_BP_C_GetAimOffsets_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              YawSpeed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rot;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SetIsDead
struct AVenusFlyTrap_BP_C_SetIsDead_Params
{
	bool                                               bNewIsDead;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.CanRevive
struct AVenusFlyTrap_BP_C_CanRevive_Params
{
	bool                                               bCanRevive;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPUpdatedHealth
struct AVenusFlyTrap_BP_C_BPUpdatedHealth_Params
{
	bool*                                              bDoReplication;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPAdjustDamage
struct AVenusFlyTrap_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPImpactEffect
struct AVenusFlyTrap_BP_C_BPImpactEffect_Params
{
	struct FHitResult                                  HitRes;                                                   // (Parm, OutParm, ReferenceParm)
	struct FVector                                     ShootDirection;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPReleasedPlayer
struct AVenusFlyTrap_BP_C_BPReleasedPlayer_Params
{
	class AShooterCharacter**                          ReleasedChar;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AtSeatNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPPreventReleaseSeatingStructure
struct AVenusFlyTrap_BP_C_BPPreventReleaseSeatingStructure_Params
{
	class AShooterCharacter**                          ForSitter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPSeatedPlayer
struct AVenusFlyTrap_BP_C_BPSeatedPlayer_Params
{
	class AShooterCharacter**                          SeatedChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AtSeatNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.CanAttack
struct AVenusFlyTrap_BP_C_CanAttack_Params
{
	bool                                               bCanAttack;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.CanRotate
struct AVenusFlyTrap_BP_C_CanRotate_Params
{
	bool                                               bCanRotate;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BlueprintAnimNotifyCustomEvent
struct AVenusFlyTrap_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.IsActorValidTarget
struct AVenusFlyTrap_BP_C_IsActorValidTarget_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsValid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.FindBestTarget
struct AVenusFlyTrap_BP_C_FindBestTarget_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPTriggerStasisEvent
struct AVenusFlyTrap_BP_C_BPTriggerStasisEvent_Params
{
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.OnSleep
struct AVenusFlyTrap_BP_C_OnSleep_Params
{
	bool                                               bIsSleeping;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromBeginPlay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SetSleeping
struct AVenusFlyTrap_BP_C_SetSleeping_Params
{
	bool                                               bIsSleeping;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPUnstasis
struct AVenusFlyTrap_BP_C_BPUnstasis_Params
{
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPHandleStructureEnabled
struct AVenusFlyTrap_BP_C_BPHandleStructureEnabled_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.UserConstructionScript
struct AVenusFlyTrap_BP_C_UserConstructionScript_Params
{
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Timeline_Dissolve__FinishedFunc
struct AVenusFlyTrap_BP_C_Timeline_Dissolve__FinishedFunc_Params
{
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Timeline_Dissolve__UpdateFunc
struct AVenusFlyTrap_BP_C_Timeline_Dissolve__UpdateFunc_Params
{
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ReceiveBeginPlay
struct AVenusFlyTrap_BP_C_ReceiveBeginPlay_Params
{
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_324_ComponentBeginOverlapSignature__DelegateSignature
struct AVenusFlyTrap_BP_C_BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_324_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Multi_SetSleeping
struct AVenusFlyTrap_BP_C_Multi_SetSleeping_Params
{
	bool                                               bNewSleepingState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ClientTick
struct AVenusFlyTrap_BP_C_ClientTick_Params
{
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ServerTick
struct AVenusFlyTrap_BP_C_ServerTick_Params
{
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.StartTimers
struct AVenusFlyTrap_BP_C_StartTimers_Params
{
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Multi_DoAttack
struct AVenusFlyTrap_BP_C_Multi_DoAttack_Params
{
	int                                                AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.DoAttack
struct AVenusFlyTrap_BP_C_DoAttack_Params
{
	int                                                AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.PlayAnimMontage
struct AVenusFlyTrap_BP_C_PlayAnimMontage_Params
{
	class UAnimMontage*                                MontageToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Play_Rate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SwallowDino
struct AVenusFlyTrap_BP_C_SwallowDino_Params
{
	class APrimalDinoCharacter*                        PrimalDino;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.PlayFlinch
struct AVenusFlyTrap_BP_C_PlayFlinch_Params
{
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.PlayAnimMontage_Multi
struct AVenusFlyTrap_BP_C_PlayAnimMontage_Multi_Params
{
	class UAnimMontage*                                MontageToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Play_Rate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Server_StartDying
struct AVenusFlyTrap_BP_C_Server_StartDying_Params
{
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Multi_StartDying
struct AVenusFlyTrap_BP_C_Multi_StartDying_Params
{
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.EventNextTick
struct AVenusFlyTrap_BP_C_EventNextTick_Params
{
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SleepCheckTick
struct AVenusFlyTrap_BP_C_SleepCheckTick_Params
{
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.PlayFailedGrab
struct AVenusFlyTrap_BP_C_PlayFailedGrab_Params
{
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SeatCharacter
struct AVenusFlyTrap_BP_C_SeatCharacter_Params
{
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SeatNextTick
struct AVenusFlyTrap_BP_C_SeatNextTick_Params
{
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Multi_SwallowParticle
struct AVenusFlyTrap_BP_C_Multi_SwallowParticle_Params
{
};

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ExecuteUbergraph_VenusFlyTrap_BP
struct AVenusFlyTrap_BP_C_ExecuteUbergraph_VenusFlyTrap_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
