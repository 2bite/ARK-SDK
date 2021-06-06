#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_Pants_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.IsPlayerUsingJetpack
struct ABuff_TekArmor_Pants_C_IsPlayerUsingJetpack_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPlayerIgnoreSpeedModifiers
struct ABuff_TekArmor_Pants_C_SetPlayerIgnoreSpeedModifiers_Params
{
	bool                                               newIgnore;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.PlayerHasFistsEquipped
struct ABuff_TekArmor_Pants_C_PlayerHasFistsEquipped_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.IsPlayerGrappled
struct ABuff_TekArmor_Pants_C_IsPlayerGrappled_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BPCheckPreventInput
struct ABuff_TekArmor_Pants_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerMoveSpeedModifier
struct ABuff_TekArmor_Pants_C_GetPlayerMoveSpeedModifier_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.OnRep_bCanRunOnWater
struct ABuff_TekArmor_Pants_C_OnRep_bCanRunOnWater_Params
{
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetRunningOnWater
struct ABuff_TekArmor_Pants_C_SetRunningOnWater_Params
{
	bool                                               IsRunning;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.OnRep_CurrentTekRunState
struct ABuff_TekArmor_Pants_C_OnRep_CurrentTekRunState_Params
{
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.AreGlovesEquippedAndActive
struct ABuff_TekArmor_Pants_C_AreGlovesEquippedAndActive_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ABuff_TekArmor_Gloves_C*                     glovesRef;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Player Max Tek Run Velocity
struct ABuff_TekArmor_Pants_C_Get_Player_Max_Tek_Run_Velocity_Params
{
	float                                              MaxSpeed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetBuffPostprocessIntensity
struct ABuff_TekArmor_Pants_C_GetBuffPostprocessIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CanStartTekRun
struct ABuff_TekArmor_Pants_C_CanStartTekRun_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.NetSetRunningSpeedModifier
struct ABuff_TekArmor_Pants_C_NetSetRunningSpeedModifier_Params
{
	float                                              newModifier;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.RunDamageActor
struct ABuff_TekArmor_Pants_C_RunDamageActor_Params
{
	class AActor*                                      HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DidRebound;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.NetSetTekRunningState
struct ABuff_TekArmor_Pants_C_NetSetTekRunningState_Params
{
	TEnumAsByte<E_TekRunningState>                     NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetDustParticlesActive
struct ABuff_TekArmor_Pants_C_SetDustParticlesActive_Params
{
	bool                                               newActive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.UpdateLocalVarsByState
struct ABuff_TekArmor_Pants_C_UpdateLocalVarsByState_Params
{
	TEnumAsByte<E_TekRunningState>                     NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.LocalSetTekRunningState
struct ABuff_TekArmor_Pants_C_LocalSetTekRunningState_Params
{
	TEnumAsByte<E_TekRunningState>                     NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BuffTickServer
struct ABuff_TekArmor_Pants_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.InitGloves
struct ABuff_TekArmor_Pants_C_InitGloves_Params
{
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ForceWalkForward
struct ABuff_TekArmor_Pants_C_ForceWalkForward_Params
{
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.UpdatePlayerControlRotation
struct ABuff_TekArmor_Pants_C_UpdatePlayerControlRotation_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BPDeactivated
struct ABuff_TekArmor_Pants_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerTekRunVelocityRatio
struct ABuff_TekArmor_Pants_C_GetPlayerTekRunVelocityRatio_Params
{
	float                                              Ratio;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Player MaxRunVelocity
struct ABuff_TekArmor_Pants_C_Get_Player_MaxRunVelocity_Params
{
	float                                              MaxSpeed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.MaintainFullSpeed
struct ABuff_TekArmor_Pants_C_MaintainFullSpeed_Params
{
	bool                                               bUsePlayerForward;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OverrideDirection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               wasMaintained;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerMaxTekRunVelocity_Pure
struct ABuff_TekArmor_Pants_C_GetPlayerMaxTekRunVelocity_Pure_Params
{
	float                                              MaxSpeed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.StoreCurrentVelocityLength
struct ABuff_TekArmor_Pants_C_StoreCurrentVelocityLength_Params
{
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetChargeStartVariables
struct ABuff_TekArmor_Pants_C_SetChargeStartVariables_Params
{
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Default Player Run Speed Mult
struct ABuff_TekArmor_Pants_C_Get_Default_Player_Run_Speed_Mult_Params
{
	float                                              speedMult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Tick Update Tek Run
struct ABuff_TekArmor_Pants_C_Tick_Update_Tek_Run_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.RedirectPlayerVelocity
struct ABuff_TekArmor_Pants_C_RedirectPlayerVelocity_Params
{
	struct FVector                                     newForward;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BuffTickClient
struct ABuff_TekArmor_Pants_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPreventEquipWeapons
struct ABuff_TekArmor_Pants_C_SetPreventEquipWeapons_Params
{
	bool                                               Prevent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CalculateDeflectingImpulse
struct ABuff_TekArmor_Pants_C_CalculateDeflectingImpulse_Params
{
	class AActor*                                      TargetCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPlayerRunSpeed
struct ABuff_TekArmor_Pants_C_SetPlayerRunSpeed_Params
{
	float                                              newSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ClearHitActors
struct ABuff_TekArmor_Pants_C_ClearHitActors_Params
{
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Trace and Damage ForwardPawns
struct ABuff_TekArmor_Pants_C_Trace_and_Damage_ForwardPawns_Params
{
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetModifiedForward
struct ABuff_TekArmor_Pants_C_GetModifiedForward_Params
{
	float                                              forwardScale;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AdditionalOffset;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     newForward;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Trace And Damage Forward StationaryActors
struct ABuff_TekArmor_Pants_C_Trace_And_Damage_Forward_StationaryActors_Params
{
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CalculateForwardRelativeToSpeed
struct ABuff_TekArmor_Pants_C_CalculateForwardRelativeToSpeed_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CanUseTekAbility
struct ABuff_TekArmor_Pants_C_CanUseTekAbility_Params
{
	bool*                                              bNotifyIfOutOfElement;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetCastedArmorPieceRef
struct ABuff_TekArmor_Pants_C_SetCastedArmorPieceRef_Params
{
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.UserConstructionScript
struct ABuff_TekArmor_Pants_C_UserConstructionScript_Params
{
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.InpActEvt_AltFire_K2Node_InputActionEvent_84
struct ABuff_TekArmor_Pants_C_InpActEvt_AltFire_K2Node_InputActionEvent_84_Params
{
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.InpActEvt_AltFire_K2Node_InputActionEvent_83
struct ABuff_TekArmor_Pants_C_InpActEvt_AltFire_K2Node_InputActionEvent_83_Params
{
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Server_SetTekRunningState
struct ABuff_TekArmor_Pants_C_Server_SetTekRunningState_Params
{
	TEnumAsByte<E_TekRunningState>                     newRunState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Client_SyncRunModifier
struct ABuff_TekArmor_Pants_C_Client_SyncRunModifier_Params
{
	float                                              newModifier;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Pants_AltFirePressed
struct ABuff_TekArmor_Pants_C_Pants_AltFirePressed_Params
{
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Pants_AltFireReleased
struct ABuff_TekArmor_Pants_C_Pants_AltFireReleased_Params
{
};

// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ExecuteUbergraph_Buff_TekArmor_Pants
struct ABuff_TekArmor_Pants_C_ExecuteUbergraph_Buff_TekArmor_Pants_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
