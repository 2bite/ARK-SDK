#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Companion_HLNA_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.hard fix missing gen1 explorer notes
struct ABuff_Companion_HLNA_C_hard_fix_missing_gen1_explorer_notes_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Get total Glitch Mission Complete Count
struct ABuff_Companion_HLNA_C_Get_total_Glitch_Mission_Complete_Count_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Get Glitch Mission Complete Count
struct ABuff_Companion_HLNA_C_Get_Glitch_Mission_Complete_Count_Params
{
	struct FName                                       MissionTag;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Randomly Pick Orbit Location Timer
struct ABuff_Companion_HLNA_C_Randomly_Pick_Orbit_Location_Timer_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Should Force Play Post Intro Reactions
struct ABuff_Companion_HLNA_C_Should_Force_Play_Post_Intro_Reactions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsPlayerControllingValidPrimalChar
struct ABuff_Companion_HLNA_C_IsPlayerControllingValidPrimalChar_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.call finish on vr world
struct ABuff_Companion_HLNA_C_call_finish_on_vr_world_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.set player camera manager on death vfx manager
struct ABuff_Companion_HLNA_C_set_player_camera_manager_on_death_vfx_manager_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.setup intro anim masking
struct ABuff_Companion_HLNA_C_setup_intro_anim_masking_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.destroy intro teleport sphere
struct ABuff_Companion_HLNA_C_destroy_intro_teleport_sphere_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.spawn post mass teleport vfx
struct ABuff_Companion_HLNA_C_spawn_post_mass_teleport_vfx_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.spawn mass teleport vfx
struct ABuff_Companion_HLNA_C_spawn_mass_teleport_vfx_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Pass Mass Teleport Event to Vfx And Destroy ref
struct ABuff_Companion_HLNA_C_Pass_Mass_Teleport_Event_to_Vfx_And_Destroy_ref_Params
{
	TEnumAsByte<EMassTeleportState>                    State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.cancel mass teleport vfx
struct ABuff_Companion_HLNA_C_cancel_mass_teleport_vfx_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.pass players to teleport vfx
struct ABuff_Companion_HLNA_C_pass_players_to_teleport_vfx_Params
{
	TArray<class FString>                              teleporting_player_names;                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.UpdateSpawnedBeamParticle
struct ABuff_Companion_HLNA_C_UpdateSpawnedBeamParticle_Params
{
	class UParticleSystem*                             ParticleTemplate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EndPointActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Pre Teleport Dismount
struct ABuff_Companion_HLNA_C_Pre_Teleport_Dismount_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.unmount teleporting players
struct ABuff_Companion_HLNA_C_unmount_teleporting_players_Params
{
	TArray<class APrimalCharacter*>                    teleporting_players;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Players That They Cant Teleport Unconsious or Dead Dinos
struct ABuff_Companion_HLNA_C_Notify_Players_That_They_Cant_Teleport_Unconsious_or_Dead_Dinos_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Players That They Cant Teleport Unconsious Or Dead Players
struct ABuff_Companion_HLNA_C_Notify_Players_That_They_Cant_Teleport_Unconsious_Or_Dead_Players_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Prevent Glitch Use Sphere Collision
struct ABuff_Companion_HLNA_C_Prevent_Glitch_Use_Sphere_Collision_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Players That They Exceed Final Boss player Count
struct ABuff_Companion_HLNA_C_Notify_Players_That_They_Exceed_Final_Boss_player_Count_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.notify players that they exceed final boss tame count
struct ABuff_Companion_HLNA_C_notify_players_that_they_exceed_final_boss_tame_count_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.find associated anim texture from localized sound wave pairs
struct ABuff_Companion_HLNA_C_find_associated_anim_texture_from_localized_sound_wave_pairs_Params
{
	TArray<struct FLocalizedSoundWaveAnimTexturePairArrays> Array;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class FString                                      sound_wave_path;                                          // (Parm, ZeroConstructor)
	class FString                                      anim_texture_path;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Recently Released ADS
struct ABuff_Companion_HLNA_C_Recently_Released_ADS_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.begin scan random location orbit
struct ABuff_Companion_HLNA_C_begin_scan_random_location_orbit_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.is fixing glitch
struct ABuff_Companion_HLNA_C_is_fixing_glitch_Params
{
	bool                                               is_fixing;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Check if You Can Play Post Intro HLNA Target Alert Message
struct ABuff_Companion_HLNA_C_Check_if_You_Can_Play_Post_Intro_HLNA_Target_Alert_Message_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Show Post Intro Mission Alert Message
struct ABuff_Companion_HLNA_C_Show_Post_Intro_Mission_Alert_Message_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Show Post Intro HLNA Target Alert Message
struct ABuff_Companion_HLNA_C_Show_Post_Intro_HLNA_Target_Alert_Message_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Reaction Equals Reaction
struct ABuff_Companion_HLNA_C_Reaction_Equals_Reaction_Params
{
	struct FCompanionReactionData                      reaction_1;                                               // (Parm)
	struct FCompanionReactionData                      reaction_2;                                               // (Parm)
	bool                                               is_equal;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.set up aysnc loaded anim texture
struct ABuff_Companion_HLNA_C_set_up_aysnc_loaded_anim_texture_Params
{
	class UObject*                                     InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Eye_Only;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.is player tpv and hlna is in the way
struct ABuff_Companion_HLNA_C_is_player_tpv_and_hlna_is_in_the_way_Params
{
	struct FVector                                     loc_override;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               is_in_the_way;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.force play mission alert
struct ABuff_Companion_HLNA_C_force_play_mission_alert_Params
{
	class FString                                      Title;                                                    // (Parm, ZeroConstructor)
	class FString                                      Label;                                                    // (Parm, ZeroConstructor)
	TEnumAsByte<EMissionAlertType>                     alert_type;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              display_time;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Delay to Play Hlna Subtitles Move Out Anim
struct ABuff_Companion_HLNA_C_Delay_to_Play_Hlna_Subtitles_Move_Out_Anim_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.create dynamic materials
struct ABuff_Companion_HLNA_C_create_dynamic_materials_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Clear Async Loaded Audio
struct ABuff_Companion_HLNA_C_Clear_Async_Loaded_Audio_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Is Player On Mission
struct ABuff_Companion_HLNA_C_Is_Player_On_Mission_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret_Val;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AMissionType*                                active_mission;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.is player on mission and cant teleport
struct ABuff_Companion_HLNA_C_is_player_on_mission_and_cant_teleport_Params
{
	class AShooterCharacter*                           InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret_Val;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Player That They Cannot Teleport Players On Mission
struct ABuff_Companion_HLNA_C_Notify_Player_That_They_Cannot_Teleport_Players_On_Mission_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Colliding with Something
struct ABuff_Companion_HLNA_C_Colliding_with_Something_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPNotifyOtherBuffDeactivated
struct ABuff_Companion_HLNA_C_BPNotifyOtherBuffDeactivated_Params
{
	class APrimalBuff**                                OtherBuff;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsCompanionAbleToMonologue
struct ABuff_Companion_HLNA_C_IsCompanionAbleToMonologue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Awaiting Set Of Initial Spawn Intro Anim Timer
struct ABuff_Companion_HLNA_C_Awaiting_Set_Of_Initial_Spawn_Intro_Anim_Timer_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Player That They Cannot Teleport Large Dinos To Final Boss
struct ABuff_Companion_HLNA_C_Notify_Player_That_They_Cannot_Teleport_Large_Dinos_To_Final_Boss_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Player That They Cannot Teleport Players On Seated Structures
struct ABuff_Companion_HLNA_C_Notify_Player_That_They_Cannot_Teleport_Players_On_Seated_Structures_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Temp Keep Movement Volume Up
struct ABuff_Companion_HLNA_C_Temp_Keep_Movement_Volume_Up_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Set Intro sphere Mask Amount
struct ABuff_Companion_HLNA_C_Set_Intro_sphere_Mask_Amount_Params
{
	float                                              InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Move Cuz In The Way
struct ABuff_Companion_HLNA_C_Move_Cuz_In_The_Way_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.should hlna move away from the camera
struct ABuff_Companion_HLNA_C_should_hlna_move_away_from_the_camera_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Is Probably Firing
struct ABuff_Companion_HLNA_C_Is_Probably_Firing_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPHandleOnStopFire
struct ABuff_Companion_HLNA_C_BPHandleOnStopFire_Params
{
	bool*                                              bFromGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restrict Getting In Front Of Camera During Firing Or Ads
struct ABuff_Companion_HLNA_C_Restrict_Getting_In_Front_Of_Camera_During_Firing_Or_Ads_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.StopCompanionEvent
struct ABuff_Companion_HLNA_C_StopCompanionEvent_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.FocusOnRemoteTarget
struct ABuff_Companion_HLNA_C_FocusOnRemoteTarget_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play focused scan sfx and vfx
struct ABuff_Companion_HLNA_C_play_focused_scan_sfx_and_vfx_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Focused Selected Remote Target Timeout
struct ABuff_Companion_HLNA_C_Focused_Selected_Remote_Target_Timeout_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play hexagon sfx
struct ABuff_Companion_HLNA_C_play_hexagon_sfx_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnSpawnHexagons
struct ABuff_Companion_HLNA_C_OnSpawnHexagons_Params
{
	float*                                             OverrideCollectSFXVolume;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              VFXImmediatelyAttracts;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnMadeHexagonPurchase
struct ABuff_Companion_HLNA_C_OnMadeHexagonPurchase_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNa Mass Teleport Trigger to VR Boss Battle Flow Test
struct ABuff_Companion_HLNA_C_HLNa_Mass_Teleport_Trigger_to_VR_Boss_Battle_Flow_Test_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.find or get mission dispatcher
struct ABuff_Companion_HLNA_C_find_or_get_mission_dispatcher_Params
{
	class AMissionDispatcher*                          AsMissionDispatcher;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Remove Cosmetic HLNA
struct ABuff_Companion_HLNA_C_Remove_Cosmetic_HLNA_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.RefreshCompanionColorization
struct ABuff_Companion_HLNA_C_RefreshCompanionColorization_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.start boss battle
struct ABuff_Companion_HLNA_C_start_boss_battle_Params
{
	class UClass*                                      InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.start mission and set reverse teleports
struct ABuff_Companion_HLNA_C_start_mission_and_set_reverse_teleports_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Set Return Teleport Locations
struct ABuff_Companion_HLNA_C_Set_Return_Teleport_Locations_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPGetMultiUseEntries
struct ABuff_Companion_HLNA_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNa Mass Teleport Trigger To VR Boss Battle Hard
struct ABuff_Companion_HLNA_C_HLNa_Mass_Teleport_Trigger_To_VR_Boss_Battle_Hard_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNa Mass Teleport Trigger To VR Boss Battle Med
struct ABuff_Companion_HLNA_C_HLNa_Mass_Teleport_Trigger_To_VR_Boss_Battle_Med_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNa Mass Teleport Trigger To VR Boss Battle Easy
struct ABuff_Companion_HLNA_C_HLNa_Mass_Teleport_Trigger_To_VR_Boss_Battle_Easy_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Sync Mission Complete Status
struct ABuff_Companion_HLNA_C_Sync_Mission_Complete_Status_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restrict Sync Mission Complete Status
struct ABuff_Companion_HLNA_C_Restrict_Sync_Mission_Complete_Status_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.format VR boss battle teleport multiuse options
struct ABuff_Companion_HLNA_C_format_VR_boss_battle_teleport_multiuse_options_Params
{
	int                                                Required_Missions;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Mission_Title;                                            // (Parm, ZeroConstructor)
	bool                                               Requires_All_Story_Glitches;                              // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Appended_String;                                          // (Parm, OutParm, ZeroConstructor)
	bool                                               Disabled;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restricted_Timed_Hexagon_Collection
struct ABuff_Companion_HLNA_C_Restricted_Timed_Hexagon_Collection_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.restricted time since last played movement sounds
struct ABuff_Companion_HLNA_C_restricted_time_since_last_played_movement_sounds_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play movement sound
struct ABuff_Companion_HLNA_C_Play_movement_sound_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Randomly pick orbit location
struct ABuff_Companion_HLNA_C_Randomly_pick_orbit_location_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Player That They Cannot Teleport Fish
struct ABuff_Companion_HLNA_C_Notify_Player_That_They_Cannot_Teleport_Fish_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.notify player that they cannot teleport rafts
struct ABuff_Companion_HLNA_C_notify_player_that_they_cannot_teleport_rafts_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play HLNA Respawn Anim
struct ABuff_Companion_HLNA_C_Play_HLNA_Respawn_Anim_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play spawn anim
struct ABuff_Companion_HLNA_C_play_spawn_anim_Params
{
	class UClass*                                      anActorClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimToPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Simple Play Localized Audio cue
struct ABuff_Companion_HLNA_C_Simple_Play_Localized_Audio_cue_Params
{
	struct FHLNALocalizedAudioEntry                    HLNALocalizedAudioEntry;                                  // (Parm, OutParm, ReferenceParm)
	bool                                               Play_Anim_Textures;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPAnimNotifyCustomEvent
struct ABuff_Companion_HLNA_C_BPAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Set All Components Custom Depth Stencil Value
struct ABuff_Companion_HLNA_C_Set_All_Components_Custom_Depth_Stencil_Value_Params
{
	int                                                Stencil_Value;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CanPlayEnvironmentalCompanionReaction
struct ABuff_Companion_HLNA_C_CanPlayEnvironmentalCompanionReaction_Params
{
	struct FCompanionReactionData                      CanPlayReactionData;                                      // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Server Update Purchasable Items
struct ABuff_Companion_HLNA_C_Server_Update_Purchasable_Items_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restricted Interval For Checking Updated Hex Store Purchasable Items
struct ABuff_Companion_HLNA_C_Restricted_Interval_For_Checking_Updated_Hex_Store_Purchasable_Items_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play HLNA Initial Spawn Anim
struct ABuff_Companion_HLNA_C_Play_HLNA_Initial_Spawn_Anim_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Companion is in first person in a seat
struct ABuff_Companion_HLNA_C_Companion_is_in_first_person_in_a_seat_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Finish Intro Anim
struct ABuff_Companion_HLNA_C_Finish_Intro_Anim_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyHasTamedDino
struct ABuff_Companion_HLNA_C_NotifyHasTamedDino_Params
{
	class UClass**                                     DinoClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyItemCrafted
struct ABuff_Companion_HLNA_C_NotifyItemCrafted_Params
{
	class UPrimalItem**                                anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Keep Eye Hidden For Emotes
struct ABuff_Companion_HLNA_C_Keep_Eye_Hidden_For_Emotes_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BuffTickClient
struct ABuff_Companion_HLNA_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Reset Delay Between Environmental Reactions
struct ABuff_Companion_HLNA_C_Reset_Delay_Between_Environmental_Reactions_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Check Recieve Damage For Reactions
struct ABuff_Companion_HLNA_C_Check_Recieve_Damage_For_Reactions_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Reset Recent Damage Recieved
struct ABuff_Companion_HLNA_C_Reset_Recent_Damage_Recieved_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPServerHandleNetExecCommand
struct ABuff_Companion_HLNA_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play World Reaction
struct ABuff_Companion_HLNA_C_Play_World_Reaction_Params
{
	struct FCompanionReactionData                      WithReactionData;                                         // (Parm, OutParm, ReferenceParm)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Interval to check for HLNA world reactions
struct ABuff_Companion_HLNA_C_Interval_to_check_for_HLNA_world_reactions_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restrict Random World Reactions
struct ABuff_Companion_HLNA_C_Restrict_Random_World_Reactions_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Check Current Status of various things to react to
struct ABuff_Companion_HLNA_C_Check_Current_Status_of_various_things_to_react_to_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPInventoryItemUsed
struct ABuff_Companion_HLNA_C_BPInventoryItemUsed_Params
{
	class UObject**                                    InventoryItemObject;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPDeactivated
struct ABuff_Companion_HLNA_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPNotifyOtherBuffActivated
struct ABuff_Companion_HLNA_C_BPNotifyOtherBuffActivated_Params
{
	class APrimalBuff**                                OtherBuff;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPNotifyExperienceGained
struct ABuff_Companion_HLNA_C_BPNotifyExperienceGained_Params
{
	float*                                             ActualExpGained;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ExpectedExpGain;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EXPType>*                              ExpTypeGained;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPInstigatorDied
struct ABuff_Companion_HLNA_C_BPInstigatorDied_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPHandleOnStartFire
struct ABuff_Companion_HLNA_C_BPHandleOnStartFire_Params
{
	bool*                                              bFromGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.PlayJustAboutToTeleportReaction
struct ABuff_Companion_HLNA_C_PlayJustAboutToTeleportReaction_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.FinishedScanDispatcher
struct ABuff_Companion_HLNA_C_FinishedScanDispatcher_Params
{
	class AShooterCharacter*                           ShooterChar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.FinishedScan
struct ABuff_Companion_HLNA_C_FinishedScan_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play Scan Reactions
struct ABuff_Companion_HLNA_C_Play_Scan_Reactions_Params
{
	struct FCompanionReactionData                      Post_Scan_Reaction;                                       // (Parm)
	float                                              Override_Scan_Duration;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Total_Reactions_Duration;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Clean Up Teleport VFX
struct ABuff_Companion_HLNA_C_Clean_Up_Teleport_VFX_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.On Mass Teleport Event VFX
struct ABuff_Companion_HLNA_C_On_Mass_Teleport_Event_VFX_Params
{
	TEnumAsByte<EMassTeleportState>                    Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Find Best Teleport Location
struct ABuff_Companion_HLNA_C_Find_Best_Teleport_Location_Params
{
	int                                                selected_coordinate_direction_index;                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                region_index;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           player_controller;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               only_test_if_theres_any_available;                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Has_Found_Spot;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyDamage
struct ABuff_Companion_HLNA_C_NotifyDamage_Params
{
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     TheDamageCauser;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Set Best Teleport Spot From Sorted Start Points
struct ABuff_Companion_HLNA_C_Set_Best_Teleport_Spot_From_Sorted_Start_Points_Params
{
	TArray<class AActor*>                              Array;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               able_to_set_spot;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Get Biome Names
struct ABuff_Companion_HLNA_C_Get_Biome_Names_Params
{
	TArray<class FString>                              OverridePlayerSpawnRegions;                               // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetCompanionWorldLocation
struct ABuff_Companion_HLNA_C_GetCompanionWorldLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetCurrentOrbitRadius
struct ABuff_Companion_HLNA_C_GetCurrentOrbitRadius_Params
{
	float                                              Radius;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPOnOwnerMassTeleportEvent
struct ABuff_Companion_HLNA_C_BPOnOwnerMassTeleportEvent_Params
{
	TEnumAsByte<EMassTeleportState>*                   EventState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter**                           TeleportInitiatedByChar;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnMassTeleportEventReceived
struct ABuff_Companion_HLNA_C_OnMassTeleportEventReceived_Params
{
	TEnumAsByte<EMassTeleportState>                    EventState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNaMassTeleport_Cancel
struct ABuff_Companion_HLNA_C_HLNaMassTeleport_Cancel_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CleanUpMassTeleport
struct ABuff_Companion_HLNA_C_CleanUpMassTeleport_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_UpdateCompanionState
struct ABuff_Companion_HLNA_C_Tick_UpdateCompanionState_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPTryMultiUse
struct ABuff_Companion_HLNA_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_SearchForMassTeleportChars
struct ABuff_Companion_HLNA_C_Tick_SearchForMassTeleportChars_Params
{
	bool                                               bIsFinalCheck;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BuffTickServer
struct ABuff_Companion_HLNA_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNaMassTeleport_Trigger
struct ABuff_Companion_HLNA_C_HLNaMassTeleport_Trigger_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNaMassTeleport_Start
struct ABuff_Companion_HLNA_C_HLNaMassTeleport_Start_Params
{
	int                                                region_index;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Teleport_To_VR_Boss_Battle_easy;                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Teleport_To_VR_Boss_Battle_med;                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Teleport_To_VR_Boss_Battle_hard;                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Teleport_To_VR_Boss_Battle_FLOW_TEST;                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetTeleportationDestinations
struct ABuff_Companion_HLNA_C_GetTeleportationDestinations_Params
{
	TArray<struct FTeleportDestination>                Destinations;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetLookAtPlayerRotation
struct ABuff_Companion_HLNA_C_GetLookAtPlayerRotation_Params
{
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetAnimMoveVelocityAxes
struct ABuff_Companion_HLNA_C_GetAnimMoveVelocityAxes_Params
{
	struct FVector                                     VelocityAxes;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ShouldBeCompact
struct ABuff_Companion_HLNA_C_ShouldBeCompact_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Determine Best Teleport Spot
struct ABuff_Companion_HLNA_C_Determine_Best_Teleport_Spot_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnCompanionEventStarted
struct ABuff_Companion_HLNA_C_OnCompanionEventStarted_Params
{
	struct FCompanionEventData                         StartingEventData;                                        // (Parm, OutParm, ReferenceParm)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CanStartCompanionEvent
struct ABuff_Companion_HLNA_C_CanStartCompanionEvent_Params
{
	class AActor**                                     EventActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCompanionEventData                         WithEventData;                                            // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnCompanionReactionPlayed
struct ABuff_Companion_HLNA_C_OnCompanionReactionPlayed_Params
{
	struct FCompanionReactionData                      PlayedReactionData;                                       // (Parm, OutParm, ReferenceParm)
	int*                                               UniqueID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.SetCompactState
struct ABuff_Companion_HLNA_C_SetCompactState_Params
{
	bool                                               bNewCompactState;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnCompanionReactionStopped
struct ABuff_Companion_HLNA_C_OnCompanionReactionStopped_Params
{
	struct FCompanionReactionData                      StoppedReactionData;                                      // (Parm, OutParm, ReferenceParm)
	int*                                               UniqueID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CanPlayCompanionReaction
struct ABuff_Companion_HLNA_C_CanPlayCompanionReaction_Params
{
	struct FCompanionReactionData                      CanPlayReactionData;                                      // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_UpdateHLNaSounds
struct ABuff_Companion_HLNA_C_Tick_UpdateHLNaSounds_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_CompactMode
struct ABuff_Companion_HLNA_C_Tick_CompactMode_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsCurrentEventMonalogue
struct ABuff_Companion_HLNA_C_IsCurrentEventMonalogue_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateFakeVelocityLagOffset
struct ABuff_Companion_HLNA_C_CalculateFakeVelocityLagOffset_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VelocityLag;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateHLNaHeightOffset
struct ABuff_Companion_HLNA_C_CalculateHLNaHeightOffset_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HeightOffset_Base;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HeightOffset_WithBob;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BobOffset;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsAttachedToCamera
struct ABuff_Companion_HLNA_C_IsAttachedToCamera_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsAttachedToPlayer
struct ABuff_Companion_HLNA_C_IsAttachedToPlayer_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_CompanionEvents
struct ABuff_Companion_HLNA_C_Tick_CompanionEvents_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsCompanionReadyToMonologue
struct ABuff_Companion_HLNA_C_IsCompanionReadyToMonologue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ConvertTargetRelOffsetToWorld
struct ABuff_Companion_HLNA_C_ConvertTargetRelOffsetToWorld_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsAttachedToCamera_Pure
struct ABuff_Companion_HLNA_C_IsAttachedToCamera_Pure_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.UpdateHLNaTargetRelLocFPV
struct ABuff_Companion_HLNA_C_UpdateHLNaTargetRelLocFPV_Params
{
	struct FVector                                     WithWorldLocation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateHLNaOrbitDir
struct ABuff_Companion_HLNA_C_CalculateHLNaOrbitDir_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitDir;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetScreenPercentageWorldLocation
struct ABuff_Companion_HLNA_C_GetScreenPercentageWorldLocation_Params
{
	struct FVector2D                                   Percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ProjectionDist;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.TickUpdateHLNaEventMovement
struct ABuff_Companion_HLNA_C_TickUpdateHLNaEventMovement_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateHLNaTargetWorldRotation
struct ABuff_Companion_HLNA_C_CalculateHLNaTargetWorldRotation_Params
{
	struct FRotator                                    TargetWorldRotation;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateHLNaTargetWorldLocation
struct ABuff_Companion_HLNA_C_CalculateHLNaTargetWorldLocation_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetWorldLocation;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnPlayerDeath
struct ABuff_Companion_HLNA_C_OnPlayerDeath_Params
{
	class APrimalCharacter**                           DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_UpdateCompanionTransform
struct ABuff_Companion_HLNA_C_Tick_UpdateCompanionTransform_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.PlayParallelEmoteMontage
struct ABuff_Companion_HLNA_C_PlayParallelEmoteMontage_Params
{
	class UAnimMontage*                                PlayerEmote;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnPlayerPlayAnimation
struct ABuff_Companion_HLNA_C_OnPlayerPlayAnimation_Params
{
	class UAnimMontage**                               PlayedAnim;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AnimDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      StartSectionName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnCompanionStateChanged
struct ABuff_Companion_HLNA_C_OnCompanionStateChanged_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.SoftSetHLNaLocationRelative
struct ABuff_Companion_HLNA_C_SoftSetHLNaLocationRelative_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetMeshRotationInterpSpeed
struct ABuff_Companion_HLNA_C_GetMeshRotationInterpSpeed_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.SoftSetHLNaRotation
struct ABuff_Companion_HLNA_C_SoftSetHLNaRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetPlayerVelocity
struct ABuff_Companion_HLNA_C_GetPlayerVelocity_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsAttachedToPlayer_Pure
struct ABuff_Companion_HLNA_C_IsAttachedToPlayer_Pure_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.PretendWeAreInWorldSpace
struct ABuff_Companion_HLNA_C_PretendWeAreInWorldSpace_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnFoundPoI
struct ABuff_Companion_HLNA_C_OnFoundPoI_Params
{
	struct FPointOfInterestData_ForCompanion           FoundPointData;                                           // (Parm, OutParm, ReferenceParm)
	class AActor**                                     FoundPointActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsPlayerADS
struct ABuff_Companion_HLNA_C_IsPlayerADS_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetMeshLocationInterpSpeed
struct ABuff_Companion_HLNA_C_GetMeshLocationInterpSpeed_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetPlayerOrbitOrigin
struct ABuff_Companion_HLNA_C_GetPlayerOrbitOrigin_Params
{
	struct FVector                                     Origin;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.InterpHLNaRootToOrigin
struct ABuff_Companion_HLNA_C_InterpHLNaRootToOrigin_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.SoftSetHLNaLocation
struct ABuff_Companion_HLNA_C_SoftSetHLNaLocation_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.UpdateHLNaAttachment
struct ABuff_Companion_HLNA_C_UpdateHLNaAttachment_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsPlayerLookingAtCompanion
struct ABuff_Companion_HLNA_C_IsPlayerLookingAtCompanion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnSpawnedForPlayer
struct ABuff_Companion_HLNA_C_OnSpawnedForPlayer_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPClientDoMultiUse
struct ABuff_Companion_HLNA_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.UserConstructionScript
struct ABuff_Companion_HLNA_C_UserConstructionScript_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_0__FinishedFunc
struct ABuff_Companion_HLNA_C_Timeline_0__FinishedFunc_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_0__UpdateFunc
struct ABuff_Companion_HLNA_C_Timeline_0__UpdateFunc_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_1__FinishedFunc
struct ABuff_Companion_HLNA_C_Timeline_1__FinishedFunc_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_1__UpdateFunc
struct ABuff_Companion_HLNA_C_Timeline_1__UpdateFunc_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_3__FinishedFunc
struct ABuff_Companion_HLNA_C_Timeline_3__FinishedFunc_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_3__UpdateFunc
struct ABuff_Companion_HLNA_C_Timeline_3__UpdateFunc_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_5__FinishedFunc
struct ABuff_Companion_HLNA_C_Timeline_5__FinishedFunc_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_5__UpdateFunc
struct ABuff_Companion_HLNA_C_Timeline_5__UpdateFunc_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_6__FinishedFunc
struct ABuff_Companion_HLNA_C_Timeline_6__FinishedFunc_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_6__UpdateFunc
struct ABuff_Companion_HLNA_C_Timeline_6__UpdateFunc_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_7__FinishedFunc
struct ABuff_Companion_HLNA_C_Timeline_7__FinishedFunc_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_7__UpdateFunc
struct ABuff_Companion_HLNA_C_Timeline_7__UpdateFunc_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay before intro shatter__FinishedFunc
struct ABuff_Companion_HLNA_C_delay_before_intro_shatter__FinishedFunc_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay before intro shatter__UpdateFunc
struct ABuff_Companion_HLNA_C_delay_before_intro_shatter__UpdateFunc_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fixed orientation timeline__FinishedFunc
struct ABuff_Companion_HLNA_C_fixed_orientation_timeline__FinishedFunc_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fixed orientation timeline__UpdateFunc
struct ABuff_Companion_HLNA_C_fixed_orientation_timeline__UpdateFunc_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ReceiveBeginPlay
struct ABuff_Companion_HLNA_C_ReceiveBeginPlay_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Client_OnMassTeleportStarted
struct ABuff_Companion_HLNA_C_Client_OnMassTeleportStarted_Params
{
	struct FVector                                     WithPlayerLocation;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Client_OnMassTeleportEnded
struct ABuff_Companion_HLNA_C_Client_OnMassTeleportEnded_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Client_OnMassTeleportEventReceived
struct ABuff_Companion_HLNA_C_Client_OnMassTeleportEventReceived_Params
{
	TEnumAsByte<EMassTeleportState>                    EventState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Multi_UpdateTeleportingChars
struct ABuff_Companion_HLNA_C_Multi_UpdateTeleportingChars_Params
{
	TArray<class APrimalCharacter*>                    NewTeleportCharsList;                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.update teleporting characters vfx
struct ABuff_Companion_HLNA_C_update_teleporting_characters_vfx_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Multi_OnMassTeleportEvent
struct ABuff_Companion_HLNA_C_Multi_OnMassTeleportEvent_Params
{
	TEnumAsByte<EMassTeleportState>                    EventState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fresnel flash
struct ABuff_Companion_HLNA_C_fresnel_flash_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Show Hexagon Conversion Shop on Client
struct ABuff_Companion_HLNA_C_Show_Hexagon_Conversion_Shop_on_Client_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.post teleport reaction
struct ABuff_Companion_HLNA_C_post_teleport_reaction_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play hexagon absorb anim
struct ABuff_Companion_HLNA_C_play_hexagon_absorb_anim_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play Scanning SFX and VFX
struct ABuff_Companion_HLNA_C_Play_Scanning_SFX_and_VFX_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play Post Scan Reaction
struct ABuff_Companion_HLNA_C_Play_Post_Scan_Reaction_Params
{
	float                                              Scan_Duration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCompanionReactionData                      Post_Scan_Reaction;                                       // (Parm)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Delay and React to Shot Event
struct ABuff_Companion_HLNA_C_Delay_and_React_to_Shot_Event_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Server React To Shot Event
struct ABuff_Companion_HLNA_C_Server_React_To_Shot_Event_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.try play friendly fire reaction
struct ABuff_Companion_HLNA_C_try_play_friendly_fire_reaction_Params
{
	bool                                               is_dead;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.try play attacked opponent reaction
struct ABuff_Companion_HLNA_C_try_play_attacked_opponent_reaction_Params
{
	bool                                               is_dead;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.try play creature almost dead
struct ABuff_Companion_HLNA_C_try_play_creature_almost_dead_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.React To Equipping Low Durability Weapon
struct ABuff_Companion_HLNA_C_React_To_Equipping_Low_Durability_Weapon_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Client_ReactToCraftedItem
struct ABuff_Companion_HLNA_C_Client_ReactToCraftedItem_Params
{
	class FString                                      ItemName;                                                 // (Parm, ZeroConstructor)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Bind Dino Death Reaction
struct ABuff_Companion_HLNA_C_Bind_Dino_Death_Reaction_Params
{
	class APrimalDinoCharacter*                        ridden_dino;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Try HLNA Environmental Reaction
struct ABuff_Companion_HLNA_C_Try_HLNA_Environmental_Reaction_Params
{
	struct FCompanionReactionData                      reaction;                                                 // (Parm)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Ridden Dino Died Reaction
struct ABuff_Companion_HLNA_C_Ridden_Dino_Died_Reaction_Params
{
	class APrimalCharacter*                            DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Update Purchasable Item State and update store on client
struct ABuff_Companion_HLNA_C_Update_Purchasable_Item_State_and_update_store_on_client_Params
{
	int                                                Store_Item_Index;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               New_Index_Value;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Delay and Disable Item Visibility In Store
struct ABuff_Companion_HLNA_C_Delay_and_Disable_Item_Visibility_In_Store_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.intro teleport materials
struct ABuff_Companion_HLNA_C_intro_teleport_materials_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.force set hlna location and rotation
struct ABuff_Companion_HLNA_C_force_set_hlna_location_and_rotation_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fade away intro PP mask
struct ABuff_Companion_HLNA_C_fade_away_intro_PP_mask_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.PrimalCharacterNotifyLevelUp
struct ABuff_Companion_HLNA_C_PrimalCharacterNotifyLevelUp_Params
{
	int                                                ExtraCharacterLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.React To Player Level Up
struct ABuff_Companion_HLNA_C_React_To_Player_Level_Up_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay and scan
struct ABuff_Companion_HLNA_C_delay_and_scan_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tell Client To React With Hlna After Respawn
struct ABuff_Companion_HLNA_C_Tell_Client_To_React_With_Hlna_After_Respawn_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay start VR mission easy
struct ABuff_Companion_HLNA_C_delay_start_VR_mission_easy_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay start VR mission med
struct ABuff_Companion_HLNA_C_delay_start_VR_mission_med_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay start VR mission hard
struct ABuff_Companion_HLNA_C_delay_start_VR_mission_hard_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fade in audio comp
struct ABuff_Companion_HLNA_C_fade_in_audio_comp_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fade out audio comp
struct ABuff_Companion_HLNA_C_fade_out_audio_comp_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay start vr mission flow test
struct ABuff_Companion_HLNA_C_delay_start_vr_mission_flow_test_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.move hlna to focused target for tooltip
struct ABuff_Companion_HLNA_C_move_hlna_to_focused_target_for_tooltip_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.start looping scans
struct ABuff_Companion_HLNA_C_start_looping_scans_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.stop looping scans
struct ABuff_Companion_HLNA_C_stop_looping_scans_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.keep looping scans
struct ABuff_Companion_HLNA_C_keep_looping_scans_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Simple Load Async Sound Cue
struct ABuff_Companion_HLNA_C_Simple_Load_Async_Sound_Cue_Params
{
	TArray<struct FLocalizedSoundCueEntry>             Localized;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Play_Anim_Textures;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.AsyncAssetLoadedDelegate__ExplorerNoteAudio
struct ABuff_Companion_HLNA_C_AsyncAssetLoadedDelegate__ExplorerNoteAudio_Params
{
	class FString                                      AssetPath;                                                // (Parm, ZeroConstructor)
	class UObject*                                     LoadedAsset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play intro reaction
struct ABuff_Companion_HLNA_C_play_intro_reaction_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ignore respawn reaction
struct ABuff_Companion_HLNA_C_ignore_respawn_reaction_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.prematurely cancel intro stuff
struct ABuff_Companion_HLNA_C_prematurely_cancel_intro_stuff_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.finished loading async loaded anim texture
struct ABuff_Companion_HLNA_C_finished_loading_async_loaded_anim_texture_Params
{
	class FString                                      AssetPath;                                                // (Parm, ZeroConstructor)
	class UObject*                                     LoadedAsset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Simple Load Async Sound Wave
struct ABuff_Companion_HLNA_C_Simple_Load_Async_Sound_Wave_Params
{
	TArray<struct FLocalizedSoundWaveAnimTexturePairArrays> Localized;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Play_Anim_Textures;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ResetHexTimer
struct ABuff_Companion_HLNA_C_ResetHexTimer_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Multi_UpdateSpawnedBeamParticle
struct ABuff_Companion_HLNA_C_Multi_UpdateSpawnedBeamParticle_Params
{
	class UParticleSystem*                             ParticleTemplate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EndPointActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Server_HasStartedGen2Intro
struct ABuff_Companion_HLNA_C_Server_HasStartedGen2Intro_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ClientGen2IntroFinished
struct ABuff_Companion_HLNA_C_ClientGen2IntroFinished_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ClientGen2IntroStart
struct ABuff_Companion_HLNA_C_ClientGen2IntroStart_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.LevelNotifyGen2IntroFinished
struct ABuff_Companion_HLNA_C_LevelNotifyGen2IntroFinished_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyServerIntroFinished
struct ABuff_Companion_HLNA_C_NotifyServerIntroFinished_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.LevelCheatSetGen2IntroPlaying
struct ABuff_Companion_HLNA_C_LevelCheatSetGen2IntroPlaying_Params
{
	bool                                               NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyServerCheatSetGen2IntroPlaying
struct ABuff_Companion_HLNA_C_NotifyServerCheatSetGen2IntroPlaying_Params
{
	bool                                               NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay play death line
struct ABuff_Companion_HLNA_C_delay_play_death_line_Params
{
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnActorCustomEvent_Event
struct ABuff_Companion_HLNA_C_OnActorCustomEvent_Event_Params
{
	struct FName                                       EventCustomName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      EventCustomString;                                        // (Parm, ZeroConstructor)
	class AActor*                                      InstigatorActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ExecuteUbergraph_Buff_Companion_HLNA
struct ABuff_Companion_HLNA_C_ExecuteUbergraph_Buff_Companion_HLNA_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Finished Scan Dispatcher__DelegateSignature
struct ABuff_Companion_HLNA_C_Finished_Scan_Dispatcher__DelegateSignature_Params
{
	class AShooterCharacter*                           ShooterChar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
