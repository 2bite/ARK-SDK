#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekCruiseMissile_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.has missile exceeded allowed distance
struct ATekCruiseMissile_Character_BP_C_has_missile_exceeded_allowed_distance_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Finished Arming
struct ATekCruiseMissile_Character_BP_C_Finished_Arming_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.manual explode
struct ATekCruiseMissile_Character_BP_C_manual_explode_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPNotifyClearPassenger
struct ATekCruiseMissile_Character_BP_C_BPNotifyClearPassenger_Params
{
	class APrimalCharacter**                           PassengerChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.FuelTime
struct ATekCruiseMissile_Character_BP_C_FuelTime_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPNotifyAddPassenger
struct ATekCruiseMissile_Character_BP_C_BPNotifyAddPassenger_Params
{
	class APrimalCharacter**                           PassengerChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Is Missile Locally Controlled
struct ATekCruiseMissile_Character_BP_C_Is_Missile_Locally_Controlled_Params
{
	bool                                               Local;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPServerHandleNetExecCommand
struct ATekCruiseMissile_Character_BP_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_OnJumpPressed
struct ATekCruiseMissile_Character_BP_C_BP_OnJumpPressed_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPAdjustDamage
struct ATekCruiseMissile_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveActorBeginOverlap
struct ATekCruiseMissile_Character_BP_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPCanBeBaseForCharacter
struct ATekCruiseMissile_Character_BP_C_BPCanBeBaseForCharacter_Params
{
	class APawn**                                      Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPGetOverrideCameraInterpSpeed
struct ATekCruiseMissile_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params
{
	float*                                             DefaultTPVCameraSpeedInterpolationMultiplier;             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DefaultTPVOffsetInterpSpeed;                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TPVCameraSpeedInterpolationMultiplier;                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TPVOffsetInterpSpeed;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Give Player Vision Buff
struct ATekCruiseMissile_Character_BP_C_Give_Player_Vision_Buff_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPModifyDesiredRotation
struct ATekCruiseMissile_Character_BP_C_BPModifyDesiredRotation_Params
{
	struct FRotator                                    InDesiredRotation;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    OutDesiredRotation;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_InterceptMoveRight
struct ATekCruiseMissile_Character_BP_C_BP_InterceptMoveRight_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPGetMultiUseEntries
struct ATekCruiseMissile_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Damage Actors By Explosion Radius
struct ATekCruiseMissile_Character_BP_C_Damage_Actors_By_Explosion_Radius_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Override_Damage;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Damage_Type;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               really_damage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_InterceptMoveForward
struct ATekCruiseMissile_Character_BP_C_BP_InterceptMoveForward_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPCanCryo
struct ATekCruiseMissile_Character_BP_C_BPCanCryo_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_PreventMovementMode
struct ATekCruiseMissile_Character_BP_C_BP_PreventMovementMode_Params
{
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ServerIsFiringItemInInventory
struct ATekCruiseMissile_Character_BP_C_ServerIsFiringItemInInventory_Params
{
	bool                                               retVal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_InterceptTurnInput
struct ATekCruiseMissile_Character_BP_C_BP_InterceptTurnInput_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.SetupScoutDisconnect
struct ATekCruiseMissile_Character_BP_C_SetupScoutDisconnect_Params
{
	float                                              DelayTimeSeconds;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.DestroyScout
struct ATekCruiseMissile_Character_BP_C_DestroyScout_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPModifyAimOffsetTargetLocation
struct ATekCruiseMissile_Character_BP_C_BPModifyAimOffsetTargetLocation_Params
{
	struct FVector                                     AimTargetLocation;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Is Dino Fleeing
struct ATekCruiseMissile_Character_BP_C_Is_Dino_Fleeing_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFleeing;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPOverrideStencilAllianceForTarget
struct ATekCruiseMissile_Character_BP_C_BPOverrideStencilAllianceForTarget_Params
{
	class APrimalCharacter**                           TargetDino;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStencilAlliance>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPShouldCancelDoAttack
struct ATekCruiseMissile_Character_BP_C_BPShouldCancelDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.OnRep_LowStamina
struct ATekCruiseMissile_Character_BP_C_OnRep_LowStamina_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.IsDashing
struct ATekCruiseMissile_Character_BP_C_IsDashing_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPGetHUDElements
struct ATekCruiseMissile_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveTick
struct ATekCruiseMissile_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ScoutIsFirstPerson
struct ATekCruiseMissile_Character_BP_C_ScoutIsFirstPerson_Params
{
	bool                                               retVal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.SetTargetImpactMaterial
struct ATekCruiseMissile_Character_BP_C_SetTargetImpactMaterial_Params
{
	float                                              ImpactDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPPreventStasis
struct ATekCruiseMissile_Character_BP_C_BPPreventStasis_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPHandleUseButtonPress
struct ATekCruiseMissile_Character_BP_C_BPHandleUseButtonPress_Params
{
	class AShooterPlayerController**                   RiderController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.IsScoutFirst Person
struct ATekCruiseMissile_Character_BP_C_IsScoutFirst_Person_Params
{
	bool                                               IsFirstPerson;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.SetFirstPersonMaterial
struct ATekCruiseMissile_Character_BP_C_SetFirstPersonMaterial_Params
{
	bool                                               IsFirstPerson;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.IsServerOrSinglePlayer
struct ATekCruiseMissile_Character_BP_C_IsServerOrSinglePlayer_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.IsClientOrSinglePlayer
struct ATekCruiseMissile_Character_BP_C_IsClientOrSinglePlayer_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Update Scout Vision
struct ATekCruiseMissile_Character_BP_C_Update_Scout_Vision_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPOverrideFPVViewLocation
struct ATekCruiseMissile_Character_BP_C_BPOverrideFPVViewLocation_Params
{
	class APrimalCharacter**                           viewingCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPGetFPVViewLocation
struct ATekCruiseMissile_Character_BP_C_BPGetFPVViewLocation_Params
{
	class APrimalCharacter**                           viewingCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Dash
struct ATekCruiseMissile_Character_BP_C_Dash_Params
{
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_GetCustomModifier_RotationRate
struct ATekCruiseMissile_Character_BP_C_BP_GetCustomModifier_RotationRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_GetCustomModifier_MaxSpeed
struct ATekCruiseMissile_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BlueprintCanAttack
struct ATekCruiseMissile_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_OnSetDeath
struct ATekCruiseMissile_Character_BP_C_BP_OnSetDeath_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Release Possessing Survivor
struct ATekCruiseMissile_Character_BP_C_Release_Possessing_Survivor_Params
{
	bool                                               destroyed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.GetPossessedByPlayer
struct ATekCruiseMissile_Character_BP_C_GetPossessedByPlayer_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Spawned From Projectile
struct ATekCruiseMissile_Character_BP_C_Spawned_From_Projectile_Params
{
	class AShooterPlayerController*                    ShooterPlayerController;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PossessDelay;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem*                                 FiringItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPIsValidUnStasisCaster
struct ATekCruiseMissile_Character_BP_C_BPIsValidUnStasisCaster_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.UserConstructionScript
struct ATekCruiseMissile_Character_BP_C_UserConstructionScript_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.StopPossessingPlayerMovement
struct ATekCruiseMissile_Character_BP_C_StopPossessingPlayerMovement_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveHit
struct ATekCruiseMissile_Character_BP_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReplicateInputVector
struct ATekCruiseMissile_Character_BP_C_ReplicateInputVector_Params
{
	struct FVector                                     InputVector;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.on hit something
struct ATekCruiseMissile_Character_BP_C_on_hit_something_Params
{
	class AActor*                                      other_actor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     hit_normal;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReleasePossessingSurvivorAndDestroy
struct ATekCruiseMissile_Character_BP_C_ReleasePossessingSurvivorAndDestroy_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.RechargeShield
struct ATekCruiseMissile_Character_BP_C_RechargeShield_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientScoutDamaged
struct ATekCruiseMissile_Character_BP_C_ClientScoutDamaged_Params
{
	struct FHitResult                                  HitResult;                                                // (Parm)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientTickShieldDamageVFX
struct ATekCruiseMissile_Character_BP_C_ClientTickShieldDamageVFX_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientRechargeShield
struct ATekCruiseMissile_Character_BP_C_ClientRechargeShield_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveBeginPlay
struct ATekCruiseMissile_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.SpawnEnd
struct ATekCruiseMissile_Character_BP_C_SpawnEnd_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveEndPlay
struct ATekCruiseMissile_Character_BP_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.TriggerDisconnectFX
struct ATekCruiseMissile_Character_BP_C_TriggerDisconnectFX_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ScoutDied
struct ATekCruiseMissile_Character_BP_C_ScoutDied_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.PossessedByPlayer
struct ATekCruiseMissile_Character_BP_C_PossessedByPlayer_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.MULTI_ReleasePossessingSurvivor
struct ATekCruiseMissile_Character_BP_C_MULTI_ReleasePossessingSurvivor_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ServerDashAttack
struct ATekCruiseMissile_Character_BP_C_ServerDashAttack_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.VerifyPossessingSurvivor
struct ATekCruiseMissile_Character_BP_C_VerifyPossessingSurvivor_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReleasePossessingSurvivorAndDelayedDestroy
struct ATekCruiseMissile_Character_BP_C_ReleasePossessingSurvivorAndDelayedDestroy_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.DelayedDestroyActor
struct ATekCruiseMissile_Character_BP_C_DelayedDestroyActor_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.CheckConsumeResource
struct ATekCruiseMissile_Character_BP_C_CheckConsumeResource_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientConsumeResource
struct ATekCruiseMissile_Character_BP_C_ClientConsumeResource_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.TickThrusterVFX
struct ATekCruiseMissile_Character_BP_C_TickThrusterVFX_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientRanOutOfStamina
struct ATekCruiseMissile_Character_BP_C_ClientRanOutOfStamina_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientScoutRangeCheck
struct ATekCruiseMissile_Character_BP_C_ClientScoutRangeCheck_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.CheckSubmerged
struct ATekCruiseMissile_Character_BP_C_CheckSubmerged_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientDashTick
struct ATekCruiseMissile_Character_BP_C_ClientDashTick_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientDashEnd
struct ATekCruiseMissile_Character_BP_C_ClientDashEnd_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.StartImpactVFX
struct ATekCruiseMissile_Character_BP_C_StartImpactVFX_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ServerHandleOnStopFire
struct ATekCruiseMissile_Character_BP_C_ServerHandleOnStopFire_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ApplyStaminaCost
struct ATekCruiseMissile_Character_BP_C_ApplyStaminaCost_Params
{
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.StaminaDrain
struct ATekCruiseMissile_Character_BP_C_StaminaDrain_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientLowStamina
struct ATekCruiseMissile_Character_BP_C_ClientLowStamina_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReleasePossessingSurvivorAndLongDelayedDestroy
struct ATekCruiseMissile_Character_BP_C_ReleasePossessingSurvivorAndLongDelayedDestroy_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.TickStaminaMeter
struct ATekCruiseMissile_Character_BP_C_TickStaminaMeter_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.DisableAI
struct ATekCruiseMissile_Character_BP_C_DisableAI_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.MULTI_SpawnedFromProjectile
struct ATekCruiseMissile_Character_BP_C_MULTI_SpawnedFromProjectile_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.DelayedReleasePossessingSurvivorAndDelayedDestroy
struct ATekCruiseMissile_Character_BP_C_DelayedReleasePossessingSurvivorAndDelayedDestroy_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.UpdateScoutVisionBuff
struct ATekCruiseMissile_Character_BP_C_UpdateScoutVisionBuff_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.RequestRecallScout
struct ATekCruiseMissile_Character_BP_C_RequestRecallScout_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Set rocket message
struct ATekCruiseMissile_Character_BP_C_Set_rocket_message_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.CustomEvent_2
struct ATekCruiseMissile_Character_BP_C_CustomEvent_2_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientCheckClearExpiredDinoData
struct ATekCruiseMissile_Character_BP_C_ClientCheckClearExpiredDinoData_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.set falling
struct ATekCruiseMissile_Character_BP_C_set_falling_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.warn time almost up
struct ATekCruiseMissile_Character_BP_C_warn_time_almost_up_Params
{
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Explode
struct ATekCruiseMissile_Character_BP_C_Explode_Params
{
	struct FVector                                     hit_normal;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ExecuteUbergraph_TekCruiseMissile_Character_BP
struct ATekCruiseMissile_Character_BP_C_ExecuteUbergraph_TekCruiseMissile_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
