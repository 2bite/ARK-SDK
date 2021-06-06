#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Spindles_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Spindles_Character_BP.Spindles_Character_BP_C.AllowPlayMontage
struct ASpindles_Character_BP_C_AllowPlayMontage_Params
{
	class UAnimMontage**                               AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.BPTimerNonDedicated
struct ASpindles_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.UpdateMiniGunState
struct ASpindles_Character_BP_C_UpdateMiniGunState_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.BPTimerServer
struct ASpindles_Character_BP_C_BPTimerServer_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.GetClampedCameraLocation
struct ASpindles_Character_BP_C_GetClampedCameraLocation_Params
{
	struct FVector                                     OutLoc;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.BPGetDebugInfoString
struct ASpindles_Character_BP_C_BPGetDebugInfoString_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.SpawnMinigunFX
struct ASpindles_Character_BP_C_SpawnMinigunFX_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandlePoop
struct ASpindles_Character_BP_C_BPHandlePoop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.BPOverrideHurtAnim
struct ASpindles_Character_BP_C_BPOverrideHurtAnim_Params
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

// Function Spindles_Character_BP.Spindles_Character_BP_C.UpdateCachedActivateMinigunModeWeightCheck
struct ASpindles_Character_BP_C_UpdateCachedActivateMinigunModeWeightCheck_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.BlueprintGetAttackWeight
struct ASpindles_Character_BP_C_BlueprintGetAttackWeight_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             inputWeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.GetMinigunModeTPVOffset
struct ASpindles_Character_BP_C_GetMinigunModeTPVOffset_Params
{
	struct FVector                                     TPVOffset;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.Set Minigun FireInput Pressed
struct ASpindles_Character_BP_C_Set_Minigun_FireInput_Pressed_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.RidingTick
struct ASpindles_Character_BP_C_RidingTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandleLeftShoulderButton
struct ASpindles_Character_BP_C_BPHandleLeftShoulderButton_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.Set Minigun AOEInput Pressed
struct ASpindles_Character_BP_C_Set_Minigun_AOEInput_Pressed_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandleControllerInitiatedAttack
struct ASpindles_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.SwitchMinigunTPVCameraView
struct ASpindles_Character_BP_C_SwitchMinigunTPVCameraView_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.BP_InterceptMoveRight
struct ASpindles_Character_BP_C_BP_InterceptMoveRight_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.BP_InterceptMoveForward
struct ASpindles_Character_BP_C_BP_InterceptMoveForward_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.BPPreventFirstPerson
struct ASpindles_Character_BP_C_BPPreventFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.BPNotifySetRider
struct ASpindles_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.BPOverrideCameraViewTarget
struct ASpindles_Character_BP_C_BPOverrideCameraViewTarget_Params
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

// Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandleOnStopTargeting
struct ASpindles_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.HasOverheatBuff
struct ASpindles_Character_BP_C_HasOverheatBuff_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.BP_GetCustomModifier_RotationRate
struct ASpindles_Character_BP_C_BP_GetCustomModifier_RotationRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.Is Server or SinglePlayer
struct ASpindles_Character_BP_C_Is_Server_or_SinglePlayer_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.IsAIControlled
struct ASpindles_Character_BP_C_IsAIControlled_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.BPGetCrosshairLocation
struct ASpindles_Character_BP_C_BPGetCrosshairLocation_Params
{
	float*                                             CanvasClipX;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CanvasClipY;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutX;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutY;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.BPGetCrosshairAlpha
struct ASpindles_Character_BP_C_BPGetCrosshairAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.IsFirstPersonView
struct ASpindles_Character_BP_C_IsFirstPersonView_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.ReceiveBeginPlay
struct ASpindles_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.BPNotifyClearRider
struct ASpindles_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.IsClientOrSinglePlayer
struct ASpindles_Character_BP_C_IsClientOrSinglePlayer_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandleOnStopFire
struct ASpindles_Character_BP_C_BPHandleOnStopFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.BPAdjustAttackIndex
struct ASpindles_Character_BP_C_BPAdjustAttackIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.UserConstructionScript
struct ASpindles_Character_BP_C_UserConstructionScript_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_160
struct ASpindles_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_160_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_159
struct ASpindles_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_159_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.SetMinigunAOE
struct ASpindles_Character_BP_C_SetMinigunAOE_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.SERVER_SetMinigunAOEInputPressed
struct ASpindles_Character_BP_C_SERVER_SetMinigunAOEInputPressed_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.RequestStopAOEAttack
struct ASpindles_Character_BP_C_RequestStopAOEAttack_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.SERVER_SetMinigunFireInputPressed
struct ASpindles_Character_BP_C_SERVER_SetMinigunFireInputPressed_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.StartMinigunFire
struct ASpindles_Character_BP_C_StartMinigunFire_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.StopMinigunFire
struct ASpindles_Character_BP_C_StopMinigunFire_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.ClientSpawnMinigunFireFX
struct ASpindles_Character_BP_C_ClientSpawnMinigunFireFX_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.MinigunModeOff
struct ASpindles_Character_BP_C_MinigunModeOff_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.MinigunModeOn
struct ASpindles_Character_BP_C_MinigunModeOn_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.TickMinigunStaminaCost
struct ASpindles_Character_BP_C_TickMinigunStaminaCost_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.ClientOutOfStamina
struct ASpindles_Character_BP_C_ClientOutOfStamina_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.CheckConsumeResource
struct ASpindles_Character_BP_C_CheckConsumeResource_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.LoopMinigunFiringAnim
struct ASpindles_Character_BP_C_LoopMinigunFiringAnim_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.ServerEnableMinigunMode
struct ASpindles_Character_BP_C_ServerEnableMinigunMode_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.ServerDisableMinigunMode
struct ASpindles_Character_BP_C_ServerDisableMinigunMode_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.EnableMinigunMode
struct ASpindles_Character_BP_C_EnableMinigunMode_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.DisableMinigunMode
struct ASpindles_Character_BP_C_DisableMinigunMode_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.RotateAttack
struct ASpindles_Character_BP_C_RotateAttack_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.AnimNotify_TurnForAttack
struct ASpindles_Character_BP_C_AnimNotify_TurnForAttack_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.AnimNotify_AttackTurnFinished
struct ASpindles_Character_BP_C_AnimNotify_AttackTurnFinished_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.StopCheckConsumeResource
struct ASpindles_Character_BP_C_StopCheckConsumeResource_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.ToggleMinigunModeAimOffset
struct ASpindles_Character_BP_C_ToggleMinigunModeAimOffset_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.SetupMinigunFiring
struct ASpindles_Character_BP_C_SetupMinigunFiring_Params
{
	class UAnimMontage*                                LoopAnim;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             TrailFX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.TickAOEStaminaCost
struct ASpindles_Character_BP_C_TickAOEStaminaCost_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.TickMinigunTPVCamera
struct ASpindles_Character_BP_C_TickMinigunTPVCamera_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.ReplicateCameraDataMinigunModeToServer
struct ASpindles_Character_BP_C_ReplicateCameraDataMinigunModeToServer_Params
{
	bool                                               IsFirstPerson;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.MULTI_StartAOEAttack
struct ASpindles_Character_BP_C_MULTI_StartAOEAttack_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.MULTI_EndAOEAttack
struct ASpindles_Character_BP_C_MULTI_EndAOEAttack_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.LeftShoulderPressed
struct ASpindles_Character_BP_C_LeftShoulderPressed_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.AnimNotify_TickAOEStaminaCost
struct ASpindles_Character_BP_C_AnimNotify_TickAOEStaminaCost_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.AnimNotify_TickMinigunStaminaCost
struct ASpindles_Character_BP_C_AnimNotify_TickMinigunStaminaCost_Params
{
};

// Function Spindles_Character_BP.Spindles_Character_BP_C.ExecuteUbergraph_Spindles_Character_BP
struct ASpindles_Character_BP_C_ExecuteUbergraph_Spindles_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
