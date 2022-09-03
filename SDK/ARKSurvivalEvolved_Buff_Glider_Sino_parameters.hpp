#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Glider_Sino_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetSinoFoodVals
struct ABuff_Glider_Sino_C_GetSinoFoodVals_Params
{
	float                                              current;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.UpdateGliderSFX
struct ABuff_Glider_Sino_C_UpdateGliderSFX_Params
{
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.UpdateVelocityForVFX
struct ABuff_Glider_Sino_C_UpdateVelocityForVFX_Params
{
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.InitGlider
struct ABuff_Glider_Sino_C_InitGlider_Params
{
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.BP_ModifyCharacterFOV
struct ABuff_Glider_Sino_C_BP_ModifyCharacterFOV_Params
{
	float*                                             inFOV;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.DoInjuredJumpIfRequired
struct ABuff_Glider_Sino_C_DoInjuredJumpIfRequired_Params
{
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.CheckIsInNoFlySPZ
struct ABuff_Glider_Sino_C_CheckIsInNoFlySPZ_Params
{
	bool                                               IsInNonFlightArea;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.ClearIsGlideFallingFromDamage
struct ABuff_Glider_Sino_C_ClearIsGlideFallingFromDamage_Params
{
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.BuffAdjustDamage
struct ABuff_Glider_Sino_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.AttachWingVFX
struct ABuff_Glider_Sino_C_AttachWingVFX_Params
{
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.PlayInsufficientStaminaMessage
struct ABuff_Glider_Sino_C_PlayInsufficientStaminaMessage_Params
{
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetGliderInactiveMeshTargetRotVals
struct ABuff_Glider_Sino_C_GetGliderInactiveMeshTargetRotVals_Params
{
	struct FRotator                                    Rot;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetCanDoubleJump
struct ABuff_Glider_Sino_C_GetCanDoubleJump_Params
{
	bool                                               CanDoubleJump;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.ClearIsDoubleJumping
struct ABuff_Glider_Sino_C_ClearIsDoubleJumping_Params
{
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.AttemptSetIsDoubleJumping
struct ABuff_Glider_Sino_C_AttemptSetIsDoubleJumping_Params
{
	bool                                               isDoubleJumping;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetGliderMesh
struct ABuff_Glider_Sino_C_GetGliderMesh_Params
{
	bool                                               foundMesh;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      meshRef;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.ClearOwnerIgnoreWater
struct ABuff_Glider_Sino_C_ClearOwnerIgnoreWater_Params
{
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetIsCloseToWaterSurface
struct ABuff_Glider_Sino_C_GetIsCloseToWaterSurface_Params
{
	bool                                               IsClose;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSwimming;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.BuffTickServer
struct ABuff_Glider_Sino_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.Can Use Glider
struct ABuff_Glider_Sino_C_Can_Use_Glider_Params
{
	bool*                                              isToStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.ExCanUseSinoMovementState
struct ABuff_Glider_Sino_C_ExCanUseSinoMovementState_Params
{
	TEnumAsByte<E_SinoMovementState>                   MovementState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanEnter;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.UpdateGliderByState_ServerAndClient
struct ABuff_Glider_Sino_C_UpdateGliderByState_ServerAndClient_Params
{
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.BPOnInstigatorMovementModeChangedNotify
struct ABuff_Glider_Sino_C_BPOnInstigatorMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.BPOverrideCharacterNewFallVelocity
struct ABuff_Glider_Sino_C_BPOverrideCharacterNewFallVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.HideBuffFromHUD
struct ABuff_Glider_Sino_C_HideBuffFromHUD_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.NetSetCurrentSinoState
struct ABuff_Glider_Sino_C_NetSetCurrentSinoState_Params
{
	TEnumAsByte<E_SinoMovementState>                   NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.NetSetCurrentGliderState
struct ABuff_Glider_Sino_C_NetSetCurrentGliderState_Params
{
	TEnumAsByte<E_GliderStates>*                       NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.CanUseSinoMovement
struct ABuff_Glider_Sino_C_CanUseSinoMovement_Params
{
	TEnumAsByte<E_SinoMovementState>                   MovementType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanUse;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.BuffTickClient
struct ABuff_Glider_Sino_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetSinoStaminaVals
struct ABuff_Glider_Sino_C_GetSinoStaminaVals_Params
{
	float                                              current;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.UpdateBuffDescription
struct ABuff_Glider_Sino_C_UpdateBuffDescription_Params
{
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.RefreshMountedSinoMovementState
struct ABuff_Glider_Sino_C_RefreshMountedSinoMovementState_Params
{
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnRep_SinoMovementState
struct ABuff_Glider_Sino_C_OnRep_SinoMovementState_Params
{
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.UserConstructionScript
struct ABuff_Glider_Sino_C_UserConstructionScript_Params
{
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Jump_K2Node_InputActionEvent_422
struct ABuff_Glider_Sino_C_InpActEvt_Jump_K2Node_InputActionEvent_422_Params
{
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Jump_K2Node_InputActionEvent_421
struct ABuff_Glider_Sino_C_InpActEvt_Jump_K2Node_InputActionEvent_421_Params
{
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_90
struct ABuff_Glider_Sino_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_90_Params
{
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_89
struct ABuff_Glider_Sino_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_89_Params
{
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_420
struct ABuff_Glider_Sino_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_420_Params
{
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_419
struct ABuff_Glider_Sino_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_419_Params
{
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Crouch_K2Node_InputActionEvent_418
struct ABuff_Glider_Sino_C_InpActEvt_Crouch_K2Node_InputActionEvent_418_Params
{
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Prone_K2Node_InputActionEvent_417
struct ABuff_Glider_Sino_C_InpActEvt_Prone_K2Node_InputActionEvent_417_Params
{
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.Server_RequestChangeSinoMovementState
struct ABuff_Glider_Sino_C_Server_RequestChangeSinoMovementState_Params
{
	TEnumAsByte<E_SinoMovementState>                   NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnPlayerJump_Pressed
struct ABuff_Glider_Sino_C_OnPlayerJump_Pressed_Params
{
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnPlayerJump_Released
struct ABuff_Glider_Sino_C_OnPlayerJump_Released_Params
{
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.BPDeactivated
struct ABuff_Glider_Sino_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.Server_AttemptSetDoubleJump
struct ABuff_Glider_Sino_C_Server_AttemptSetDoubleJump_Params
{
	bool                                               IsDoubleJump;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.Client_UpdateSinoStatVals
struct ABuff_Glider_Sino_C_Client_UpdateSinoStatVals_Params
{
	float                                              Stam;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              food;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnPlayerToggleCrouch_Released
struct ABuff_Glider_Sino_C_OnPlayerToggleCrouch_Released_Params
{
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnPlayerToggleCrouch_Pressed
struct ABuff_Glider_Sino_C_OnPlayerToggleCrouch_Pressed_Params
{
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.Client_SetIsGlideFallingFromDam
struct ABuff_Glider_Sino_C_Client_SetIsGlideFallingFromDam_Params
{
	bool                                               Set;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.ExecuteUbergraph_Buff_Glider_Sino
struct ABuff_Glider_Sino_C_ExecuteUbergraph_Buff_Glider_Sino_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
