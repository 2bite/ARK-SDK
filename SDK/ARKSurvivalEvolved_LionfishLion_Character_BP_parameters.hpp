#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LionfishLion_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.GetHudData
struct ALionfishLion_Character_BP_C_GetHudData_Params
{
	float                                              AttackComboPercent;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxComboFlashingSpeed;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             LastUncloakTime;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CloakCooldown;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFemale;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCamoActive;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             LastRoarBuffTime;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RoarBuffCooldown;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HasMateBoost;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             LastTimeReleasedTeleport;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TeleportCooldown;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TeleportPercent;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCurrentlyChargingTeleport;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            LatestQuickteleportTarget;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LeapCooldown;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             LastLeapTime;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LeapPercent;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPPlayDying
struct ALionfishLion_Character_BP_C_BPPlayDying_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Lerping While Jumping
struct ALionfishLion_Character_BP_C_Is_Lerping_While_Jumping_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Delay Reset Gravity
struct ALionfishLion_Character_BP_C_Delay_Reset_Gravity_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.LFL Cloak Transition
struct ALionfishLion_Character_BP_C_LFL_Cloak_Transition_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceivePossessed
struct ALionfishLion_Character_BP_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Lerp Camera During Jump
struct ALionfishLion_Character_BP_C_Lerp_Camera_During_Jump_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPCanTakePassenger
struct ALionfishLion_Character_BP_C_BPCanTakePassenger_Params
{
	class APrimalCharacter**                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PassengerSeatIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForcePassenger;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAllowFlyersAndWaterDinos;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.is asleep
struct ALionfishLion_Character_BP_C_is_asleep_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPCanCryo
struct ALionfishLion_Character_BP_C_BPCanCryo_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.IsPackLeader
struct ALionfishLion_Character_BP_C_IsPackLeader_Params
{
	bool                                               bIsLeader;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Display No Mate Boost Notification
struct ALionfishLion_Character_BP_C_Display_No_Mate_Boost_Notification_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prevented Interval to Check for Boss Dinos for Cloaking
struct ALionfishLion_Character_BP_C_Prevented_Interval_to_Check_for_Boss_Dinos_for_Cloaking_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Near Boss
struct ALionfishLion_Character_BP_C_Is_Near_Boss_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveActorEndOverlap
struct ALionfishLion_Character_BP_C_ReceiveActorEndOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveActorBeginOverlap
struct ALionfishLion_Character_BP_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Decrease Camo Stamina
struct ALionfishLion_Character_BP_C_Decrease_Camo_Stamina_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.can cloak
struct ALionfishLion_Character_BP_C_can_cloak_Params
{
	class AActor*                                      InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	class APrimalCharacter*                            AsPrimalCharacter;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Remove self as origin dino for cloaks
struct ALionfishLion_Character_BP_C_Remove_self_as_origin_dino_for_cloaks_Params
{
	class APrimalCharacter*                            who_gets_buff;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.add cloak buff with self as origin
struct ALionfishLion_Character_BP_C_add_cloak_buff_with_self_as_origin_Params
{
	class APrimalCharacter*                            who_gets_buff;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               for_solo_rider;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_is solo camo active
struct ALionfishLion_Character_BP_C_OnRep_is_solo_camo_active_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Show Quick Teleport Indicator
struct ALionfishLion_Character_BP_C_Show_Quick_Teleport_Indicator_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Delay Check for Holding Down Crouch
struct ALionfishLion_Character_BP_C_Delay_Check_for_Holding_Down_Crouch_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Short Time After Initialization To Determine Targeting Team
struct ALionfishLion_Character_BP_C_Short_Time_After_Initialization_To_Determine_Targeting_Team_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Long Prevent Tamed Sleeping Timer
struct ALionfishLion_Character_BP_C_Long_Prevent_Tamed_Sleeping_Timer_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Has Fish Trap Ready
struct ALionfishLion_Character_BP_C_Has_Fish_Trap_Ready_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.spawn wild inventory
struct ALionfishLion_Character_BP_C_spawn_wild_inventory_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.spawn tamed inventory
struct ALionfishLion_Character_BP_C_spawn_tamed_inventory_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeout Check To Determine If Rider Is Still Valid For Charging Big Spacebar Leap
struct ALionfishLion_Character_BP_C_Timeout_Check_To_Determine_If_Rider_Is_Still_Valid_For_Charging_Big_Spacebar_Leap_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeout Check For Still Holding Spacebar
struct ALionfishLion_Character_BP_C_Timeout_Check_For_Still_Holding_Spacebar_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Delay And Wake Up
struct ALionfishLion_Character_BP_C_Delay_And_Wake_Up_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.delay and fall asleep
struct ALionfishLion_Character_BP_C_delay_and_fall_asleep_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Teleport Attack
struct ALionfishLion_Character_BP_C_Can_Teleport_Attack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.spawn flame location on the ground
struct ALionfishLion_Character_BP_C_spawn_flame_location_on_the_ground_Params
{
	struct FVector                                     Start_Point;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End_Point;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnRefreshColorization
struct ALionfishLion_Character_BP_C_BPOnRefreshColorization_Params
{
	TArray<struct FLinearColor>                        Colors;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset animbp anims to normal
struct ALionfishLion_Character_BP_C_Reset_animbp_anims_to_normal_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.restrict wild teleport attacking
struct ALionfishLion_Character_BP_C_restrict_wild_teleport_attacking_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.shortly after fleeing from taming
struct ALionfishLion_Character_BP_C_shortly_after_fleeing_from_taming_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.show particle over optimal teleport target
struct ALionfishLion_Character_BP_C_show_particle_over_optimal_teleport_target_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.toggle max combo vfx on limbs
struct ALionfishLion_Character_BP_C_toggle_max_combo_vfx_on_limbs_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Restrict Max Combo Kill Fx
struct ALionfishLion_Character_BP_C_Restrict_Max_Combo_Kill_Fx_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.restrict bite fx
struct ALionfishLion_Character_BP_C_restrict_bite_fx_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prep For Mouth Slash
struct ALionfishLion_Character_BP_C_Prep_For_Mouth_Slash_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prep For Left Paw Slash
struct ALionfishLion_Character_BP_C_Prep_For_Left_Paw_Slash_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.prep for right paw slash
struct ALionfishLion_Character_BP_C_prep_for_right_paw_slash_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Landing From Big Spacebar Leap
struct ALionfishLion_Character_BP_C_Is_Landing_From_Big_Spacebar_Leap_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPPreventFallDamage
struct ALionfishLion_Character_BP_C_BPPreventFallDamage_Params
{
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm, ReferenceParm)
	float*                                             FallDamageAmount;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPShouldForceFlee
struct ALionfishLion_Character_BP_C_BPShouldForceFlee_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.flee after feeding
struct ALionfishLion_Character_BP_C_flee_after_feeding_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.feed
struct ALionfishLion_Character_BP_C_feed_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Fish_Weight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               cheat_debug_bypass;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.bite slash vfx
struct ALionfishLion_Character_BP_C_bite_slash_vfx_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.right paw slash vfx
struct ALionfishLion_Character_BP_C_right_paw_slash_vfx_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.left paw slash vfx
struct ALionfishLion_Character_BP_C_left_paw_slash_vfx_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.is able to be tamed
struct ALionfishLion_Character_BP_C_is_able_to_be_tamed_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               can_tame;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      Text;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOverrideHurtAnim
struct ALionfishLion_Character_BP_C_BPOverrideHurtAnim_Params
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

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Print String Manual
struct ALionfishLion_Character_BP_C_Print_String_Manual_Params
{
	class FString                                      In_String;                                                // (Parm, ZeroConstructor)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Stop Release Big Spacebar Leap Anims
struct ALionfishLion_Character_BP_C_Stop_Release_Big_Spacebar_Leap_Anims_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.stop anim montage if playing
struct ALionfishLion_Character_BP_C_stop_anim_montage_if_playing_Params
{
	class UAnimMontage*                                InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendOut;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get aerial rotation while pouncing
struct ALionfishLion_Character_BP_C_get_aerial_rotation_while_pouncing_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	struct FRotator                                    mesh_rot;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.set up dynamic mats
struct ALionfishLion_Character_BP_C_set_up_dynamic_mats_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Has Found Multiple Targets
struct ALionfishLion_Character_BP_C_Has_Found_Multiple_Targets_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timer Check Teleport Targets
struct ALionfishLion_Character_BP_C_Timer_Check_Teleport_Targets_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.save control rot
struct ALionfishLion_Character_BP_C_save_control_rot_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.retrieve control rot
struct ALionfishLion_Character_BP_C_retrieve_control_rot_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Shortly After Tele
struct ALionfishLion_Character_BP_C_Shortly_After_Tele_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Restrict Was Seen Requests
struct ALionfishLion_Character_BP_C_Restrict_Was_Seen_Requests_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.someone has line of sight to lion
struct ALionfishLion_Character_BP_C_someone_has_line_of_sight_to_lion_Params
{
	class AShooterPlayerController*                    Player_Controller;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check if Viewed by Players
struct ALionfishLion_Character_BP_C_Check_if_Viewed_by_Players_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Do Attack Cloak
struct ALionfishLion_Character_BP_C_Do_Attack_Cloak_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request Charge Big Spacebar Leap
struct ALionfishLion_Character_BP_C_Server_Request_Charge_Big_Spacebar_Leap_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request End Charge Big Spacebar Leap
struct ALionfishLion_Character_BP_C_Server_Request_End_Charge_Big_Spacebar_Leap_Params
{
	struct FVector                                     held_direction_inputs;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                A2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InputPin2;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request Jump
struct ALionfishLion_Character_BP_C_Server_Request_Jump_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request Anim Start Jump
struct ALionfishLion_Character_BP_C_Server_Request_Anim_Start_Jump_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Requiest Crit Bite
struct ALionfishLion_Character_BP_C_Server_Requiest_Crit_Bite_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request Hold Teleport
struct ALionfishLion_Character_BP_C_Server_Request_Hold_Teleport_Params
{
	struct FVector                                     view_direction;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               quick_tap_teleport;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintGetAttackWeight
struct ALionfishLion_Character_BP_C_BlueprintGetAttackWeight_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             inputWeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Add solo cloak buffs
struct ALionfishLion_Character_BP_C_Add_solo_cloak_buffs_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.consolidated can attack
struct ALionfishLion_Character_BP_C_consolidated_can_attack_Params
{
	int                                                InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.
struct ALionfishLion_Character_BP_C__Params
{
	float                                              _1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              _2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Appropriate Extra Distance to Land In Front the Target from Current Position
struct ALionfishLion_Character_BP_C_Get_Appropriate_Extra_Distance_to_Land_In_Front_the_Target_from_Current_Position_Params
{
	struct FVector                                     current_location;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Enemy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Teleport End Location Blocked
struct ALionfishLion_Character_BP_C_Is_Teleport_End_Location_Blocked_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Desired Teleport Final Location In Front Of the Enemy
struct ALionfishLion_Character_BP_C_Get_Desired_Teleport_Final_Location_In_Front_Of_the_Enemy_Params
{
	struct FVector                                     current_position;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Enemy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     final_location;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check If The LFL Can Physically Fit To The Teleport Target
struct ALionfishLion_Character_BP_C_Check_If_The_LFL_Can_Physically_Fit_To_The_Teleport_Target_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               double_checked_and_all_clear;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.disable tele targeting vfx
struct ALionfishLion_Character_BP_C_disable_tele_targeting_vfx_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_is sleeping state
struct ALionfishLion_Character_BP_C_OnRep_is_sleeping_state_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.spawn cloaked footstep
struct ALionfishLion_Character_BP_C_spawn_cloaked_footstep_Params
{
	class UParticleSystem*                             EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPDinoTooltipCustomTamingProgressBar
struct ALionfishLion_Character_BP_C_BPDinoTooltipCustomTamingProgressBar_Params
{
	bool                                               overrideTamingProgressBarIfActive;                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              progressPercent;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      Label;                                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnTamedProcessOrder
struct ALionfishLion_Character_BP_C_BPOnTamedProcessOrder_Params
{
	class APrimalCharacter**                           FromCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDinoTamedOrder>*                      OrderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     enemyTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              orderNotExecuted;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.cooldown after action before being able to sleep
struct ALionfishLion_Character_BP_C_cooldown_after_action_before_being_able_to_sleep_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_OnTamedOrderReceived
struct ALionfishLion_Character_BP_C_BP_OnTamedOrderReceived_Params
{
	class APrimalCharacter**                           FromCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDinoTamedOrder>*                      OrderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     enemyTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              orderNotExecuted;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prevent Tamed Sleeping Timer
struct ALionfishLion_Character_BP_C_Prevent_Tamed_Sleeping_Timer_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPGetMultiUseEntries
struct ALionfishLion_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multiuse logic
struct ALionfishLion_Character_BP_C_multiuse_logic_Params
{
	TArray<struct FMultiUseEntry>                      local_multiuse;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      return_multiuse;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPClientDoMultiUse
struct ALionfishLion_Character_BP_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Natural Armor Defense Amount Calculation
struct ALionfishLion_Character_BP_C_Natural_Armor_Defense_Amount_Calculation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set up Natural Armor value based on level
struct ALionfishLion_Character_BP_C_Set_up_Natural_Armor_value_based_on_level_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.attempt to set up natural armor
struct ALionfishLion_Character_BP_C_attempt_to_set_up_natural_armor_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.teleport stun duration calculation
struct ALionfishLion_Character_BP_C_teleport_stun_duration_calculation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Time Threshold for Determining Held Bite
struct ALionfishLion_Character_BP_C_Time_Threshold_for_Determining_Held_Bite_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Short Time After Ending Teleport
struct ALionfishLion_Character_BP_C_Short_Time_After_Ending_Teleport_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.tele attack object types
struct ALionfishLion_Character_BP_C_tele_attack_object_types_Params
{
	TArray<TEnumAsByte<EObjectTypeQuery>>              Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.straight line teleport charge move detection sphere
struct ALionfishLion_Character_BP_C_straight_line_teleport_charge_move_detection_sphere_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.detect targets in a straight line over time
struct ALionfishLion_Character_BP_C_detect_targets_in_a_straight_line_over_time_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Identify Best Aimed Target For Quickteleport - Clientside
struct ALionfishLion_Character_BP_C_Identify_Best_Aimed_Target_For_Quickteleport___Clientside_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.set dino and rider hidden
struct ALionfishLion_Character_BP_C_set_dino_and_rider_hidden_Params
{
	bool                                               Hidden;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dont_reverse_from_end;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Valid Teleport Target 
struct ALionfishLion_Character_BP_C_Is_Valid_Teleport_Target__Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               is_hud_elem_check;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     teleport_trace_sphere_location;                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               can_target;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.set final location and rotation after teleport
struct ALionfishLion_Character_BP_C_set_final_location_and_rotation_after_teleport_Params
{
	struct FVector                                     start_loc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End_Loc;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               turn_around;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.damage teleport target
struct ALionfishLion_Character_BP_C_damage_teleport_target_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.prepare LFL for teleporting to target
struct ALionfishLion_Character_BP_C_prepare_LFL_for_teleporting_to_target_Params
{
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.is line of sight to target blocked
struct ALionfishLion_Character_BP_C_is_line_of_sight_to_target_blocked_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Debug;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     from_specific_location;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               simple_check;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLocked;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get rotation to face opponent
struct ALionfishLion_Character_BP_C_get_rotation_to_face_opponent_Params
{
	struct FVector                                     current_location;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Enemy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Desired Teleport Final Location Behind The Enemy
struct ALionfishLion_Character_BP_C_Get_Desired_Teleport_Final_Location_Behind_The_Enemy_Params
{
	struct FVector                                     current_position;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Enemy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     final_location;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get appropriate extra distance to land behind the target from current position
struct ALionfishLion_Character_BP_C_get_appropriate_extra_distance_to_land_behind_the_target_from_current_position_Params
{
	struct FVector                                     current_location;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Enemy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.request release charge teleport
struct ALionfishLion_Character_BP_C_request_release_charge_teleport_Params
{
	bool                                               is_quick_tap_teleport;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Sort Selected Teleport Targets By Distance From Center
struct ALionfishLion_Character_BP_C_Sort_Selected_Teleport_Targets_By_Distance_From_Center_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Select Next Teleport Target While Charging
struct ALionfishLion_Character_BP_C_Select_Next_Teleport_Target_While_Charging_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get teleport trace sphere location
struct ALionfishLion_Character_BP_C_get_teleport_trace_sphere_location_Params
{
	struct FVector                                     view_direction;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Charging Teleport
struct ALionfishLion_Character_BP_C_Is_Charging_Teleport_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Teleport Stop
struct ALionfishLion_Character_BP_C_Teleport_Stop_Params
{
	class UObject*                                     hit_target;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Start Teleport
struct ALionfishLion_Character_BP_C_Start_Teleport_Params
{
	float                                              Teleport_Strength_Percentage;                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               is_quick_tap_teleport;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Teleport Character Octree Overlap Radius
struct ALionfishLion_Character_BP_C_Get_Teleport_Character_Octree_Overlap_Radius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Mid Teleport
struct ALionfishLion_Character_BP_C_Is_Mid_Teleport_Params
{
	bool                                               Is_Mid_Teleport;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Teleport Cooldown Active
struct ALionfishLion_Character_BP_C_Is_Teleport_Cooldown_Active_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Request Release Teleport
struct ALionfishLion_Character_BP_C_Request_Release_Teleport_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Time Threshold For Determining Charge Teleport
struct ALionfishLion_Character_BP_C_Time_Threshold_For_Determining_Charge_Teleport_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Time Threshold For Determining Jump Or Big Spacebar Leap
struct ALionfishLion_Character_BP_C_Time_Threshold_For_Determining_Jump_Or_Big_Spacebar_Leap_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnStopJump
struct ALionfishLion_Character_BP_C_BPOnStopJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.sync movement inputs
struct ALionfishLion_Character_BP_C_sync_movement_inputs_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.duration to hold on to current combo count
struct ALionfishLion_Character_BP_C_duration_to_hold_on_to_current_combo_count_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.remove character from max combo attacked characters array
struct ALionfishLion_Character_BP_C_remove_character_from_max_combo_attacked_characters_array_Params
{
	class AActor*                                      InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.clear recently max combo attacked characters array
struct ALionfishLion_Character_BP_C_clear_recently_max_combo_attacked_characters_array_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPKilledSomethingEvent
struct ALionfishLion_Character_BP_C_BPKilledSomethingEvent_Params
{
	class APrimalCharacter**                           killedTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.PerformanceThrottledTick
struct ALionfishLion_Character_BP_C_PerformanceThrottledTick_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Blend Fov Back To Normal After Big Spacebar Leap
struct ALionfishLion_Character_BP_C_Blend_Fov_Back_To_Normal_After_Big_Spacebar_Leap_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Close Enough To Hit Big Spacebar Leap Target
struct ALionfishLion_Character_BP_C_Is_Close_Enough_To_Hit_Big_Spacebar_Leap_Target_Params
{
	bool                                               can_hit_target;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Frozen From Hitstop
struct ALionfishLion_Character_BP_C_Is_Frozen_From_Hitstop_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.On Big Spacebar Leap Land
struct ALionfishLion_Character_BP_C_On_Big_Spacebar_Leap_Land_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Blending FOV Back To Normal After Big Spacebar Leap
struct ALionfishLion_Character_BP_C_Is_Blending_FOV_Back_To_Normal_After_Big_Spacebar_Leap_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_PreventMovementMode
struct ALionfishLion_Character_BP_C_BP_PreventMovementMode_Params
{
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.On Big Spacebar Leap Hit Target
struct ALionfishLion_Character_BP_C_On_Big_Spacebar_Leap_Hit_Target_Params
{
	class APrimalCharacter*                            InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Request Turnaround Stop on Other Side Of Big Spacebar Leap Target
struct ALionfishLion_Character_BP_C_Request_Turnaround_Stop_on_Other_Side_Of_Big_Spacebar_Leap_Target_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check for Ground and Halt Anim
struct ALionfishLion_Character_BP_C_Check_for_Ground_and_Halt_Anim_Params
{
	bool                                               retry;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Extra Big Spacebar Leap Ground Checks
struct ALionfishLion_Character_BP_C_Extra_Big_Spacebar_Leap_Ground_Checks_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prevent Repeated Big Spacebar Leap Anim
struct ALionfishLion_Character_BP_C_Prevent_Repeated_Big_Spacebar_Leap_Anim_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Mid Big Spacebar Leap
struct ALionfishLion_Character_BP_C_Is_Mid_Big_Spacebar_Leap_Params
{
	bool                                               Is_Mid_Big_Spacebar_Leap;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp time to move to other side of the target
struct ALionfishLion_Character_BP_C_lerp_time_to_move_to_other_side_of_the_target_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Post Finisher Buildup FOV Return To Normal
struct ALionfishLion_Character_BP_C_Post_Finisher_Buildup_FOV_Return_To_Normal_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Playing FOVIncrease On Finisher Buildup
struct ALionfishLion_Character_BP_C_Is_Playing_FOVIncrease_On_Finisher_Buildup_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Allow Short Time Before Swapping Between Big Spacebar Leap Anticipation Poses
struct ALionfishLion_Character_BP_C_Allow_Short_Time_Before_Swapping_Between_Big_Spacebar_Leap_Anticipation_Poses_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveTick
struct ALionfishLion_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.tick events
struct ALionfishLion_Character_BP_C_tick_events_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Force Initial Big Spacebar Leap
struct ALionfishLion_Character_BP_C_Force_Initial_Big_Spacebar_Leap_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.play sleep during day anim
struct ALionfishLion_Character_BP_C_play_sleep_during_day_anim_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Should Restrict Movement
struct ALionfishLion_Character_BP_C_Should_Restrict_Movement_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOverrideCameraViewTarget
struct ALionfishLion_Character_BP_C_BPOverrideCameraViewTarget_Params
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

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct ALionfishLion_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnStartJump
struct ALionfishLion_Character_BP_C_BPOnStartJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Right Swipe Attack Anim Priorities
struct ALionfishLion_Character_BP_C_Update_Right_Swipe_Attack_Anim_Priorities_Params
{
	int                                                Attack_Index;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Bite Attack Anim Priorities
struct ALionfishLion_Character_BP_C_Update_Bite_Attack_Anim_Priorities_Params
{
	int                                                Attack_Index;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Valid Big Spacebar Leap Target
struct ALionfishLion_Character_BP_C_Is_Valid_Big_Spacebar_Leap_Target_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               is_hud_elem_check;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               can_target;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.RidingTick
struct ALionfishLion_Character_BP_C_RidingTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPModifyDesiredRotation
struct ALionfishLion_Character_BP_C_BPModifyDesiredRotation_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InDesiredRotation;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    OutDesiredRotation;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Big Spacebar Leap Character Octree Overlap Radius
struct ALionfishLion_Character_BP_C_Get_Big_Spacebar_Leap_Character_Octree_Overlap_Radius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPGetCrosshairLocation
struct ALionfishLion_Character_BP_C_BPGetCrosshairLocation_Params
{
	float*                                             CanvasClipX;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CanvasClipY;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutX;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutY;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPGetCrosshairColor
struct ALionfishLion_Character_BP_C_BPGetCrosshairColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Entering Or Exiting Roar Movement Restriction
struct ALionfishLion_Character_BP_C_Entering_Or_Exiting_Roar_Movement_Restriction_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Entering or Exiting Camo Movement Restriction
struct ALionfishLion_Character_BP_C_Entering_or_Exiting_Camo_Movement_Restriction_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prevent Big Spacebar Leap Anim at First
struct ALionfishLion_Character_BP_C_Prevent_Big_Spacebar_Leap_Anim_at_First_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Low Gravity Timeout
struct ALionfishLion_Character_BP_C_Low_Gravity_Timeout_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Post Big Spacebar Leap Landing Reduced Friction
struct ALionfishLion_Character_BP_C_Post_Big_Spacebar_Leap_Landing_Reduced_Friction_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Low Big Spacebar Leap Friction
struct ALionfishLion_Character_BP_C_Low_Big_Spacebar_Leap_Friction_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnMovementModeChangedNotify
struct ALionfishLion_Character_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPTimerNonDedicated
struct ALionfishLion_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Interpolate Mesh
struct ALionfishLion_Character_BP_C_Interpolate_Mesh_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.hard set rotation but interp mesh location
struct ALionfishLion_Character_BP_C_hard_set_rotation_but_interp_mesh_location_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set Rotation and Interp Mesh
struct ALionfishLion_Character_BP_C_Set_Rotation_and_Interp_Mesh_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.update transforms
struct ALionfishLion_Character_BP_C_update_transforms_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.update anims
struct ALionfishLion_Character_BP_C_update_anims_Params
{
	bool                                               ensureAnimsPlaying;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Close To Ground
struct ALionfishLion_Character_BP_C_Is_Close_To_Ground_Params
{
	float                                              CheckDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set Use Aim Offsets
struct ALionfishLion_Character_BP_C_Set_Use_Aim_Offsets_Params
{
	bool                                               new_state;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Jumping Anim
struct ALionfishLion_Character_BP_C_Update_Jumping_Anim_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Manual Play Land Anim
struct ALionfishLion_Character_BP_C_Manual_Play_Land_Anim_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Big Spacebar Leap Start
struct ALionfishLion_Character_BP_C_Big_Spacebar_Leap_Start_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_CurrentClimbingState
struct ALionfishLion_Character_BP_C_OnRep_CurrentClimbingState_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Net Set State
struct ALionfishLion_Character_BP_C_Net_Set_State_Params
{
	TEnumAsByte<E_PredatorClimbingState>               new_state;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Keep Pouncing during Big Spacebar Leap
struct ALionfishLion_Character_BP_C_Can_Keep_Pouncing_during_Big_Spacebar_Leap_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Big Spacebar Leap Tick
struct ALionfishLion_Character_BP_C_Big_Spacebar_Leap_Tick_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Default Dino
struct ALionfishLion_Character_BP_C_Get_Default_Dino_Params
{
	class ALionfishLion_Character_BP_C*                ref;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.remove carry buff from prey
struct ALionfishLion_Character_BP_C_remove_carry_buff_from_prey_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.can carry creature
struct ALionfishLion_Character_BP_C_can_carry_creature_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Big Spacebar Leap Stop
struct ALionfishLion_Character_BP_C_Big_Spacebar_Leap_Stop_Params
{
	class UObject*                                     hit_target;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.initilialize sleep
struct ALionfishLion_Character_BP_C_initilialize_sleep_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reenable Collision
struct ALionfishLion_Character_BP_C_Reenable_Collision_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPAdjustDamage
struct ALionfishLion_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Calculate Big Spacebar Leap Direction
struct ALionfishLion_Character_BP_C_Calculate_Big_Spacebar_Leap_Direction_Params
{
	class AActor*                                      Targetted_Character;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Big_Spacebar_Leap_velocity;                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Big_Spacebar_Leap_dir;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.True Wake Up Other Pack Dinos
struct ALionfishLion_Character_BP_C_True_Wake_Up_Other_Pack_Dinos_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.wake up other pack dinos
struct ALionfishLion_Character_BP_C_wake_up_other_pack_dinos_Params
{
	bool                                               reset_their_affinity;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Delay True Wake Up
struct ALionfishLion_Character_BP_C_Delay_True_Wake_Up_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Rotate During Big Spacebar Leap
struct ALionfishLion_Character_BP_C_Rotate_During_Big_Spacebar_Leap_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Appearance
struct ALionfishLion_Character_BP_C_Update_Appearance_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_bIsDaytime
struct ALionfishLion_Character_BP_C_OnRep_bIsDaytime_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Is Fully Awake
struct ALionfishLion_Character_BP_C_Get_Is_Fully_Awake_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Dino Needs to Sleep
struct ALionfishLion_Character_BP_C_Dino_Needs_to_Sleep_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Has Valid Target
struct ALionfishLion_Character_BP_C_Has_Valid_Target_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Sleep Debt to Deprived Ratio
struct ALionfishLion_Character_BP_C_Get_Sleep_Debt_to_Deprived_Ratio_Params
{
	float                                              Ratio;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Dino Grounded
struct ALionfishLion_Character_BP_C_Is_Dino_Grounded_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Dino in Shallow Water
struct ALionfishLion_Character_BP_C_Is_Dino_in_Shallow_Water_Params
{
	bool                                               shallowWaters;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Wake
struct ALionfishLion_Character_BP_C_Can_Wake_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Sleep
struct ALionfishLion_Character_BP_C_Can_Sleep_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.On Fall Asleep
struct ALionfishLion_Character_BP_C_On_Fall_Asleep_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.On Wake Up
struct ALionfishLion_Character_BP_C_On_Wake_Up_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set Torpidity
struct ALionfishLion_Character_BP_C_Set_Torpidity_Params
{
	float                                              newTorpidity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Sleep Related Actions
struct ALionfishLion_Character_BP_C_Update_Sleep_Related_Actions_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Play Natural Sleeping Anims
struct ALionfishLion_Character_BP_C_Play_Natural_Sleeping_Anims_Params
{
	bool                                               isFallingAsleep;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isAlerted;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Net Set Natural Sleep State
struct ALionfishLion_Character_BP_C_Net_Set_Natural_Sleep_State_Params
{
	bool                                               isAsleep;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintDrawFloatingHUD
struct ALionfishLion_Character_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPBecomeAdult
struct ALionfishLion_Character_BP_C_BPBecomeAdult_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPBecomeBaby
struct ALionfishLion_Character_BP_C_BPBecomeBaby_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPPreventRiding
struct ALionfishLion_Character_BP_C_BPPreventRiding_Params
{
	class AShooterCharacter**                          ByPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDontCheckDistance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Possible to Sleep
struct ALionfishLion_Character_BP_C_Is_Possible_to_Sleep_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPTryMultiUse
struct ALionfishLion_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Allow Nocturnal Logic
struct ALionfishLion_Character_BP_C_Allow_Nocturnal_Logic_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Sleep Debt
struct ALionfishLion_Character_BP_C_Update_Sleep_Debt_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Has Sleep Debt
struct ALionfishLion_Character_BP_C_Has_Sleep_Debt_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is time of day when lion wants to sleep
struct ALionfishLion_Character_BP_C_Is_time_of_day_when_lion_wants_to_sleep_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Target Attacking Ally
struct ALionfishLion_Character_BP_C_Is_Target_Attacking_Ally_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Tamed Following
struct ALionfishLion_Character_BP_C_Is_Tamed_Following_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check for Wake
struct ALionfishLion_Character_BP_C_Check_for_Wake_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check for Sleep
struct ALionfishLion_Character_BP_C_Check_for_Sleep_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPTimerServer
struct ALionfishLion_Character_BP_C_BPTimerServer_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check Time Of Day
struct ALionfishLion_Character_BP_C_Check_Time_Of_Day_Params
{
	bool                                               ForceUpdate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Init Nocturnal Dino
struct ALionfishLion_Character_BP_C_Init_Nocturnal_Dino_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Setup Refs
struct ALionfishLion_Character_BP_C_Setup_Refs_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyStructurePlacedNearby
struct ALionfishLion_Character_BP_C_BPNotifyStructurePlacedNearby_Params
{
	class APrimalStructure**                           NewStructure;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Wake Up
struct ALionfishLion_Character_BP_C_Wake_Up_Params
{
	bool                                               forceSuccess;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Fall Asleep
struct ALionfishLion_Character_BP_C_Fall_Asleep_Params
{
	bool                                               forceSuccess;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ignoreIsPossible;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Triggered_By_Multiuse;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPCharacterSleeped
struct ALionfishLion_Character_BP_C_BPCharacterSleeped_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPCharacterUnsleeped
struct ALionfishLion_Character_BP_C_BPCharacterUnsleeped_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Sleep Deprived
struct ALionfishLion_Character_BP_C_Is_Sleep_Deprived_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Display Message
struct ALionfishLion_Character_BP_C_Display_Message_Params
{
	class FString                                      Message;                                                  // (Parm, ZeroConstructor)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_is camo active
struct ALionfishLion_Character_BP_C_OnRep_is_camo_active_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.net set use camo
struct ALionfishLion_Character_BP_C_net_set_use_camo_Params
{
	bool                                               new_state;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               solo;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Use Camo
struct ALionfishLion_Character_BP_C_Can_Use_Camo_Params
{
	bool                                               is_for_start;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.does it have enough stamina
struct ALionfishLion_Character_BP_C_does_it_have_enough_stamina_Params
{
	float                                              stamina_requirement;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.K2_OnMovementModeChanged
struct ALionfishLion_Character_BP_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_OnTargetedByTamedOrder
struct ALionfishLion_Character_BP_C_BP_OnTargetedByTamedOrder_Params
{
	class APrimalCharacter**                           OrderingCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalDinoCharacter**                       AttackingDino;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForced;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Add Rider to Camo Fade Queue
struct ALionfishLion_Character_BP_C_Add_Rider_to_Camo_Fade_Queue_Params
{
	class AShooterCharacter*                           Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               enterCamo;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstant;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyClearPassenger
struct ALionfishLion_Character_BP_C_BPNotifyClearPassenger_Params
{
	class APrimalCharacter**                           PassengerChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyIfPassengerLaunchShoulderMount
struct ALionfishLion_Character_BP_C_BPNotifyIfPassengerLaunchShoulderMount_Params
{
	class APrimalCharacter**                           launchedCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Activate Rider Camo Particles
struct ALionfishLion_Character_BP_C_Activate_Rider_Camo_Particles_Params
{
	bool                                               enterCamo;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           specificRider;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Clean Allow Target when Using Camo Array
struct ALionfishLion_Character_BP_C_Clean_Allow_Target_when_Using_Camo_Array_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set All Riders Hidden
struct ALionfishLion_Character_BP_C_Set_All_Riders_Hidden_Params
{
	bool                                               Hidden;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set Camo Active
struct ALionfishLion_Character_BP_C_Set_Camo_Active_Params
{
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Request Release Big Spacebar Leap Charge
struct ALionfishLion_Character_BP_C_Request_Release_Big_Spacebar_Leap_Charge_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPServerHandleNetExecCommand
struct ALionfishLion_Character_BP_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get held direction relative to camera forward
struct ALionfishLion_Character_BP_C_get_held_direction_relative_to_camera_forward_Params
{
	bool                                               in_water;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset Moveforward
struct ALionfishLion_Character_BP_C_Reset_Moveforward_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_InterceptMoveForward
struct ALionfishLion_Character_BP_C_BP_InterceptMoveForward_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset Moveright
struct ALionfishLion_Character_BP_C_Reset_Moveright_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_InterceptMoveRight
struct ALionfishLion_Character_BP_C_BP_InterceptMoveRight_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Big Spacebar Leap Cooldown Active
struct ALionfishLion_Character_BP_C_Is_Big_Spacebar_Leap_Cooldown_Active_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is in Initial Big Spacebar Leap
struct ALionfishLion_Character_BP_C_Is_in_Initial_Big_Spacebar_Leap_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Start Big Spacebar Leap
struct ALionfishLion_Character_BP_C_Start_Big_Spacebar_Leap_Params
{
	float                                              Big_Spacebar_Leap_Strength_Percentage;                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.CanJumpInternal
struct ALionfishLion_Character_BP_C_CanJumpInternal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_GetCustomModifier_MaxSpeed
struct ALionfishLion_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintCanAttack
struct ALionfishLion_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Charging Big Spacebar Leap
struct ALionfishLion_Character_BP_C_Is_Charging_Big_Spacebar_Leap_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Apply Pack Buff
struct ALionfishLion_Character_BP_C_Apply_Pack_Buff_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintCanRiderAttack
struct ALionfishLion_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.InterceptInputEvent
struct ALionfishLion_Character_BP_C_InterceptInputEvent_Params
{
	class FString*                                     InputName;                                                // (Parm, ZeroConstructor)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset Current Combo Melee Index
struct ALionfishLion_Character_BP_C_Reset_Current_Combo_Melee_Index_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset Combo Count
struct ALionfishLion_Character_BP_C_Reset_Combo_Count_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintAdjustOutputDamage
struct ALionfishLion_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPAdjustAttackIndex
struct ALionfishLion_Character_BP_C_BPAdjustAttackIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPDoAttack
struct ALionfishLion_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveAnyDamage
struct ALionfishLion_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyLevelUp
struct ALionfishLion_Character_BP_C_BPNotifyLevelUp_Params
{
	int*                                               ExtraCharacterLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPUnstasis
struct ALionfishLion_Character_BP_C_BPUnstasis_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifySetRider
struct ALionfishLion_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent
struct ALionfishLion_Character_BP_C_BPGetHUDOverrideBuffProgressBarPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnDinoCheat
struct ALionfishLion_Character_BP_C_BPOnDinoCheat_Params
{
	struct FName*                                      CheatName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSetValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyClearRider
struct ALionfishLion_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPHandleControllerInitiatedAttack
struct ALionfishLion_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPHandleOnStopTargeting
struct ALionfishLion_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.UserConstructionScript
struct ALionfishLion_Character_BP_C_UserConstructionScript_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.grow teleport target sphere__FinishedFunc
struct ALionfishLion_Character_BP_C_grow_teleport_target_sphere__FinishedFunc_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.grow teleport target sphere__UpdateFunc
struct ALionfishLion_Character_BP_C_grow_teleport_target_sphere__UpdateFunc_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.move between teleport targets__FinishedFunc
struct ALionfishLion_Character_BP_C_move_between_teleport_targets__FinishedFunc_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.move between teleport targets__UpdateFunc
struct ALionfishLion_Character_BP_C_move_between_teleport_targets__UpdateFunc_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.fade hide dino__FinishedFunc
struct ALionfishLion_Character_BP_C_fade_hide_dino__FinishedFunc_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.fade hide dino__UpdateFunc
struct ALionfishLion_Character_BP_C_fade_hide_dino__UpdateFunc_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp to normal__FinishedFunc
struct ALionfishLion_Character_BP_C_lerp_to_normal__FinishedFunc_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp to normal__UpdateFunc
struct ALionfishLion_Character_BP_C_lerp_to_normal__UpdateFunc_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_1__FinishedFunc
struct ALionfishLion_Character_BP_C_Timeline_1__FinishedFunc_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_1__UpdateFunc
struct ALionfishLion_Character_BP_C_Timeline_1__UpdateFunc_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.stealth anim timeline__FinishedFunc
struct ALionfishLion_Character_BP_C_stealth_anim_timeline__FinishedFunc_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.stealth anim timeline__UpdateFunc
struct ALionfishLion_Character_BP_C_stealth_anim_timeline__UpdateFunc_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_0__FinishedFunc
struct ALionfishLion_Character_BP_C_Timeline_0__FinishedFunc_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_0__UpdateFunc
struct ALionfishLion_Character_BP_C_Timeline_0__UpdateFunc_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client start charge Big Spacebar Leap
struct ALionfishLion_Character_BP_C_client_start_charge_Big_Spacebar_Leap_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client end charge Big Spacebar Leap
struct ALionfishLion_Character_BP_C_client_end_charge_Big_Spacebar_Leap_Params
{
	bool                                               is_max_combo_Big_Spacebar_Leap;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Event_CleanAllowTargetWhenUsingCamoArray
struct ALionfishLion_Character_BP_C_Event_CleanAllowTargetWhenUsingCamoArray_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Event_RestartCheckTargetArrayTimer
struct ALionfishLion_Character_BP_C_Event_RestartCheckTargetArrayTimer_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast started roar
struct ALionfishLion_Character_BP_C_multicast_started_roar_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveBeginPlay
struct ALionfishLion_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Re initialize nocturnal dino
struct ALionfishLion_Character_BP_C_Re_initialize_nocturnal_dino_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnIsDaytime
struct ALionfishLion_Character_BP_C_OnIsDaytime_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnIsNighttime
struct ALionfishLion_Character_BP_C_OnIsNighttime_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.EnableMovementAfterDelay
struct ALionfishLion_Character_BP_C_EnableMovementAfterDelay_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.DisableMovementAfterDelay
struct ALionfishLion_Character_BP_C_DisableMovementAfterDelay_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_144_ComponentHitSignature__DelegateSignature
struct ALionfishLion_Character_BP_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_144_ComponentHitSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.bind sleeping buff dispatcher
struct ALionfishLion_Character_BP_C_bind_sleeping_buff_dispatcher_Params
{
	class APrimalBuff*                                 Buff;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.awoken from other buff added
struct ALionfishLion_Character_BP_C_awoken_from_other_buff_added_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server_NetSetClimbingState
struct ALionfishLion_Character_BP_C_Server_NetSetClimbingState_Params
{
	TEnumAsByte<E_PredatorClimbingState>               NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.PreventLandingAnimBriefly
struct ALionfishLion_Character_BP_C_PreventLandingAnimBriefly_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_OnJumpPressed
struct ALionfishLion_Character_BP_C_BP_OnJumpPressed_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.SyncGravityForBig Spacebar LeapFall
struct ALionfishLion_Character_BP_C_SyncGravityForBig_Spacebar_LeapFall_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client started secondary roar
struct ALionfishLion_Character_BP_C_client_started_secondary_roar_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.delay update cloak animbp
struct ALionfishLion_Character_BP_C_delay_update_cloak_animbp_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast hit swipe on target
struct ALionfishLion_Character_BP_C_multicast_hit_swipe_on_target_Params
{
	float                                              combo_count;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast hit bite on target
struct ALionfishLion_Character_BP_C_multicast_hit_bite_on_target_Params
{
	float                                              combo_value;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     target_loc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast start jumping
struct ALionfishLion_Character_BP_C_multicast_start_jumping_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.temporarily set fall blend to zero
struct ALionfishLion_Character_BP_C_temporarily_set_fall_blend_to_zero_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.keep trying to init nocturnal anim
struct ALionfishLion_Character_BP_C_keep_trying_to_init_nocturnal_anim_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast tame
struct ALionfishLion_Character_BP_C_multicast_tame_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast play natural sleeping anims
struct ALionfishLion_Character_BP_C_multicast_play_natural_sleeping_anims_Params
{
	bool                                               is_falling_asleep;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               is_alerted;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.early end Big Spacebar Leap
struct ALionfishLion_Character_BP_C_early_end_Big_Spacebar_Leap_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp to location after Big Spacebar Leap
struct ALionfishLion_Character_BP_C_lerp_to_location_after_Big_Spacebar_Leap_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast Big Spacebar Leap end
struct ALionfishLion_Character_BP_C_multicast_Big_Spacebar_Leap_end_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast started Big Spacebar Leap 2
struct ALionfishLion_Character_BP_C_multicast_started_Big_Spacebar_Leap_2_Params
{
	float                                              Big_Spacebar_Leap_Strength_Percentage;                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast on max combo Big Spacebar Leap hit
struct ALionfishLion_Character_BP_C_multicast_on_max_combo_Big_Spacebar_Leap_hit_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Hitstop
struct ALionfishLion_Character_BP_C_Hitstop_Params
{
	float                                              Hitstop_Time;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.max combo Big Spacebar Leap hitstop
struct ALionfishLion_Character_BP_C_max_combo_Big_Spacebar_Leap_hitstop_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast on killed dino with max combo attack
struct ALionfishLion_Character_BP_C_multicast_on_killed_dino_with_max_combo_attack_Params
{
	struct FVector                                     target_location;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ServerSyncMovementValues
struct ALionfishLion_Character_BP_C_ServerSyncMovementValues_Params
{
	float                                              synced_right;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client start charge teleport
struct ALionfishLion_Character_BP_C_client_start_charge_teleport_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client end charge teleport
struct ALionfishLion_Character_BP_C_client_end_charge_teleport_Params
{
	bool                                               is_max_combo_Teleport;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               is_quick_tap_teleport;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast started teleport 2
struct ALionfishLion_Character_BP_C_multicast_started_teleport_2_Params
{
	bool                                               is_quick_tap_teleport;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Teleport_Target_Count;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.teleport to targets
struct ALionfishLion_Character_BP_C_teleport_to_targets_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.start teleport attack actual movement
struct ALionfishLion_Character_BP_C_start_teleport_attack_actual_movement_Params
{
	struct FVector                                     initial_location;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.soft cancel teleport on failing to get targets
struct ALionfishLion_Character_BP_C_soft_cancel_teleport_on_failing_to_get_targets_Params
{
	bool                                               cancel_anim;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.teleport attack to position
struct ALionfishLion_Character_BP_C_teleport_attack_to_position_Params
{
	struct FVector                                     start_loc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End_Loc;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               probably_final_teleport;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               turn_around;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.finished teleport attack
struct ALionfishLion_Character_BP_C_finished_teleport_attack_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.hide dino for teleport
struct ALionfishLion_Character_BP_C_hide_dino_for_teleport_Params
{
	bool                                               Hidden;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dont_reverse_from_end;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPDinoPostBeginPlay
struct ALionfishLion_Character_BP_C_BPDinoPostBeginPlay_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.restart dino clientside
struct ALionfishLion_Character_BP_C_restart_dino_clientside_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.soft cancel charge Big Spacebar Leap
struct ALionfishLion_Character_BP_C_soft_cancel_charge_Big_Spacebar_Leap_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_612
struct ALionfishLion_Character_BP_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_612_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Multi_UpdateBuffTime
struct ALionfishLion_Character_BP_C_Multi_UpdateBuffTime_Params
{
	bool                                               bIsActive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.trace loc
struct ALionfishLion_Character_BP_C_trace_loc_Params
{
	struct FVector                                     NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp loc to normal
struct ALionfishLion_Character_BP_C_lerp_loc_to_normal_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.stop mesh lerp to normal
struct ALionfishLion_Character_BP_C_stop_mesh_lerp_to_normal_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set New Time on Fade
struct ALionfishLion_Character_BP_C_Set_New_Time_on_Fade_Params
{
	float                                              New_Time;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Lerp While Jumping
struct ALionfishLion_Character_BP_C_Lerp_While_Jumping_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnActorCustomEvent_Event
struct ALionfishLion_Character_BP_C_OnActorCustomEvent_Event_Params
{
	struct FName                                       EventCustomName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      EventCustomString;                                        // (Parm, ZeroConstructor)
	class AActor*                                      InstigatorActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.activate max combo Big Spacebar Leap particle
struct ALionfishLion_Character_BP_C_activate_max_combo_Big_Spacebar_Leap_particle_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.activate water Big Spacebar Leap particles
struct ALionfishLion_Character_BP_C_activate_water_Big_Spacebar_Leap_particles_Params
{
};

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ExecuteUbergraph_LionfishLion_Character_BP
struct ALionfishLion_Character_BP_C_ExecuteUbergraph_LionfishLion_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
