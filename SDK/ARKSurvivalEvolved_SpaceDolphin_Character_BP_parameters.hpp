#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceDolphin_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetHudData
struct ASpaceDolphin_Character_BP_C_GetHudData_Params
{
	bool                                               HasSaddle;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFPV;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HideHUDinFPV;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                LaserLevel;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MaxLaserLevel;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LaserDowngradeTime;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LaserDowngradeTimerRemaining;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLaserDowngradeTimerActive;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             LastLaserLevelChangedTime;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryComponent*                   InventoryComponent;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SaddleFuelItem;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FlakCannonAmmoItem;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUsingSuperFlight;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUsingSuperFlightBoost;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FuelPercent;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CannonCooldownPercent;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              EchoOrChaffCooldownPercent;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSubmerged;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPForceCameraStyle
struct ASpaceDolphin_Character_BP_C_BPForceCameraStyle_Params
{
	class APrimalCharacter**                           ForViewTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECameraStyle>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateLocalSounds
struct ASpaceDolphin_Character_BP_C_UpdateLocalSounds_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Star Fox Mode Public
struct ASpaceDolphin_Character_BP_C_Is_Star_Fox_Mode_Public_Params
{
	class AMissionSpline*                              CurrentSpline;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	double                                             RetRiderSetTime;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               RetIsRiderWarmup;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateMouseCursor
struct ASpaceDolphin_Character_BP_C_UpdateMouseCursor_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TurnOffMouseCursor
struct ASpaceDolphin_Character_BP_C_TurnOffMouseCursor_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPHandlePoop
struct ASpaceDolphin_Character_BP_C_BPHandlePoop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsSilenced
struct ASpaceDolphin_Character_BP_C_IsSilenced_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Server Request Fire Lasers Fn
struct ASpaceDolphin_Character_BP_C_Server_Request_Fire_Lasers_Fn_Params
{
	struct FVector                                     CameraHitLocation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ShouldPreventLockOnMe
struct ASpaceDolphin_Character_BP_C_ShouldPreventLockOnMe_Params
{
	bool                                               IsPrevented;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsCurrentlyInStarFoxModeWithGamepad
struct ASpaceDolphin_Character_BP_C_IsCurrentlyInStarFoxModeWithGamepad_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPSetSimulatedInterpRollOverride
struct ASpaceDolphin_Character_BP_C_BPSetSimulatedInterpRollOverride_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsGamePadActive
struct ASpaceDolphin_Character_BP_C_IsGamePadActive_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPUnstasis
struct ASpaceDolphin_Character_BP_C_BPUnstasis_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryStartImmelmann
struct ASpaceDolphin_Character_BP_C_TryStartImmelmann_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryStartLoop
struct ASpaceDolphin_Character_BP_C_TryStartLoop_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateFPVMeshes
struct ASpaceDolphin_Character_BP_C_UpdateFPVMeshes_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Desired Rotation
struct ASpaceDolphin_Character_BP_C_Get_Desired_Rotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetCameraHitLocationForProjectiles
struct ASpaceDolphin_Character_BP_C_GetCameraHitLocationForProjectiles_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Screen Mouse Position as MatParam
struct ASpaceDolphin_Character_BP_C_Get_Screen_Mouse_Position_as_MatParam_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOnClearMountedDino
struct ASpaceDolphin_Character_BP_C_BPOnClearMountedDino_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Update Saddle Shield Material
struct ASpaceDolphin_Character_BP_C_Update_Saddle_Shield_Material_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetPercentTamed
struct ASpaceDolphin_Character_BP_C_GetPercentTamed_Params
{
	float                                              Percemt;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RequiredAmount;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPDinoTooltipCustomTamingProgressBar
struct ASpaceDolphin_Character_BP_C_BPDinoTooltipCustomTamingProgressBar_Params
{
	bool                                               overrideTamingProgressBarIfActive;                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              progressPercent;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      Label;                                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPNotifyInventoryItemChange
struct ASpaceDolphin_Character_BP_C_BPNotifyInventoryItemChange_Params
{
	bool*                                              bIsItemAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AddSaddleActivationText
struct ASpaceDolphin_Character_BP_C_AddSaddleActivationText_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClearSaddleActivationText
struct ASpaceDolphin_Character_BP_C_ClearSaddleActivationText_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPBecomeAdult
struct ASpaceDolphin_Character_BP_C_BPBecomeAdult_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPBecomeBaby
struct ASpaceDolphin_Character_BP_C_BPBecomeBaby_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateStarFoxCameraForGamepad
struct ASpaceDolphin_Character_BP_C_UpdateStarFoxCameraForGamepad_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_InterceptTurnInput
struct ASpaceDolphin_Character_BP_C_BP_InterceptTurnInput_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnConsumeFood
struct ASpaceDolphin_Character_BP_C_OnConsumeFood_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPUntamedConsumeFoodItem
struct ASpaceDolphin_Character_BP_C_BPUntamedConsumeFoodItem_Params
{
	class UPrimalItem**                                foodItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPTamedConsumeFoodItem
struct ASpaceDolphin_Character_BP_C_BPTamedConsumeFoodItem_Params
{
	class UPrimalItem**                                foodItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPModifyControlRotation
struct ASpaceDolphin_Character_BP_C_BPModifyControlRotation_Params
{
	struct FRotator                                    ControlRotation;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    outControlRotation;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SetLastTimeChargedLaserHit
struct ASpaceDolphin_Character_BP_C_SetLastTimeChargedLaserHit_Params
{
	double                                             val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Update Materials
struct ASpaceDolphin_Character_BP_C_Update_Materials_Params
{
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is FPV Public
struct ASpaceDolphin_Character_BP_C_Is_FPV_Public_Params
{
	bool                                               Retval;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsFPV
struct ASpaceDolphin_Character_BP_C_IsFPV_Params
{
	bool                                               Retval;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraLoc;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveEndPlay
struct ASpaceDolphin_Character_BP_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPNotifyLevelUp
struct ASpaceDolphin_Character_BP_C_BPNotifyLevelUp_Params
{
	int*                                               ExtraCharacterLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsSpinningPublic
struct ASpaceDolphin_Character_BP_C_IsSpinningPublic_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	bool                                               Right;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateBarrelRoll
struct ASpaceDolphin_Character_BP_C_UpdateBarrelRoll_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetLaserDamage
struct ASpaceDolphin_Character_BP_C_GetLaserDamage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetDamageReductionPercentFromLaserLevel
struct ASpaceDolphin_Character_BP_C_GetDamageReductionPercentFromLaserLevel_Params
{
	float                                              Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetTamedWalkingSpeedModifierForLaserLevel
struct ASpaceDolphin_Character_BP_C_GetTamedWalkingSpeedModifierForLaserLevel_Params
{
	float                                              TamedWalkingSpeedModifier;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetLaserLevelDowngradeTime
struct ASpaceDolphin_Character_BP_C_GetLaserLevelDowngradeTime_Params
{
	float                                              LaserLevelDowngradeTime;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetChargedLaserProj
struct ASpaceDolphin_Character_BP_C_GetChargedLaserProj_Params
{
	class UClass*                                      ChargedLaserProjectile;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetLaserPFX
struct ASpaceDolphin_Character_BP_C_GetLaserPFX_Params
{
	int                                                LaserLevel;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetTargetingDesirability
struct ASpaceDolphin_Character_BP_C_BPGetTargetingDesirability_Params
{
	class AActor**                                     Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetChanceToSpawnSpaceWhale
struct ASpaceDolphin_Character_BP_C_GetChanceToSpawnSpaceWhale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SpawnSpaceWhale
struct ASpaceDolphin_Character_BP_C_SpawnSpaceWhale_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Try Spawn Space Whale
struct ASpaceDolphin_Character_BP_C_Try_Spawn_Space_Whale_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateWildDemands
struct ASpaceDolphin_Character_BP_C_UpdateWildDemands_Params
{
	bool                                               ResetWildDemand;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.HasWildDemands
struct ASpaceDolphin_Character_BP_C_HasWildDemands_Params
{
	bool                                               HasDemands;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumPets;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumFood;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TriggerWildAngerFn
struct ASpaceDolphin_Character_BP_C_TriggerWildAngerFn_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsAngryWildDino
struct ASpaceDolphin_Character_BP_C_IsAngryWildDino_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	float                                              DistanceSq;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.NearbyAngryDolphin
struct ASpaceDolphin_Character_BP_C_NearbyAngryDolphin_Params
{
	class ASpaceDolphin_Character_BP_C*                AngryDolphin;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPShouldForceFlee
struct ASpaceDolphin_Character_BP_C_BPShouldForceFlee_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateWild
struct ASpaceDolphin_Character_BP_C_UpdateWild_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPTryMultiUse
struct ASpaceDolphin_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetMultiUseEntries
struct ASpaceDolphin_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BlueprintAdjustOutputDamage
struct ASpaceDolphin_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.FireChaff
struct ASpaceDolphin_Character_BP_C_FireChaff_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.EchoLocation
struct ASpaceDolphin_Character_BP_C_EchoLocation_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateGroundFX
struct ASpaceDolphin_Character_BP_C_UpdateGroundFX_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DoLaserTraceAndDamage
struct ASpaceDolphin_Character_BP_C_DoLaserTraceAndDamage_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RetStart;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RetEnd;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ImpactCharacterOrStructure;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateStarFoxCollision
struct ASpaceDolphin_Character_BP_C_UpdateStarFoxCollision_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpateBarrelRollFX
struct ASpaceDolphin_Character_BP_C_UpateBarrelRollFX_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateRotatingComponent
struct ASpaceDolphin_Character_BP_C_UpdateRotatingComponent_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_LastLaserLevelUpTime
struct ASpaceDolphin_Character_BP_C_OnRep_LastLaserLevelUpTime_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Downgrade Laser Level
struct ASpaceDolphin_Character_BP_C_Downgrade_Laser_Level_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Drifting Public
struct ASpaceDolphin_Character_BP_C_Is_Drifting_Public_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	bool                                               DriftingInput;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Right;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             DriftEndTime;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DeactiveDriftJets
struct ASpaceDolphin_Character_BP_C_DeactiveDriftJets_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsDrifting
struct ASpaceDolphin_Character_BP_C_IsDrifting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	bool                                               DriftingInput;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Right;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             DriftEndTime;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFinishingDrift;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetDriftInputStrength
struct ASpaceDolphin_Character_BP_C_GetDriftInputStrength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	float                                              ReturnValueBase;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateDrifting
struct ASpaceDolphin_Character_BP_C_UpdateDrifting_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSaddle
struct ASpaceDolphin_Character_BP_C_UpdateSaddle_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryDoStarFoxModeCollisionDamage
struct ASpaceDolphin_Character_BP_C_TryDoStarFoxModeCollisionDamage_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveActorBeginOverlap
struct ASpaceDolphin_Character_BP_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveActorEndOverlap
struct ASpaceDolphin_Character_BP_C_ReceiveActorEndOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Camera YScalar
struct ASpaceDolphin_Character_BP_C_Get_Camera_YScalar_Params
{
	float                                              StarFoxModeCameraXOffsetScalar;                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_CurrentSpline
struct ASpaceDolphin_Character_BP_C_OnRep_CurrentSpline_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_PreventMovementMode
struct ASpaceDolphin_Character_BP_C_BP_PreventMovementMode_Params
{
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.CanBarrelRoll
struct ASpaceDolphin_Character_BP_C_CanBarrelRoll_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsDoingBarrelRoll
struct ASpaceDolphin_Character_BP_C_IsDoingBarrelRoll_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Anim;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             LastBarrelRollStartTime;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BarrelRoll
struct ASpaceDolphin_Character_BP_C_BarrelRoll_Params
{
	int                                                Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraDirection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Braking Public
struct ASpaceDolphin_Character_BP_C_Is_Braking_Public_Params
{
	bool                                               IsBraking;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             TimeStartedBraking;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Braking
struct ASpaceDolphin_Character_BP_C_Is_Braking_Params
{
	bool                                               IsBraking;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             TimeStartedBraking;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateBraking
struct ASpaceDolphin_Character_BP_C_UpdateBraking_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPDrawToRiderHUD
struct ASpaceDolphin_Character_BP_C_BPDrawToRiderHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSpinning
struct ASpaceDolphin_Character_BP_C_UpdateSpinning_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsSpinning
struct ASpaceDolphin_Character_BP_C_IsSpinning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	bool                                               Right;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DestroyProjectile
struct ASpaceDolphin_Character_BP_C_DestroyProjectile_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Flak Cannon Parameters
struct ASpaceDolphin_Character_BP_C_Get_Flak_Cannon_Parameters_Params
{
	class AShooterProjectile*                          Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsStarFoxMode
struct ASpaceDolphin_Character_BP_C_IsStarFoxMode_Params
{
	class AMissionSpline*                              CurrentSpline;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	double                                             RetRiderSetTime;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               RetIsRiderWarmup;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ValidateSpline
struct ASpaceDolphin_Character_BP_C_ValidateSpline_Params
{
	class AMissionSpline*                              Spline;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSpline
struct ASpaceDolphin_Character_BP_C_UpdateSpline_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPServerHandleNetExecCommand
struct ASpaceDolphin_Character_BP_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPKilledSomethingEvent
struct ASpaceDolphin_Character_BP_C_BPKilledSomethingEvent_Params
{
	class APrimalCharacter**                           killedTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsDualLasers
struct ASpaceDolphin_Character_BP_C_IsDualLasers_Params
{
	bool                                               DualLasers;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.CanLoop
struct ASpaceDolphin_Character_BP_C_CanLoop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsChargingLaser
struct ASpaceDolphin_Character_BP_C_IsChargingLaser_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetCrosshairSpread
struct ASpaceDolphin_Character_BP_C_BPGetCrosshairSpread_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateLoop
struct ASpaceDolphin_Character_BP_C_UpdateLoop_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPAcknowledgeServerCorrection
struct ASpaceDolphin_Character_BP_C_BPAcknowledgeServerCorrection_Params
{
	float*                                             TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NewLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NewVel;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        NewBase;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewBaseBoneName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.EndLoop
struct ASpaceDolphin_Character_BP_C_EndLoop_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StartLoop
struct ASpaceDolphin_Character_BP_C_StartLoop_Params
{
	bool                                               Immelmann;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetCrosshairColor
struct ASpaceDolphin_Character_BP_C_BPGetCrosshairColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Try Get ChargedLaserTarget
struct ASpaceDolphin_Character_BP_C_Try_Get_ChargedLaserTarget_Params
{
	class AActor*                                      Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OwningClientTryFireChargedLaser
struct ASpaceDolphin_Character_BP_C_OwningClientTryFireChargedLaser_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetChargedLaserParameters
struct ASpaceDolphin_Character_BP_C_GetChargedLaserParameters_Params
{
	class AShooterProjectile*                          Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ChargeTime;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.FireChargedLaser
struct ASpaceDolphin_Character_BP_C_FireChargedLaser_Params
{
	struct FVector                                     Dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ChargeTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Owning Client Try FireLasers
struct ASpaceDolphin_Character_BP_C_Owning_Client_Try_FireLasers_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.FireLasers
struct ASpaceDolphin_Character_BP_C_FireLasers_Params
{
	struct FVector                                     Dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetSaddleColor
struct ASpaceDolphin_Character_BP_C_GetSaddleColor_Params
{
	int                                                Region;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingWindGust
struct ASpaceDolphin_Character_BP_C_IsUsingWindGust_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             StartTime;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingForwardInput
struct ASpaceDolphin_Character_BP_C_IsUsingForwardInput_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPUnsetupDinoTameable
struct ASpaceDolphin_Character_BP_C_BPUnsetupDinoTameable_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BSetupDinoTameable
struct ASpaceDolphin_Character_BP_C_BSetupDinoTameable_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateRiderSocket
struct ASpaceDolphin_Character_BP_C_UpdateRiderSocket_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetOverrideSocket
struct ASpaceDolphin_Character_BP_C_GetOverrideSocket_Params
{
	struct FName*                                      From;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AllowWakingTame
struct ASpaceDolphin_Character_BP_C_AllowWakingTame_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OwningClientTryFlakCannonFire
struct ASpaceDolphin_Character_BP_C_OwningClientTryFlakCannonFire_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InterceptInputEvent
struct ASpaceDolphin_Character_BP_C_InterceptInputEvent_Params
{
	class FString*                                     InputName;                                                // (Parm, ZeroConstructor)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AllowPlayMontage
struct ASpaceDolphin_Character_BP_C_AllowPlayMontage_Params
{
	class UAnimMontage**                               AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetDinoLevelUpAnimation
struct ASpaceDolphin_Character_BP_C_GetDinoLevelUpAnimation_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateTaming
struct ASpaceDolphin_Character_BP_C_UpdateTaming_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPShowTamingPanel
struct ASpaceDolphin_Character_BP_C_BPShowTamingPanel_Params
{
	bool*                                              currentVisibility;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetTamingBuff
struct ASpaceDolphin_Character_BP_C_GetTamingBuff_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class APrimalBuff*                                 Buff;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BlueprintCanAttack
struct ASpaceDolphin_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPAdjustDamage
struct ASpaceDolphin_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Replicated Control Rotation Public
struct ASpaceDolphin_Character_BP_C_Get_Replicated_Control_Rotation_Public_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsPlayingBlockingAnim
struct ASpaceDolphin_Character_BP_C_IsPlayingBlockingAnim_Params
{
	bool                                               ReturnVal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Using Drafting Public
struct ASpaceDolphin_Character_BP_C_Is_Using_Drafting_Public_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	bool                                               DraftAcked;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingDrafting
struct ASpaceDolphin_Character_BP_C_IsUsingDrafting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	bool                                               DraftAcked;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetRiderSocket
struct ASpaceDolphin_Character_BP_C_BPGetRiderSocket_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsJumpHeld
struct ASpaceDolphin_Character_BP_C_IsJumpHeld_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOnDinoCheat
struct ASpaceDolphin_Character_BP_C_BPOnDinoCheat_Params
{
	struct FName*                                      CheatName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSetValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetReplicatedControlRotation
struct ASpaceDolphin_Character_BP_C_GetReplicatedControlRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveTick
struct ASpaceDolphin_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPDoAttack
struct ASpaceDolphin_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetCrosshairAlpha
struct ASpaceDolphin_Character_BP_C_BPGetCrosshairAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsFlakCannonOnCooldown
struct ASpaceDolphin_Character_BP_C_IsFlakCannonOnCooldown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetCrosshairLocation
struct ASpaceDolphin_Character_BP_C_BPGetCrosshairLocation_Params
{
	float*                                             CanvasClipX;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CanvasClipY;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutX;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutY;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ConsumeItem
struct ASpaceDolphin_Character_BP_C_ConsumeItem_Params
{
	class UClass*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.HasAmmo
struct ASpaceDolphin_Character_BP_C_HasAmmo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	int                                                Quantity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOnStopJump
struct ASpaceDolphin_Character_BP_C_BPOnStopJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Fire Flak Cannon
struct ASpaceDolphin_Character_BP_C_Fire_Flak_Cannon_Params
{
	struct FVector                                     Dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Has Saddle Public
struct ASpaceDolphin_Character_BP_C_Has_Saddle_Public_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               RetIsSuperSaddle;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnInventoryItemGrind
struct ASpaceDolphin_Character_BP_C_OnInventoryItemGrind_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateWindGustCooldownVFX
struct ASpaceDolphin_Character_BP_C_UpdateWindGustCooldownVFX_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOverrideGetAttackAnimationIndex
struct ASpaceDolphin_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        AnimationArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryInterruptLanding
struct ASpaceDolphin_Character_BP_C_TryInterruptLanding_Params
{
	TEnumAsByte<EMovementMode>                         Selection;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_SuperFlight
struct ASpaceDolphin_Character_BP_C_OnRep_SuperFlight_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SetSuperFlight
struct ASpaceDolphin_Character_BP_C_SetSuperFlight_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerVFX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Current Percent Of Max Fly Speed Public
struct ASpaceDolphin_Character_BP_C_Get_Current_Percent_Of_Max_Fly_Speed_Public_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Using Super Flight Public
struct ASpaceDolphin_Character_BP_C_Is_Using_Super_Flight_Public_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             StartedEndingTime;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingSuperFlight
struct ASpaceDolphin_Character_BP_C_IsUsingSuperFlight_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             StartedEndingTime;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSuperFlightBoost
struct ASpaceDolphin_Character_BP_C_UpdateSuperFlightBoost_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Using Super Flight Boost Public
struct ASpaceDolphin_Character_BP_C_Is_Using_Super_Flight_Boost_Public_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingSuperFlightBoost
struct ASpaceDolphin_Character_BP_C_IsUsingSuperFlightBoost_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	double                                             StartTime;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetDragSocketName
struct ASpaceDolphin_Character_BP_C_BPGetDragSocketName_Params
{
	class APrimalCharacter**                           DraggingChar;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnCarriedStruggle
struct ASpaceDolphin_Character_BP_C_OnCarriedStruggle_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingWingGust
struct ASpaceDolphin_Character_BP_C_IsUsingWingGust_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Update Jet FX
struct ASpaceDolphin_Character_BP_C_Update_Jet_FX_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.HasFuel
struct ASpaceDolphin_Character_BP_C_HasFuel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	int                                                Quantity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateFuel
struct ASpaceDolphin_Character_BP_C_UpdateFuel_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPDidSetCarriedCharacter
struct ASpaceDolphin_Character_BP_C_BPDidSetCarriedCharacter_Params
{
	class APrimalCharacter**                           PreviousCarriedCharacter;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.HasSaddle
struct ASpaceDolphin_Character_BP_C_HasSaddle_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               RetIsSuperSaddle;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateDrafting
struct ASpaceDolphin_Character_BP_C_UpdateDrafting_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetDragSocketDinoName
struct ASpaceDolphin_Character_BP_C_BPGetDragSocketDinoName_Params
{
	class APrimalDinoCharacter**                       aGrabbedDino;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSuperFlightStateData
struct ASpaceDolphin_Character_BP_C_UpdateSuperFlightStateData_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateAcceleration
struct ASpaceDolphin_Character_BP_C_UpdateAcceleration_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateRotationRate
struct ASpaceDolphin_Character_BP_C_UpdateRotationRate_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateAllyAOE
struct ASpaceDolphin_Character_BP_C_UpdateAllyAOE_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetWindGustEpicenter
struct ASpaceDolphin_Character_BP_C_GetWindGustEpicenter_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DoWing GustAOE
struct ASpaceDolphin_Character_BP_C_DoWing_GustAOE_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Diving Public
struct ASpaceDolphin_Character_BP_C_Is_Diving_Public_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             TimeDiveStart;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPNotifySetRider
struct ASpaceDolphin_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateTPVOffset
struct ASpaceDolphin_Character_BP_C_UpdateTPVOffset_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateCheckQuickTurn
struct ASpaceDolphin_Character_BP_C_UpdateCheckQuickTurn_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSpeed
struct ASpaceDolphin_Character_BP_C_UpdateSpeed_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateDiving
struct ASpaceDolphin_Character_BP_C_UpdateDiving_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsDiving
struct ASpaceDolphin_Character_BP_C_IsDiving_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             TimeDiveStart;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             TimeStoppedDiving;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetAnimBP
struct ASpaceDolphin_Character_BP_C_GetAnimBP_Params
{
	class USpaceDolphin_AnimationBP_C*                 Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetCurrentPercentOfMaxFlySpeed
struct ASpaceDolphin_Character_BP_C_GetCurrentPercentOfMaxFlySpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetCDO
struct ASpaceDolphin_Character_BP_C_GetCDO_Params
{
	class ASpaceDolphin_Character_BP_C*                Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Quick Turning
struct ASpaceDolphin_Character_BP_C_Is_Quick_Turning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.EndQuickTurn
struct ASpaceDolphin_Character_BP_C_EndQuickTurn_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StartSuperFlightQuickTurn
struct ASpaceDolphin_Character_BP_C_StartSuperFlightQuickTurn_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_LastSuperFlightQuickTurn
struct ASpaceDolphin_Character_BP_C_OnRep_LastSuperFlightQuickTurn_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSuperFlightRoll
struct ASpaceDolphin_Character_BP_C_UpdateSuperFlightRoll_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_InterceptMoveRight
struct ASpaceDolphin_Character_BP_C_BP_InterceptMoveRight_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateTrails
struct ASpaceDolphin_Character_BP_C_UpdateTrails_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ActivateTrails
struct ASpaceDolphin_Character_BP_C_ActivateTrails_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DeactivateTrails
struct ASpaceDolphin_Character_BP_C_DeactivateTrails_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.RidingTick
struct ASpaceDolphin_Character_BP_C_RidingTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_OnStartLandingNotify
struct ASpaceDolphin_Character_BP_C_BP_OnStartLandingNotify_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOverrideFlyingVelocity
struct ASpaceDolphin_Character_BP_C_BPOverrideFlyingVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.K2_OnMovementModeChanged
struct ASpaceDolphin_Character_BP_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_InterceptMoveForward
struct ASpaceDolphin_Character_BP_C_BP_InterceptMoveForward_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetHUDElements
struct ASpaceDolphin_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOverrideCameraViewTarget
struct ASpaceDolphin_Character_BP_C_BPOverrideCameraViewTarget_Params
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

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_OnSetRunning
struct ASpaceDolphin_Character_BP_C_BP_OnSetRunning_Params
{
	bool*                                              bNewIsRunning;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPNotifyClearRider
struct ASpaceDolphin_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPHandleOnStopTargeting
struct ASpaceDolphin_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPHandleControllerInitiatedAttack
struct ASpaceDolphin_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPModifyDesiredRotation
struct ASpaceDolphin_Character_BP_C_BPModifyDesiredRotation_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InDesiredRotation;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    OutDesiredRotation;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPSetupTamed
struct ASpaceDolphin_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOnStartJump
struct ASpaceDolphin_Character_BP_C_BPOnStartJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPHandleUseButtonPress
struct ASpaceDolphin_Character_BP_C_BPHandleUseButtonPress_Params
{
	class AShooterPlayerController**                   RiderController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DisableCameraInterpolation
struct ASpaceDolphin_Character_BP_C_DisableCameraInterpolation_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_LatchingSurfaceNormal
struct ASpaceDolphin_Character_BP_C_OnRep_LatchingSurfaceNormal_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateLatchedDinoCamera
struct ASpaceDolphin_Character_BP_C_UpdateLatchedDinoCamera_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Controller Follow ActorRotation
struct ASpaceDolphin_Character_BP_C_Controller_Follow_ActorRotation_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReferenceLatchingObjects
struct ASpaceDolphin_Character_BP_C_ReferenceLatchingObjects_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LineTrace
struct ASpaceDolphin_Character_BP_C_LineTrace_Params
{
	class UMeshComponent*                              Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BackwardLatching;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Hit_Somthing;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Hit_Actor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InterruptLatching
struct ASpaceDolphin_Character_BP_C_InterruptLatching_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ProcessLatching
struct ASpaceDolphin_Character_BP_C_ProcessLatching_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryLatch
struct ASpaceDolphin_Character_BP_C_TryLatch_Params
{
	struct FVector                                     Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               backwardsLatching;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UserConstructionScript
struct ASpaceDolphin_Character_BP_C_UserConstructionScript_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_348
struct ASpaceDolphin_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_348_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_347
struct ASpaceDolphin_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_347_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_346
struct ASpaceDolphin_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_346_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_345
struct ASpaceDolphin_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_345_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_344
struct ASpaceDolphin_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_344_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_343
struct ASpaceDolphin_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_343_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_342
struct ASpaceDolphin_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_342_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_74
struct ASpaceDolphin_Character_BP_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_74_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_73
struct ASpaceDolphin_Character_BP_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_73_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_OrbitCam_K2Node_InputActionEvent_341
struct ASpaceDolphin_Character_BP_C_InpActEvt_OrbitCam_K2Node_InputActionEvent_341_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_OrbitCamToggle_K2Node_InputActionEvent_340
struct ASpaceDolphin_Character_BP_C_InpActEvt_OrbitCamToggle_K2Node_InputActionEvent_340_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Latch
struct ASpaceDolphin_Character_BP_C_Latch_Params
{
	bool                                               backwardsLatching;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LatchStartAnimation
struct ASpaceDolphin_Character_BP_C_LatchStartAnimation_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UnLatch
struct ASpaceDolphin_Character_BP_C_UnLatch_Params
{
	bool                                               LatchingInterrupted;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UnLatchStartAnimation
struct ASpaceDolphin_Character_BP_C_UnLatchStartAnimation_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct ASpaceDolphin_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MoveToUsingDirection
struct ASpaceDolphin_Character_BP_C_MoveToUsingDirection_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UnLatchMoveAndRotate
struct ASpaceDolphin_Character_BP_C_UnLatchMoveAndRotate_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LatchingStartEvent
struct ASpaceDolphin_Character_BP_C_LatchingStartEvent_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LatchingEndEvent
struct ASpaceDolphin_Character_BP_C_LatchingEndEvent_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StopMovement
struct ASpaceDolphin_Character_BP_C_StopMovement_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DisableFaceLatchingObjectRotation
struct ASpaceDolphin_Character_BP_C_DisableFaceLatchingObjectRotation_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SetPassengersSurfaceCamera
struct ASpaceDolphin_Character_BP_C_SetPassengersSurfaceCamera_Params
{
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Roll;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LocalFaceLatchingObject
struct ASpaceDolphin_Character_BP_C_LocalFaceLatchingObject_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StartedJump
struct ASpaceDolphin_Character_BP_C_StartedJump_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerToggleSuperFlight
struct ASpaceDolphin_Character_BP_C_ServerToggleSuperFlight_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerSuperFightRightInput
struct ASpaceDolphin_Character_BP_C_ServerSuperFightRightInput_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestSuperFlightQuickTurn
struct ASpaceDolphin_Character_BP_C_ServerRequestSuperFlightQuickTurn_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateQuickTurn
struct ASpaceDolphin_Character_BP_C_UpdateQuickTurn_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestWindGust
struct ASpaceDolphin_Character_BP_C_ServerRequestWindGust_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_WindGust
struct ASpaceDolphin_Character_BP_C_AnimNotify_WindGust_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientWindGust
struct ASpaceDolphin_Character_BP_C_ClientWindGust_Params
{
	struct FVector                                     Epicenter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_WindGustVFX
struct ASpaceDolphin_Character_BP_C_AnimNotify_WindGustVFX_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestFireFlakCannon
struct ASpaceDolphin_Character_BP_C_ServerRequestFireFlakCannon_Params
{
	struct FVector                                     Dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181
struct ASpaceDolphin_Character_BP_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateLastForwardInputTime
struct ASpaceDolphin_Character_BP_C_ServerUpdateLastForwardInputTime_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DelayedSuperFlightEnd
struct ASpaceDolphin_Character_BP_C_DelayedSuperFlightEnd_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiSuperFlightEnd
struct ASpaceDolphin_Character_BP_C_MultiSuperFlightEnd_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientTagDraftee
struct ASpaceDolphin_Character_BP_C_ClientTagDraftee_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.WindGust180End
struct ASpaceDolphin_Character_BP_C_WindGust180End_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.WindGust180Tick
struct ASpaceDolphin_Character_BP_C_WindGust180Tick_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_WindGustCheckFor180
struct ASpaceDolphin_Character_BP_C_AnimNotify_WindGustCheckFor180_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_WindGustBoost
struct ASpaceDolphin_Character_BP_C_AnimNotify_WindGustBoost_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequest180
struct ASpaceDolphin_Character_BP_C_ServerRequest180_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GamepadRightStickPressed
struct ASpaceDolphin_Character_BP_C_GamepadRightStickPressed_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerSetLastTimePressedJump
struct ASpaceDolphin_Character_BP_C_ServerSetLastTimePressedJump_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerSetLastTimeReleasedJump
struct ASpaceDolphin_Character_BP_C_ServerSetLastTimeReleasedJump_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.QueueLanding
struct ASpaceDolphin_Character_BP_C_QueueLanding_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestLanding
struct ASpaceDolphin_Character_BP_C_ServerRequestLanding_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnBola
struct ASpaceDolphin_Character_BP_C_OnBola_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateRunningStartTime
struct ASpaceDolphin_Character_BP_C_ServerUpdateRunningStartTime_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateRunningStopTime
struct ASpaceDolphin_Character_BP_C_ServerUpdateRunningStopTime_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiOnRunStarted
struct ASpaceDolphin_Character_BP_C_MultiOnRunStarted_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiOnRunStopped
struct ASpaceDolphin_Character_BP_C_MultiOnRunStopped_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiOnSuperFlightStart
struct ASpaceDolphin_Character_BP_C_MultiOnSuperFlightStart_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.QueueGrabAttack
struct ASpaceDolphin_Character_BP_C_QueueGrabAttack_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiThrusterVFXBoost
struct ASpaceDolphin_Character_BP_C_MultiThrusterVFXBoost_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestFireLasers
struct ASpaceDolphin_Character_BP_C_ServerRequestFireLasers_Params
{
	struct FVector                                     CameraHitLoc;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientSpawnLaserFireFX
struct ASpaceDolphin_Character_BP_C_ClientSpawnLaserFireFX_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayImpactFX;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HitCharacterOrStructure;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerPressedFire
struct ASpaceDolphin_Character_BP_C_ServerPressedFire_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerFireChargedLaser
struct ASpaceDolphin_Character_BP_C_ServerFireChargedLaser_Params
{
	struct FVector                                     Dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TickChargedLaserFX
struct ASpaceDolphin_Character_BP_C_TickChargedLaserFX_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClearNumPressedFwdCount
struct ASpaceDolphin_Character_BP_C_ClearNumPressedFwdCount_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestStartLoop
struct ASpaceDolphin_Character_BP_C_ServerRequestStartLoop_Params
{
	bool                                               Immelmann;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiStartLoop
struct ASpaceDolphin_Character_BP_C_MultiStartLoop_Params
{
	bool                                               Immelmann;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveHit
struct ASpaceDolphin_Character_BP_C_ReceiveHit_Params
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

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiImpactedTerrain
struct ASpaceDolphin_Character_BP_C_MultiImpactedTerrain_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientPickupUpgrade
struct ASpaceDolphin_Character_BP_C_ClientPickupUpgrade_Params
{
	struct FVector                                     PickupLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestDestroyProjectile
struct ASpaceDolphin_Character_BP_C_ServerRequestDestroyProjectile_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiDestroyPorjectile
struct ASpaceDolphin_Character_BP_C_MultiDestroyPorjectile_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerSuperFightIsBraking
struct ASpaceDolphin_Character_BP_C_ServerSuperFightIsBraking_Params
{
	bool                                               AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestBarrelRoll
struct ASpaceDolphin_Character_BP_C_ServerRequestBarrelRoll_Params
{
	int                                                Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CamDir;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiBarrelRoll
struct ASpaceDolphin_Character_BP_C_MultiBarrelRoll_Params
{
	int                                                Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraDir;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiReflectProjectile
struct ASpaceDolphin_Character_BP_C_MultiReflectProjectile_Params
{
	class AShooterProjectile*                          Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientDamagedByTerrain
struct ASpaceDolphin_Character_BP_C_ClientDamagedByTerrain_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiDriftingBoost
struct ASpaceDolphin_Character_BP_C_MultiDriftingBoost_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotifty_BarrelRollLeft
struct ASpaceDolphin_Character_BP_C_AnimNotifty_BarrelRollLeft_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotifty_BarrelRollRight
struct ASpaceDolphin_Character_BP_C_AnimNotifty_BarrelRollRight_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerStartJump
struct ASpaceDolphin_Character_BP_C_ServerStartJump_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StarFoxServerRequestFireLasers
struct ASpaceDolphin_Character_BP_C_StarFoxServerRequestFireLasers_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_Echo
struct ASpaceDolphin_Character_BP_C_AnimNotify_Echo_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientEchoLocations
struct ASpaceDolphin_Character_BP_C_ClientEchoLocations_Params
{
	TArray<struct FVector>                             Locations;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_FireChaff
struct ASpaceDolphin_Character_BP_C_AnimNotify_FireChaff_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiSpawnChaffs
struct ASpaceDolphin_Character_BP_C_MultiSpawnChaffs_Params
{
	TArray<struct FVector>                             Locations;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_Nudge
struct ASpaceDolphin_Character_BP_C_AnimNotify_Nudge_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StopWildFlee
struct ASpaceDolphin_Character_BP_C_StopWildFlee_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TriggerWildAnger
struct ASpaceDolphin_Character_BP_C_TriggerWildAnger_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_BlowHole
struct ASpaceDolphin_Character_BP_C_AnimNotify_BlowHole_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ExpireAngryDinoTarget
struct ASpaceDolphin_Character_BP_C_ExpireAngryDinoTarget_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiAngryBlowHole
struct ASpaceDolphin_Character_BP_C_MultiAngryBlowHole_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SpaceWhaleIntroEnd
struct ASpaceDolphin_Character_BP_C_SpaceWhaleIntroEnd_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ExpireAnger
struct ASpaceDolphin_Character_BP_C_ExpireAnger_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateLastElevateTime
struct ASpaceDolphin_Character_BP_C_ServerUpdateLastElevateTime_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateLastLowerTime
struct ASpaceDolphin_Character_BP_C_ServerUpdateLastLowerTime_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_ToggleSuperFlight
struct ASpaceDolphin_Character_BP_C_AnimNotify_ToggleSuperFlight_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerForceClearRider
struct ASpaceDolphin_Character_BP_C_ServerForceClearRider_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.CenterMouse
struct ASpaceDolphin_Character_BP_C_CenterMouse_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveBeginPlay
struct ASpaceDolphin_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiSaddleActivationText
struct ASpaceDolphin_Character_BP_C_MultiSaddleActivationText_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateLoopingEvent
struct ASpaceDolphin_Character_BP_C_UpdateLoopingEvent_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ExecuteUbergraph_SpaceDolphin_Character_BP
struct ASpaceDolphin_Character_BP_C_ExecuteUbergraph_SpaceDolphin_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.NewEventDispatcher0__DelegateSignature
struct ASpaceDolphin_Character_BP_C_NewEventDispatcher0__DelegateSignature_Params
{
};

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.NewEventDispatcher__DelegateSignature
struct ASpaceDolphin_Character_BP_C_NewEventDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
