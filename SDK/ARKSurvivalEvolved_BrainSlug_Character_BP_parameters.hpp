#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BrainSlug_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Sync Crosshair Color
struct ABrainSlug_Character_BP_C_Sync_Crosshair_Color_Params
{
	struct FLinearColor                                InColor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                outColor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.GetHudData
struct ABrainSlug_Character_BP_C_GetHudData_Params
{
	class APrimalCharacter*                            TargetChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAllowedToControlTarget;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      TargetValidationString;                                   // (Parm, OutParm, ZeroConstructor)
	class FString                                      InvalidTargetString_PreventHUD;                           // (Parm, OutParm, ZeroConstructor)
	struct FHUDElement                                 HUDElementTemplate;                                       // (Parm, OutParm)
	float                                              BrainJumpTargetCheckDistance;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OverrideTargetingLocation
struct ABrainSlug_Character_BP_C_BP_OverrideTargetingLocation_Params
{
	class AActor**                                     Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPGetTargetingDesirability
struct ABrainSlug_Character_BP_C_BPGetTargetingDesirability_Params
{
	class AActor**                                     Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsPlayerOnMission
struct ABrainSlug_Character_BP_C_IsPlayerOnMission_Params
{
	class APawn*                                       OverrideCharacterToTest;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOnMission;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.GetBrainSlugAimDirection
struct ABrainSlug_Character_BP_C_GetBrainSlugAimDirection_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.DecreaseStamina
struct ABrainSlug_Character_BP_C_DecreaseStamina_Params
{
	float                                              StaminaCost;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.UpdateComponentVisibilityWithCameraStyle
struct ABrainSlug_Character_BP_C_UpdateComponentVisibilityWithCameraStyle_Params
{
	struct FName                                       CameraStyle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OnCameraStyleChangedNotify
struct ABrainSlug_Character_BP_C_BP_OnCameraStyleChangedNotify_Params
{
	struct FName                                       NewCameraStyle;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       OldCameraStyle;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsAllowedToBrainJump
struct ABrainSlug_Character_BP_C_IsAllowedToBrainJump_Params
{
	bool                                               IsAttackJump;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPModifyHarvestingQuantity
struct ABrainSlug_Character_BP_C_BPModifyHarvestingQuantity_Params
{
	float*                                             originalQuantity;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     resourceSelected;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPTriggerStasisEvent
struct ABrainSlug_Character_BP_C_BPTriggerStasisEvent_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.HasHumanControllerOrDinoDoes
struct ABrainSlug_Character_BP_C_HasHumanControllerOrDinoDoes_Params
{
	bool                                               bHasHumanController;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPUnstasis
struct ABrainSlug_Character_BP_C_BPUnstasis_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPPreventStasis
struct ABrainSlug_Character_BP_C_BPPreventStasis_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.AttemptItemContainerActivationToggle
struct ABrainSlug_Character_BP_C_AttemptItemContainerActivationToggle_Params
{
	class APrimalStructureItemContainer*               StructureRef;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ActivationChanged;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPServerHandleNetExecCommand
struct ABrainSlug_Character_BP_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintCanRiderAttack
struct ABrainSlug_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.HasForbiddenDinoCustomTag
struct ABrainSlug_Character_BP_C_HasForbiddenDinoCustomTag_Params
{
	struct FName                                       TagToCheck;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPOverrideInventoryAccessInput
struct ABrainSlug_Character_BP_C_BPOverrideInventoryAccessInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.UpdateBuffControlDur
struct ABrainSlug_Character_BP_C_UpdateBuffControlDur_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPCanCryo
struct ABrainSlug_Character_BP_C_BPCanCryo_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPSetupTamed
struct ABrainSlug_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintOverrideWantsToRun
struct ABrainSlug_Character_BP_C_BlueprintOverrideWantsToRun_Params
{
	bool*                                              bInputWantsToRun;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsDinoInPastTameAffinityTargets
struct ABrainSlug_Character_BP_C_IsDinoInPastTameAffinityTargets_Params
{
	int                                                ID1;                                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ID2;                                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPUnsetupDinoTameable
struct ABrainSlug_Character_BP_C_BPUnsetupDinoTameable_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BrainSlugIterateAffinity
struct ABrainSlug_Character_BP_C_BrainSlugIterateAffinity_Params
{
	class APrimalCharacter*                            DinoToGetAffinityFrom;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPModifyAimOffsetNoTarget
struct ABrainSlug_Character_BP_C_BPModifyAimOffsetNoTarget_Params
{
	struct FRotator                                    Aim;                                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintAdjustOutputDamage
struct ABrainSlug_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintCanAttack
struct ABrainSlug_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPShouldForceFlee
struct ABrainSlug_Character_BP_C_BPShouldForceFlee_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.EndBrainHunt
struct ABrainSlug_Character_BP_C_EndBrainHunt_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPIsValidUnStasisCaster
struct ABrainSlug_Character_BP_C_BPIsValidUnStasisCaster_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPNotifyClearRider
struct ABrainSlug_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPDoAttack
struct ABrainSlug_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPPreventFirstPerson
struct ABrainSlug_Character_BP_C_BPPreventFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPGetHUDElements
struct ABrainSlug_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPNewDoorInteractionDrawHUD
struct ABrainSlug_Character_BP_C_BPNewDoorInteractionDrawHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  DoorDescriptionLoc;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReturnToPlayer
struct ABrainSlug_Character_BP_C_ReturnToPlayer_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_InterceptMoveRight
struct ABrainSlug_Character_BP_C_BP_InterceptMoveRight_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_InterceptMoveForward
struct ABrainSlug_Character_BP_C_BP_InterceptMoveForward_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.StartBrainSlugAttachment
struct ABrainSlug_Character_BP_C_StartBrainSlugAttachment_Params
{
	class APrimalCharacter*                            AttachedToChar;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.FindViableBrainJumpTargetFromControlRot
struct ABrainSlug_Character_BP_C_FindViableBrainJumpTargetFromControlRot_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            ViableTarget;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPOnClearMountedDino
struct ABrainSlug_Character_BP_C_BPOnClearMountedDino_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPOnSetMountedDino
struct ABrainSlug_Character_BP_C_BPOnSetMountedDino_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPAdjustDamage
struct ABrainSlug_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintDrawFloatingHUD
struct ABrainSlug_Character_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsDinoBrainFood
struct ABrainSlug_Character_BP_C_IsDinoBrainFood_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPCharacterSleeped
struct ABrainSlug_Character_BP_C_BPCharacterSleeped_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Get Aim Adjusted Throwing Dir
struct ABrainSlug_Character_BP_C_Get_Aim_Adjusted_Throwing_Dir_Params
{
	struct FRotator                                    AdjustedThrowingDir;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.FullyTameTarget
struct ABrainSlug_Character_BP_C_FullyTameTarget_Params
{
	class APrimalDinoCharacter*                        TargetChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DidTame;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsAllowedToFullyTame
struct ABrainSlug_Character_BP_C_IsAllowedToFullyTame_Params
{
	class APrimalCharacter*                            TestChar;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Allowed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReceiveDestroyed
struct ABrainSlug_Character_BP_C_ReceiveDestroyed_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OnSetDeath
struct ABrainSlug_Character_BP_C_BP_OnSetDeath_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPTimerServer
struct ABrainSlug_Character_BP_C_BPTimerServer_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPAdjustAttackIndex
struct ABrainSlug_Character_BP_C_BPAdjustAttackIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintPlayDying
struct ABrainSlug_Character_BP_C_BlueprintPlayDying_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.InterceptInputEvent
struct ABrainSlug_Character_BP_C_InterceptInputEvent_Params
{
	class FString*                                     InputName;                                                // (Parm, ZeroConstructor)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPCanMountOnCharacter
struct ABrainSlug_Character_BP_C_BPCanMountOnCharacter_Params
{
	class APrimalCharacter**                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPHandleControllerInitiatedAttack
struct ABrainSlug_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsAllowedToControl
struct ABrainSlug_Character_BP_C_IsAllowedToControl_Params
{
	class APrimalCharacter*                            TestChar;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Allowed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      TargetValidationString;                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPGetCrosshairColor
struct ABrainSlug_Character_BP_C_BPGetCrosshairColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReceiveUnpossessed
struct ABrainSlug_Character_BP_C_ReceiveUnpossessed_Params
{
	class AController**                                OldController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReceivePossessed
struct ABrainSlug_Character_BP_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPTimerNonDedicated
struct ABrainSlug_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPTryMultiUse
struct ABrainSlug_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPGetMultiUseEntries
struct ABrainSlug_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.DinoShoulderMountedLaunch
struct ABrainSlug_Character_BP_C_DinoShoulderMountedLaunch_Params
{
	struct FVector*                                    launchDir;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          throwingCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.UserConstructionScript
struct ABrainSlug_Character_BP_C_UserConstructionScript_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerAttemptBrainControl
struct ABrainSlug_Character_BP_C_ServerAttemptBrainControl_Params
{
	class APrimalCharacter*                            TargetChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.MultiEnableNonDediTimer
struct ABrainSlug_Character_BP_C_MultiEnableNonDediTimer_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerClearBrainHunt
struct ABrainSlug_Character_BP_C_ServerClearBrainHunt_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_EndBrainHunt
struct ABrainSlug_Character_BP_C_Multi_EndBrainHunt_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ClearPossession
struct ABrainSlug_Character_BP_C_ClearPossession_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.TemporaryPlayerPassThrough
struct ABrainSlug_Character_BP_C_TemporaryPlayerPassThrough_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ClearBrainSlugAttachment
struct ABrainSlug_Character_BP_C_ClearBrainSlugAttachment_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_PlayFullyTamedVFX
struct ABrainSlug_Character_BP_C_Multi_PlayFullyTamedVFX_Params
{
	class APrimalCharacter*                            TargetChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_SetDrawCrosshair
struct ABrainSlug_Character_BP_C_Multi_SetDrawCrosshair_Params
{
	bool                                               bNewActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerTryDoorInteraction
struct ABrainSlug_Character_BP_C_ServerTryDoorInteraction_Params
{
	class APrimalStructure*                            TargetedDoor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Server_ClearBrainSlugAttachment
struct ABrainSlug_Character_BP_C_Server_ClearBrainSlugAttachment_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_DestroyController
struct ABrainSlug_Character_BP_C_Multi_DestroyController_Params
{
	class AController*                                 NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ResetFlee
struct ABrainSlug_Character_BP_C_ResetFlee_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReceiveBeginPlay
struct ABrainSlug_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_SpawnEffect
struct ABrainSlug_Character_BP_C_Multi_SpawnEffect_Params
{
	class UParticleSystem*                             particle;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      AttachToActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachToSocket;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_DoJumpParticle
struct ABrainSlug_Character_BP_C_Multi_DoJumpParticle_Params
{
	bool                                               Activate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromThrow;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_DoBrainHuntParticle
struct ABrainSlug_Character_BP_C_Multi_DoBrainHuntParticle_Params
{
	bool                                               Activate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerRepossess
struct ABrainSlug_Character_BP_C_ServerRepossess_Params
{
	class AController*                                 InController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.TimerClearBrainSlugAttachment
struct ABrainSlug_Character_BP_C_TimerClearBrainSlugAttachment_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.StartPossessionBehaviors
struct ABrainSlug_Character_BP_C_StartPossessionBehaviors_Params
{
	bool                                               bDontActuallyPossess;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ChangeControllers
struct ABrainSlug_Character_BP_C_ChangeControllers_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_SetControlRotForController
struct ABrainSlug_Character_BP_C_Multi_SetControlRotForController_Params
{
	class AController*                                 Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    newRot;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.TestingMessage
struct ABrainSlug_Character_BP_C_TestingMessage_Params
{
	class FString                                      OutMessage;                                               // (Parm, ZeroConstructor)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.SetupHarvestingBag
struct ABrainSlug_Character_BP_C_SetupHarvestingBag_Params
{
	class APrimalStructureItemContainer*               HarvestBag;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Timer_TryUpdateComponentVisibility
struct ABrainSlug_Character_BP_C_Timer_TryUpdateComponentVisibility_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.AttemptBrainControl
struct ABrainSlug_Character_BP_C_AttemptBrainControl_Params
{
	class APrimalCharacter*                            TargetChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OnJumpReleased
struct ABrainSlug_Character_BP_C_BP_OnJumpReleased_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.TryFire
struct ABrainSlug_Character_BP_C_TryFire_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ForceFireWeapon
struct ABrainSlug_Character_BP_C_ForceFireWeapon_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerFireWeapon
struct ABrainSlug_Character_BP_C_ServerFireWeapon_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Server_TryJump
struct ABrainSlug_Character_BP_C_Server_TryJump_Params
{
	bool                                               bStartJump;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OnJumpPressed
struct ABrainSlug_Character_BP_C_BP_OnJumpPressed_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.DelayedUpdateRot
struct ABrainSlug_Character_BP_C_DelayedUpdateRot_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Server_SetControlRot
struct ABrainSlug_Character_BP_C_Server_SetControlRot_Params
{
	struct FRotator                                    newRot;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController*                    InstigatingController;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewAimDir;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_SetControlRot
struct ABrainSlug_Character_BP_C_Multi_SetControlRot_Params
{
	struct FRotator                                    newRot;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_MoveInput
struct ABrainSlug_Character_BP_C_Multi_MoveInput_Params
{
	struct FVector                                     moveDir;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Server_MoveBrainControlTarget
struct ABrainSlug_Character_BP_C_Server_MoveBrainControlTarget_Params
{
	struct FVector                                     moveDir;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController*                    InstigatingController;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ClearPossessionBinds
struct ABrainSlug_Character_BP_C_ClearPossessionBinds_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.RespondToPlayerSleep
struct ABrainSlug_Character_BP_C_RespondToPlayerSleep_Params
{
	class APrimalCharacter*                            forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSleeping;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.RespondToPlayerDeath
struct ABrainSlug_Character_BP_C_RespondToPlayerDeath_Params
{
	class APrimalCharacter*                            DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.OnPossessionResponse
struct ABrainSlug_Character_BP_C_OnPossessionResponse_Params
{
	class AShooterPlayerController*                    NewPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_UpdateCollisionProfile
struct ABrainSlug_Character_BP_C_Multi_UpdateCollisionProfile_Params
{
	bool                                               bShouldCollide;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.JumpLeapInput
struct ABrainSlug_Character_BP_C_JumpLeapInput_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.UpdateJumpCheck
struct ABrainSlug_Character_BP_C_UpdateJumpCheck_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.DelayedLaunchVelocity
struct ABrainSlug_Character_BP_C_DelayedLaunchVelocity_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.K2_OnMovementModeChanged
struct ABrainSlug_Character_BP_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.StartBrainJump
struct ABrainSlug_Character_BP_C_StartBrainJump_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ClearBrainJump
struct ABrainSlug_Character_BP_C_ClearBrainJump_Params
{
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ActorHitDelegateEvent
struct ABrainSlug_Character_BP_C_ActorHitDelegateEvent_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BrainControlInput
struct ABrainSlug_Character_BP_C_BrainControlInput_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ExecuteUbergraph_BrainSlug_Character_BP
struct ABrainSlug_Character_BP_C_ExecuteUbergraph_BrainSlug_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
