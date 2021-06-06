#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RemoteCamera_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetConsoleData
struct ARemoteCamera_Character_BP_C_GetConsoleData_Params
{
	float                                              ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // (Parm, OutParm, ZeroConstructor)
	bool                                               CanAddCamera;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.CanAddCamera
struct ARemoteCamera_Character_BP_C_CanAddCamera_Params
{
	bool                                               Allowed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetConsoleID
struct ARemoteCamera_Character_BP_C_GetConsoleID_Params
{
	float                                              ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetCameraData
struct ARemoteCamera_Character_BP_C_GetCameraData_Params
{
	TArray<class APrimalStructure*>                    Cameras;                                                  // (Parm, OutParm, ZeroConstructor)
	int                                                index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetCameraLocation
struct ARemoteCamera_Character_BP_C_GetCameraLocation_Params
{
	struct FVector                                     CameraViewPoint;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CameraRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SwitchToCameraAtIndex
struct ARemoteCamera_Character_BP_C_SwitchToCameraAtIndex_Params
{
	int                                                CameraIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPOverrideCameraViewTarget
struct ARemoteCamera_Character_BP_C_BPOverrideCameraViewTarget_Params
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

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_OnZoomOut
struct ARemoteCamera_Character_BP_C_BP_OnZoomOut_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_OnZoomIn
struct ARemoteCamera_Character_BP_C_BP_OnZoomIn_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.CycleVisionMode
struct ARemoteCamera_Character_BP_C_CycleVisionMode_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Concede Input Handling to UI
struct ARemoteCamera_Character_BP_C_Concede_Input_Handling_to_UI_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ResumeInputHandling
struct ARemoteCamera_Character_BP_C_ResumeInputHandling_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPGetFPVViewLocation
struct ARemoteCamera_Character_BP_C_BPGetFPVViewLocation_Params
{
	class APrimalCharacter**                           viewingCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPOverrideFPVViewLocation
struct ARemoteCamera_Character_BP_C_BPOverrideFPVViewLocation_Params
{
	class APrimalCharacter**                           viewingCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.CameraTick
struct ARemoteCamera_Character_BP_C_CameraTick_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.RemoveCameraData
struct ARemoteCamera_Character_BP_C_RemoveCameraData_Params
{
	class APrimalStructure*                            CamToRemove;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.AddCamera
struct ARemoteCamera_Character_BP_C_AddCamera_Params
{
	class APrimalStructure*                            NewCam;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPGetOtherActorToIgnore
struct ARemoteCamera_Character_BP_C_BPGetOtherActorToIgnore_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReleaseCamera
struct ARemoteCamera_Character_BP_C_ReleaseCamera_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReceiveDestroyed
struct ARemoteCamera_Character_BP_C_ReceiveDestroyed_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPTriggerStasisEvent
struct ARemoteCamera_Character_BP_C_BPTriggerStasisEvent_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPUnstasis
struct ARemoteCamera_Character_BP_C_BPUnstasis_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetCameraData
struct ARemoteCamera_Character_BP_C_SetCameraData_Params
{
	int                                                CurrentIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class APrimalStructure*>                    LinkedCameras_Server;                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPGetHUDElements
struct ARemoteCamera_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPForceCameraStyle
struct ARemoteCamera_Character_BP_C_BPForceCameraStyle_Params
{
	class APrimalCharacter**                           ForViewTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECameraStyle>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPDinoPostBeginPlay
struct ARemoteCamera_Character_BP_C_BPDinoPostBeginPlay_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReceivePossessed
struct ARemoteCamera_Character_BP_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPCanCryo
struct ARemoteCamera_Character_BP_C_BPCanCryo_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_PreventMovementMode
struct ARemoteCamera_Character_BP_C_BP_PreventMovementMode_Params
{
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetupScoutDisconnect
struct ARemoteCamera_Character_BP_C_SetupScoutDisconnect_Params
{
	float                                              DelayTimeSeconds;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DestroyScout
struct ARemoteCamera_Character_BP_C_DestroyScout_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPModifyAimOffsetTargetLocation
struct ARemoteCamera_Character_BP_C_BPModifyAimOffsetTargetLocation_Params
{
	struct FVector                                     AimTargetLocation;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClearExpiredDinoAIData
struct ARemoteCamera_Character_BP_C_ClearExpiredDinoAIData_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPOverrideStencilAllianceForTarget
struct ARemoteCamera_Character_BP_C_BPOverrideStencilAllianceForTarget_Params
{
	class APrimalCharacter**                           TargetDino;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStencilAlliance>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPShouldCancelDoAttack
struct ARemoteCamera_Character_BP_C_BPShouldCancelDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.OnRep_LowStamina
struct ARemoteCamera_Character_BP_C_OnRep_LowStamina_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReceiveTick
struct ARemoteCamera_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ScoutIsFirstPerson
struct ARemoteCamera_Character_BP_C_ScoutIsFirstPerson_Params
{
	bool                                               Retval;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPHandleOnStopFire
struct ARemoteCamera_Character_BP_C_BPHandleOnStopFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetTargetImpactMaterial
struct ARemoteCamera_Character_BP_C_SetTargetImpactMaterial_Params
{
	float                                              ImpactDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPPreventStasis
struct ARemoteCamera_Character_BP_C_BPPreventStasis_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.IsScoutFirst Person
struct ARemoteCamera_Character_BP_C_IsScoutFirst_Person_Params
{
	bool                                               IsFirstPerson;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetFirstPersonMaterial
struct ARemoteCamera_Character_BP_C_SetFirstPersonMaterial_Params
{
	bool                                               IsFirstPerson;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.IsServerOrSinglePlayer
struct ARemoteCamera_Character_BP_C_IsServerOrSinglePlayer_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.IsClientOrSinglePlayer
struct ARemoteCamera_Character_BP_C_IsClientOrSinglePlayer_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_GetCustomModifier_RotationRate
struct ARemoteCamera_Character_BP_C_BP_GetCustomModifier_RotationRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_GetCustomModifier_MaxSpeed
struct ARemoteCamera_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BlueprintCanAttack
struct ARemoteCamera_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPAdjustDamage
struct ARemoteCamera_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_OnSetDeath
struct ARemoteCamera_Character_BP_C_BP_OnSetDeath_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPHandleControllerInitiatedAttack
struct ARemoteCamera_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Release Possessing Survivor
struct ARemoteCamera_Character_BP_C_Release_Possessing_Survivor_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetPossessedByPlayer
struct ARemoteCamera_Character_BP_C_GetPossessedByPlayer_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Spawned from Structure
struct ARemoteCamera_Character_BP_C_Spawned_from_Structure_Params
{
	class AShooterPlayerController*                    ShooterPlayerController;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PossessDelay;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalStructure*                            LinkedStructure;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPIsValidUnStasisCaster
struct ARemoteCamera_Character_BP_C_BPIsValidUnStasisCaster_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UserConstructionScript
struct ARemoteCamera_Character_BP_C_UserConstructionScript_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_136
struct ARemoteCamera_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_136_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_135
struct ARemoteCamera_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_135_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_134
struct ARemoteCamera_Character_BP_C_InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_134_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_ArkGamepadRightShoulder_K2Node_InputActionEvent_133
struct ARemoteCamera_Character_BP_C_InpActEvt_ArkGamepadRightShoulder_K2Node_InputActionEvent_133_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_Jump_K2Node_InputActionEvent_132
struct ARemoteCamera_Character_BP_C_InpActEvt_Jump_K2Node_InputActionEvent_132_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_Run_K2Node_InputActionEvent_131
struct ARemoteCamera_Character_BP_C_InpActEvt_Run_K2Node_InputActionEvent_131_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_130
struct ARemoteCamera_Character_BP_C_InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_130_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_54
struct ARemoteCamera_Character_BP_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_54_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UpdateCameraRotation
struct ARemoteCamera_Character_BP_C_UpdateCameraRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UpdateConsoleName
struct ARemoteCamera_Character_BP_C_UpdateConsoleName_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ActivateCamera
struct ARemoteCamera_Character_BP_C_ActivateCamera_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Server_AddPostProcessBuffToPlayer
struct ARemoteCamera_Character_BP_C_Server_AddPostProcessBuffToPlayer_Params
{
	int                                                BuffIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Server_RemovePostProcessBuffFromPlayer
struct ARemoteCamera_Character_BP_C_Server_RemovePostProcessBuffFromPlayer_Params
{
	int                                                BuffIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Server_RemoveAllPostProcessBuffs
struct ARemoteCamera_Character_BP_C_Server_RemoveAllPostProcessBuffs_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.RemovePostProcessBuff
struct ARemoteCamera_Character_BP_C_RemovePostProcessBuff_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReleasePossessingSurvivorAndDestroy
struct ARemoteCamera_Character_BP_C_ReleasePossessingSurvivorAndDestroy_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReceiveBeginPlay
struct ARemoteCamera_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SpawnEnd
struct ARemoteCamera_Character_BP_C_SpawnEnd_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.TriggerDisconnectFX
struct ARemoteCamera_Character_BP_C_TriggerDisconnectFX_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.PossessedByPlayer
struct ARemoteCamera_Character_BP_C_PossessedByPlayer_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.MULTI_ReleasePossessingSurvivor
struct ARemoteCamera_Character_BP_C_MULTI_ReleasePossessingSurvivor_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DelayedDestroyActor
struct ARemoteCamera_Character_BP_C_DelayedDestroyActor_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerHandleOnStopFire
struct ARemoteCamera_Character_BP_C_ServerHandleOnStopFire_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientCheckClearExpiredDinoData
struct ARemoteCamera_Character_BP_C_ClientCheckClearExpiredDinoData_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DisableAI
struct ARemoteCamera_Character_BP_C_DisableAI_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientHitTerrain
struct ARemoteCamera_Character_BP_C_ClientHitTerrain_Params
{
	struct FVector                                     ImpactNormal;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.AddNewCamera
struct ARemoteCamera_Character_BP_C_AddNewCamera_Params
{
	class APrimalStructure*                            NewStructure;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetCurrentCamera
struct ARemoteCamera_Character_BP_C_SetCurrentCamera_Params
{
	int                                                CameraIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerNextCamera
struct ARemoteCamera_Character_BP_C_ServerNextCamera_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ConsoleDeactivated
struct ARemoteCamera_Character_BP_C_ConsoleDeactivated_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UpdateScoutVisionBuff
struct ARemoteCamera_Character_BP_C_UpdateScoutVisionBuff_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.RemoveCamera
struct ARemoteCamera_Character_BP_C_RemoveCamera_Params
{
	class APrimalStructure*                            CameraToRemove;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.OnNotifyDamage_Event
struct ARemoteCamera_Character_BP_C_OnNotifyDamage_Event_Params
{
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ListenForPlayerDamage
struct ARemoteCamera_Character_BP_C_ListenForPlayerDamage_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientNotifyHit
struct ARemoteCamera_Character_BP_C_ClientNotifyHit_Params
{
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                Event;                                                    // (Parm)
	class APawn*                                       Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.OnSleepStateChanged_Event
struct ARemoteCamera_Character_BP_C_OnSleepStateChanged_Event_Params
{
	class APrimalCharacter*                            forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSleeping;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientActivateCamera
struct ARemoteCamera_Character_BP_C_ClientActivateCamera_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientReleaseCamera
struct ARemoteCamera_Character_BP_C_ClientReleaseCamera_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DelayedActivateCamera
struct ARemoteCamera_Character_BP_C_DelayedActivateCamera_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DelayedReleaseCamera
struct ARemoteCamera_Character_BP_C_DelayedReleaseCamera_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.VerifyPossession
struct ARemoteCamera_Character_BP_C_VerifyPossession_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.VerifyPossessingSurvivor
struct ARemoteCamera_Character_BP_C_VerifyPossessingSurvivor_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerUpdateCameraInfo
struct ARemoteCamera_Character_BP_C_ServerUpdateCameraInfo_Params
{
	int                                                CameraIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientUpdateCameraInfo
struct ARemoteCamera_Character_BP_C_ClientUpdateCameraInfo_Params
{
	int                                                CameraIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalStructure*                            UpdatedCamera;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SpawnCameraHUD
struct ARemoteCamera_Character_BP_C_SpawnCameraHUD_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DestroyCameraHUD
struct ARemoteCamera_Character_BP_C_DestroyCameraHUD_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerPreviousCamera
struct ARemoteCamera_Character_BP_C_ServerPreviousCamera_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerSwitchToCameraAtIndex
struct ARemoteCamera_Character_BP_C_ServerSwitchToCameraAtIndex_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientUpdateHUDInfo
struct ARemoteCamera_Character_BP_C_ClientUpdateHUDInfo_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.StopPossessingPlayerMovement
struct ARemoteCamera_Character_BP_C_StopPossessingPlayerMovement_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerConfirmActivation
struct ARemoteCamera_Character_BP_C_ServerConfirmActivation_Params
{
};

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ExecuteUbergraph_RemoteCamera_Character_BP
struct ARemoteCamera_Character_BP_C_ExecuteUbergraph_RemoteCamera_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
