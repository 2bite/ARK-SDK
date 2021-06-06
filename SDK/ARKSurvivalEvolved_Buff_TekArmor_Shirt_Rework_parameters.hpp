#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_Shirt_Rework_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnRep_JetPackVFXOffset
struct ABuff_TekArmor_Shirt_Rework_C_OnRep_JetPackVFXOffset_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.SetJetpackOffset
struct ABuff_TekArmor_Shirt_Rework_C_SetJetpackOffset_Params
{
	struct UObject_FTransform                          AddTransform;                                             // (Parm, IsPlainOldData)
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnInputsPrevented
struct ABuff_TekArmor_Shirt_Rework_C_OnInputsPrevented_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BPOverrideCharacterNewFallVelocity
struct ABuff_TekArmor_Shirt_Rework_C_BPOverrideCharacterNewFallVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Clamp LocationZ
struct ABuff_TekArmor_Shirt_Rework_C_Clamp_LocationZ_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsPlayerInWater
struct ABuff_TekArmor_Shirt_Rework_C_IsPlayerInWater_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsTekChargeThrusting
struct ABuff_TekArmor_Shirt_Rework_C_IsTekChargeThrusting_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.AreChargeThrustingAnimsPlaying
struct ABuff_TekArmor_Shirt_Rework_C_AreChargeThrustingAnimsPlaying_Params
{
	bool                                               cleanUpAnims;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsPlayerInjured
struct ABuff_TekArmor_Shirt_Rework_C_IsPlayerInjured_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsPlayerWaterRunning
struct ABuff_TekArmor_Shirt_Rework_C_IsPlayerWaterRunning_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BPSetupForInstigator
struct ABuff_TekArmor_Shirt_Rework_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateBoostIconVisibility
struct ABuff_TekArmor_Shirt_Rework_C_UpdateBoostIconVisibility_Params
{
	bool                                               setVisible;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.SetIsChargeThrusting
struct ABuff_TekArmor_Shirt_Rework_C_SetIsChargeThrusting_Params
{
	bool                                               Newval;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.CanUseTekAbility
struct ABuff_TekArmor_Shirt_Rework_C_CanUseTekAbility_Params
{
	bool*                                              bNotifyIfOutOfElement;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateThrusterFX
struct ABuff_TekArmor_Shirt_Rework_C_UpdateThrusterFX_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BPDeactivated
struct ABuff_TekArmor_Shirt_Rework_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Reset Owning PlayerVariables
struct ABuff_TekArmor_Shirt_Rework_C_Reset_Owning_PlayerVariables_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateIsSwimming
struct ABuff_TekArmor_Shirt_Rework_C_UpdateIsSwimming_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.ClampPlayerVelocity
struct ABuff_TekArmor_Shirt_Rework_C_ClampPlayerVelocity_Params
{
	float                                              MaxVelocity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateTekShirtByState
struct ABuff_TekArmor_Shirt_Rework_C_UpdateTekShirtByState_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnRep_bIsUnderwater
struct ABuff_TekArmor_Shirt_Rework_C_OnRep_bIsUnderwater_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.RestoreThrusterStateFromCurrentInputs
struct ABuff_TekArmor_Shirt_Rework_C_RestoreThrusterStateFromCurrentInputs_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.ResetBoostWhenGrounded
struct ABuff_TekArmor_Shirt_Rework_C_ResetBoostWhenGrounded_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsPlayerUnderWater
struct ABuff_TekArmor_Shirt_Rework_C_IsPlayerUnderWater_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.NetSetCurrentThrusterState
struct ABuff_TekArmor_Shirt_Rework_C_NetSetCurrentThrusterState_Params
{
	TEnumAsByte<E_TekThrusterState>                    NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BuffTickServer
struct ABuff_TekArmor_Shirt_Rework_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.JetpackBoostClient
struct ABuff_TekArmor_Shirt_Rework_C_JetpackBoostClient_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.JetpackBoost_Server
struct ABuff_TekArmor_Shirt_Rework_C_JetpackBoost_Server_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Update Thruster Impulse
struct ABuff_TekArmor_Shirt_Rework_C_Update_Thruster_Impulse_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsThrusterActive
struct ABuff_TekArmor_Shirt_Rework_C_IsThrusterActive_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnRep_CurrentThrusterState
struct ABuff_TekArmor_Shirt_Rework_C_OnRep_CurrentThrusterState_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.SetCastedArmorPieceRef
struct ABuff_TekArmor_Shirt_Rework_C_SetCastedArmorPieceRef_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BuffTickClient
struct ABuff_TekArmor_Shirt_Rework_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Client_SetThrusterState
struct ABuff_TekArmor_Shirt_Rework_C_Client_SetThrusterState_Params
{
	TEnumAsByte<E_TekThrusterState>                    NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.JetpackBoost_Start
struct ABuff_TekArmor_Shirt_Rework_C_JetpackBoost_Start_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UserConstructionScript
struct ABuff_TekArmor_Shirt_Rework_C_UserConstructionScript_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Jump_K2Node_InputActionEvent_89
struct ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Jump_K2Node_InputActionEvent_89_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Jump_K2Node_InputActionEvent_88
struct ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Jump_K2Node_InputActionEvent_88_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Run_K2Node_InputActionEvent_87
struct ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Run_K2Node_InputActionEvent_87_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Run_K2Node_InputActionEvent_86
struct ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Run_K2Node_InputActionEvent_86_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_RunToggle_K2Node_InputActionEvent_85
struct ABuff_TekArmor_Shirt_Rework_C_InpActEvt_RunToggle_K2Node_InputActionEvent_85_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_40
struct ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_40_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_39
struct ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_39_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnPlayerJump_Pressed
struct ABuff_TekArmor_Shirt_Rework_C_OnPlayerJump_Pressed_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnPlayerJump_Released
struct ABuff_TekArmor_Shirt_Rework_C_OnPlayerJump_Released_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Server_SetThrusterState
struct ABuff_TekArmor_Shirt_Rework_C_Server_SetThrusterState_Params
{
	TEnumAsByte<E_TekThrusterState>                    NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateCanBoostAfterCooldown
struct ABuff_TekArmor_Shirt_Rework_C_UpdateCanBoostAfterCooldown_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.PlayBoostCooldownSound
struct ABuff_TekArmor_Shirt_Rework_C_PlayBoostCooldownSound_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.FlashThrusterDuringBoost
struct ABuff_TekArmor_Shirt_Rework_C_FlashThrusterDuringBoost_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BoostCleanupAfterDuration
struct ABuff_TekArmor_Shirt_Rework_C_BoostCleanupAfterDuration_Params
{
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Server_UpdateJetpackVFXOffset
struct ABuff_TekArmor_Shirt_Rework_C_Server_UpdateJetpackVFXOffset_Params
{
	struct UObject_FTransform                          NewOffset;                                                // (Parm, IsPlainOldData)
};

// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.ExecuteUbergraph_Buff_TekArmor_Shirt_Rework
struct ABuff_TekArmor_Shirt_Rework_C_ExecuteUbergraph_Buff_TekArmor_Shirt_Rework_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
