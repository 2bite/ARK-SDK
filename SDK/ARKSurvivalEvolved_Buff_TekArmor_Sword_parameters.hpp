#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_Sword_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.PreventBlockingWithShield
struct ABuff_TekArmor_Sword_C_PreventBlockingWithShield_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ShieldActive
struct ABuff_TekArmor_Sword_C_ShieldActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.HasShield
struct ABuff_TekArmor_Sword_C_HasShield_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetRelatedTekArmorRef
struct ABuff_TekArmor_Sword_C_GetRelatedTekArmorRef_Params
{
	class UPrimalItemArmor_Base_Tek_C*                 tekArmorRef;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Can Decrease Element Ammo
struct ABuff_TekArmor_Sword_C_Can_Decrease_Element_Ammo_Params
{
	int                                                AmountToDecrease;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsForChargedState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanDecrease;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.TryDecreaseElementAmmo
struct ABuff_TekArmor_Sword_C_TryDecreaseElementAmmo_Params
{
	int                                                AmountToDecrease;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsForChargedState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BPCheckPreventInput
struct ABuff_TekArmor_Sword_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.CanPhysicallyTekPunch
struct ABuff_TekArmor_Sword_C_CanPhysicallyTekPunch_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Should Damage Actor
struct ABuff_TekArmor_Sword_C_Should_Damage_Actor_Params
{
	class AActor**                                     Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Has Line Of SightToActor
struct ABuff_TekArmor_Sword_C_Has_Line_Of_SightToActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ArePunchChargeAnimsPlaying
struct ABuff_TekArmor_Sword_C_ArePunchChargeAnimsPlaying_Params
{
	bool                                               cleanUpAnims;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.PlayPunchAnimsByState
struct ABuff_TekArmor_Sword_C_PlayPunchAnimsByState_Params
{
	TEnumAsByte<E_TekGlovePunchState>                  State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.IsPlayerAboveGround
struct ABuff_TekArmor_Sword_C_IsPlayerAboveGround_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.AreTekPantsEquipped
struct ABuff_TekArmor_Sword_C_AreTekPantsEquipped_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ABuff_TekArmor_Pants_C*                      tekPantsRef;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetBuffPostprocessIntensity
struct ABuff_TekArmor_Sword_C_GetBuffPostprocessIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BPDeactivated
struct ABuff_TekArmor_Sword_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Update Local Vars by State
struct ABuff_TekArmor_Sword_C_Update_Local_Vars_by_State_Params
{
	TEnumAsByte<E_TekGlovePunchState>                  NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetPlayerCameraLocation
struct ABuff_TekArmor_Sword_C_GetPlayerCameraLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BPSetupForInstigator
struct ABuff_TekArmor_Sword_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.RocketPunchEnd
struct ABuff_TekArmor_Sword_C_RocketPunchEnd_Params
{
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ResetOwningPlayerVariables
struct ABuff_TekArmor_Sword_C_ResetOwningPlayerVariables_Params
{
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.PreventJump
struct ABuff_TekArmor_Sword_C_PreventJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.NetSetTekPunchState
struct ABuff_TekArmor_Sword_C_NetSetTekPunchState_Params
{
	TEnumAsByte<E_TekGlovePunchState>                  newPunchState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BuffTickServer
struct ABuff_TekArmor_Sword_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Client_SetTekPunchState
struct ABuff_TekArmor_Sword_C_Client_SetTekPunchState_Params
{
	TEnumAsByte<E_TekGlovePunchState>                  NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetTimeToRocketPunchTarget
struct ABuff_TekArmor_Sword_C_GetTimeToRocketPunchTarget_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.CheckForTargetsWhileRocketPunching
struct ABuff_TekArmor_Sword_C_CheckForTargetsWhileRocketPunching_Params
{
	bool                                               punchNow;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Set AudioParams and Play
struct ABuff_TekArmor_Sword_C_Set_AudioParams_and_Play_Params
{
	class UAudioComponent*                             audio;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlaySound;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.OnRep_CurrentPunchState
struct ABuff_TekArmor_Sword_C_OnRep_CurrentPunchState_Params
{
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetRelativeCenterOfMass
struct ABuff_TekArmor_Sword_C_GetRelativeCenterOfMass_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.DrawBuffFloatingHUD
struct ABuff_TekArmor_Sword_C_DrawBuffFloatingHUD_Params
{
	int*                                               BuffIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ScanForRocketFistTargets
struct ABuff_TekArmor_Sword_C_ScanForRocketFistTargets_Params
{
	float                                              Range;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               anyHit;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.AccurateSphereCheck
struct ABuff_TekArmor_Sword_C_AccurateSphereCheck_Params
{
	struct FVector                                     EndLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SphereRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreFriendlies;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HitPawnOrStructure;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Spawn Sound at Fist Location
struct ABuff_TekArmor_Sword_C_Spawn_Sound_at_Fist_Location_Params
{
	class USoundBase*                                  SoundToSpawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BuffTickClient
struct ABuff_TekArmor_Sword_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Get Punch Location
struct ABuff_TekArmor_Sword_C_Get_Punch_Location_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.RocketPunchStart
struct ABuff_TekArmor_Sword_C_RocketPunchStart_Params
{
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Punch
struct ABuff_TekArmor_Sword_C_Punch_Params
{
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.CanUseTekAbility
struct ABuff_TekArmor_Sword_C_CanUseTekAbility_Params
{
	bool*                                              bNotifyIfOutOfElement;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.SetCastedArmorPieceRef
struct ABuff_TekArmor_Sword_C_SetCastedArmorPieceRef_Params
{
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.UserConstructionScript
struct ABuff_TekArmor_Sword_C_UserConstructionScript_Params
{
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Targeting_K2Node_InputActionEvent_92
struct ABuff_TekArmor_Sword_C_InpActEvt_Targeting_K2Node_InputActionEvent_92_Params
{
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Targeting_K2Node_InputActionEvent_91
struct ABuff_TekArmor_Sword_C_InpActEvt_Targeting_K2Node_InputActionEvent_91_Params
{
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_AltFire_K2Node_InputActionEvent_90
struct ABuff_TekArmor_Sword_C_InpActEvt_AltFire_K2Node_InputActionEvent_90_Params
{
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_AltFire_K2Node_InputActionEvent_89
struct ABuff_TekArmor_Sword_C_InpActEvt_AltFire_K2Node_InputActionEvent_89_Params
{
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Fire_K2Node_InputActionEvent_88
struct ABuff_TekArmor_Sword_C_InpActEvt_Fire_K2Node_InputActionEvent_88_Params
{
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Fire_K2Node_InputActionEvent_87
struct ABuff_TekArmor_Sword_C_InpActEvt_Fire_K2Node_InputActionEvent_87_Params
{
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_47
struct ABuff_TekArmor_Sword_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_47_Params
{
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_46
struct ABuff_TekArmor_Sword_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_46_Params
{
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_45
struct ABuff_TekArmor_Sword_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_45_Params
{
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_44
struct ABuff_TekArmor_Sword_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_44_Params
{
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.OnSuperPunch_Pressed
struct ABuff_TekArmor_Sword_C_OnSuperPunch_Pressed_Params
{
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.OnSuperPunch_Released
struct ABuff_TekArmor_Sword_C_OnSuperPunch_Released_Params
{
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Server_SetPunchChargeState
struct ABuff_TekArmor_Sword_C_Server_SetPunchChargeState_Params
{
	TEnumAsByte<E_TekGlovePunchState>                  newPunchState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ResetCanLandAfterDelay
struct ABuff_TekArmor_Sword_C_ResetCanLandAfterDelay_Params
{
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.UpdateClientHasValidRocketPunchTarget
struct ABuff_TekArmor_Sword_C_UpdateClientHasValidRocketPunchTarget_Params
{
	bool                                               newHasTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            newTargetPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ResetPunchStateAfterDelay
struct ABuff_TekArmor_Sword_C_ResetPunchStateAfterDelay_Params
{
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Sword_AltFirePressed
struct ABuff_TekArmor_Sword_C_Sword_AltFirePressed_Params
{
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Sword_AltFireReleased
struct ABuff_TekArmor_Sword_C_Sword_AltFireReleased_Params
{
};

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ExecuteUbergraph_Buff_TekArmor_Sword
struct ABuff_TekArmor_Sword_C_ExecuteUbergraph_Buff_TekArmor_Sword_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
