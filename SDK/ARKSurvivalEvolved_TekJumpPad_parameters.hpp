#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekJumpPad_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TekJumpPad.TekJumpPad_C.OnRep_ShowIndicator
struct ATekJumpPad_C_OnRep_ShowIndicator_Params
{
};

// Function TekJumpPad.TekJumpPad_C.SetLaunchPreviewVisibility
struct ATekJumpPad_C_SetLaunchPreviewVisibility_Params
{
	bool                                               IsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekJumpPad.TekJumpPad_C.TickLaunchPreview
struct ATekJumpPad_C_TickLaunchPreview_Params
{
};

// Function TekJumpPad.TekJumpPad_C.BPContainerDeactivated
struct ATekJumpPad_C_BPContainerDeactivated_Params
{
};

// Function TekJumpPad.TekJumpPad_C.BPContainerActivated
struct ATekJumpPad_C_BPContainerActivated_Params
{
};

// Function TekJumpPad.TekJumpPad_C.BPRefreshedStructureColors
struct ATekJumpPad_C_BPRefreshedStructureColors_Params
{
};

// Function TekJumpPad.TekJumpPad_C.BlueprintDrawHUD
struct ATekJumpPad_C_BlueprintDrawHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekJumpPad.TekJumpPad_C.RandomSetRotation
struct ATekJumpPad_C_RandomSetRotation_Params
{
};

// Function TekJumpPad.TekJumpPad_C.OnRep_LaunchBounceTriggerSwitchBool
struct ATekJumpPad_C_OnRep_LaunchBounceTriggerSwitchBool_Params
{
};

// Function TekJumpPad.TekJumpPad_C.BPPlacedStructure
struct ATekJumpPad_C_BPPlacedStructure_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekJumpPad.TekJumpPad_C.OnRep_IsSizeBig
struct ATekJumpPad_C_OnRep_IsSizeBig_Params
{
};

// Function TekJumpPad.TekJumpPad_C.SetMaterialParameters
struct ATekJumpPad_C_SetMaterialParameters_Params
{
};

// Function TekJumpPad.TekJumpPad_C.TurnOnJumpPad
struct ATekJumpPad_C_TurnOnJumpPad_Params
{
};

// Function TekJumpPad.TekJumpPad_C.OnRep_IsActivated
struct ATekJumpPad_C_OnRep_IsActivated_Params
{
};

// Function TekJumpPad.TekJumpPad_C.OnRep_UseRandomDirection
struct ATekJumpPad_C_OnRep_UseRandomDirection_Params
{
};

// Function TekJumpPad.TekJumpPad_C.LaunchForceToAlpha
struct ATekJumpPad_C_LaunchForceToAlpha_Params
{
	float                                              LaunchForce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekJumpPad.TekJumpPad_C.OnRep_CurrentLaunchForce
struct ATekJumpPad_C_OnRep_CurrentLaunchForce_Params
{
};

// Function TekJumpPad.TekJumpPad_C.OnRep_LaunchAreaCapsuleHalfHeight
struct ATekJumpPad_C_OnRep_LaunchAreaCapsuleHalfHeight_Params
{
};

// Function TekJumpPad.TekJumpPad_C.UpdateLaunchTriggerTransform
struct ATekJumpPad_C_UpdateLaunchTriggerTransform_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewCapsuleHalfHeight;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewLaunchForce;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekJumpPad.TekJumpPad_C.OnRep_LaunchRotation
struct ATekJumpPad_C_OnRep_LaunchRotation_Params
{
};

// Function TekJumpPad.TekJumpPad_C.BPServerHandleNetExecCommand
struct ATekJumpPad_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekJumpPad.TekJumpPad_C.BPClientDoMultiUse
struct ATekJumpPad_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekJumpPad.TekJumpPad_C.BPGetMultiUseEntries
struct ATekJumpPad_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TekJumpPad.TekJumpPad_C.LaunchCharacter
struct ATekJumpPad_C_LaunchCharacter_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VelocityMultiplier;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekJumpPad.TekJumpPad_C.GetVelocityMultiplierForCharacter
struct ATekJumpPad_C_GetVelocityMultiplierForCharacter_Params
{
	class APrimalCharacter*                            Char;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllowedToLaunch;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              VelocityMultiplier;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekJumpPad.TekJumpPad_C.BPIsAllowedToBuildEx
struct ATekJumpPad_C_BPIsAllowedToBuildEx_Params
{
	struct FPlacementData                              OutPlacementData;                                         // (Parm, OutParm, ReferenceParm)
	int*                                               CurrentAllowedReason;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFinalPlacement;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bChoosingRotation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekJumpPad.TekJumpPad_C.GetBuffDefaultDuration
struct ATekJumpPad_C_GetBuffDefaultDuration_Params
{
	class UClass*                                      BuffClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeactivateAfterTime;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekJumpPad.TekJumpPad_C.UserConstructionScript
struct ATekJumpPad_C_UserConstructionScript_Params
{
};

// Function TekJumpPad.TekJumpPad_C.Launchactivate__FinishedFunc
struct ATekJumpPad_C_Launchactivate__FinishedFunc_Params
{
};

// Function TekJumpPad.TekJumpPad_C.Launchactivate__UpdateFunc
struct ATekJumpPad_C_Launchactivate__UpdateFunc_Params
{
};

// Function TekJumpPad.TekJumpPad_C.Timeline_0__FinishedFunc
struct ATekJumpPad_C_Timeline_0__FinishedFunc_Params
{
};

// Function TekJumpPad.TekJumpPad_C.Timeline_0__UpdateFunc
struct ATekJumpPad_C_Timeline_0__UpdateFunc_Params
{
};

// Function TekJumpPad.TekJumpPad_C.Timeline_1__FinishedFunc
struct ATekJumpPad_C_Timeline_1__FinishedFunc_Params
{
};

// Function TekJumpPad.TekJumpPad_C.Timeline_1__UpdateFunc
struct ATekJumpPad_C_Timeline_1__UpdateFunc_Params
{
};

// Function TekJumpPad.TekJumpPad_C.BndEvt__LaunchTrigger_K2Node_ComponentBoundEvent_126_ComponentBeginOverlapSignature__DelegateSignature
struct ATekJumpPad_C_BndEvt__LaunchTrigger_K2Node_ComponentBoundEvent_126_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function TekJumpPad.TekJumpPad_C.ReceiveBeginPlay
struct ATekJumpPad_C_ReceiveBeginPlay_Params
{
};

// Function TekJumpPad.TekJumpPad_C.ServerRequest_RotateToOtherSide
struct ATekJumpPad_C_ServerRequest_RotateToOtherSide_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekJumpPad.TekJumpPad_C.ServerRequest_ToggleSize
struct ATekJumpPad_C_ServerRequest_ToggleSize_Params
{
};

// Function TekJumpPad.TekJumpPad_C.ServerRequest_Rotate
struct ATekJumpPad_C_ServerRequest_Rotate_Params
{
};

// Function TekJumpPad.TekJumpPad_C.ServerRequest_ForceUp
struct ATekJumpPad_C_ServerRequest_ForceUp_Params
{
};

// Function TekJumpPad.TekJumpPad_C.ServerRequest_ForceDown
struct ATekJumpPad_C_ServerRequest_ForceDown_Params
{
};

// Function TekJumpPad.TekJumpPad_C.ServerRequest_ToggleRandom
struct ATekJumpPad_C_ServerRequest_ToggleRandom_Params
{
};

// Function TekJumpPad.TekJumpPad_C.ServerRequest_SetPinCode
struct ATekJumpPad_C_ServerRequest_SetPinCode_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekJumpPad.TekJumpPad_C.ServerRequest_ToggleActivation
struct ATekJumpPad_C_ServerRequest_ToggleActivation_Params
{
};

// Function TekJumpPad.TekJumpPad_C.Client_FloatingPad
struct ATekJumpPad_C_Client_FloatingPad_Params
{
	bool                                               On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekJumpPad.TekJumpPad_C.ServerRequest_PitchMore
struct ATekJumpPad_C_ServerRequest_PitchMore_Params
{
};

// Function TekJumpPad.TekJumpPad_C.ServerRequest_PitchLess
struct ATekJumpPad_C_ServerRequest_PitchLess_Params
{
};

// Function TekJumpPad.TekJumpPad_C.Client_LaunchBounce
struct ATekJumpPad_C_Client_LaunchBounce_Params
{
};

// Function TekJumpPad.TekJumpPad_C.ServerRequest_ToggleIndicator
struct ATekJumpPad_C_ServerRequest_ToggleIndicator_Params
{
};

// Function TekJumpPad.TekJumpPad_C.ExecuteUbergraph_TekJumpPad
struct ATekJumpPad_C_ExecuteUbergraph_TekJumpPad_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
