#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapFishingNet_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapFishingNet.WeapFishingNet_C.destroy net item
struct AWeapFishingNet_C_destroy_net_item_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.BPServerHandleNetExecCommand
struct AWeapFishingNet_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.Show Or Hide Net
struct AWeapFishingNet_C_Show_Or_Hide_Net_Params
{
	bool                                               Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Post_Catch_Check;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.Set All Components Render Custom Depth
struct AWeapFishingNet_C_Set_All_Components_Render_Custom_Depth_Params
{
	class AActor*                                      actor_to_set;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.Set All Components Custom Depth Stencil Value
struct AWeapFishingNet_C_Set_All_Components_Custom_Depth_Stencil_Value_Params
{
	class AActor*                                      actor_to_set;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.Restrict Auto Reel
struct AWeapFishingNet_C_Restrict_Auto_Reel_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.Restrict Reel Anim And Sound
struct AWeapFishingNet_C_Restrict_Reel_Anim_And_Sound_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.Generate Fish Meat En Masse
struct AWeapFishingNet_C_Generate_Fish_Meat_En_Masse_Params
{
	float                                              total_wild_scale;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalDinoCharacter*                        used_fish_for_inventory;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.Restrict Reel Server
struct AWeapFishingNet_C_Restrict_Reel_Server_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.Restrict Reel Client
struct AWeapFishingNet_C_Restrict_Reel_Client_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.Server Occasional Timer Events
struct AWeapFishingNet_C_Server_Occasional_Timer_Events_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.set net rotation to face player
struct AWeapFishingNet_C_set_net_rotation_to_face_player_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.FishStruggle
struct AWeapFishingNet_C_FishStruggle_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.spawn vfx at location where cable intersects with water
struct AWeapFishingNet_C_spawn_vfx_at_location_where_cable_intersects_with_water_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.BPStartEquippedNotify
struct AWeapFishingNet_C_BPStartEquippedNotify_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.Cancel Cast Hide Cable Components
struct AWeapFishingNet_C_Cancel_Cast_Hide_Cable_Components_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.play hooked fish HLNA reaction
struct AWeapFishingNet_C_play_hooked_fish_HLNA_reaction_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.delay showing fpv mesh a bit longer
struct AWeapFishingNet_C_delay_showing_fpv_mesh_a_bit_longer_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.backup cancel timer
struct AWeapFishingNet_C_backup_cancel_timer_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.cancelling cast during reel casting or casted
struct AWeapFishingNet_C_cancelling_cast_during_reel_casting_or_casted_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.set enable throw anim when not jumping and has buff
struct AWeapFishingNet_C_set_enable_throw_anim_when_not_jumping_and_has_buff_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.restrict movement while cooking
struct AWeapFishingNet_C_restrict_movement_while_cooking_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.force idle anim while moving
struct AWeapFishingNet_C_force_idle_anim_while_moving_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.set state to casting if net exists during idle
struct AWeapFishingNet_C_set_state_to_casting_if_net_exists_during_idle_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.hide 1p mesh when appropriate
struct AWeapFishingNet_C_hide_1p_mesh_when_appropriate_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.cancel cast if player is in water
struct AWeapFishingNet_C_cancel_cast_if_player_is_in_water_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.set fish location with net
struct AWeapFishingNet_C_set_fish_location_with_net_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.finish reel if net is close enough to player
struct AWeapFishingNet_C_finish_reel_if_net_is_close_enough_to_player_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.set start position of fishing cable
struct AWeapFishingNet_C_set_start_position_of_fishing_cable_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.update net location
struct AWeapFishingNet_C_update_net_location_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.break if net is invalid during casted state
struct AWeapFishingNet_C_break_if_net_is_invalid_during_casted_state_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.break if net is too far
struct AWeapFishingNet_C_break_if_net_is_too_far_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.Kill all fish in net
struct AWeapFishingNet_C_Kill_all_fish_in_net_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.Send Caught Fish Message to Player
struct AWeapFishingNet_C_Send_Caught_Fish_Message_to_Player_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.Fully Catch Fish In Net
struct AWeapFishingNet_C_Fully_Catch_Fish_In_Net_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.Cancel Cast Remove Buff And Reset Anim
struct AWeapFishingNet_C_Cancel_Cast_Remove_Buff_And_Reset_Anim_Params
{
	bool                                               Caught_Success;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.Cancel Cast Destroy Cable Components
struct AWeapFishingNet_C_Cancel_Cast_Destroy_Cable_Components_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.cancel cast destroy net projectile
struct AWeapFishingNet_C_cancel_cast_destroy_net_projectile_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.cancel cast release fish
struct AWeapFishingNet_C_cancel_cast_release_fish_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.reset variables on cancel reel
struct AWeapFishingNet_C_reset_variables_on_cancel_reel_Params
{
	bool                                               successful_catch;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.update cable component location
struct AWeapFishingNet_C_update_cable_component_location_Params
{
	class UPrimalCableComponent*                       Cable;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             _1PAttachSocketStart;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             _1PAttachSocketEnd;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             _3PAttachSocketEnd;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               new_cable_component;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     _1P_Endpoint_Override;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     _3P_Endpoint_Override;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Swapped_Hand_Component1P;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       _3PAttachSocketStartName;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.Get Cable Attach Info
struct AWeapFishingNet_C_Get_Cable_Attach_Info_Params
{
	bool                                               is_first_person;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Cable_Comp;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Mesh_Comp;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.Attach Cable To Hand
struct AWeapFishingNet_C_Attach_Cable_To_Hand_Params
{
	bool                                               Left;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Interp_Cable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.CreateCable
struct AWeapFishingNet_C_CreateCable_Params
{
	class UPrimalCableComponent*                       Existing_Cable_Component_To_Check;                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Cable_Length;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cable_Segments;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AdaptiveSegments;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Attached_Component_1P;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Attach_Socket_Name_1P;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Attach_Socket_Name_3P;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalCableComponent*                       cable_component;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               NewlyCreated;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.Give Fish Rewards
struct AWeapFishingNet_C_Give_Fish_Rewards_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.Set Fish Position To Normal Offset
struct AWeapFishingNet_C_Set_Fish_Position_To_Normal_Offset_Params
{
	bool                                               Caught_Success;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.Get Initial Fish Location Offset
struct AWeapFishingNet_C_Get_Initial_Fish_Location_Offset_Params
{
	class AActor*                                      fish;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.BPRemainEquipped
struct AWeapFishingNet_C_BPRemainEquipped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.BPCanEquip
struct AWeapFishingNet_C_BPCanEquip_Params
{
	class AShooterCharacter**                          ByCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.Reel Velocity
struct AWeapFishingNet_C_Reel_Velocity_Params
{
	struct FVector                                     Weapon_Location;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AProjFishingNet_C*                           net_projectile;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.BPAnimNotifyCustomEvent
struct AWeapFishingNet_C_BPAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.Give Fish Loot
struct AWeapFishingNet_C_Give_Fish_Loot_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalDinoCharacter*                        Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Amount_Multiplier;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.Generate Fish Meat
struct AWeapFishingNet_C_Generate_Fish_Meat_Params
{
	class APrimalDinoCharacter*                        fish;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.Check For Fish Collision
struct AWeapFishingNet_C_Check_For_Fish_Collision_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.On Fish Released
struct AWeapFishingNet_C_On_Fish_Released_Params
{
	class APrimalDinoCharacter*                        fish;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.release fish
struct AWeapFishingNet_C_release_fish_Params
{
	class UObject*                                     fish;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               pulled_completely_up;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.PlayFishAttackAnimation
struct AWeapFishingNet_C_PlayFishAttackAnimation_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.On Fish Snared
struct AWeapFishingNet_C_On_Fish_Snared_Params
{
	class APrimalDinoCharacter*                        localSnaredFish;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.snare fish
struct AWeapFishingNet_C_snare_fish_Params
{
	class APrimalDinoCharacter*                        snared_fish;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.StartUnequipEvent
struct AWeapFishingNet_C_StartUnequipEvent_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.Update Rope Length
struct AWeapFishingNet_C_Update_Rope_Length_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.StartSecondaryActionEvent
struct AWeapFishingNet_C_StartSecondaryActionEvent_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.BPFiredWeapon
struct AWeapFishingNet_C_BPFiredWeapon_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.ReceiveTick
struct AWeapFishingNet_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.ReceiveBeginPlay
struct AWeapFishingNet_C_ReceiveBeginPlay_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.BPWeaponCanFire
struct AWeapFishingNet_C_BPWeaponCanFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.Update Cable Component
struct AWeapFishingNet_C_Update_Cable_Component_Params
{
	struct FVector                                     End_Cable_Location;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               has_buff;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.Net Collided with Water
struct AWeapFishingNet_C_Net_Collided_with_Water_Params
{
	struct FVector                                     WaterLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Projectile_Rotation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.BPGetProjectileSpeed
struct AWeapFishingNet_C_BPGetProjectileSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.UserConstructionScript
struct AWeapFishingNet_C_UserConstructionScript_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.move net to player timeline__FinishedFunc
struct AWeapFishingNet_C_move_net_to_player_timeline__FinishedFunc_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.move net to player timeline__UpdateFunc
struct AWeapFishingNet_C_move_net_to_player_timeline__UpdateFunc_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.Timeline_0__FinishedFunc
struct AWeapFishingNet_C_Timeline_0__FinishedFunc_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.Timeline_0__UpdateFunc
struct AWeapFishingNet_C_Timeline_0__UpdateFunc_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.Cancel Cast
struct AWeapFishingNet_C_Cancel_Cast_Params
{
	bool                                               Caught_Success;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force_Reset_Has_Caught_Any_Fish;                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.Reel Net In
struct AWeapFishingNet_C_Reel_Net_In_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.server reel
struct AWeapFishingNet_C_server_reel_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.OnFishSnaredEvent
struct AWeapFishingNet_C_OnFishSnaredEvent_Params
{
	class APrimalDinoCharacter*                        fish;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.Projectile net collided with fish
struct AWeapFishingNet_C_Projectile_net_collided_with_fish_Params
{
	class APrimalDinoCharacter*                        fish;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.Cancel Cast Events
struct AWeapFishingNet_C_Cancel_Cast_Events_Params
{
	bool                                               Caught_Success;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.fully catch fish
struct AWeapFishingNet_C_fully_catch_fish_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.client do death harvesting
struct AWeapFishingNet_C_client_do_death_harvesting_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.play reel anim
struct AWeapFishingNet_C_play_reel_anim_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.cancel fire anim if there's fish in net
struct AWeapFishingNet_C_cancel_fire_anim_if_there_s_fish_in_net_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.Set Reeling On Projectile
struct AWeapFishingNet_C_Set_Reeling_On_Projectile_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.play fire anim for TPV
struct AWeapFishingNet_C_play_fire_anim_for_TPV_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.play fire anim for FPV
struct AWeapFishingNet_C_play_fire_anim_for_FPV_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.play blended idle anim - cancel cast
struct AWeapFishingNet_C_play_blended_idle_anim___cancel_cast_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.cancel fire anim
struct AWeapFishingNet_C_cancel_fire_anim_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.Play Fish Caught Animation and remove item after
struct AWeapFishingNet_C_Play_Fish_Caught_Animation_and_remove_item_after_Params
{
	bool                                               Has_Caught_Fish;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.move net towards player
struct AWeapFishingNet_C_move_net_towards_player_Params
{
	bool                                               pull_net_in;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.client fully catch fish
struct AWeapFishingNet_C_client_fully_catch_fish_Params
{
	bool                                               catch_fish_success;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               pull_net_in;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.delay and cancel cast
struct AWeapFishingNet_C_delay_and_cancel_cast_Params
{
	bool                                               successfully_caught_fish;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.multicast collided with water
struct AWeapFishingNet_C_multicast_collided_with_water_Params
{
	struct FVector                                     hit_water_location;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.multicast set variables on cast
struct AWeapFishingNet_C_multicast_set_variables_on_cast_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.multicast release fish
struct AWeapFishingNet_C_multicast_release_fish_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.client request cancel cast
struct AWeapFishingNet_C_client_request_cancel_cast_Params
{
	bool                                               Caught_Success;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reset_Has_Caught_Any_FIsh;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.Rotate projectile away from player while reeling_Client
struct AWeapFishingNet_C_Rotate_projectile_away_from_player_while_reeling_Client_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.multicast fish struggle
struct AWeapFishingNet_C_multicast_fish_struggle_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.delay pass allowed fish classes to fish vision buff
struct AWeapFishingNet_C_delay_pass_allowed_fish_classes_to_fish_vision_buff_Params
{
};

// Function WeapFishingNet.WeapFishingNet_C.ExecuteUbergraph_WeapFishingNet
struct AWeapFishingNet_C_ExecuteUbergraph_WeapFishingNet_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.FishCaughtDispatcherSingle__DelegateSignature
struct AWeapFishingNet_C_FishCaughtDispatcherSingle__DelegateSignature_Params
{
	float                                              caught_fish_wild_random_scale;                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Net_Owner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Fish_Class;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     fish_ref;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingNet.WeapFishingNet_C.FishCaughtDispatcher__DelegateSignature
struct AWeapFishingNet_C_FishCaughtDispatcher__DelegateSignature_Params
{
	float                                              caught_fish_weight;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                caught_fish_count;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Net_Owner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
