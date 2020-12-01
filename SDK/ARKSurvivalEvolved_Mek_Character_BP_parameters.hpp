#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Mek_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mek_Character_BP.Mek_Character_BP_C.ModifyMekHeat
struct AMek_Character_BP_C_ModifyMekHeat_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Subtract;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewHeatLevel;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.ModifyMekFuel
struct AMek_Character_BP_C_ModifyMekFuel_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Subtract;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewFuelLevel;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.GetMekFuel
struct AMek_Character_BP_C_GetMekFuel_Params
{
	float                                              CurrentFuel;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxFuel;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.GetMekHeat
struct AMek_Character_BP_C_GetMekHeat_Params
{
	float                                              CurrentHeat;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxHeat;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPDoAttack
struct AMek_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPCanBaseOnCharacter
struct AMek_Character_BP_C_BPCanBaseOnCharacter_Params
{
	class APrimalCharacter**                           BaseCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.SyncBackpackColorization
struct AMek_Character_BP_C_SyncBackpackColorization_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPOverrideMoveToOrder
struct AMek_Character_BP_C_BPOverrideMoveToOrder_Params
{
	struct FVector*                                    MoveToLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          OrderingPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.Get Transform Key Name
struct AMek_Character_BP_C_Get_Transform_Key_Name_Params
{
	struct FText                                       KeyName;                                                  // (Parm, OutParm)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPPostLoadedFromSaveGame
struct AMek_Character_BP_C_BPPostLoadedFromSaveGame_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPPreSerializeSaveGame
struct AMek_Character_BP_C_BPPreSerializeSaveGame_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPAdjustImpulseFromDamage
struct AMek_Character_BP_C_BPAdjustImpulseFromDamage_Params
{
	struct FVector*                                    DesiredImpulse;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class APawn**                                      PawnInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPOnRefreshColorization
struct AMek_Character_BP_C_BPOnRefreshColorization_Params
{
	TArray<struct FLinearColor>                        Colors;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPDinoARKDownloadedEnd
struct AMek_Character_BP_C_BPDinoARKDownloadedEnd_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPTimerServer
struct AMek_Character_BP_C_BPTimerServer_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPHandlePoop
struct AMek_Character_BP_C_BPHandlePoop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPPreventFirstPerson
struct AMek_Character_BP_C_BPPreventFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.RepairedByScout
struct AMek_Character_BP_C_RepairedByScout_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPOnLethalDamage
struct AMek_Character_BP_C_BPOnLethalDamage_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventDeath;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.UpdateDepletedMeksList
struct AMek_Character_BP_C_UpdateDepletedMeksList_Params
{
	bool                                               ClearAllTargets;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.IsRemoteMekValidForDepletion
struct AMek_Character_BP_C_IsRemoteMekValidForDepletion_Params
{
	class AMek_Character_BP_C*                         Mek;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HasDepletedBuff;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPNotifySetRider
struct AMek_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPPreventInputType
struct AMek_Character_BP_C_BPPreventInputType_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.ClientIsMegaMekTransformationAllowed
struct AMek_Character_BP_C_ClientIsMegaMekTransformationAllowed_Params
{
	bool                                               Allowed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               KingKaijuNearby;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                FriendlyMeksNearby;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.MegaMekTransformation
struct AMek_Character_BP_C_MegaMekTransformation_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.AllowedToAutoRepair
struct AMek_Character_BP_C_AllowedToAutoRepair_Params
{
	bool                                               Allowed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CooldownTimeRemaining;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BlueprintDrawFloatingHUD
struct AMek_Character_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPTryMultiUse
struct AMek_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPGetMultiUseEntries
struct AMek_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mek_Character_BP.Mek_Character_BP_C.GetTurnInPlaceSpeed
struct AMek_Character_BP_C_GetTurnInPlaceSpeed_Params
{
	float                                              DefaultSpeed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              newSpeed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPAdjustDamage
struct AMek_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPHandleOnStopFire
struct AMek_Character_BP_C_BPHandleOnStopFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.HoverTrace
struct AMek_Character_BP_C_HoverTrace_Params
{
	float                                              TraceDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DebugDraw;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DebugDrawDuration;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm)
	bool                                               BlockingHit;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceStart;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.IsPlayingAttackAnim
struct AMek_Character_BP_C_IsPlayingAttackAnim_Params
{
	int                                                AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Playing;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPGetOverrideCameraInterpSpeed
struct AMek_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params
{
	float*                                             DefaultTPVCameraSpeedInterpolationMultiplier;             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DefaultTPVOffsetInterpSpeed;                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TPVCameraSpeedInterpolationMultiplier;                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TPVOffsetInterpSpeed;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPOverrideHurtAnim
struct AMek_Character_BP_C_BPOverrideHurtAnim_Params
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

// Function Mek_Character_BP.Mek_Character_BP_C.GetCurrentSwordStatus
struct AMek_Character_BP_C_GetCurrentSwordStatus_Params
{
	bool                                               IsSwingingSword;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CurrentMontage;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                AttackAnimIndex;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AnimTimeRemaining;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BP_PreventMovementMode
struct AMek_Character_BP_C_BP_PreventMovementMode_Params
{
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPOverrideGetAttackAnimationIndex
struct AMek_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        AnimationArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.GetHeatLevel
struct AMek_Character_BP_C_GetHeatLevel_Params
{
	float                                              Heat;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxHeat;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.IsBackpackActive
struct AMek_Character_BP_C_IsBackpackActive_Params
{
	bool                                               IsActive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.HasEquippedBackpack
struct AMek_Character_BP_C_HasEquippedBackpack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct AMek_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     meshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.GetEquippedBackpack
struct AMek_Character_BP_C_GetEquippedBackpack_Params
{
	bool                                               HasBackpack;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ABuff_MekBackpack_Base_C*                    BackpackBuff;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BackpackType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPNotifyInventoryItemChange
struct AMek_Character_BP_C_BPNotifyInventoryItemChange_Params
{
	bool*                                              bIsItemAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPDinoPostBeginPlay
struct AMek_Character_BP_C_BPDinoPostBeginPlay_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.ModifyHeatLevel
struct AMek_Character_BP_C_ModifyHeatLevel_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Subtract;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewHeatLevel;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.GetPistolMuzzleInfo
struct AMek_Character_BP_C_GetPistolMuzzleInfo_Params
{
	struct FVector                                     MuzzleLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MuzzleDirection;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.UpdateTargetingMode
struct AMek_Character_BP_C_UpdateTargetingMode_Params
{
	bool                                               NewTargetingState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.ReceiveTick
struct AMek_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPAdjustAttackIndex
struct AMek_Character_BP_C_BPAdjustAttackIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.IsCurrentlyTargeting
struct AMek_Character_BP_C_IsCurrentlyTargeting_Params
{
	bool                                               IsTargeting;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPHandleControllerInitiatedAttack
struct AMek_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPHandleOnStopTargeting
struct AMek_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.Set Camera Offset Multipliers
struct AMek_Character_BP_C_Set_Camera_Offset_Multipliers_Params
{
	float                                              HorizMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VertMultiplier;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.UpdateHoverJetsVFX
struct AMek_Character_BP_C_UpdateHoverJetsVFX_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPNotifyClearRider
struct AMek_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPOverrideCharacterNewFallVelocity
struct AMek_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.ModifyFuelLevel
struct AMek_Character_BP_C_ModifyFuelLevel_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Subtract;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewFuelLevel;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.HasEnoughResourcesToHover
struct AMek_Character_BP_C_HasEnoughResourcesToHover_Params
{
	bool                                               CanHover;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPOnDinoCheat
struct AMek_Character_BP_C_BPOnDinoCheat_Params
{
	struct FName*                                      CheatName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSetValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPOnMovementModeChangedNotify
struct AMek_Character_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPGetHUDElements
struct AMek_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BP_OnJumpReleased
struct AMek_Character_BP_C_BP_OnJumpReleased_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.BP_OnJumpPressed
struct AMek_Character_BP_C_BP_OnJumpPressed_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPGetGravityZScale
struct AMek_Character_BP_C_BPGetGravityZScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPPreventFallDamage
struct AMek_Character_BP_C_BPPreventFallDamage_Params
{
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm, ReferenceParm)
	float*                                             FallDamageAmount;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.RidingTick
struct AMek_Character_BP_C_RidingTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BPGetRiderUnboardLocation
struct AMek_Character_BP_C_BPGetRiderUnboardLocation_Params
{
	class APrimalCharacter**                           RidingCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.BlueprintCanRiderAttack
struct AMek_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.UserConstructionScript
struct AMek_Character_BP_C_UserConstructionScript_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.ServerRequestStartHover
struct AMek_Character_BP_C_ServerRequestStartHover_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.ServerRequestStopHover
struct AMek_Character_BP_C_ServerRequestStopHover_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.MultiStartHover
struct AMek_Character_BP_C_MultiStartHover_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.MultiStopHover
struct AMek_Character_BP_C_MultiStopHover_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.PlayHoverStartVFX
struct AMek_Character_BP_C_PlayHoverStartVFX_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.MultiDebugDrawDirectionVector
struct AMek_Character_BP_C_MultiDebugDrawDirectionVector_Params
{
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VertOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.ServerUpdateInputDirection
struct AMek_Character_BP_C_ServerUpdateInputDirection_Params
{
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.ForceStopHover
struct AMek_Character_BP_C_ForceStopHover_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.MultiUpdateHoverParams
struct AMek_Character_BP_C_MultiUpdateHoverParams_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasHoverTarget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HoverTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.MultiDebugDrawLine
struct AMek_Character_BP_C_MultiDebugDrawLine_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.MultiDebugDrawHitResult
struct AMek_Character_BP_C_MultiDebugDrawHitResult_Params
{
	struct FHitResult                                  Hit;                                                      // (Parm)
	struct FLinearColor                                NoHitColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                CollisionColor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HitSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.ServerSetTargetingMode
struct AMek_Character_BP_C_ServerSetTargetingMode_Params
{
	bool                                               IsTargeting;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.MultiUpdateTargetingMode
struct AMek_Character_BP_C_MultiUpdateTargetingMode_Params
{
	bool                                               IsTargeting;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.OnSwordHit
struct AMek_Character_BP_C_OnSwordHit_Params
{
	struct FHitResult                                  Hit;                                                      // (Parm)
	struct FVector                                     TraceStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.MultiOnSwordHit
struct AMek_Character_BP_C_MultiOnSwordHit_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.MultiHoverJetsDamagedTarget
struct AMek_Character_BP_C_MultiHoverJetsDamagedTarget_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.ServerActivateBackpack
struct AMek_Character_BP_C_ServerActivateBackpack_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.ServerUpdatePistolAimDirection
struct AMek_Character_BP_C_ServerUpdatePistolAimDirection_Params
{
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.ServerRequestSwordAttackCombo
struct AMek_Character_BP_C_ServerRequestSwordAttackCombo_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.DoDelayedSwordCombo
struct AMek_Character_BP_C_DoDelayedSwordCombo_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.MultiOnMekDestroyed
struct AMek_Character_BP_C_MultiOnMekDestroyed_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.ServerRequestTransform
struct AMek_Character_BP_C_ServerRequestTransform_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.MultiUpdatePistolAimDirection
struct AMek_Character_BP_C_MultiUpdatePistolAimDirection_Params
{
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.OnPistolFiredProjectile
struct AMek_Character_BP_C_OnPistolFiredProjectile_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.ClientShowHUDNotification
struct AMek_Character_BP_C_ClientShowHUDNotification_Params
{
	class FString                                      Message;                                                  // (Parm, ZeroConstructor)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.GetReadyToDieMulti
struct AMek_Character_BP_C_GetReadyToDieMulti_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.EnableInputMulti
struct AMek_Character_BP_C_EnableInputMulti_Params
{
	bool                                               NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.ServerRequestCancelMegaMekTransform
struct AMek_Character_BP_C_ServerRequestCancelMegaMekTransform_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.SetBackpackMalfunction
struct AMek_Character_BP_C_SetBackpackMalfunction_Params
{
	bool                                               DisableBackpack;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP.Mek_Character_BP_C.ReceiveBeginPlay
struct AMek_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.CancelSwordCombo
struct AMek_Character_BP_C_CancelSwordCombo_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.ServerRequestCancelCombo
struct AMek_Character_BP_C_ServerRequestCancelCombo_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.ClientShowEmptyFuelNotification
struct AMek_Character_BP_C_ClientShowEmptyFuelNotification_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.GetReadyToDieSkip
struct AMek_Character_BP_C_GetReadyToDieSkip_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.MultiSyncBackpackColorization
struct AMek_Character_BP_C_MultiSyncBackpackColorization_Params
{
};

// Function Mek_Character_BP.Mek_Character_BP_C.ExecuteUbergraph_Mek_Character_BP
struct AMek_Character_BP_C_ExecuteUbergraph_Mek_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
