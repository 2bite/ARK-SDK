#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BrainSlug_HumanControl_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPInterceptUseAction
struct ABuff_BrainSlug_HumanControl_C_BPInterceptUseAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPPreventTekArmorBuffs
struct ABuff_BrainSlug_HumanControl_C_BPPreventTekArmorBuffs_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.InterceptInstigatorPlayerEmoteAnim
struct ABuff_BrainSlug_HumanControl_C_InterceptInstigatorPlayerEmoteAnim_Params
{
	class UAnimMontage**                               EmoteAnim;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPInstigatorSleeped
struct ABuff_BrainSlug_HumanControl_C_BPInstigatorSleeped_Params
{
	bool*                                              bIsSleeped;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.DrawBuffFloatingHUD
struct ABuff_BrainSlug_HumanControl_C_DrawBuffFloatingHUD_Params
{
	int*                                               BuffIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.GetForcedBuffAimOverride
struct ABuff_BrainSlug_HumanControl_C_GetForcedBuffAimOverride_Params
{
	bool*                                              bIsWeaponAim;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPTryMultiUse
struct ABuff_BrainSlug_HumanControl_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPGetMultiUseEntries
struct ABuff_BrainSlug_HumanControl_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.UpdatePuppetteerStatus
struct ABuff_BrainSlug_HumanControl_C_UpdatePuppetteerStatus_Params
{
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BP_OverrideCharacterWalkingVelocity
struct ABuff_BrainSlug_HumanControl_C_BP_OverrideCharacterWalkingVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Friction;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPPreventFirstPerson
struct ABuff_BrainSlug_HumanControl_C_BPPreventFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BP_OverrideMoveForwardInput
struct ABuff_BrainSlug_HumanControl_C_BP_OverrideMoveForwardInput_Params
{
	float*                                             CurrentInput;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BP_OverrideMoveRightInput
struct ABuff_BrainSlug_HumanControl_C_BP_OverrideMoveRightInput_Params
{
	float*                                             CurrentInput;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPOverrideCameraViewTarget
struct ABuff_BrainSlug_HumanControl_C_BPOverrideCameraViewTarget_Params
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

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.GetBestAggressionTarget
struct ABuff_BrainSlug_HumanControl_C_GetBestAggressionTarget_Params
{
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPCheckPreventInput
struct ABuff_BrainSlug_HumanControl_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPPreSetupForInstigator
struct ABuff_BrainSlug_HumanControl_C_BPPreSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ReceiveDestroyed
struct ABuff_BrainSlug_HumanControl_C_ReceiveDestroyed_Params
{
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPDeactivated
struct ABuff_BrainSlug_HumanControl_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPSetupForInstigator
struct ABuff_BrainSlug_HumanControl_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.UserConstructionScript
struct ABuff_BrainSlug_HumanControl_C_UserConstructionScript_Params
{
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.LaunchClearOfAttachment
struct ABuff_BrainSlug_HumanControl_C_LaunchClearOfAttachment_Params
{
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ReceiveBeginPlay
struct ABuff_BrainSlug_HumanControl_C_ReceiveBeginPlay_Params
{
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.GenerateRandomWalk
struct ABuff_BrainSlug_HumanControl_C_GenerateRandomWalk_Params
{
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.DisableLookAndMove
struct ABuff_BrainSlug_HumanControl_C_DisableLookAndMove_Params
{
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BuffTickClient
struct ABuff_BrainSlug_HumanControl_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BuffTickServer
struct ABuff_BrainSlug_HumanControl_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.Multi_UpdateRotation
struct ABuff_BrainSlug_HumanControl_C_Multi_UpdateRotation_Params
{
	bool                                               SetsRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    newRot;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.Multi_SetBrainCameraOverrides
struct ABuff_BrainSlug_HumanControl_C_Multi_SetBrainCameraOverrides_Params
{
	struct FRotator                                    newRot;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewAimDir;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ServerFireWeapon
struct ABuff_BrainSlug_HumanControl_C_ServerFireWeapon_Params
{
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ForceFireWeapon
struct ABuff_BrainSlug_HumanControl_C_ForceFireWeapon_Params
{
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.TryFire
struct ABuff_BrainSlug_HumanControl_C_TryFire_Params
{
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.DealDamageTick
struct ABuff_BrainSlug_HumanControl_C_DealDamageTick_Params
{
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.Multi_AddMoveInput
struct ABuff_BrainSlug_HumanControl_C_Multi_AddMoveInput_Params
{
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ServerJump
struct ABuff_BrainSlug_HumanControl_C_ServerJump_Params
{
	bool                                               bStartJump;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.MultiJump
struct ABuff_BrainSlug_HumanControl_C_MultiJump_Params
{
	bool                                               bStartJump;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ServerTryRepossesion
struct ABuff_BrainSlug_HumanControl_C_ServerTryRepossesion_Params
{
	class AShooterPlayerController*                    NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.Multi_EnablePossession
struct ABuff_BrainSlug_HumanControl_C_Multi_EnablePossession_Params
{
	class AShooterPlayerController*                    NewPossessingPC;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BeginPossessionResponse
struct ABuff_BrainSlug_HumanControl_C_BeginPossessionResponse_Params
{
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.RespondToPlayerDeath
struct ABuff_BrainSlug_HumanControl_C_RespondToPlayerDeath_Params
{
	class APrimalCharacter*                            DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.RespondToPlayerSleep
struct ABuff_BrainSlug_HumanControl_C_RespondToPlayerSleep_Params
{
	class APrimalCharacter*                            forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSleeping;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.DoMultiUseAccessInventory
struct ABuff_BrainSlug_HumanControl_C_DoMultiUseAccessInventory_Params
{
};

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ExecuteUbergraph_Buff_BrainSlug_HumanControl
struct ABuff_BrainSlug_HumanControl_C_ExecuteUbergraph_Buff_BrainSlug_HumanControl_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
