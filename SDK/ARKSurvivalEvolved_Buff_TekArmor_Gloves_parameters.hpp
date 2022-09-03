#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_Gloves_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.PreventBlockingWithShield
struct ABuff_TekArmor_Gloves_C_PreventBlockingWithShield_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.HasShield
struct ABuff_TekArmor_Gloves_C_HasShield_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ShieldActive
struct ABuff_TekArmor_Gloves_C_ShieldActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.BPCheckPreventInput
struct ABuff_TekArmor_Gloves_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.CanPhysicallyTekPunch
struct ABuff_TekArmor_Gloves_C_CanPhysicallyTekPunch_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Should Damage Actor
struct ABuff_TekArmor_Gloves_C_Should_Damage_Actor_Params
{
	class AActor**                                     Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Has Line Of SightToActor
struct ABuff_TekArmor_Gloves_C_Has_Line_Of_SightToActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ArePunchChargeAnimsPlaying
struct ABuff_TekArmor_Gloves_C_ArePunchChargeAnimsPlaying_Params
{
	bool                                               cleanUpAnims;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.PlayPunchAnimsByState
struct ABuff_TekArmor_Gloves_C_PlayPunchAnimsByState_Params
{
	TEnumAsByte<E_TekGlovePunchState>                  State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.IsPlayerAboveGround
struct ABuff_TekArmor_Gloves_C_IsPlayerAboveGround_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.AreTekPantsEquipped
struct ABuff_TekArmor_Gloves_C_AreTekPantsEquipped_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ABuff_TekArmor_Pants_C*                      tekPantsRef;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.GetBuffPostprocessIntensity
struct ABuff_TekArmor_Gloves_C_GetBuffPostprocessIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.BPDeactivated
struct ABuff_TekArmor_Gloves_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Update Local Vars by State
struct ABuff_TekArmor_Gloves_C_Update_Local_Vars_by_State_Params
{
	TEnumAsByte<E_TekGlovePunchState>                  NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.GetPlayerCameraLocation
struct ABuff_TekArmor_Gloves_C_GetPlayerCameraLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.BPSetupForInstigator
struct ABuff_TekArmor_Gloves_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.RocketPunchEnd
struct ABuff_TekArmor_Gloves_C_RocketPunchEnd_Params
{
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ResetOwningPlayerVariables
struct ABuff_TekArmor_Gloves_C_ResetOwningPlayerVariables_Params
{
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.PreventJump
struct ABuff_TekArmor_Gloves_C_PreventJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.NetSetTekPunchState
struct ABuff_TekArmor_Gloves_C_NetSetTekPunchState_Params
{
	TEnumAsByte<E_TekGlovePunchState>                  newPunchState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.BuffTickServer
struct ABuff_TekArmor_Gloves_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Client_SetTekPunchState
struct ABuff_TekArmor_Gloves_C_Client_SetTekPunchState_Params
{
	TEnumAsByte<E_TekGlovePunchState>                  NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.GetTimeToRocketPunchTarget
struct ABuff_TekArmor_Gloves_C_GetTimeToRocketPunchTarget_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.CheckForTargetsWhileRocketPunching
struct ABuff_TekArmor_Gloves_C_CheckForTargetsWhileRocketPunching_Params
{
	bool                                               punchNow;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Set AudioParams and Play
struct ABuff_TekArmor_Gloves_C_Set_AudioParams_and_Play_Params
{
	class UAudioComponent*                             Audio;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlaySound;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.OnRep_CurrentPunchState
struct ABuff_TekArmor_Gloves_C_OnRep_CurrentPunchState_Params
{
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.GetRelativeCenterOfMass
struct ABuff_TekArmor_Gloves_C_GetRelativeCenterOfMass_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.DrawBuffFloatingHUD
struct ABuff_TekArmor_Gloves_C_DrawBuffFloatingHUD_Params
{
	int*                                               BuffIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ScanForRocketFistTargets
struct ABuff_TekArmor_Gloves_C_ScanForRocketFistTargets_Params
{
	float                                              Range;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               anyHit;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            hitPawn;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.AccurateSphereCheck
struct ABuff_TekArmor_Gloves_C_AccurateSphereCheck_Params
{
	struct FVector                                     EndLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SphereRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreFriendlies;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HitPawnOrStructure;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Spawn Sound at Fist Location
struct ABuff_TekArmor_Gloves_C_Spawn_Sound_at_Fist_Location_Params
{
	class USoundBase*                                  SoundToSpawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.BuffTickClient
struct ABuff_TekArmor_Gloves_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Get Punch Location
struct ABuff_TekArmor_Gloves_C_Get_Punch_Location_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.RocketPunchStart
struct ABuff_TekArmor_Gloves_C_RocketPunchStart_Params
{
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Punch
struct ABuff_TekArmor_Gloves_C_Punch_Params
{
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.CanUseTekAbility
struct ABuff_TekArmor_Gloves_C_CanUseTekAbility_Params
{
	bool*                                              bNotifyIfOutOfElement;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.SetCastedArmorPieceRef
struct ABuff_TekArmor_Gloves_C_SetCastedArmorPieceRef_Params
{
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.UserConstructionScript
struct ABuff_TekArmor_Gloves_C_UserConstructionScript_Params
{
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Targeting_K2Node_InputActionEvent_87
struct ABuff_TekArmor_Gloves_C_InpActEvt_Targeting_K2Node_InputActionEvent_87_Params
{
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Targeting_K2Node_InputActionEvent_86
struct ABuff_TekArmor_Gloves_C_InpActEvt_Targeting_K2Node_InputActionEvent_86_Params
{
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_AltFire_K2Node_InputActionEvent_85
struct ABuff_TekArmor_Gloves_C_InpActEvt_AltFire_K2Node_InputActionEvent_85_Params
{
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_AltFire_K2Node_InputActionEvent_84
struct ABuff_TekArmor_Gloves_C_InpActEvt_AltFire_K2Node_InputActionEvent_84_Params
{
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Fire_K2Node_InputActionEvent_83
struct ABuff_TekArmor_Gloves_C_InpActEvt_Fire_K2Node_InputActionEvent_83_Params
{
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Fire_K2Node_InputActionEvent_82
struct ABuff_TekArmor_Gloves_C_InpActEvt_Fire_K2Node_InputActionEvent_82_Params
{
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_38
struct ABuff_TekArmor_Gloves_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_38_Params
{
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_37
struct ABuff_TekArmor_Gloves_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_37_Params
{
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_36
struct ABuff_TekArmor_Gloves_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_36_Params
{
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_35
struct ABuff_TekArmor_Gloves_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_35_Params
{
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.OnSuperPunch_Pressed
struct ABuff_TekArmor_Gloves_C_OnSuperPunch_Pressed_Params
{
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.OnSuperPunch_Released
struct ABuff_TekArmor_Gloves_C_OnSuperPunch_Released_Params
{
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Server_SetPunchChargeState
struct ABuff_TekArmor_Gloves_C_Server_SetPunchChargeState_Params
{
	TEnumAsByte<E_TekGlovePunchState>                  newPunchState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ResetCanLandAfterDelay
struct ABuff_TekArmor_Gloves_C_ResetCanLandAfterDelay_Params
{
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.UpdateClientHasValidRocketPunchTarget
struct ABuff_TekArmor_Gloves_C_UpdateClientHasValidRocketPunchTarget_Params
{
	bool                                               newHasTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            newTargetPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ResetPunchStateAfterDelay
struct ABuff_TekArmor_Gloves_C_ResetPunchStateAfterDelay_Params
{
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Gloves_AltFirePressed
struct ABuff_TekArmor_Gloves_C_Gloves_AltFirePressed_Params
{
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Gloves_AltFireReleased
struct ABuff_TekArmor_Gloves_C_Gloves_AltFireReleased_Params
{
};

// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ExecuteUbergraph_Buff_TekArmor_Gloves
struct ABuff_TekArmor_Gloves_C_ExecuteUbergraph_Buff_TekArmor_Gloves_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
