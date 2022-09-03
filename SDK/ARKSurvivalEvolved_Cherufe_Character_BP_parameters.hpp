#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Cherufe_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.OnRep_bAllowMating
struct ACherufe_Character_BP_C_OnRep_bAllowMating_Params
{
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BlueprintDrawFloatingHUD
struct ACherufe_Character_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.GetAllowMating
struct ACherufe_Character_BP_C_GetAllowMating_Params
{
	bool                                               Allow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.UpdateAllowMating
struct ACherufe_Character_BP_C_UpdateAllowMating_Params
{
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.UpdateForgeCharging
struct ACherufe_Character_BP_C_UpdateForgeCharging_Params
{
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BP_GetCustomModifier_MaxSpeed
struct ACherufe_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.UpdateTargetingAndAiming
struct ACherufe_Character_BP_C_UpdateTargetingAndAiming_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPTimerNonDedicated
struct ACherufe_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPTimerServer
struct ACherufe_Character_BP_C_BPTimerServer_Params
{
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BP_InterceptMoveForward
struct ACherufe_Character_BP_C_BP_InterceptMoveForward_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.IsConsumingOil
struct ACherufe_Character_BP_C_IsConsumingOil_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPGetOverrideCameraInterpSpeed
struct ACherufe_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params
{
	float*                                             DefaultTPVCameraSpeedInterpolationMultiplier;             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DefaultTPVOffsetInterpSpeed;                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TPVCameraSpeedInterpolationMultiplier;                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TPVOffsetInterpSpeed;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPOverrideCameraViewTarget
struct ACherufe_Character_BP_C_BPOverrideCameraViewTarget_Params
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

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.Update Targeting Location Particle
struct ACherufe_Character_BP_C_Update_Targeting_Location_Particle_Params
{
	bool                                               IsVisialbe;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.CheckRaining
struct ACherufe_Character_BP_C_CheckRaining_Params
{
	bool                                               ThisCharacterIsOpenToSkyAndItIsRaining;                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.SpawnNestEgg
struct ACherufe_Character_BP_C_SpawnNestEgg_Params
{
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPNotifySetRider
struct ACherufe_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPNotifyClearRider
struct ACherufe_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.ToggleInOutWaterVFX
struct ACherufe_Character_BP_C_ToggleInOutWaterVFX_Params
{
	bool                                               InWater;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPOnMovementModeChangedNotify
struct ACherufe_Character_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.SetForgeEnabled
struct ACherufe_Character_BP_C_SetForgeEnabled_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.UpdateVFX
struct ACherufe_Character_BP_C_UpdateVFX_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.PushBackPawns
struct ACherufe_Character_BP_C_PushBackPawns_Params
{
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.OnRep_IsProjectileTargeting
struct ACherufe_Character_BP_C_OnRep_IsProjectileTargeting_Params
{
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct ACherufe_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.SpawnVentProjectiles
struct ACherufe_Character_BP_C_SpawnVentProjectiles_Params
{
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPAdjustDamage
struct ACherufe_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.GetVentForgeStaminaCost
struct ACherufe_Character_BP_C_GetVentForgeStaminaCost_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPAdjustAttackIndex
struct ACherufe_Character_BP_C_BPAdjustAttackIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BlueprintCanAttack
struct ACherufe_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.StopChargingForge
struct ACherufe_Character_BP_C_StopChargingForge_Params
{
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.GetForgeChargedAmount
struct ACherufe_Character_BP_C_GetForgeChargedAmount_Params
{
	bool                                               SmoothedValues;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.StartChargingForge
struct ACherufe_Character_BP_C_StartChargingForge_Params
{
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.Allowed to ChargeForge
struct ACherufe_Character_BP_C_Allowed_to_ChargeForge_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.DoVentHeatAttack
struct ACherufe_Character_BP_C_DoVentHeatAttack_Params
{
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPTryMultiUse
struct ACherufe_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPGetMultiUseEntries
struct ACherufe_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.ProjectileTrySubtractFood
struct ACherufe_Character_BP_C_ProjectileTrySubtractFood_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPGetHUDElements
struct ACherufe_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPHandleOnStopTargeting
struct ACherufe_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPHandleControllerInitiatedAttack
struct ACherufe_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPDoAttack
struct ACherufe_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.GetVerticalViewAngle
struct ACherufe_Character_BP_C_GetVerticalViewAngle_Params
{
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BlueprintCanRiderAttack
struct ACherufe_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.SetTurretMode
struct ACherufe_Character_BP_C_SetTurretMode_Params
{
	bool*                                              Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPSetupTamed
struct ACherufe_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPBecomeAdult
struct ACherufe_Character_BP_C_BPBecomeAdult_Params
{
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPBecomeBaby
struct ACherufe_Character_BP_C_BPBecomeBaby_Params
{
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.UserConstructionScript
struct ACherufe_Character_BP_C_UserConstructionScript_Params
{
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.ServerRequest_FireProjectile
struct ACherufe_Character_BP_C_ServerRequest_FireProjectile_Params
{
	struct FProjectileArc                              Arc;                                                      // (Parm)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.ClientShowErrorMessage
struct ACherufe_Character_BP_C_ClientShowErrorMessage_Params
{
	unsigned char                                      MessageType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DisplayTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSingleton;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.ServerRequestStartChargingForge
struct ACherufe_Character_BP_C_ServerRequestStartChargingForge_Params
{
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.ServerRequestStopChargingForge
struct ACherufe_Character_BP_C_ServerRequestStopChargingForge_Params
{
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.ServerRequestDoVentForgeAttack
struct ACherufe_Character_BP_C_ServerRequestDoVentForgeAttack_Params
{
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.MultiSetSpeed
struct ACherufe_Character_BP_C_MultiSetSpeed_Params
{
	bool                                               ChargingForge;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.ReceiveBeginPlay
struct ACherufe_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPUnstasis
struct ACherufe_Character_BP_C_BPUnstasis_Params
{
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.Multi_SetCanRun
struct ACherufe_Character_BP_C_Multi_SetCanRun_Params
{
	bool                                               CanRun;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.AnimNotify_EatingFromOilGeyser
struct ACherufe_Character_BP_C_AnimNotify_EatingFromOilGeyser_Params
{
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.Multi_UpdateSmeltingFX
struct ACherufe_Character_BP_C_Multi_UpdateSmeltingFX_Params
{
	bool                                               NewActiveState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.TimeGatedTryAoEHeat
struct ACherufe_Character_BP_C_TimeGatedTryAoEHeat_Params
{
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.BP_OnJumpPressed
struct ACherufe_Character_BP_C_BP_OnJumpPressed_Params
{
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.Multi_StartOrStopForgeChargingFX
struct ACherufe_Character_BP_C_Multi_StartOrStopForgeChargingFX_Params
{
	bool                                               IsStart;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.AnimNotify_Taunt
struct ACherufe_Character_BP_C_AnimNotify_Taunt_Params
{
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.Server_TryTauntAttack
struct ACherufe_Character_BP_C_Server_TryTauntAttack_Params
{
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.Multi_UpdateLavaFloating
struct ACherufe_Character_BP_C_Multi_UpdateLavaFloating_Params
{
};

// Function Cherufe_Character_BP.Cherufe_Character_BP_C.ExecuteUbergraph_Cherufe_Character_BP
struct ACherufe_Character_BP_C_ExecuteUbergraph_Cherufe_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
