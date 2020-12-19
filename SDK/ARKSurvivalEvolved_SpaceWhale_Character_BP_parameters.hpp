#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceWhale_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
struct ASpaceWhale_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifyToggleHUD
struct ASpaceWhale_Character_BP_C_BPNotifyToggleHUD_Params
{
	bool*                                              bHUDHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPModifyDesiredRotation
struct ASpaceWhale_Character_BP_C_BPModifyDesiredRotation_Params
{
	struct FRotator                                    InDesiredRotation;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    OutDesiredRotation;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPCustomIsRelevantForClient
struct ASpaceWhale_Character_BP_C_BPCustomIsRelevantForClient_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPSetupTamed
struct ASpaceWhale_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.DestroyHudWidget
struct ASpaceWhale_Character_BP_C_DestroyHudWidget_Params
{
	bool                                               DestroyNow;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifySetRider
struct ASpaceWhale_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.PlayTurretRotationSound
struct ASpaceWhale_Character_BP_C_PlayTurretRotationSound_Params
{
	int                                                InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.CalculateUpshiftCameraOffset
struct ASpaceWhale_Character_BP_C_CalculateUpshiftCameraOffset_Params
{
	float                                              Offset;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPAdjustDamage
struct ASpaceWhale_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BP_PreventMovementMode
struct ASpaceWhale_Character_BP_C_BP_PreventMovementMode_Params
{
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BP_OnSetDeath
struct ASpaceWhale_Character_BP_C_BP_OnSetDeath_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateBombProduction
struct ASpaceWhale_Character_BP_C_UpdateBombProduction_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.CurrentTeleportCost
struct ASpaceWhale_Character_BP_C_CurrentTeleportCost_Params
{
	int                                                NumCharacters;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BreakGrapples
struct ASpaceWhale_Character_BP_C_BreakGrapples_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.SpawnDownShiftBurst
struct ASpaceWhale_Character_BP_C_SpawnDownShiftBurst_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetSaddleColor
struct ASpaceWhale_Character_BP_C_GetSaddleColor_Params
{
	int                                                theRegion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateTeleportingCharacters
struct ASpaceWhale_Character_BP_C_UpdateTeleportingCharacters_Params
{
	TArray<class APrimalCharacter*>                    TeleportingCharacters;                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.Local Request Bomb Targeting
struct ASpaceWhale_Character_BP_C_Local_Request_Bomb_Targeting_Params
{
	bool                                               NewBombTargetingMode;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateHyperdriveTarget
struct ASpaceWhale_Character_BP_C_UpdateHyperdriveTarget_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateBombing
struct ASpaceWhale_Character_BP_C_UpdateBombing_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.DropBomb
struct ASpaceWhale_Character_BP_C_DropBomb_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPHandleOnStopFire
struct ASpaceWhale_Character_BP_C_BPHandleOnStopFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ShouldPlayBlinkEffect
struct ASpaceWhale_Character_BP_C_ShouldPlayBlinkEffect_Params
{
	bool                                               ShouldPlay;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.SetSaddleVisibility
struct ASpaceWhale_Character_BP_C_SetSaddleVisibility_Params
{
	bool                                               bNewVisibility;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ResetMaterials
struct ASpaceWhale_Character_BP_C_ResetMaterials_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPAnimNotifyCustomState_Begin
struct ASpaceWhale_Character_BP_C_BPAnimNotifyCustomState_Begin_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TotalDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyState**                           AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct ASpaceWhale_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ForceFleeTeleport
struct ASpaceWhale_Character_BP_C_ForceFleeTeleport_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetDesiredRotation
struct ASpaceWhale_Character_BP_C_GetDesiredRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateSpeedEffects
struct ASpaceWhale_Character_BP_C_UpdateSpeedEffects_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateTurretRotation
struct ASpaceWhale_Character_BP_C_UpdateTurretRotation_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.IsLocalControllerTagged
struct ASpaceWhale_Character_BP_C_IsLocalControllerTagged_Params
{
	TArray<class APrimalCharacter*>                    Array;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateBlinkEffect
struct ASpaceWhale_Character_BP_C_UpdateBlinkEffect_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.CompleteTeleport
struct ASpaceWhale_Character_BP_C_CompleteTeleport_Params
{
	bool                                               Success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ChargeTimeLeft
struct ASpaceWhale_Character_BP_C_ChargeTimeLeft_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.CheckTeleportAngle
struct ASpaceWhale_Character_BP_C_CheckTeleportAngle_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.FireForTurretForPlayer
struct ASpaceWhale_Character_BP_C_FireForTurretForPlayer_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FireLeft;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetFireTransformForPlayer
struct ASpaceWhale_Character_BP_C_GetFireTransformForPlayer_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FirePosition;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FireDirection;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               FireLeft;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.OnSaddleEquipped
struct ASpaceWhale_Character_BP_C_OnSaddleEquipped_Params
{
	bool                                               Equipped;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.OnRep_IsChargingHyperspaceJump
struct ASpaceWhale_Character_BP_C_OnRep_IsChargingHyperspaceJump_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifyClearRider
struct ASpaceWhale_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPDrawToRiderHUD
struct ASpaceWhale_Character_BP_C_BPDrawToRiderHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdatePassengerSeatRotation
struct ASpaceWhale_Character_BP_C_UpdatePassengerSeatRotation_Params
{
	int                                                PassengerIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rot;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetCurrentTeleportRadius
struct ASpaceWhale_Character_BP_C_GetCurrentTeleportRadius_Params
{
	bool                                               GetSmoothedDisplayValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPForceCameraStyle
struct ASpaceWhale_Character_BP_C_BPForceCameraStyle_Params
{
	class APrimalCharacter**                           ForViewTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECameraStyle>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.InTargetingMode
struct ASpaceWhale_Character_BP_C_InTargetingMode_Params
{
	bool                                               IsTargeting;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.OnRep_IsTargetingBomb
struct ASpaceWhale_Character_BP_C_OnRep_IsTargetingBomb_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.OnRep_IsTargetingHyperdrive
struct ASpaceWhale_Character_BP_C_OnRep_IsTargetingHyperdrive_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPModifyForwardDirectionInput
struct ASpaceWhale_Character_BP_C_BPModifyForwardDirectionInput_Params
{
	struct FVector                                     directionInput;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPShouldLimitForwardDirection
struct ASpaceWhale_Character_BP_C_BPShouldLimitForwardDirection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPOverrideFlyingVelocity
struct ASpaceWhale_Character_BP_C_BPOverrideFlyingVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetCharactersToMassTeleport
struct ASpaceWhale_Character_BP_C_GetCharactersToMassTeleport_Params
{
	struct FVector                                     NearWorldLoc;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class APrimalCharacter*>                    FriendlyCharacters;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.AllowedToUseHyperdrive
struct ASpaceWhale_Character_BP_C_AllowedToUseHyperdrive_Params
{
	bool                                               CheckTimer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Allowed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ModifyCosmicEnergy
struct ASpaceWhale_Character_BP_C_ModifyCosmicEnergy_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceNetUpdate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetCosmicEnergy
struct ASpaceWhale_Character_BP_C_GetCosmicEnergy_Params
{
	bool                                               GetSmoothedDisplayValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              current;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetMaxCosmicEnergy
struct ASpaceWhale_Character_BP_C_GetMaxCosmicEnergy_Params
{
	float                                              MaxEnergy;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPOnMassTeleportEvent
struct ASpaceWhale_Character_BP_C_BPOnMassTeleportEvent_Params
{
	TEnumAsByte<EMassTeleportState>*                   EventState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter**                           TeleportInitiatedByChar;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPGetHUDElements
struct ASpaceWhale_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.HyperdriveTargetingTrace
struct ASpaceWhale_Character_BP_C_HyperdriveTargetingTrace_Params
{
	struct FVector                                     TraceStartLoc;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceStartDir;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WhaleStartLoc;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DebugDrawDuration;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               foundValidLocation;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateHyperdriveTargetingMode
struct ASpaceWhale_Character_BP_C_UpdateHyperdriveTargetingMode_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPOverrideCameraViewTarget
struct ASpaceWhale_Character_BP_C_BPOverrideCameraViewTarget_Params
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

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ReceiveTick
struct ASpaceWhale_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPHandleControllerInitiatedAttack
struct ASpaceWhale_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BlueprintCanRiderAttack
struct ASpaceWhale_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BlueprintCanAttack
struct ASpaceWhale_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPOverrideGetAttackAnimationIndex
struct ASpaceWhale_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        AnimationArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifyClearPassenger
struct ASpaceWhale_Character_BP_C_BPNotifyClearPassenger_Params
{
	class APrimalCharacter**                           PassengerChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifyAddPassenger
struct ASpaceWhale_Character_BP_C_BPNotifyAddPassenger_Params
{
	class APrimalCharacter**                           PassengerChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UserConstructionScript
struct ASpaceWhale_Character_BP_C_UserConstructionScript_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestStartHyperspaceJump
struct ASpaceWhale_Character_BP_C_ServerRequestStartHyperspaceJump_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientAckHyperspaceJump
struct ASpaceWhale_Character_BP_C_ClientAckHyperspaceJump_Params
{
	bool                                               Success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrigLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.MultiUpdateCurrentGear
struct ASpaceWhale_Character_BP_C_MultiUpdateCurrentGear_Params
{
	int                                                NewGear;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ReceiveBeginPlay
struct ASpaceWhale_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.DelayedGearFixup
struct ASpaceWhale_Character_BP_C_DelayedGearFixup_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateCurrentGear
struct ASpaceWhale_Character_BP_C_UpdateCurrentGear_Params
{
	int                                                NewGear;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestSetHyperdriveTargetingMode
struct ASpaceWhale_Character_BP_C_ServerRequestSetHyperdriveTargetingMode_Params
{
	bool                                               NewTargetingMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestDropBomb
struct ASpaceWhale_Character_BP_C_ServerRequestDropBomb_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestSetBombTargetingMode
struct ASpaceWhale_Character_BP_C_ServerRequestSetBombTargetingMode_Params
{
	bool                                               NewBombTargetingMode;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BP_OnJumpPressed
struct ASpaceWhale_Character_BP_C_BP_OnJumpPressed_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BP_OnJumpReleased
struct ASpaceWhale_Character_BP_C_BP_OnJumpReleased_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.MultiHyperspaceJumpVFX
struct ASpaceWhale_Character_BP_C_MultiHyperspaceJumpVFX_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.StartHyperspaceJump
struct ASpaceWhale_Character_BP_C_StartHyperspaceJump_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestCancelHyperspaceJump
struct ASpaceWhale_Character_BP_C_ServerRequestCancelHyperspaceJump_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientStartHyperspaceJump
struct ASpaceWhale_Character_BP_C_ClientStartHyperspaceJump_Params
{
	TArray<class APrimalCharacter*>                    TaggedCharacters;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientCancelHyperspaceJump
struct ASpaceWhale_Character_BP_C_ClientCancelHyperspaceJump_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestStopBombs
struct ASpaceWhale_Character_BP_C_ServerRequestStopBombs_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientPlayBombVFX
struct ASpaceWhale_Character_BP_C_ClientPlayBombVFX_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ScanForPlayers
struct ASpaceWhale_Character_BP_C_ScanForPlayers_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientForceMeshRelevant
struct ASpaceWhale_Character_BP_C_ClientForceMeshRelevant_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ForceHideSaddle
struct ASpaceWhale_Character_BP_C_ForceHideSaddle_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.PostJumpComplete
struct ASpaceWhale_Character_BP_C_PostJumpComplete_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ScanForTeleportActors
struct ASpaceWhale_Character_BP_C_ScanForTeleportActors_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.TorporHit
struct ASpaceWhale_Character_BP_C_TorporHit_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.TorporHitRight
struct ASpaceWhale_Character_BP_C_TorporHitRight_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.TorporHitLeft
struct ASpaceWhale_Character_BP_C_TorporHitLeft_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClearTorporHit
struct ASpaceWhale_Character_BP_C_ClearTorporHit_Params
{
};

// Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ExecuteUbergraph_SpaceWhale_Character_BP
struct ASpaceWhale_Character_BP_C_ExecuteUbergraph_SpaceWhale_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
