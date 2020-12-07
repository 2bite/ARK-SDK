#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RockDrake_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPIsHidden
struct ARockDrake_Character_BP_C_BPIsHidden_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyIfPassengerLaunchShoulderMount
struct ARockDrake_Character_BP_C_BPNotifyIfPassengerLaunchShoulderMount_Params
{
	class APrimalCharacter**                           launchedCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPGetAddForwardVelocityOnJump
struct ARockDrake_Character_BP_C_BPGetAddForwardVelocityOnJump_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPDinoARKDownloadedBegin
struct ARockDrake_Character_BP_C_BPDinoARKDownloadedBegin_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReceiveDestroyed
struct ARockDrake_Character_BP_C_ReceiveDestroyed_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.CanClimberStopNonDediTick_Controlled
struct ARockDrake_Character_BP_C_CanClimberStopNonDediTick_Controlled_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.OnJumped
struct ARockDrake_Character_BP_C_OnJumped_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Climber_AI_ClimbingCanAttack
struct ARockDrake_Character_BP_C_Climber_AI_ClimbingCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPOnStartJump
struct ARockDrake_Character_BP_C_BPOnStartJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Climber_AI_CheckForAttackWhileClimbing
struct ARockDrake_Character_BP_C_Climber_AI_CheckForAttackWhileClimbing_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPHandleRightShoulderButton
struct ARockDrake_Character_BP_C_BPHandleRightShoulderButton_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberAI_UpdateHasTargetWhileClimbing
struct ARockDrake_Character_BP_C_ClimberAI_UpdateHasTargetWhileClimbing_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPCharacterSleeped
struct ARockDrake_Character_BP_C_BPCharacterSleeped_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.HideSaddleMesh
struct ARockDrake_Character_BP_C_HideSaddleMesh_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyInventoryItemChange
struct ARockDrake_Character_BP_C_BPNotifyInventoryItemChange_Params
{
	bool*                                              bIsItemAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.SetAllRidersHidden
struct ARockDrake_Character_BP_C_SetAllRidersHidden_Params
{
	bool                                               bNewHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPHandleOnStopTargeting
struct ARockDrake_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPModifyFOV
struct ARockDrake_Character_BP_C_BPModifyFOV_Params
{
	float*                                             FOVIn;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPHandleControllerInitiatedAttack
struct ARockDrake_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberTick_Server
struct ARockDrake_Character_BP_C_ClimberTick_Server_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrakeTick_Gliding_BraceForImpact
struct ARockDrake_Character_BP_C_RockDrakeTick_Gliding_BraceForImpact_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrakeTick_Server
struct ARockDrake_Character_BP_C_RockDrakeTick_Server_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrakeTick_NonDedi
struct ARockDrake_Character_BP_C_RockDrakeTick_NonDedi_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyAddPassenger
struct ARockDrake_Character_BP_C_BPNotifyAddPassenger_Params
{
	class APrimalCharacter**                           PassengerChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyClearPassenger
struct ARockDrake_Character_BP_C_BPNotifyClearPassenger_Params
{
	class APrimalCharacter**                           PassengerChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberTick_NonDedi
struct ARockDrake_Character_BP_C_ClimberTick_NonDedi_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrake_AI_CheckForPounce
struct ARockDrake_Character_BP_C_RockDrake_AI_CheckForPounce_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     pounceDir;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BeginPounceAnims
struct ARockDrake_Character_BP_C_BeginPounceAnims_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.AllowTraceForPounce
struct ARockDrake_Character_BP_C_AllowTraceForPounce_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdatePounceTargetLocation
struct ARockDrake_Character_BP_C_UpdatePounceTargetLocation_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnSetDeath
struct ARockDrake_Character_BP_C_BP_OnSetDeath_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.TraceForPounce
struct ARockDrake_Character_BP_C_TraceForPounce_Params
{
	bool                                               foundValidLocation;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     validLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateServerClimberByClimbingIndex
struct ARockDrake_Character_BP_C_UpdateServerClimberByClimbingIndex_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateNonControlledClimber
struct ARockDrake_Character_BP_C_UpdateNonControlledClimber_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPBecomeAdult
struct ARockDrake_Character_BP_C_BPBecomeAdult_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPBecomeBaby
struct ARockDrake_Character_BP_C_BPBecomeBaby_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.CanClimberStopNonDediTick_NonControlled
struct ARockDrake_Character_BP_C_CanClimberStopNonDediTick_NonControlled_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.SpawnNestEgg
struct ARockDrake_Character_BP_C_SpawnNestEgg_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.CheckForSpawnEggs
struct ARockDrake_Character_BP_C_CheckForSpawnEggs_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.CleanAllowTargetWhenUsingCamoArray
struct ARockDrake_Character_BP_C_CleanAllowTargetWhenUsingCamoArray_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnTargetedByTamedOrder
struct ARockDrake_Character_BP_C_BP_OnTargetedByTamedOrder_Params
{
	class APrimalCharacter**                           OrderingCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalDinoCharacter**                       AttackingDino;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForced;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetCorrectWallJumpAnim
struct ARockDrake_Character_BP_C_GetCorrectWallJumpAnim_Params
{
	struct FVector*                                    wallJumpVelocity;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Anim;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Get CorrectClimber Rotation
struct ARockDrake_Character_BP_C_Get_CorrectClimber_Rotation_Params
{
	bool                                               updateRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ShouldAlignWithVelocityOnImpact
struct ARockDrake_Character_BP_C_ShouldAlignWithVelocityOnImpact_Params
{
	struct FHitResult                                  ImpactHit;                                                // (Parm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ServerTick_Override
struct ARockDrake_Character_BP_C_ServerTick_Override_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.OnWallJump
struct ARockDrake_Character_BP_C_OnWallJump_Params
{
	struct FVector*                                    wallJumpVelocity;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.OnStartSeeking
struct ARockDrake_Character_BP_C_OnStartSeeking_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReceiveHit
struct ARockDrake_Character_BP_C_ReceiveHit_Params
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

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct ARockDrake_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Get Rock Drake Anim BP
struct ARockDrake_Character_BP_C_Get_Rock_Drake_Anim_BP_Params
{
	class URockDrake_AnimBlueprint_C*                  animBP;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.SpawnGlideImpactVFX
struct ARockDrake_Character_BP_C_SpawnGlideImpactVFX_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetCurrentGlidingRotationRateMult
struct ARockDrake_Character_BP_C_GetCurrentGlidingRotationRateMult_Params
{
	float                                              mult;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BlueprintAdjustOutputDamage
struct ARockDrake_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Is Rock Drake Gliding
struct ARockDrake_Character_BP_C_Is_Rock_Drake_Gliding_Params
{
	bool                                               checkPrevious;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Stop All Climber Logic
struct ARockDrake_Character_BP_C_Stop_All_Climber_Logic_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.PounceStart
struct ARockDrake_Character_BP_C_PounceStart_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Climber_AI_OnSetTarget
struct ARockDrake_Character_BP_C_Climber_AI_OnSetTarget_Params
{
	class AActor**                                     NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnRiderChangeWeapons
struct ARockDrake_Character_BP_C_BP_OnRiderChangeWeapons_Params
{
	class AShooterCharacter**                          theRider;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                newWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberOn Server Run Released
struct ARockDrake_Character_BP_C_ClimberOn_Server_Run_Released_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ShouldRockDrakeGlideFall
struct ARockDrake_Character_BP_C_ShouldRockDrakeGlideFall_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberStopSeeking
struct ARockDrake_Character_BP_C_ClimberStopSeeking_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberStartSeeking
struct ARockDrake_Character_BP_C_ClimberStartSeeking_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.IsRockDrakeGliding_Pure
struct ARockDrake_Character_BP_C_IsRockDrakeGliding_Pure_Params
{
	bool                                               checkPrev;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Update Gliding_Feathers
struct ARockDrake_Character_BP_C_Update_Gliding_Feathers_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Update Gliding_VFX
struct ARockDrake_Character_BP_C_Update_Gliding_VFX_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateGliding_Audio
struct ARockDrake_Character_BP_C_UpdateGliding_Audio_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateGlidingFX
struct ARockDrake_Character_BP_C_UpdateGlidingFX_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Climber_OnServerRunPressed
struct ARockDrake_Character_BP_C_Climber_OnServerRunPressed_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClientTick_UpdateClimberTarget FOV
struct ARockDrake_Character_BP_C_ClientTick_UpdateClimberTarget_FOV_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Replicate Index Update Target TPV_Camera Offset
struct ARockDrake_Character_BP_C_Replicate_Index_Update_Target_TPV_Camera_Offset_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.AddRiderToCamoFadeQueue
struct ARockDrake_Character_BP_C_AddRiderToCamoFadeQueue_Params
{
	class AShooterCharacter*                           Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               enterCamo;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstant;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ActivateRiderCamoParticles
struct ARockDrake_Character_BP_C_ActivateRiderCamoParticles_Params
{
	bool                                               enterCamo;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           specificRider;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifySetRider
struct ARockDrake_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyClearRider
struct ARockDrake_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReceiveAnyDamage
struct ARockDrake_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetGlidingSpeedRatio_
struct ARockDrake_Character_BP_C_GetGlidingSpeedRatio__Params
{
	float                                              Ratio;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPUnstasis
struct ARockDrake_Character_BP_C_BPUnstasis_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.InitRockDrake
struct ARockDrake_Character_BP_C_InitRockDrake_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetGlidingSpeedRatio_Pure
struct ARockDrake_Character_BP_C_GetGlidingSpeedRatio_Pure_Params
{
	float                                              Ratio;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_GetCustomModifier_RotationRate
struct ARockDrake_Character_BP_C_BP_GetCustomModifier_RotationRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Replicate Index Update Non Dedi Climber
struct ARockDrake_Character_BP_C_Replicate_Index_Update_Non_Dedi_Climber_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Replicate Index Update Server And Client Climber
struct ARockDrake_Character_BP_C_Replicate_Index_Update_Server_And_Client_Climber_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateClimberMovementMode
struct ARockDrake_Character_BP_C_UpdateClimberMovementMode_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPOnMovementModeChangedNotify
struct ARockDrake_Character_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetRockDrakeStateOverrideIndex
struct ARockDrake_Character_BP_C_GetRockDrakeStateOverrideIndex_Params
{
	TEnumAsByte<E_DinoClimberState_RockDrake>          State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetCorrectSurfaceTraceDistance
struct ARockDrake_Character_BP_C_GetCorrectSurfaceTraceDistance_Params
{
	bool*                                              isForRetry;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              traceDist;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Tick Force Forward Input
struct ARockDrake_Character_BP_C_Tick_Force_Forward_Input_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_GetCustomModifier_MaxSpeed
struct ARockDrake_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.GlideStart
struct ARockDrake_Character_BP_C_GlideStart_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.PrepareToPounce
struct ARockDrake_Character_BP_C_PrepareToPounce_Params
{
	struct FVector                                     pounceDir;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Net Set Climber State
struct ARockDrake_Character_BP_C_Net_Set_Climber_State_Params
{
	unsigned char*                                     newStateIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.SetCamoActive
struct ARockDrake_Character_BP_C_SetCamoActive_Params
{
	bool                                               IsActive;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.CanGlide
struct ARockDrake_Character_BP_C_CanGlide_Params
{
	bool                                               isToStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.CanPounce
struct ARockDrake_Character_BP_C_CanPounce_Params
{
	bool                                               isToStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ServerTick_Gliding
struct ARockDrake_Character_BP_C_ServerTick_Gliding_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ServerTick_Pouncing
struct ARockDrake_Character_BP_C_ServerTick_Pouncing_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateClimberStateByClimbingIndex
struct ARockDrake_Character_BP_C_UpdateClimberStateByClimbingIndex_Params
{
	unsigned char*                                     newIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ShouldClimberDraw CrosshairWhileClimbing
struct ARockDrake_Character_BP_C_ShouldClimberDraw_CrosshairWhileClimbing_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.OnRep_bIsUsingCamo
struct ARockDrake_Character_BP_C_OnRep_bIsUsingCamo_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Can Use Camo
struct ARockDrake_Character_BP_C_Can_Use_Camo_Params
{
	bool                                               isForStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.NetSetUseCamo
struct ARockDrake_Character_BP_C_NetSetUseCamo_Params
{
	bool                                               newUse;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.IsNormalClimbable
struct ARockDrake_Character_BP_C_IsNormalClimbable_Params
{
	struct FVector*                                    Normal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              isAverageNormal;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Get Correct Surface Trace OffsetTransforms
struct ARockDrake_Character_BP_C_Get_Correct_Surface_Trace_OffsetTransforms_Params
{
	bool*                                              overrideUseMap;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       newUseMp;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct UObject_FTransform>                  offsetTransforms;                                         // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        TraceIndeces;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Check For Prevent Stop Climbing
struct ARockDrake_Character_BP_C_Check_For_Prevent_Stop_Climbing_Params
{
	TArray<bool>                                       traceHitsArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int*                                               numValidHits;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               numTraces;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllowClimbing;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BlueprintCanAttack
struct ARockDrake_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BlueprintCanRiderAttack
struct ARockDrake_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.UserConstructionScript
struct ARockDrake_Character_BP_C_UserConstructionScript_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.FadeCamo_RockDrake__FinishedFunc
struct ARockDrake_Character_BP_C_FadeCamo_RockDrake__FinishedFunc_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.FadeCamo_RockDrake__UpdateFunc
struct ARockDrake_Character_BP_C_FadeCamo_RockDrake__UpdateFunc_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.FadeToInvisible_Rider__FinishedFunc
struct ARockDrake_Character_BP_C_FadeToInvisible_Rider__FinishedFunc_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.FadeToInvisible_Rider__UpdateFunc
struct ARockDrake_Character_BP_C_FadeToInvisible_Rider__UpdateFunc_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_118
struct ARockDrake_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_118_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnJumpPressed
struct ARockDrake_Character_BP_C_BP_OnJumpPressed_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnJumpReleased
struct ARockDrake_Character_BP_C_BP_OnJumpReleased_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_GlideStart
struct ARockDrake_Character_BP_C_Multi_GlideStart_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              newSpeedMult;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_PounceStart
struct ARockDrake_Character_BP_C_Multi_PounceStart_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isFromClimbing;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Play_FadeCamo_RockDrake
struct ARockDrake_Character_BP_C_Play_FadeCamo_RockDrake_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Reverse_FadeCamo_RockDrake
struct ARockDrake_Character_BP_C_Reverse_FadeCamo_RockDrake_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReceiveBeginPlay
struct ARockDrake_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.SetNewTime_FadeCamo_RockDrake
struct ARockDrake_Character_BP_C_SetNewTime_FadeCamo_RockDrake_Params
{
	float                                              NewTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_SetNewTime_FadeCamo_RockDrake
struct ARockDrake_Character_BP_C_Multi_SetNewTime_FadeCamo_RockDrake_Params
{
	float                                              NewTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.SetNewTime_FadeCamo_Rider
struct ARockDrake_Character_BP_C_SetNewTime_FadeCamo_Rider_Params
{
	float                                              NewTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReverseFromEnd_FadeCamo_Rider
struct ARockDrake_Character_BP_C_ReverseFromEnd_FadeCamo_Rider_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.PlayFromStart_FadeCamo_Rider
struct ARockDrake_Character_BP_C_PlayFromStart_FadeCamo_Rider_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_OnRiderEquipWeapon
struct ARockDrake_Character_BP_C_Multi_OnRiderEquipWeapon_Params
{
	class AShooterCharacter*                           theRider;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.InitRockDrake_Event
struct ARockDrake_Character_BP_C_InitRockDrake_Event_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.InitRockDrake_NextTick
struct ARockDrake_Character_BP_C_InitRockDrake_NextTick_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_HardSetCamoActive
struct ARockDrake_Character_BP_C_Multi_HardSetCamoActive_Params
{
	bool                                               IsActive;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.PounceAfterDelay
struct ARockDrake_Character_BP_C_PounceAfterDelay_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Event_CleanAllowTargetWhenUsingCamoArray
struct ARockDrake_Character_BP_C_Event_CleanAllowTargetWhenUsingCamoArray_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Event_RestartCheckTargetArrayTimer
struct ARockDrake_Character_BP_C_Event_RestartCheckTargetArrayTimer_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.TrySpawnEggAfterDelay
struct ARockDrake_Character_BP_C_TrySpawnEggAfterDelay_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Server_RequestSetJumpMovementMode
struct ARockDrake_Character_BP_C_Server_RequestSetJumpMovementMode_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ResetIsInAirFromJumpAfterDelay
struct ARockDrake_Character_BP_C_ResetIsInAirFromJumpAfterDelay_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.OwningClient_SyncAllowPouncing
struct ARockDrake_Character_BP_C_OwningClient_SyncAllowPouncing_Params
{
	bool                                               newVal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Server_SyncHasValidPounceTarget
struct ARockDrake_Character_BP_C_Server_SyncHasValidPounceTarget_Params
{
	bool                                               newVal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     newTargetLocation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrake_AI_AnticipatePounce
struct ARockDrake_Character_BP_C_RockDrake_AI_AnticipatePounce_Params
{
	bool                                               isFromSetTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.CheckForGlideStartTimer
struct ARockDrake_Character_BP_C_CheckForGlideStartTimer_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.CheckForGlideStartTimer_EnableTick
struct ARockDrake_Character_BP_C_CheckForGlideStartTimer_EnableTick_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.CheckForGlideStartTimer_StopTick
struct ARockDrake_Character_BP_C_CheckForGlideStartTimer_StopTick_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_PlayFade
struct ARockDrake_Character_BP_C_Multi_PlayFade_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Server_RequestWaterJump
struct ARockDrake_Character_BP_C_Server_RequestWaterJump_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.WaterJump
struct ARockDrake_Character_BP_C_WaterJump_Params
{
};

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ExecuteUbergraph_RockDrake_Character_BP
struct ARockDrake_Character_BP_C_ExecuteUbergraph_RockDrake_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
