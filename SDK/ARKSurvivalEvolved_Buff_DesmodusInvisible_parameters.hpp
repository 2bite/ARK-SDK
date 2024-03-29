#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DesmodusInvisible_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.IsLocalCrontrolledPlayerInFPV
struct ABuff_DesmodusInvisible_C_IsLocalCrontrolledPlayerInFPV_Params
{
	class APrimalCharacter*                            forChar;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLocal;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.DeactiveOnFiring
struct ABuff_DesmodusInvisible_C_DeactiveOnFiring_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BPServerHandleNetExecCommand
struct ABuff_DesmodusInvisible_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BPHandleOnStartFire
struct ABuff_DesmodusInvisible_C_BPHandleOnStartFire_Params
{
	bool*                                              bFromGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Has passed default weapon check
struct ABuff_DesmodusInvisible_C_Has_passed_default_weapon_check_Params
{
	class AShooterCharacter*                           Passenger;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               passed_check;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Set Cloak Transition Value
struct ABuff_DesmodusInvisible_C_Set_Cloak_Transition_Value_Params
{
	float                                              Dissolve_Mesh;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Cloak_Transition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Skip_LFL_Transition;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.update mate boost on timer
struct ABuff_DesmodusInvisible_C_update_mate_boost_on_timer_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Reset Base Targeting Desirability
struct ABuff_DesmodusInvisible_C_Reset_Base_Targeting_Desirability_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Is Near Boss
struct ABuff_DesmodusInvisible_C_Is_Near_Boss_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Deactivate Cloak Mat On passengers
struct ABuff_DesmodusInvisible_C_Deactivate_Cloak_Mat_On_passengers_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.deactivate cloak mat on rider
struct ABuff_DesmodusInvisible_C_deactivate_cloak_mat_on_rider_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.set up attached cloak meshes
struct ABuff_DesmodusInvisible_C_set_up_attached_cloak_meshes_Params
{
	class UObject*                                     parent_dino_mesh;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      current_cloaking_mesh_comp;                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      new_mesh;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.force remove disolve
struct ABuff_DesmodusInvisible_C_force_remove_disolve_Params
{
	class USkeletalMeshComponent*                      InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.post uncloak
struct ABuff_DesmodusInvisible_C_post_uncloak_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.show floating hud
struct ABuff_DesmodusInvisible_C_show_floating_hud_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.ReceiveEndPlay
struct ABuff_DesmodusInvisible_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.get saddle
struct ABuff_DesmodusInvisible_C_get_saddle_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.set fade on components
struct ABuff_DesmodusInvisible_C_set_fade_on_components_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Cloak_Transition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              dissolve_amount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               is_main_mesh;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Skip_LFL_Transition;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.set component hidden
struct ABuff_DesmodusInvisible_C_set_component_hidden_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.manual print string
struct ABuff_DesmodusInvisible_C_manual_print_string_Params
{
	class FString                                      InString;                                                 // (Parm, ZeroConstructor)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.HideBuffFromHUD
struct ABuff_DesmodusInvisible_C_HideBuffFromHUD_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Lfl Is Valid And Cloaked solo
struct ABuff_DesmodusInvisible_C_Lfl_Is_Valid_And_Cloaked_solo_Params
{
	class APrimalDinoCharacter*                        InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.lfl is valid and cloaked
struct ABuff_DesmodusInvisible_C_lfl_is_valid_and_cloaked_Params
{
	class APrimalDinoCharacter*                        InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	bool                                               deactivated_from_mate_boost;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.add buff to character
struct ABuff_DesmodusInvisible_C_add_buff_to_character_Params
{
	class APrimalCharacter*                            NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Remove Cloak Origin Dino
struct ABuff_DesmodusInvisible_C_Remove_Cloak_Origin_Dino_Params
{
	class APrimalDinoCharacter*                        NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.PreventActorTargeting
struct ABuff_DesmodusInvisible_C_PreventActorTargeting_Params
{
	class AActor**                                     ByActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.deactivate cloak mat
struct ABuff_DesmodusInvisible_C_deactivate_cloak_mat_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.activate cloak mat
struct ABuff_DesmodusInvisible_C_activate_cloak_mat_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BuffTickClient
struct ABuff_DesmodusInvisible_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.OnRep_is camo active
struct ABuff_DesmodusInvisible_C_OnRep_is_camo_active_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.add cloak origin dino
struct ABuff_DesmodusInvisible_C_add_cloak_origin_dino_Params
{
	class APrimalDinoCharacter*                        NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BuffTickServer
struct ABuff_DesmodusInvisible_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BPPreventInstigatorAttack
struct ABuff_DesmodusInvisible_C_BPPreventInstigatorAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.NotifyDamage
struct ABuff_DesmodusInvisible_C_NotifyDamage_Params
{
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     TheDamageCauser;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BPDeactivated
struct ABuff_DesmodusInvisible_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Set All Riders Hidden
struct ABuff_DesmodusInvisible_C_Set_All_Riders_Hidden_Params
{
	bool                                               Hidden;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Activate Rider Camo Particles
struct ABuff_DesmodusInvisible_C_Activate_Rider_Camo_Particles_Params
{
	bool                                               enter_camo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           specificRider;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.UserConstructionScript
struct ABuff_DesmodusInvisible_C_UserConstructionScript_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.fade camo__FinishedFunc
struct ABuff_DesmodusInvisible_C_fade_camo__FinishedFunc_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.fade camo__UpdateFunc
struct ABuff_DesmodusInvisible_C_fade_camo__UpdateFunc_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.FadeToInvisible_Rider__FinishedFunc
struct ABuff_DesmodusInvisible_C_FadeToInvisible_Rider__FinishedFunc_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.FadeToInvisible_Rider__UpdateFunc
struct ABuff_DesmodusInvisible_C_FadeToInvisible_Rider__UpdateFunc_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Timeline_0__FinishedFunc
struct ABuff_DesmodusInvisible_C_Timeline_0__FinishedFunc_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Timeline_0__UpdateFunc
struct ABuff_DesmodusInvisible_C_Timeline_0__UpdateFunc_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Play_FadeCamo_LFL
struct ABuff_DesmodusInvisible_C_Play_FadeCamo_LFL_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Reverse_FadeCamo_LFL
struct ABuff_DesmodusInvisible_C_Reverse_FadeCamo_LFL_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.SetNewTime_FadeCamo_LFL
struct ABuff_DesmodusInvisible_C_SetNewTime_FadeCamo_LFL_Params
{
	float                                              NewTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Multi_SetNewTime_FadeCamo_LFL
struct ABuff_DesmodusInvisible_C_Multi_SetNewTime_FadeCamo_LFL_Params
{
	float                                              NewTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.SetNewTime_FadeCamo_Rider
struct ABuff_DesmodusInvisible_C_SetNewTime_FadeCamo_Rider_Params
{
	float                                              NewTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.ReverseFromEnd_FadeCamo_Rider
struct ABuff_DesmodusInvisible_C_ReverseFromEnd_FadeCamo_Rider_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.PlayFromStart_FadeCamo_Rider
struct ABuff_DesmodusInvisible_C_PlayFromStart_FadeCamo_Rider_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Multi_PlayFade
struct ABuff_DesmodusInvisible_C_Multi_PlayFade_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Multi_PlayFade_reverse
struct ABuff_DesmodusInvisible_C_Multi_PlayFade_reverse_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.on weapon fire
struct ABuff_DesmodusInvisible_C_on_weapon_fire_Params
{
	class AShooterWeapon*                              weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.bind fire
struct ABuff_DesmodusInvisible_C_bind_fire_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Footstep Shimmer
struct ABuff_DesmodusInvisible_C_Footstep_Shimmer_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.ReceiveBeginPlay
struct ABuff_DesmodusInvisible_C_ReceiveBeginPlay_Params
{
};

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.ExecuteUbergraph_Buff_DesmodusInvisible
struct ABuff_DesmodusInvisible_C_ExecuteUbergraph_Buff_DesmodusInvisible_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
