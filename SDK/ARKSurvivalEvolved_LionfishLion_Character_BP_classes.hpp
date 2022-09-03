#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LionfishLion_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LionfishLion_Character_BP.LionfishLion_Character_BP_C
// 0x231C (0x4638 - 0x231C)
class ALionfishLion_Character_BP_C : public ADino_Character_BP_Pack_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x231C(0x0004) MISSED OFFSET
	class USceneComponent*                             saved_mesh_offset;                                        // 0x2320(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    targeting_vfx;                                            // 0x2328(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Fully_Charged_Mouth_Swipe_vfx;                            // 0x2330(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    MouthSwipe;                                               // 0x2338(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    RF_fully_charged_Claw_Trail_vfx;                          // 0x2340(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    LF_fully_charged_Claw_Trail_vfx;                          // 0x2348(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    LF_PawSwipe;                                              // 0x2350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    RF_PawSwipe;                                              // 0x2358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      CloakParticleRibbons;                                     // 0x2360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    fully_charged_combo_vfx_Tail;                             // 0x2368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    fully_charged_combo_vfx_LR;                               // 0x2370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    fully_charged_combo_vfx_RR;                               // 0x2378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    fully_charged_combo_vfx_Mouth;                            // 0x2380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    fully_charged_combo_vfx_LF;                               // 0x2388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    fully_charged_combo_vfx_RF;                               // 0x2390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             back_left_foot_socket_for_cloaked_footsteps;              // 0x2398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             back_right_foot_socket_for_cloaked_footsteps;             // 0x23A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             front_left_foot_socket_for_cloaked_footsteps;             // 0x23A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             front_right_foot_socket_for_cloaked_footsteps;            // 0x23B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Lionfish_C* DinoCharacterStatus_BP_Lionfish_C1;                       // 0x23B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Teleport_Target_Sphere;                                   // 0x23C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Max_Combo_Big_Spacebar_Leap_Particle;                     // 0x23C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    swim_Big_Spacebar_Leap_particle;                          // 0x23D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             left_arrow;                                               // 0x23D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             visual_detection_angle_edit_this_one;                     // 0x23E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            visual_detection_sphere;                                  // 0x23E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene1;                                                   // 0x23F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             arrow;                                                    // 0x23F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             visual_detection_root;                                    // 0x2400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      cloak_mesh;                                               // 0x2408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_2_NewTrack_0_D748498F4A1AA7E6F16257B72B92939D;   // 0x2410(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_D748498F4A1AA7E6F16257B72B92939D;   // 0x2414(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2415(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x2418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_1_NewTrack_0_CB74112B4C886881FB6A5988BA0FDC0D;   // 0x2420(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_CB74112B4C886881FB6A5988BA0FDC0D;   // 0x2424(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x2425(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x2428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              lerp_to_normal_NewTrack_0_2729944D4250B15EDF491794C7801000;// 0x2430(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    lerp_to_normal__Direction_2729944D4250B15EDF491794C7801000;// 0x2434(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x2435(0x0003) MISSED OFFSET
	class UTimelineComponent*                          lerp_to_normal;                                           // 0x2438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     stealth_anim_timeline_NewTrack_0_DBCEE09841FA80925B128191582A7B0C;// 0x2440(0x000C) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    stealth_anim_timeline__Direction_DBCEE09841FA80925B128191582A7B0C;// 0x244C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x244D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          stealth_anim_timeline;                                    // 0x2450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fade_hide_dino_NewTrack_2_86A61565407DAC68CB41E4ADEDEB58DB;// 0x2458(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    fade_hide_dino__Direction_86A61565407DAC68CB41E4ADEDEB58DB;// 0x245C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x245D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          fade_hide_dino;                                           // 0x2460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              move_between_teleport_targets_NewTrack_2_AAC13772499F8A50FE6709B35176EAA4;// 0x2468(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    move_between_teleport_targets__Direction_AAC13772499F8A50FE6709B35176EAA4;// 0x246C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x246D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          move_between_teleport_targets;                            // 0x2470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              grow_teleport_target_sphere_NewTrack_1_E6751E5A44601B861AB4ECBB8C43F080;// 0x2478(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    grow_teleport_target_sphere__Direction_E6751E5A44601B861AB4ECBB8C43F080;// 0x247C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x247D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          grow_teleport_target_sphere;                              // 0x2480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_NewTrack_4_831CED8E408737734828D9A3D3C55B90;   // 0x2488(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_831CED8E408737734828D9A3D3C55B90;   // 0x248C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x248D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x2490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnInPlaceInterpSpeed_chargeBig_Spacebar_Leap;           // 0x2498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnInPlaceInterpSpeedMidBig_Spacebar_Leap;               // 0x249C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Combo_Reset_Timer_Duration;                               // 0x24A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                first_melee_combo_index;                                  // 0x24A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                X_button_roar_attack_index;                               // 0x24A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                solo_cloak_attack_index;                                  // 0x24AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Current_Combo_Attack_Index_Offset;                        // 0x24B0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               has_hit_an_enemy_during_this_attack;                      // 0x24B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x24B5(0x0003) MISSED OFFSET
	float                                              combo_attack_index_reset_timer_duration;                  // 0x24B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              bite_max_combo_crit_multiplier;                           // 0x24BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Buff_PackMate;                                            // 0x24C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastPackCallTime;                                         // 0x24C8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Buff_PackCallCooldown;                                    // 0x24D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x24D4(0x0004) MISSED OFFSET
	double                                             begin_Big_Spacebar_Leap_charge_time;                      // 0x24D8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              default_Big_Spacebar_Leap_forward_multiplier;             // 0x24E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              max_Big_Spacebar_Leap_charge_time;                        // 0x24E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Big_Spacebar_Leap_Attack_Index;                           // 0x24E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              time_after_Big_Spacebar_Leap_before_input_allowed;        // 0x24EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Big_Spacebar_Leap_Cooldown;                               // 0x24F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              rider_move_right_val;                                     // 0x24F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     prelaunch_forward;                                        // 0x24F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Rider_Move_Forward_Val;                                   // 0x2504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Currently_Charging_Big_Spacebar_Leap;                  // 0x2508(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x2509(0x0003) MISSED OFFSET
	struct FVector                                     selected_launch_vector_for_Big_Spacebar_Leap;             // 0x250C(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MaterialScalarName_DissolvePercent;                       // 0x2518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CamoFadeSpeedDeathMultiplier;                             // 0x2520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MaterialScalarName_CamoAmount;                            // 0x2524(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RiderCamo_PlayRate;                                       // 0x252C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AShooterCharacter*>                   FadeQueue_Riders;                                         // 0x2530(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              LFLCamo_PlayRate;                                         // 0x2540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x2544(0x0004) MISSED OFFSET
	class UClass*                                      Host_Camo_Buff;                                           // 0x2548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<bool>                                       FadeQueue_Mounted;                                        // 0x2550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class APrimalDinoCharacter*>                AllowDinosToTargetInCamo;                                 // 0x2560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              TimerRange_CleanAllowTargetWhenUsingCamoArray_MIN;        // 0x2570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimerRange_CleanAllowTargetWhenUsingCamoArray_MAX;        // 0x2574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Ref_CamoRiderParticle_Enter;                              // 0x2578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Ref_CamoRiderParticle_Exit;                               // 0x2580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RiderFXSocketName;                                        // 0x2588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RiderCloakParticlesScale;                                 // 0x2590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug;                                                    // 0x2594(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_camo_active;                                           // 0x2595(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x2596(0x0002) MISSED OFFSET
	int                                                X_button_stealth_attack_index;                            // 0x2598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              cloak_timeline_play_rate;                                 // 0x259C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              uncloak_timeline_play_rate;                               // 0x25A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Roar_Bonuses_Radius;                                      // 0x25A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Roar_Bonus_Buff;                                          // 0x25A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             last_roar_buff_time;                                      // 0x25B0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Roar_Buff_Cooldown;                                       // 0x25B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x25BC(0x0004) MISSED OFFSET
	double                                             last_uncloak_time;                                        // 0x25C0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              cloak_Cooldown;                                           // 0x25C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Thornmail_Damage;                                         // 0x25CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              thornmail_roar_buff_damage_multiplier;                    // 0x25D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x25D4(0x0004) MISSED OFFSET
	class UClass*                                      thornmail_poison_buff;                                    // 0x25D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaCost_Camo_Start;                                   // 0x25E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaCost_Camo__over_time_;                             // 0x25E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      LowStaminaMessage_Camo;                                   // 0x25E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundCue*                                   Ref_CamoSFX_Out;                                          // 0x25F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Ref_CamoSFX_In;                                           // 0x2600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CamoIneffectivenessRange___should_show_up_to_enemies_within_this_range,_but_not_implemented_yet;// 0x2608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              aoe_cloak_radius;                                         // 0x260C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      stealth_vision_buff___detects_low_health_targets;         // 0x2610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoarCameraShake_Scale;                                    // 0x2618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoarCameraShake_Speed;                                    // 0x261C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldPlayNaturalSleepAnims;                             // 0x2620(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWakeUpWhenDamaged;                                       // 0x2621(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AwakeOnTouched;                                           // 0x2622(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreWakeOnTouchFromAllies;                              // 0x2623(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ResetTorporOnWake;                                        // 0x2624(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoTorporOutAtNightStart;                                // 0x2625(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWasAlertedWhileSleeping;                                 // 0x2626(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWakeUpWhenStructureBuiltNearby;                          // 0x2627(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StructurePlacementDetectionRadius;                        // 0x2628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowSleepingOnDynamicActors;                            // 0x262C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDaytime;                                               // 0x262D(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreventRiding;                                           // 0x262E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForcePreventNocturnalLogic;                              // 0x262F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_NocturnalStateLock>                  NocturnalStateLock;                                       // 0x2630(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x2631(0x0003) MISSED OFFSET
	float                                              currentSleepDebt;                                         // 0x2634(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              sleepDebtMultiplier_Add;                                  // 0x2638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sleepDebtMultiplier_Reduce;                               // 0x263C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sleepDebtDeprivationLimit;                                // 0x2640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sleepDebt_MAX;                                            // 0x2644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             lastTimerServerTickTime;                                  // 0x2648(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreventSleepingWithValidTarget;                          // 0x2650(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventSleepWhenFollowing;                               // 0x2651(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x6];                                       // 0x2652(0x0006) MISSED OFFSET
	TArray<class UClass*>                              BuffsToAdd_Day;                                           // 0x2658(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              BuffsToAdd_Night;                                         // 0x2668(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	double                                             lastSleepStartTime;                                       // 0x2678(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             lastValidTargetTime;                                      // 0x2680(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WakeUpDuration;                                           // 0x2688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x268C(0x0004) MISSED OFFSET
	double                                             lastSleepEndTime;                                         // 0x2690(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SleepingBuff;                                             // 0x2698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NaturalSleepCheckDeltaTime;                               // 0x26A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x26A4(0x0004) MISSED OFFSET
	class APrimalDinoAIController*                     Ref_DinoController;                                       // 0x26A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UDinoBlueprintBase_RootBoneName_C*           Ref_AnimBP;                                               // 0x26B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallAsleepCooldownTime_Current;                           // 0x26B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallAsleepCooldownTime_Normal;                            // 0x26BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Sleep_During_Day_Montage;                                 // 0x26C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       NaturalSleepAnimLoopSectionName;                          // 0x26C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                NaturalWakingMontage_Relaxed;                             // 0x26D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                NaturalWakingMontage_Alert;                               // 0x26D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_StartledAnim;                                         // 0x26E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_PoopAnim;                                             // 0x26E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_EatAnim;                                              // 0x26F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallAsleepCooldownTime_Alerted;                           // 0x26F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallAsleepCooldownTime_PostTarget;                        // 0x26FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallAsleepCooldownTime_PostRidden;                        // 0x2700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x2704(0x0004) MISSED OFFSET
	double                                             lastRiddenTime;                                           // 0x2708(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADayCycleManager*                            Ref_DayCycleManager;                                      // 0x2710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              sleepingWaterSubmergedDepthThreshold;                     // 0x2718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               use_sleeping_stuff;                                       // 0x271C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x271D(0x0003) MISSED OFFSET
	int                                                left_click_attack_index;                                  // 0x2720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               uses_sleep_debt;                                          // 0x2724(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               can_sleep_when_tame;                                      // 0x2725(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x2];                                       // 0x2726(0x0002) MISSED OFFSET
	double                                             lastTimeWasFed;                                           // 0x2728(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              tamingCooldown;                                           // 0x2730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              tamePowerToLosePerSecondAfterCooldown;                    // 0x2734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              minTamePower;                                             // 0x2738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              affinityPerFishPercent_min;                               // 0x273C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              affinityPerFishFixedAmount_min;                           // 0x2740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              dino_size_that_wakes_them_regardless_of_angle;            // 0x2744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              duration_after_anim_in_dino_is_truely_awake;              // 0x2748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              delay_before_waking_up_other_pack_dinos;                  // 0x274C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              distance_restriction_for_waking_up_nearby_pack_dinos;     // 0x2750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x2754(0x0004) MISSED OFFSET
	class AActor*                                      Current_Big_Spacebar_Leap_Target;                         // 0x2758(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              Big_Spacebar_Leap_target_vertical_radius_height_distance_min;// 0x2760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              duration_in_which_Big_Spacebar_Leap_has_no_collision;     // 0x2764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              angle_in_which_a_Big_Spacebar_Leap_target_might_be_selected;// 0x2768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               awaiting_target_team_set;                                 // 0x276C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x276D(0x0003) MISSED OFFSET
	float                                              max_Big_Spacebar_Leap_grab_drag_weight;                   // 0x2770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x2774(0x0004) MISSED OFFSET
	class UClass*                                      carry_buff;                                               // 0x2778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             Big_Spacebar_LeapEndTime;                                 // 0x2780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             Big_Spacebar_LeapStartTime;                               // 0x2788(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxBig_Spacebar_LeapTime;                                 // 0x2790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     currentBig_Spacebar_LeapVector;                           // 0x2794(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Big_Spacebar_LeapNoRiderHomingIntensity;                  // 0x27A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Big_Spacebar_LeapTraceLength;                             // 0x27A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Big_Spacebar_LeapTraceSize;                               // 0x27A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              last_set_Big_Spacebar_Leap_velocity;                      // 0x27AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_PredatorClimbingState>               CurrentClimbingState;                                     // 0x27B0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_PredatorClimbingState>               PreviousClimbingState;                                    // 0x27B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x2];                                       // 0x27B2(0x0002) MISSED OFFSET
	float                                              GravityScale_Pouncing_for_Big_Spacebar_Leap;              // 0x27B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              targetTPVCameraOffsetX;                                   // 0x27B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Big_Spacebar_LeapTPVCameraOffsetX;                        // 0x27BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_HurtMontage;                                          // 0x27C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbingDesyncOverride;                                   // 0x27C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimerInterval_Pouncing_for_Big_Spacebar_Leap;             // 0x27CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaCost_Big_Spacebar_Leap;                            // 0x27D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowPlayLandingAnim;                                    // 0x27D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x27D5(0x0003) MISSED OFFSET
	class UAnimMontage*                                Ref_LandingMontage;                                       // 0x27D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanCheckAnims;                                           // 0x27E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x27E1(0x0003) MISSED OFFSET
	struct FVector                                     meshTargetLocation;                                       // 0x27E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMeshInterpolating;                                       // 0x27F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x27F1(0x0003) MISSED OFFSET
	float                                              meshInterpSpeed_location;                                 // 0x27F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              meshInterpSpeed_rotation;                                 // 0x27F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    meshTargetRotation;                                       // 0x27FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TPVCameraOffsetInterpSpeed;                               // 0x2808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fallback_Big_Spacebar_Leap_velocity;                      // 0x280C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Big_Spacebar_Leap_target_horizontal_radius_distance_min;  // 0x2810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Number_Of_Max_Big_Spacebar_Leap_Charges;                  // 0x2814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Current_Big_Spacebar_Leap_Charge;                         // 0x2818(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              No_Big_Spacebar_Leap_Target_Cooldown;                     // 0x281C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Duration_To_Remove_Big_Spacebar_Leap_Friction;            // 0x2820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Post_Big_Spacebar_Leap_Reduced_Frction;                   // 0x2824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_holding_Big_Spacebar_Leap_Charge;                      // 0x2828(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x3];                                       // 0x2829(0x0003) MISSED OFFSET
	float                                              Low_Gravity_Timeout_Duration;                             // 0x282C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               successfully_grabbed_something_before_landing;            // 0x2830(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0x2831(0x0003) MISSED OFFSET
	float                                              Min_Charge_Big_Spacebar_Leap_Strength;                    // 0x2834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Max_Charge_Big_Spacebar_Leap_Strength;                    // 0x2838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_midair_Big_Spacebar_Leap;                              // 0x283C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Has_turned_around_Once_During_This_Big_Spacebar_Leap;     // 0x283D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               refill_all_Big_Spacebar_Leap_charges_at_once;             // 0x283E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData32[0x1];                                       // 0x283F(0x0001) MISSED OFFSET
	float                                              no_Big_Spacebar_Leap_timer_server_min;                    // 0x2840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              no_Big_Spacebar_Leap_timer_server_max;                    // 0x2844(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              max_velocity_before_air_friction;                         // 0x2848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              air_friction_multiplier;                                  // 0x284C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Charge_Big_Spacebar_Leap_Anim;                            // 0x2850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Release_Big_Spacebar_Leap_Anim;                           // 0x2858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Turn_In_Place_When_Charging_Big_Spacebar_Leap;            // 0x2860(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData33[0x7];                                       // 0x2861(0x0007) MISSED OFFSET
	TArray<class APrimalCharacter*>                    Big_Spacebar_Leap_Hit_Dinos;                              // 0x2868(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              Big_Spacebar_Leap_target_horizontal_radius_distance_max;  // 0x2878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Big_Spacebar_Leap_target_vertical_radius_height_distance_max;// 0x287C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              angle_in_which_a_Big_Spacebar_Leap_target_might_be_selected_smaller;// 0x2880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Max_drag_weight_for_invisibility__anything_larger_cant_camo;// 0x2884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             last_secondary_roar_time;                                 // 0x2888(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              secondary_roar_cooldown;                                  // 0x2890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              cooldown_before_secondary_roars_begin;                    // 0x2894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              secondary_roar_radius;                                    // 0x2898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              secondary_roar_forward_offset;                            // 0x289C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Secondary_Roar_Buff;                                      // 0x28A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Enter_Cloak_Anim;                                         // 0x28A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Exit_Cloak_Anim;                                          // 0x28B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Roar_Anim;                                                // 0x28B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Encourage_Anim;                                           // 0x28C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             RoarAOE;                                                  // 0x28C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              while_charging_Big_Spacebar_Leap_distance_to_check_for_enemy_target;// 0x28D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     extra_height_to_launch_during_Big_Spacebar_Leap_direction_that_isnt_forward;// 0x28D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              extra_height_to_launch_during_Big_Spacebar_Leap_direction_that_isnt_forward_pow;// 0x28E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData34[0x4];                                       // 0x28E4(0x0004) MISSED OFFSET
	class UClass*                                      build_up_Big_Spacebar_Leap_camera_shake;                  // 0x28E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      roar_camera_shake;                                        // 0x28F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      release_Big_Spacebar_Leap_camera_shake;                   // 0x28F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Big_Spacebar_Leap_speedlines_buff;                        // 0x2900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             Last_Time_Released_Big_Spacebar_Leap;                     // 0x2908(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             Last_Time_Entered_Or_Exited_Cloak;                        // 0x2910(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              enter_or_exit_cloak_anim_movement_restriction_time;       // 0x2918(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              roar_movement_restriction_time;                           // 0x291C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Big_Spacebar_Leap_Land_Anim;                              // 0x2920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     downward_launch_vector_on_Big_Spacebar_Leap_hit;          // 0x2928(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              cone_trace_Big_Spacebar_Leap_target_half_angle;           // 0x2934(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             Last_Attack_Swipe_Time;                                   // 0x2938(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              swipe_attack_movement_restriction_time;                   // 0x2940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               disable_all_input_while_awaiting_jump;                    // 0x2944(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData35[0x3];                                       // 0x2945(0x0003) MISSED OFFSET
	float                                              bite_attack_finisher_movement_restriction_time;           // 0x2948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData36[0x4];                                       // 0x294C(0x0004) MISSED OFFSET
	double                                             Last_Attack_Bite_Finisher_Time;                           // 0x2950(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               expend_combo_count_only_upon_hitting_finisher_and_not_on_a_miss;// 0x2958(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData37[0x3];                                       // 0x2959(0x0003) MISSED OFFSET
	float                                              min_FOV_for_when_building_up_Big_Spacebar_Leap;           // 0x295C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              last_set_fov;                                             // 0x2960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Combo_Reset_Timer_Duration__at_full_combo_;               // 0x2964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      max_combo_bite_target_debuff_female;                      // 0x2968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      max_combo_bite_target_debuff_male;                        // 0x2970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Amount_Of_Combo_Meter_To_Add_On_Melee_Hit;                // 0x2978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              temp_saved_falling_blend_in_time;                         // 0x297C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           normal_idle_anim;                                         // 0x2980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           normal_walk_fwd_anim;                                     // 0x2988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           normal_walk_lft_anim;                                     // 0x2990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           normal_walk_rit_anim;                                     // 0x2998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           stealth_idle_anim;                                        // 0x29A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           stealth_walk_fwd_anim;                                    // 0x29A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           stealth_walk_lft_anim;                                    // 0x29B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           stealth_walk_rit_anim;                                    // 0x29B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           At_Max_Combo_Idle_anim;                                   // 0x29C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Main_Cloak_Buff;                                          // 0x29C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NOTE__Edit_Visual_Detection_Sphere_Component_Sphere_Radius_to_adjust_sleep_detection_radius;// 0x29D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NOTE__Edit_Visual_Detection_Angle_Component_to_adjust_sleep_detection_Angle_In_Front;// 0x29D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NOTE__Camo_rate_and_color_set_within_the_main_buff;       // 0x29D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               has_initiated_natural_sleep_anim;                         // 0x29D3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData38[0x4];                                       // 0x29D4(0x0004) MISSED OFFSET
	class UAnimMontage*                                closed_eye_anim;                                          // 0x29D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               pick_a_fallback_Big_Spacebar_Leap_target;                 // 0x29E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData39[0x3];                                       // 0x29E1(0x0003) MISSED OFFSET
	float                                              clientside_check_for_Big_Spacebar_Leap_target_radius;     // 0x29E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           sleep_idle_anim;                                          // 0x29E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Big_Spacebar_Leap_anticipation_up_idle;                   // 0x29F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Big_Spacebar_Leap_anticipation_forward_idle;              // 0x29F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Bite_Camera_Shake_Class;                                  // 0x2A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Bite_Camera_Shake_Scale__Max_Combo_;                      // 0x2A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Bite_Camera_Shake_Scale;                                  // 0x2A0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Bite_Camera_Shake_Play_Rate__Max_Combo_;                  // 0x2A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Bite_Camera_Shake_Play_Rate;                              // 0x2A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Max_Combo_Bite_Blood_Spurt_VFX;                           // 0x2A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Melee_Swipes_Camera_Shake_Class;                          // 0x2A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Melee_Swipes_Camera_Shake_Scale;                          // 0x2A28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Melee_Swipes_Camera_Shake_Play_Rate;                      // 0x2A2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     max_combo_bite_blood_spurt_relative_scale;                // 0x2A30(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Time_At_The_Start_Of_The_Max_Combo_Bit_To_Start_Increasing_FOV;// 0x2A3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Amount_Of_FOV_to_increase_on_start_of_max_combo_bite_anim;// 0x2A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              duration_to_return_FOV_back_to_normal_after_bite_finisher_FOV;// 0x2A44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      no_mate_boost_notification;                               // 0x2A48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Queue_Up__mid_air_turn__after_hitting_the_target;         // 0x2A58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               has_hit_Big_Spacebar_Leap_target;                         // 0x2A59(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData40[0x2];                                       // 0x2A5A(0x0002) MISSED OFFSET
	float                                              speed_at_which_to_travel_to_the_other_side_of_the_target_on_Big_Spacebar_Leap;// 0x2A5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Big_Spacebar_LeapTargetLocation;                          // 0x2A60(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     desired_end_Big_Spacebar_Leap_location;                   // 0x2A6C(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     start_Big_Spacebar_Leap_location;                         // 0x2A78(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              extra_distance_from_Big_Spacebar_Leap_target_at_which_point_to_halt;// 0x2A84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              has_target_min_Big_Spacebar_Leap_velocity;                // 0x2A88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              has_target_max_Big_Spacebar_Leap_velocity;                // 0x2A8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              has_target_min_Big_Spacebar_Leap_considered_distance_for_calc;// 0x2A90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              has_target_max_Big_Spacebar_Leap_considered_distance_for_calc;// 0x2A94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               play_turnaround_anim_once;                                // 0x2A98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData41[0x7];                                       // 0x2A99(0x0007) MISSED OFFSET
	class UAnimMontage*                                impact_turnaround_anim;                                   // 0x2AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              min_distance_for_being_able_to_hit_and_go_on_the_other_side_of_the_character;// 0x2AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     saved_velocity_for_turnaround;                            // 0x2AAC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               disable_cloak_when_entering_water;                        // 0x2AB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               can_Big_Spacebar_Leap_underwater;                         // 0x2AB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData42[0x6];                                       // 0x2ABA(0x0006) MISSED OFFSET
	class UAnimMontage*                                swim_Big_Spacebar_Leap_anim_montage;                      // 0x2AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               started_Big_Spacebar_Leap_in_water;                       // 0x2AC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData43[0x3];                                       // 0x2AC9(0x0003) MISSED OFFSET
	float                                              last_rot_for_water_Big_Spacebar_Leap_blending;            // 0x2ACC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Min_Charge_Big_Spacebar_Leap_Strength__in_water_;         // 0x2AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Max_Charge_Big_Spacebar_Leap_Strength__in_water_;         // 0x2AD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              swim_Big_Spacebar_Leap_lerp_alpha;                        // 0x2AD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               allow_Big_Spacebar_Leap_pitch_changes;                    // 0x2ADC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData44[0x3];                                       // 0x2ADD(0x0003) MISSED OFFSET
	float                                              max_Big_Spacebar_Leap_cooldown;                           // 0x2AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              min_Big_Spacebar_Leap_cooldown;                           // 0x2AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               pressing_Big_Spacebar_Leap_again_in_the_air_will_turn_around;// 0x2AE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               has_slowed_down_during_Big_Spacebar_Leap;                 // 0x2AE9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData45[0x2];                                       // 0x2AEA(0x0002) MISSED OFFSET
	float                                              Amount_of_FOV_to_increase_on_Big_Spacebar_Leap;           // 0x2AEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              time_to_blend_fov_back_after_Big_Spacebar_Leap;           // 0x2AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              clientside_saved_delta;                                   // 0x2AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              max_combo_flashing_speed;                                 // 0x2AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                MaxComboCrosshairColor1;                                  // 0x2AFC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                MaxComboCrosshairColor2;                                  // 0x2B0C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                combo_progress_meter_color_non_max;                       // 0x2B1C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                crosshair_color_when_you_have_a_target_non_max_combo;     // 0x2B2C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                crosshair_color_when_you_dont_have_target;                // 0x2B3C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              full_combo_Big_Spacebar_Leap_hit_multiplier;              // 0x2B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     saved_pre_hitstop_velocity;                               // 0x2B50(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         saved_pre_hitstop_movement_mode;                          // 0x2B5C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData46[0x3];                                       // 0x2B5D(0x0003) MISSED OFFSET
	float                                              Big_Spacebar_Leap_hitstop;                                // 0x2B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Big_Spacebar_Leap_hitstop_at_max_combo;                   // 0x2B64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              delay_between_max_combo_Big_Spacebar_Leap_hitstop_hits;   // 0x2B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData47[0x4];                                       // 0x2B6C(0x0004) MISSED OFFSET
	class UClass*                                      Max_Combo_Big_Spacebar_Leap_Camera_Shake_Class;           // 0x2B70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Max_Combo_Big_Spacebar_Leap_Camera_Shake_Scale;           // 0x2B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Max_Combo_Big_Spacebar_Leap_Camera_Shake_Play_Rate;       // 0x2B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               automatically_land_behind_target_when_Big_Spacebar_Leap_forward;// 0x2B80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               has_increased_FOV_from_Big_Spacebar_Leap;                 // 0x2B81(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData48[0x2];                                       // 0x2B82(0x0002) MISSED OFFSET
	float                                              absolute_last_set_fov;                                    // 0x2B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseBig_Spacebar_LeapFoliageDamage;                       // 0x2B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData49[0x4];                                       // 0x2B8C(0x0004) MISSED OFFSET
	class UClass*                                      Big_Spacebar_LeapFoliageDamageType;                       // 0x2B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SuperBig_Spacebar_LeapBlinkColor;                         // 0x2B98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowExtendedInfo;                                         // 0x2BA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData50[0x3];                                       // 0x2BA9(0x0003) MISSED OFFSET
	float                                              Big_Spacebar_Leap_Charge_Percentage_Needed_to_Destroy_Foliage;// 0x2BAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Last_Big_Spacebar_Leap_Charge_Percentage;                 // 0x2BB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Big_Spacebar_Leap_destroy_foliage_trace_length;           // 0x2BB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     replicated_loc;                                           // 0x2BB8(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              position_sync_lerp_rate;                                  // 0x2BC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              Recently_Max_Combo_Attacked_Characters;                   // 0x2BC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              lerped_displayed_current_combo_count_for_hud;             // 0x2BD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              combo_count_hud_lerp_rate;                                // 0x2BDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              current_lerp_step_increment;                              // 0x2BE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               incremental_combo_lerp;                                   // 0x2BE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData51[0x3];                                       // 0x2BE5(0x0003) MISSED OFFSET
	class UParticleSystem*                             max_combo_kill_particle_template;                         // 0x2BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      lionfish_histop_buff;                                     // 0x2BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_mid_max_combo_Big_Spacebar_Leap_hitstop;               // 0x2BF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               initiated_max_combo_Big_Spacebar_Leap;                    // 0x2BF9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_mid_other_hitstop;                                     // 0x2BFA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               debug_output_stuff;                                       // 0x2BFB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Synced_Right;                                             // 0x2BFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Big_Spacebar_Leap_Aerial_Rotation_Rate;                   // 0x2C00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              time_threshold_for_holding_jump_to_determine_if_it_s_a_jump_or_Big_Spacebar_Leap;// 0x2C04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              time_threshold_for_holding_jump_to_determine_if_it_s_a_held_teleport;// 0x2C08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Teleport_Attack_Index;                                    // 0x2C0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               can_teleport_underwater;                                  // 0x2C10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData52[0x3];                                       // 0x2C11(0x0003) MISSED OFFSET
	float                                              Current_Teleport_Charge;                                  // 0x2C14(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Teleport_Cooldown;                                        // 0x2C18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData53[0x4];                                       // 0x2C1C(0x0004) MISSED OFFSET
	double                                             Last_Time_Released_Teleport;                              // 0x2C20(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             begin_teleport_charge_time;                               // 0x2C28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Currently_Charging_Teleport;                           // 0x2C30(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData54[0x3];                                       // 0x2C31(0x0003) MISSED OFFSET
	int                                                Number_Of_Max_Teleport_Charges;                           // 0x2C34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              possible_teleport_targets;                                // 0x2C38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                current_teleport_target_index;                            // 0x2C48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              teleport_sphere_radius;                                   // 0x2C4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              teleport_attack_range_horizontal;                         // 0x2C50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    last_saved_camera_rot_before_charging_teleport;           // 0x2C54(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              selected_teleport_targets;                                // 0x2C60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector                                     saved_teleport_trace_sphere_location;                     // 0x2C70(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              time_between_adding_new_teleport_targets;                 // 0x2C7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               wait_a_bit_before_adding_the_first_teleport_target;       // 0x2C80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData55[0x7];                                       // 0x2C81(0x0007) MISSED OFFSET
	TArray<class AActor*>                              selected_teleport_targets_sorted_by_distance;             // 0x2C88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                      teleport_attack_damage_class;                             // 0x2C98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              teleport_attack_base_damage;                              // 0x2CA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              delay_before_jumping_to_next_teleport_target;             // 0x2CA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAnimMontage*>                        Teleport_Attack_Montages;                                 // 0x2CA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                current_teleport_attack_index;                            // 0x2CB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               more_like_TP_wolf;                                        // 0x2CBC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData56[0x3];                                       // 0x2CBD(0x0003) MISSED OFFSET
	TArray<class AActor*>                              try_again_teleport_targets;                               // 0x2CC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                      teleport_attack_camera_shake;                             // 0x2CD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              teleport_attack_camera_shake_scale;                       // 0x2CD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              teleport_attack_camera_shake_speed;                       // 0x2CDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               do_damage_on_Big_Spacebar_Leap;                           // 0x2CE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               do_max_combo_Big_Spacebar_Leap;                           // 0x2CE1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_there_an_enemy_in_range_to_teleport_attack;            // 0x2CE2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData57[0x5];                                       // 0x2CE3(0x0005) MISSED OFFSET
	class FString                                      teleport_hud_elem_title;                                  // 0x2CE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               refill_all_teleport_charges_at_once;                      // 0x2CF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mid_teleport_attack;                                      // 0x2CF9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData58[0x2];                                       // 0x2CFA(0x0002) MISSED OFFSET
	float                                              Teleport_Cooldown_Min__1_target_;                         // 0x2CFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Teleport_Cooldown_Target_Count_Time_Multiplier__number_of_sec_added_per_target_;// 0x2D00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              radius_trace_for_blocked_stationary_objects_for_teleport_attack;// 0x2D04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               set_invisible_during_teleport_attack_to_all_but_rider;    // 0x2D08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData59[0x3];                                       // 0x2D09(0x0003) MISSED OFFSET
	float                                              move_between_targets_play_rate;                           // 0x2D0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               skip_movement_between_teleport_targets;                   // 0x2D10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData60[0x3];                                       // 0x2D11(0x0003) MISSED OFFSET
	struct FLinearColor                                multiple_targets_available_color;                         // 0x2D14(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                single_target_available_color;                            // 0x2D24(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              tele_on_cooldown_alpha;                                   // 0x2D34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             time_since_started_charging_teleport;                     // 0x2D38(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              straight_line_teleport_detection___duration_to_pick_up_teleport_targets;// 0x2D40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              straight_line_teleport_detection___detection_radius_to_detect_teleport_targets;// 0x2D44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               use_straight_line_teleport_detection;                     // 0x2D48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData61[0x7];                                       // 0x2D49(0x0007) MISSED OFFSET
	class APrimalCharacter*                            latest_quickteleport_target;                              // 0x2D50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                no_tele_targets_grey_color;                               // 0x2D58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Min_FOV_For_When_Building_Up_Tele;                        // 0x2D68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData62[0x4];                                       // 0x2D6C(0x0004) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            dynamic_mats;                                             // 0x2D70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               is_in_probably_final_teleport;                            // 0x2D80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData63[0x3];                                       // 0x2D81(0x0003) MISSED OFFSET
	struct FVector                                     last_camera_loc;                                          // 0x2D84(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              camera_lerp_during_tele_attack;                           // 0x2D90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mat_invisibility_param_max;                               // 0x2D94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Teleport_Cooldown_Max__clamp_;                            // 0x2D98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData64[0x4];                                       // 0x2D9C(0x0004) MISSED OFFSET
	class USkeletalMesh*                               female_skeletal_mesh;                                     // 0x2DA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              tele_attack_recloak_rate;                                 // 0x2DA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              tele_attack_uncloak_rate;                                 // 0x2DAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              time_treshold_for_determining_left_click_held_bite;       // 0x2DB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Bite_Finisher_Attack_Index;                               // 0x2DB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Regular_Bite_Attack_Index;                                // 0x2DB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Attack_Combo_Value;                                       // 0x2DBC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              saved_combo_value_for_damage;                             // 0x2DC0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              amount_of_combo_value_to_add_on_teleport_hit;             // 0x2DC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              level_88_teleport_stun_duration;                          // 0x2DC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              min_possible_teleport_stun_duration;                      // 0x2DCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               has_spawned_armor;                                        // 0x2DD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData65[0x7];                                       // 0x2DD1(0x0007) MISSED OFFSET
	class UClass*                                      LevelScaledArmorSaddle;                                   // 0x2DD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPrimalItem*                                 Armor_Ref;                                                // 0x2DE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Min_Possible_Natural_Armor_Value;                         // 0x2DE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Level_88_Natural_Armor_Value;                             // 0x2DEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              half_leg_length_while_attacking;                          // 0x2DF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              half_leg_length_when_not_attacking;                       // 0x2DF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_playing_stealth_in_anim;                               // 0x2DF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData66[0x7];                                       // 0x2DF9(0x0007) MISSED OFFSET
	class UCurveVector*                                Sleep_Schedule_Curve_Vector;                              // 0x2E00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                taming_feed_multiuse_index;                               // 0x2E08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              regular_blend_out_time;                                   // 0x2E0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      wait_string__for_feeding_;                                // 0x2E10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      to_feed_string__for_feeding_;                             // 0x2E20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      cannot_feed_string;                                       // 0x2E30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      is_not_sleeping_string;                                   // 0x2E40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      you_must_be_crouched_string;                              // 0x2E50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      must_not_be_knocked_out_string;                           // 0x2E60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      hast_aggro_string;                                        // 0x2E70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      must_not_be_running_string;                               // 0x2E80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      must_not_be_swimming_string;                              // 0x2E90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              restriction_on_tamed_sleeping,_time_after_last_action;    // 0x2EA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData67[0x4];                                       // 0x2EA4(0x0004) MISSED OFFSET
	class FString                                      feed_when_asleep_to_tame_string;                          // 0x2EA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             cloaked_footstep_vfx;                                     // 0x2EB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                is_sleeping_state;                                        // 0x2EC0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     teleport_loc;                                             // 0x2EC4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>                       teleport_line_trace_check_channel_for_tek_shield;         // 0x2ED0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData68[0x3];                                       // 0x2ED1(0x0003) MISSED OFFSET
	struct FVector                                     location_before_releasing_teleport;                       // 0x2ED4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               has_exited_the_water_some_time_during_the_Big_Spacebar_Leap;// 0x2EE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData69[0x7];                                       // 0x2EE1(0x0007) MISSED OFFSET
	class UClass*                                      HelperBuff;                                               // 0x2EE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                wild_tele_attack_index;                                   // 0x2EF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              daytime_start_hour;                                       // 0x2EF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              nighttime_start_hour;                                     // 0x2EF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              frequency_to_check_if_seen;                               // 0x2EFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               show_debug_sleep_sphere;                                  // 0x2F00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               show_debug_cloaked_sphere;                                // 0x2F01(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData70[0x2];                                       // 0x2F02(0x0002) MISSED OFFSET
	float                                              increased_hieght_above_ground_to_check_for_blocking_structures_for_teleporting;// 0x2F04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               try_desync_fix;                                           // 0x2F08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData71[0x3];                                       // 0x2F09(0x0003) MISSED OFFSET
	struct FRotator                                    Saved_Control_Rot;                                        // 0x2F0C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              additional_prevention_for_quickly_going_to_sleep_after_waking_up_mildly;// 0x2F18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              interval_to_check_for_valid_quickteleport_targets_on_client;// 0x2F1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               adjust_torpidity_with_sleeping_mechanics;                 // 0x2F20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData72[0x3];                                       // 0x2F21(0x0003) MISSED OFFSET
	float                                              Big_Spacebar_Leap_Angle_to_count_as_a_vertical_leap;      // 0x2F24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_vertical_Big_Spacebar_Leap;                            // 0x2F28(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData73[0x7];                                       // 0x2F29(0x0007) MISSED OFFSET
	class UAnimMontage*                                upward_release_Big_Spacebar_Leap_anim;                    // 0x2F30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                vertical_additive_Big_Spacebar_Leap_down;                 // 0x2F38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                vertical_additive_Big_Spacebar_Leap_up;                   // 0x2F40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                horizontal_additive_Big_Spacebar_Leap_up;                 // 0x2F48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                horizontal_additive_Big_Spacebar_Leap_down;               // 0x2F50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Vertical_Big_Spacebar_Leap_land_anim_montage;             // 0x2F58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                vertical_Big_Spacebar_Leap_fall_fullbody_anim;            // 0x2F60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              vertical_velocity_threshold_to_detect_leap_parabola;      // 0x2F68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               use_separate_vertical_Big_Spacebar_Leap_anims;            // 0x2F6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData74[0x3];                                       // 0x2F6D(0x0003) MISSED OFFSET
	class UAnimMontage*                                swimming_hurt_anim;                                       // 0x2F70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Jump_Idle_Additive_Up;                                    // 0x2F78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Jump_Idle_Additive_Down;                                  // 0x2F80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              duration_to_flee_after_taming;                            // 0x2F88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              forced_sleep_time_after_fleeing_from_taming;              // 0x2F8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               should_cancel_fleeing_when_target_is_lost;                // 0x2F90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData75[0x3];                                       // 0x2F91(0x0003) MISSED OFFSET
	float                                              affinityPerFishPercent_max;                               // 0x2F94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              affinityPerFishFixedAmount_max;                           // 0x2F98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              wild_teleport_attack_interval;                            // 0x2F9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               use_separate_vertical_Big_Spacebar_Leap_falling_anim;     // 0x2FA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData76[0x3];                                       // 0x2FA1(0x0003) MISSED OFFSET
	float                                              Big_Spacebar_Leap_additive_lerp_blend_out_when_landing;   // 0x2FA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               use_separate_vertical_Big_Spacebar_Leap_landing_anim;     // 0x2FA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData77[0x3];                                       // 0x2FA9(0x0003) MISSED OFFSET
	int                                                color_region_to_determine_VFX_color;                      // 0x2FAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              cloak_playrate;                                           // 0x2FB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              uncloak_playrate;                                         // 0x2FB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Blood_Position_Offset_Amount;                             // 0x2FB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData78[0x4];                                       // 0x2FBC(0x0004) MISSED OFFSET
	class UAnimMontage*                                Big_Spacebar_Leap_loop_anim_montage;                      // 0x2FC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     distance_check_for_ground_under_target_for_flame_trail_vfx;// 0x2FC8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData79[0x4];                                       // 0x2FD4(0x0004) MISSED OFFSET
	class UParticleSystem*                             Flame_Trail_VFX_Particle;                                 // 0x2FD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             general_max_combo_finisher_hit_vfx;                       // 0x2FE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             general_non_max_combo_finisher_hit_vfx;                   // 0x2FE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             single_fire_underwater_Big_Spacebar_Leap_vfx;             // 0x2FF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Big_Spacebar_Leap_into_water_splash_vfx;                  // 0x2FF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             single_fire_ground_big_spacebar_leap_particle;            // 0x3000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Max_Possible_Teleport_Stun_Duration;                      // 0x3008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                teleport_target_count_for_min_stun_duration;              // 0x300C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                teleport_target_count_for_max_stun_duration;              // 0x3010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Count_of_Teleport_Targets_Upon_Release;                   // 0x3014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      use_a_filled_basket_string;                               // 0x3018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              fish_size_requirement_to_give_large_affinity_amount;      // 0x3028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              cloaked_walk_speed_multiplier;                            // 0x302C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     debug_last_location;                                      // 0x3030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_holding_spacebar;                                      // 0x303C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData80[0x3];                                       // 0x303D(0x0003) MISSED OFFSET
	float                                              timeout_check_rate_for_detecting_if_spacebar_is_still_held_for_big_jump;// 0x3040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData81[0x4];                                       // 0x3044(0x0004) MISSED OFFSET
	class APlayerController*                           last_requesting_controller;                               // 0x3048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Wild_Inventory_Class;                                     // 0x3050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               client_holding_crouch_button;                             // 0x3058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData82[0x3];                                       // 0x3059(0x0003) MISSED OFFSET
	float                                              duration_to_show_targeting_indicator;                     // 0x305C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_solo_camo_active;                                      // 0x3060(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               clientside_detected_group_cloak_on;                       // 0x3061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               clientside_detected_solo_cloak_on;                        // 0x3062(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData83[0x1];                                       // 0x3063(0x0001) MISSED OFFSET
	float                                              interval_to_decrease_cloak_stamina;                       // 0x3064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AquaticBuffClass;                                         // 0x3068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              clamped_max_size_of_fish_for_maximum_bonus;               // 0x3070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Max_number_of_teleport_targets_allowed;                   // 0x3074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                debug_cheat_feed_small_fish;                              // 0x3078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               can_debug_cheat_feed;                                     // 0x307C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData84[0x3];                                       // 0x307D(0x0003) MISSED OFFSET
	int                                                debug_cheat_feed_large_fish;                              // 0x3080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                debug_cheat_feed_1_0_fish;                                // 0x3084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              interval_to_check_if_near_boss_dino;                      // 0x3088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              radius_to_check_if_near_boss_dino;                        // 0x308C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               on_adding_cloak,_check_for_boss_dino_and_dont_remove_targeting_dinos;// 0x3090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData85[0x3];                                       // 0x3091(0x0003) MISSED OFFSET
	struct FRotator                                    saved_control_rot_before_teleport;                        // 0x3094(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              landing_anim_IK_half_leg_length;                          // 0x30A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              lvl_88_feed_effectiveness_multiplier;                     // 0x30A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_mid_stealth_anim;                                      // 0x30A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               next_wakup_anim_should_be_startle;                        // 0x30A9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData86[0x2];                                       // 0x30AA(0x0002) MISSED OFFSET
	float                                              duration_to_lerp_camera_during_jump;                      // 0x30AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              camera_lerp_during_jump;                                  // 0x30B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     last_set_loc;                                             // 0x30B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              jumping_interp_speed;                                     // 0x30C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              jump_lerp_to_normal_alpha;                                // 0x30C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              jump_lerp_2;                                              // 0x30C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData87[0x4];                                       // 0x30CC(0x0004) MISSED OFFSET
	TArray<class UAnimMontage*>                        Teleport_Attack_Montages_Swim;                            // 0x30D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               awaiting_real_jump;                                       // 0x30E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               local_has_rider;                                          // 0x30E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_being_controlled_outside_of_rider;                     // 0x30E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData88[0x1];                                       // 0x30E3(0x0001) MISSED OFFSET
	struct FVector                                     pre_jump_loc;                                             // 0x30E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     pre_jump_view;                                            // 0x30F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              jump_view_lerp;                                           // 0x30FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Swimming_Stamina_Regen_Interval;                          // 0x3100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData89[0x4];                                       // 0x3104(0x0004) MISSED OFFSET
	double                                             Last_Time_Regened_Swimming_Stamina;                       // 0x3108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Swimming_Stamina_Regen_Amount;                            // 0x3110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData90[0x4];                                       // 0x3114(0x0004) MISSED OFFSET
	class UAnimMontage*                                Charge_Big_Spacebar_Leap_Anim_Swimming;                   // 0x3118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             DashLoopSoundComp;                                        // 0x3120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DashLoopSound;                                            // 0x3128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Cheats_Enabled;                                           // 0x3130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData91[0x3];                                       // 0x3131(0x0003) MISSED OFFSET
	float                                              grace_period_to_disallow_affinity_reset__after_sleep;     // 0x3134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalDinoCharacter*                        spawning_fish;                                            // 0x3138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AShooterPlayerController*                    PC_for_delay_fish_owner;                                  // 0x3140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                current_try_attempts;                                     // 0x3148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                allowed_retry_attempts;                                   // 0x314C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      _Localize__fish_is_too_small_string;                      // 0x3150(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               prevent_damage_mid_teleport;                              // 0x3160(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               slow_down_mid_leap;                                       // 0x3161(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData92[0x6];                                       // 0x3162(0x0006) MISSED OFFSET
	class FString                                      FCharacterString;                                         // 0x3168(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      TCharacterString;                                         // 0x3178(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              teleport_attack_range_vertical;                           // 0x3188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Min_fish_size_requirement__rounded___just_for_display_;   // 0x318C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Min_fish_size_requirement;                                // 0x3190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallFunc_Get_Teleport_Character_Octree_Overlap_Radius_ReturnValue;// 0x3194(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_target_location;                       // 0x3198(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Hitstop_Time;                          // 0x31A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Big_Spacebar_Leap_Strength_Percentage; // 0x31A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x31AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue;             // 0x31B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_Conv_IntToString_ReturnValue;                    // 0x31B8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue;                       // 0x31C8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               K2Node_CustomEvent_hidden;                                // 0x31D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData93[0x3];                                       // 0x31D9(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_playRate;                              // 0x31DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_dont_reverse_from_end;                 // 0x31E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData94[0x7];                                       // 0x31E1(0x0007) MISSED OFFSET
	class FString                                      CallFunc_Conv_BoolToString_ReturnValue;                   // 0x31E8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue2;                      // 0x31F8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Conv_FloatToString_ReturnValue;                  // 0x3208(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue3;                      // 0x3218(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue4;                      // 0x3228(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Conv_BoolToString_ReturnValue2;                  // 0x3238(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue5;                      // 0x3248(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue6;                      // 0x3258(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue7;                      // 0x3268(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x3278(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData95[0x3];                                       // 0x3279(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x327C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x3280(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData96[0x3];                                       // 0x3281(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x3284(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x3288(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData97[0x4];                                       // 0x3294(0x0004) MISSED OFFSET
	class FString                                      CallFunc_Concat_StrStr_ReturnValue8;                      // 0x3298(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x32A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue;                  // 0x32AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x32AD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData98[0x2];                                       // 0x32AE(0x0002) MISSED OFFSET
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x32B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode2;               // 0x32B4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x32B5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData99[0x2];                                       // 0x32B6(0x0002) MISSED OFFSET
	class UAnimMontage*                                CallFunc_GetCurrentMontage_ReturnValue;                   // 0x32B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimMontage_ReturnValue;                     // 0x32C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x32C4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData100[0x3];                                      // 0x32C5(0x0003) MISSED OFFSET
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x32C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode3;               // 0x32CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x32CD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode4;               // 0x32CE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum4_CmpSuccess;                            // 0x32CF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_is_falling_asleep;                     // 0x32D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_is_alerted;                            // 0x32D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData101[0x2];                                      // 0x32D2(0x0002) MISSED OFFSET
	float                                              CallFunc_PlayAnimMontage_ReturnValue2;                    // 0x32D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode5;               // 0x32D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum5_CmpSuccess;                            // 0x32D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData102[0x6];                                      // 0x32DA(0x0006) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x32E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x32E8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPrimalCharSwimming_ReturnValue;                // 0x32F4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPointUnderwater_ReturnValue;                   // 0x32F5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Is_Close_To_Ground_result;                       // 0x32F6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x32F7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         K2Node_Select_ReturnValue;                                // 0x32F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x32F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         K2Node_Select_ReturnValue2;                               // 0x32FA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select2_CmpSuccess;                                // 0x32FB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x32FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimInstance*                               CallFunc_GetAnimInstance_ReturnValue;                     // 0x3308(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_VectorVector_ReturnValue;               // 0x3310(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData103[0x7];                                      // 0x3311(0x0007) MISSED OFFSET
	class ULionfishLion_AnimBlueprint_Swimmable_C*     K2Node_DynamicCast_AsLionfishLion_AnimBlueprint_Swimmable_C;// 0x3318(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x3320(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x3321(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsWildSlow_ReturnValue;                          // 0x3322(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData104[0x1];                                      // 0x3323(0x0001) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x3324(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USceneComponent*                             CallFunc_K2_GetRootComponent_ReturnValue;                 // 0x3330(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue2;                // 0x3338(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData105[0x4];                                      // 0x3344(0x0004) MISSED OFFSET
	class USceneComponent*                             CallFunc_K2_GetRootComponent_ReturnValue2;                // 0x3348(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USceneComponent*                             CallFunc_K2_GetRootComponent_ReturnValue3;                // 0x3350(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsWildSlow_ReturnValue2;                         // 0x3358(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData106[0x3];                                      // 0x3359(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimMontage_ReturnValue3;                    // 0x335C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue;               // 0x3360(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue;                // 0x336C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x3378(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue2;              // 0x337C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue2;               // 0x3388(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_combo_value;                           // 0x3394(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_target_loc;                            // 0x3398(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_combo_count;                           // 0x33A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_VectorVector_ReturnValue;             // 0x33A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x33A9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_VectorVector_ReturnValue2;            // 0x33AA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue;               // 0x33AB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue2;            // 0x33AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData107[0x3];                                      // 0x33AD(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x33B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue3;                        // 0x33B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x33B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x33BC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue4;                // 0x33C8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x33D4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Divide_VectorFloat_ReturnValue;                  // 0x33E0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData108[0x4];                                      // 0x33EC(0x0004) MISSED OFFSET
	class FString                                      CallFunc_Concat_StrStr_ReturnValue9;                      // 0x33F0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     CallFunc_SelectVector_ReturnValue;                        // 0x3400(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData109[0x4];                                      // 0x340C(0x0004) MISSED OFFSET
	class FString                                      CallFunc_Concat_StrStr_ReturnValue10;                     // 0x3410(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue5;                // 0x3420(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x342C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x3438(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x3444(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Divide_VectorFloat_ReturnValue2;                 // 0x3450(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue6;                // 0x345C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VLerp_ReturnValue;                               // 0x3468(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x3474(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue3;                   // 0x3480(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_SelectVector_ReturnValue2;                       // 0x348C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue4;                        // 0x3498(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData110[0x4];                                      // 0x349C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x34A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue3;                // 0x34A8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue2;                         // 0x34B4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x34C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue3;                        // 0x34C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue3;                         // 0x34D0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData111[0x4];                                      // 0x34DC(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue4;                        // 0x34E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue5;                        // 0x34E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue3;                       // 0x34F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x34F4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue2;                     // 0x34F5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData112[0x2];                                      // 0x34F6(0x0002) MISSED OFFSET
	float                                              K2Node_CustomEvent_Synced_Right;                          // 0x34F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue4;                         // 0x34FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue6;                        // 0x3508(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue7;                        // 0x3510(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ALionfishLion_Character_BP_C*                CallFunc_Get_Default_Dino_ref;                            // 0x3518(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_is_max_combo_Teleport;                 // 0x3520(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Is_Quick_Tap_Teleport2;                // 0x3521(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x3522(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData113[0x5];                                      // 0x3523(0x0005) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue2;             // 0x3528(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue2;              // 0x3530(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData114[0x7];                                      // 0x3531(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue3;             // 0x3538(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_PredatorClimbingState>               K2Node_CustomEvent_NewState;                              // 0x3540(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData115[0x7];                                      // 0x3541(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_Array_Get_Item;                                  // 0x3548(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x3550(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData116[0x7];                                      // 0x3551(0x0007) MISSED OFFSET
	class APrimalBuff*                                 K2Node_CustomEvent_Buff;                                  // 0x3558(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetComponentScale_ReturnValue;                // 0x3560(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x356C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData117[0x3];                                      // 0x356D(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakVector_X;                                   // 0x3570(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x3574(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x3578(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x357C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x3580(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue3;                  // 0x3584(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_RestingDino_LionfishLion_C*            K2Node_DynamicCast_AsBuff_RestingDino_LionfishLion_C;     // 0x3588(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x3590(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData118[0x3];                                      // 0x3591(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_MakeVector_ReturnValue5;                         // 0x3594(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x35A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData119[0x3];                                      // 0x35A1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue2;               // 0x35A4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue;         // 0x35B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData120[0xF];                                      // 0x35B1(0x000F) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_K2_GetComponentToWorld_ReturnValue;              // 0x35C0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Location;                         // 0x35F0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BreakTransform_Rotation;                         // 0x35FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Scale;                            // 0x3608(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue2;        // 0x3614(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue3;        // 0x3615(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsWildSlow_ReturnValue3;                         // 0x3616(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData121[0x1];                                      // 0x3617(0x0001) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue2;            // 0x3618(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue3;            // 0x3620(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x3628(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData122[0x3];                                      // 0x3629(0x0003) MISSED OFFSET
	float                                              K2Node_InputAxisEvent_AxisValue;                          // 0x362C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x3630(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData123[0x7];                                      // 0x3631(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_ComponentBoundEvent_OtherActor;                    // 0x3638(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_ComponentBoundEvent_OtherComp;                     // 0x3640(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_ComponentBoundEvent_NormalImpulse;                 // 0x3648(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData124[0x4];                                      // 0x3654(0x0004) MISSED OFFSET
	struct FHitResult                                  K2Node_ComponentBoundEvent_Hit;                           // 0x3658(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x36E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x36E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData125[0x3];                                      // 0x36E9(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_Delay;                                 // 0x36EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_delay2;                                // 0x36F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue;                    // 0x36F4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bIsActive;                             // 0x36F5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData126[0x2];                                      // 0x36F6(0x0002) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue;                             // 0x36F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_LFLAqua_C*                             K2Node_DynamicCast_AsBuff_LFLAqua_C;                      // 0x3700(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x3708(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_ResetBuffStart_ReturnValue;                      // 0x3709(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData127[0x2];                                      // 0x370A(0x0002) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_NewParam;                              // 0x370C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              K2Node_MakeArray_Array;                                   // 0x3718(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FHitResult                                  CallFunc_CapsuleTraceSingle_NEW_OutHit;                   // 0x3728(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_CapsuleTraceSingle_NEW_ReturnValue;              // 0x37B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData128[0x3];                                      // 0x37B1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetWorldLocation_ReturnValue;                    // 0x37B4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetWorldLocation_ReturnValue2;                   // 0x37C0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X2;                                  // 0x37CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y2;                                  // 0x37D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z2;                                  // 0x37D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X3;                                  // 0x37D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y3;                                  // 0x37DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z3;                                  // 0x37E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Lerp_ReturnValue;                                // 0x37E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X4;                                  // 0x37E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y4;                                  // 0x37EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z4;                                  // 0x37F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue6;                         // 0x37F4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VLerp_ReturnValue2;                              // 0x3800(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_start_loc;                             // 0x380C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_end_loc;                               // 0x3818(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_probably_final_teleport;               // 0x3824(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_turn_around;                           // 0x3825(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData129[0x2];                                      // 0x3826(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_GetWorldLocation_ReturnValue3;                   // 0x3828(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_TeleportTo_ReturnValue;                       // 0x3834(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData130[0x3];                                      // 0x3835(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue4;                   // 0x3838(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue5;                   // 0x3844(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetGroundLocation_theGroundLoc;                  // 0x3850(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetGroundLocation_ReturnValue;                   // 0x385C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData131[0x3];                                      // 0x385D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetGroundLocation_theGroundLoc2;                 // 0x3860(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetGroundLocation_ReturnValue2;                  // 0x386C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData132[0x3];                                      // 0x386D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue6;                   // 0x3870(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue7;                   // 0x387C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue8;                   // 0x3888(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData133[0x4];                                      // 0x3894(0x0004) MISSED OFFSET
	struct FHitResult                                  CallFunc_VTraceSingleBP_OutHit;                           // 0x3898(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_VTraceSingleBP_ReturnValue;                      // 0x3920(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData134[0x7];                                      // 0x3921(0x0007) MISSED OFFSET
	struct FHitResult                                  CallFunc_VTraceSingleBP_OutHit2;                          // 0x3928(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_VTraceSingleBP_ReturnValue2;                     // 0x39B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData135[0x3];                                      // 0x39B1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_BreakHitResult_Location;                         // 0x39B4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal;                           // 0x39C0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint;                      // 0x39CC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal;                     // 0x39D8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData136[0x4];                                      // 0x39E4(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat;                          // 0x39E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor;                         // 0x39F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent;                     // 0x39F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName;                      // 0x3A00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem;                          // 0x3A08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit;                      // 0x3A0C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData137[0x3];                                      // 0x3A0D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_BreakHitResult_Location2;                        // 0x3A10(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal2;                          // 0x3A1C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint2;                     // 0x3A28(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal2;                    // 0x3A34(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat2;                         // 0x3A40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor2;                        // 0x3A48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent2;                    // 0x3A50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName2;                     // 0x3A58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem2;                         // 0x3A60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit2;                     // 0x3A64(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData138[0x3];                                      // 0x3A65(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue9;                   // 0x3A68(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetGroundLocation_theGroundLoc3;                 // 0x3A74(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetGroundLocation_ReturnValue3;                  // 0x3A80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData139[0x7];                                      // 0x3A81(0x0007) MISSED OFFSET
	struct FHitResult                                  CallFunc_VTraceSingleBP_OutHit3;                          // 0x3A88(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_VTraceSingleBP_ReturnValue3;                     // 0x3B10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData140[0x3];                                      // 0x3B11(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_BreakHitResult_Location3;                        // 0x3B14(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal3;                          // 0x3B20(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint3;                     // 0x3B2C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal3;                    // 0x3B38(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData141[0x4];                                      // 0x3B44(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat3;                         // 0x3B48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor3;                        // 0x3B50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent3;                    // 0x3B58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName3;                     // 0x3B60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem3;                         // 0x3B68(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit3;                     // 0x3B6C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData142[0x3];                                      // 0x3B6D(0x0003) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue4;             // 0x3B70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x3B78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x3B80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData143[0x7];                                      // 0x3B81(0x0007) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x3B88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x3B90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue5;                            // 0x3B91(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue6;                            // 0x3B92(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData144[0x1];                                      // 0x3B93(0x0001) MISSED OFFSET
	float                                              CallFunc_GetWorldCameraShakeScale_ReturnValue;            // 0x3B94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRange_ReturnValue;                            // 0x3B98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x3B9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue2;                 // 0x3BA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue7;                            // 0x3BA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData145[0x7];                                      // 0x3BA9(0x0007) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController2;            // 0x3BB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x3BB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue8;                            // 0x3BB9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue9;                            // 0x3BBA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData146[0x1];                                      // 0x3BBB(0x0001) MISSED OFFSET
	float                                              CallFunc_GetWorldCameraShakeScale_ReturnValue2;           // 0x3BBC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRange_ReturnValue2;                           // 0x3BC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x3BC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x3BC8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData147[0x4];                                      // 0x3BCC(0x0004) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue3;                 // 0x3BD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue4;                       // 0x3BD8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue10;                           // 0x3BDC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue3;                     // 0x3BDD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData148[0x2];                                      // 0x3BDE(0x0002) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue4;                 // 0x3BE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue5;                 // 0x3BE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue11;                           // 0x3BF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue12;                           // 0x3BF1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData149[0x6];                                      // 0x3BF2(0x0006) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue6;                 // 0x3BF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue13;                           // 0x3C00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData150[0x3];                                      // 0x3C01(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_New_Time;                              // 0x3C04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue10;                  // 0x3C08(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X5;                                  // 0x3C14(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y5;                                  // 0x3C18(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z5;                                  // 0x3C1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetWorldLocation_ReturnValue4;                   // 0x3C20(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X6;                                  // 0x3C2C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y6;                                  // 0x3C30(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z6;                                  // 0x3C34(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimMontage_ReturnValue4;                    // 0x3C38(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimMontage_ReturnValue5;                    // 0x3C3C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue2;            // 0x3C40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData151[0x7];                                      // 0x3C41(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue8;                        // 0x3C48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPrimalCharSwimming_ReturnValue2;               // 0x3C50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue3;              // 0x3C51(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPrimalCharSwimming_ReturnValue3;               // 0x3C52(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData152[0x5];                                      // 0x3C53(0x0005) MISSED OFFSET
	class AGameMode*                                   CallFunc_GetGameMode_ReturnValue;                         // 0x3C58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterGameMode*                            K2Node_DynamicCast_AsShooterGameMode;                     // 0x3C60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast7_CastSuccess;                          // 0x3C68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData153[0x3];                                      // 0x3C69(0x0003) MISSED OFFSET
	struct FName                                       K2Node_CustomEvent_EventCustomName;                       // 0x3C6C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData154[0x4];                                      // 0x3C74(0x0004) MISSED OFFSET
	class FString                                      K2Node_CustomEvent_EventCustomString;                     // 0x3C78(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      K2Node_CustomEvent_InstigatorActor;                       // 0x3C88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_is_max_combo_Big_Spacebar_Leap;        // 0x3C90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData155[0x7];                                      // 0x3C91(0x0007) MISSED OFFSET
	class FString                                      CallFunc_Split_LeftS;                                     // 0x3C98(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Split_RightS;                                    // 0x3CA8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Split_ReturnValue;                               // 0x3CB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_StrStr_ReturnValue;                   // 0x3CB9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_StrStr_ReturnValue2;                  // 0x3CBA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue;                 // 0x3CBB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Is_Mid_Big_Spacebar_Leap_is_mid_Big_Spacebar_Leap;// 0x3CBC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x3CBD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData156[0x2];                                      // 0x3CBE(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue7;                // 0x3CC0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x3CCC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData157[0x3];                                      // 0x3CCD(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_SelectVector_ReturnValue3;                       // 0x3CD0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue11;                  // 0x3CDC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue3;                     // 0x3CE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_new_yaw;                               // 0x3CEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_prev_yaw;                              // 0x3CF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue4;                // 0x3CF4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue4;                     // 0x3D00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x3D04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x3D08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x3D0C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue7;                 // 0x3D10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue14;                           // 0x3D18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData158[0x7];                                      // 0x3D19(0x0007) MISSED OFFSET
	class APawn*                                       CallFunc_K2_GetPawn_ReturnValue;                          // 0x3D20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter2;                    // 0x3D28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast8_CastSuccess;                          // 0x3D30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue;                 // 0x3D31(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData159[0x6];                                      // 0x3D32(0x0006) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue4;            // 0x3D38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue;                   // 0x3D40(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue4;        // 0x3D4C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData160[0x3];                                      // 0x3D4D(0x0003) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x3D50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x3D58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData161[0x3];                                      // 0x3D59(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue2;                  // 0x3D5C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue2;               // 0x3D68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x3D70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimMontage_ReturnValue6;                    // 0x3D78(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData162[0x4];                                      // 0x3D7C(0x0004) MISSED OFFSET
	class APlayerController*                           CallFunc_CastToPlayerController_ReturnValue;              // 0x3D80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue15;                           // 0x3D88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue16;                           // 0x3D89(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData163[0x2];                                      // 0x3D8A(0x0002) MISSED OFFSET
	float                                              CallFunc_GetWorldCameraShakeScale_ReturnValue3;           // 0x3D8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRange_ReturnValue3;                           // 0x3D90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue17;                           // 0x3D94(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData164[0x3];                                      // 0x3D95(0x0003) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue3;                             // 0x3D98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x3D9C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMontagePlaying_ReturnValue;                    // 0x3D9D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData165[0x2];                                      // 0x3D9E(0x0002) MISSED OFFSET
	float                                              CallFunc_PlayAnimMontage_ReturnValue7;                    // 0x3DA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x3DA4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMontagePlaying_ReturnValue2;                   // 0x3DA5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x3DA6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x3DA7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMontagePlaying_ReturnValue3;                   // 0x3DA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPrimalCharSwimming_ReturnValue4;               // 0x3DA9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData166[0x2];                                      // 0x3DAA(0x0002) MISSED OFFSET
	float                                              CallFunc_PlayAnimMontage_ReturnValue8;                    // 0x3DAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue8;                // 0x3DB0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData167[0x4];                                      // 0x3DBC(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue9;                        // 0x3DC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue2;                   // 0x3DC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPointUnderwater_ReturnValue2;                  // 0x3DC9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x3DCA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData168[0x5];                                      // 0x3DCB(0x0005) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x3DD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue2;                      // 0x3DD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_CastToPlayerController_ReturnValue2;             // 0x3DE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimMontage_ReturnValue9;                    // 0x3DE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue18;                           // 0x3DEC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue19;                           // 0x3DED(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData169[0x2];                                      // 0x3DEE(0x0002) MISSED OFFSET
	float                                              CallFunc_GetWorldCameraShakeScale_ReturnValue4;           // 0x3DF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRange_ReturnValue4;                           // 0x3DF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue4;                             // 0x3DF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue4;                  // 0x3DFC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode6;               // 0x3DFD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum6_CmpSuccess;                            // 0x3DFE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_VectorVector_ReturnValue2;              // 0x3DFF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPrimalCharSwimming_ReturnValue5;               // 0x3E00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData170[0x3];                                      // 0x3E01(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimMontage_ReturnValue10;                   // 0x3E04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue8;                 // 0x3E08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue20;                           // 0x3E10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData171[0x3];                                      // 0x3E11(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue9;                // 0x3E14(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue5;        // 0x3E20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData172[0x3];                                      // 0x3E21(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimMontage_ReturnValue11;                   // 0x3E24(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue21;                           // 0x3E28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData173[0x7];                                      // 0x3E29(0x0007) MISSED OFFSET
	class USceneComponent*                             CallFunc_K2_GetRootComponent_ReturnValue4;                // 0x3E30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x3E38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRange_ReturnValue5;                           // 0x3E40(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue5;                             // 0x3E44(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue22;                           // 0x3E48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData174[0x3];                                      // 0x3E49(0x0003) MISSED OFFSET
	float                                              CallFunc_Conv_IntToFloat_ReturnValue;                     // 0x3E4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Safe_Float_Divide___output;                      // 0x3E50(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue5;                     // 0x3E54(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x3E58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0x3E5C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue6;                     // 0x3E60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue5;                  // 0x3E64(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue6;                  // 0x3E65(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData175[0x2];                                      // 0x3E66(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue10;               // 0x3E68(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x3E74(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData176[0x3];                                      // 0x3E75(0x0003) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_SphereTraceSingle_NEW_ActorsToIgnore_RefProperty;// 0x3E78(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	struct FHitResult                                  CallFunc_SphereTraceSingle_NEW_OutHit;                    // 0x3E88(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_SphereTraceSingle_NEW_ReturnValue;               // 0x3F10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum7_CmpSuccess;                            // 0x3F11(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData177[0x2];                                      // 0x3F12(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue11;               // 0x3F14(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue3;                      // 0x3F20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue5;             // 0x3F28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_CastToPlayerController_ReturnValue3;             // 0x3F30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue23;                           // 0x3F38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue24;                           // 0x3F39(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData178[0x2];                                      // 0x3F3A(0x0002) MISSED OFFSET
	float                                              CallFunc_GetWorldCameraShakeScale_ReturnValue5;           // 0x3F3C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue7;                  // 0x3F40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData179[0x3];                                      // 0x3F41(0x0003) MISSED OFFSET
	float                                              CallFunc_Add_FloatFloat_ReturnValue7;                     // 0x3F44(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRange_ReturnValue6;                           // 0x3F48(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue6;                             // 0x3F4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue3;              // 0x3F50(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue3;               // 0x3F5C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue12;               // 0x3F68(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode2;            // 0x3F74(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData180[0x3];                                      // 0x3F75(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue12;                  // 0x3F78(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum8_CmpSuccess;                            // 0x3F84(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData181[0x3];                                      // 0x3F85(0x0003) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_SphereTraceSingle_NEW_ActorsToIgnore2_RefProperty;// 0x3F88(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	struct FHitResult                                  CallFunc_SphereTraceSingle_NEW_OutHit2;                   // 0x3F98(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_SphereTraceSingle_NEW_ReturnValue2;              // 0x4020(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData182[0x7];                                      // 0x4021(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue4;                      // 0x4028(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue5;            // 0x4030(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_CastToPlayerController_ReturnValue4;             // 0x4038(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue4;                     // 0x4040(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Allow_Nocturnal_Logic_result;                    // 0x4041(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue8;                  // 0x4042(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue2;                          // 0x4043(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData183[0x4];                                      // 0x4044(0x0004) MISSED OFFSET
	class AGameState*                                  CallFunc_GetGameState_ReturnValue;                        // 0x4048(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x4050(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData184[0x7];                                      // 0x4051(0x0007) MISSED OFFSET
	class AShooterGameState*                           K2Node_DynamicCast_AsShooterGameState;                    // 0x4058(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast9_CastSuccess;                          // 0x4060(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x4061(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue;                     // 0x4062(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData185[0x5];                                      // 0x4063(0x0005) MISSED OFFSET
	class AController*                                 CallFunc_GetCharacterController_ReturnValue;              // 0x4068(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsConscious_ReturnValue;                       // 0x4070(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData186[0x7];                                      // 0x4071(0x0007) MISSED OFFSET
	class APrimalDinoAIController*                     K2Node_DynamicCast_AsPrimalDinoAIController;              // 0x4078(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast10_CastSuccess;                         // 0x4080(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x4081(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x4082(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x4083(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x4084(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue3;                   // 0x4085(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue4;                   // 0x4086(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x4087(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue4;                          // 0x4088(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData187[0x7];                                      // 0x4089(0x0007) MISSED OFFSET
	class UAnimInstance*                               CallFunc_GetAnimInstance_ReturnValue2;                    // 0x4090(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ULionfishLion_AnimBlueprint_Swimmable_C*     K2Node_DynamicCast_AsLionfishLion_AnimBlueprint_Swimmable_C2;// 0x4098(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast11_CastSuccess;                         // 0x40A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData188[0x7];                                      // 0x40A1(0x0007) MISSED OFFSET
	class UAnimMontage*                                CallFunc_GetCurrentMontage_ReturnValue2;                  // 0x40A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue25;                           // 0x40B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue4;              // 0x40B1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData189[0x6];                                      // 0x40B2(0x0006) MISSED OFFSET
	class UAnimMontage*                                CallFunc_GetCurrentMontage_ReturnValue3;                  // 0x40B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue26;                           // 0x40C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue5;              // 0x40C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue6;              // 0x40C2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x40C3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData190[0x4];                                      // 0x40C4(0x0004) MISSED OFFSET
	class UAnimInstance*                               CallFunc_GetAnimInstance_ReturnValue3;                    // 0x40C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMovingOnGround_ReturnValue;                    // 0x40D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData191[0x7];                                      // 0x40D1(0x0007) MISSED OFFSET
	class ULionfishLion_AnimBlueprint_Swimmable_C*     K2Node_DynamicCast_AsLionfishLion_AnimBlueprint_Swimmable_C3;// 0x40D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast12_CastSuccess;                         // 0x40E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData192[0x3];                                      // 0x40E1(0x0003) MISSED OFFSET
	float                                              CallFunc_GetSimpleMontageDuration_ReturnValue;            // 0x40E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetSimpleMontageDuration_ReturnValue2;           // 0x40E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Safe_Float_Divide___output2;                     // 0x40EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_FloatFloat_ReturnValue;                 // 0x40F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData193[0x3];                                      // 0x40F1(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimMontage_ReturnValue12;                   // 0x40F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue5;                        // 0x40F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimMontage_ReturnValue13;                   // 0x40FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue27;                           // 0x4100(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue5;                          // 0x4101(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData194[0x6];                                      // 0x4102(0x0006) MISSED OFFSET
	class UAnimInstance*                               CallFunc_GetAnimInstance_ReturnValue4;                    // 0x4108(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue28;                           // 0x4110(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x4111(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData195[0x2];                                      // 0x4112(0x0002) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue6;                        // 0x4114(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimInstance*                               CallFunc_GetAnimInstance_ReturnValue5;                    // 0x4118(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ULionfishLion_AnimBlueprint_Swimmable_C*     K2Node_DynamicCast_AsLionfishLion_AnimBlueprint_Swimmable_C4;// 0x4120(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast13_CastSuccess;                         // 0x4128(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue9;                  // 0x4129(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue10;                 // 0x412A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue11;                 // 0x412B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue12;                 // 0x412C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue13;                 // 0x412D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData196[0x2];                                      // 0x412E(0x0002) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue10;                       // 0x4130(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue14;                 // 0x4138(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue29;                           // 0x4139(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_cancel_anim;                           // 0x413A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue15;                 // 0x413B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue2;                 // 0x413C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData197[0x3];                                      // 0x413D(0x0003) MISSED OFFSET
	class AActor*                                      CallFunc_Array_Get_Item2;                                 // 0x4140(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue3;                 // 0x4148(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData198[0x3];                                      // 0x4149(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Get_Desired_Teleport_Final_Location_In_Front_Of_the_Enemy_final_location;// 0x414C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FHitResult                                  CallFunc_Is_Teleport_End_Location_Blocked_OutHit;         // 0x4158(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_Is_Teleport_End_Location_Blocked_ReturnValue;    // 0x41E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData199[0x3];                                      // 0x41E1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Get_Desired_Teleport_Final_Location_Behind_The_Enemy_final_location;// 0x41E4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FHitResult                                  CallFunc_Is_Teleport_End_Location_Blocked_OutHit2;        // 0x41F0(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_Is_Teleport_End_Location_Blocked_ReturnValue2;   // 0x4278(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData200[0x3];                                      // 0x4279(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_BreakHitResult_Location4;                        // 0x427C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal4;                          // 0x4288(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint4;                     // 0x4294(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal4;                    // 0x42A0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData201[0x4];                                      // 0x42AC(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat4;                         // 0x42B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor4;                        // 0x42B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent4;                    // 0x42C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName4;                     // 0x42C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem4;                         // 0x42D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit4;                     // 0x42D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData202[0x3];                                      // 0x42D5(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue2;              // 0x42D8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_AddUnique_ReturnValue;                     // 0x42E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue4;               // 0x42E8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_is_line_of_sight_to_target_blocked_blocked;      // 0x42F4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData203[0x3];                                      // 0x42F5(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue3;              // 0x42F8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue30;                           // 0x4304(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData204[0x3];                                      // 0x4305(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue13;               // 0x4308(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_initial_location;                      // 0x4314(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue31;                           // 0x4320(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData205[0x3];                                      // 0x4321(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue14;               // 0x4324(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue32;                           // 0x4330(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData206[0x3];                                      // 0x4331(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_get_rotation_to_face_opponent_ReturnValue;       // 0x4334(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue16;                 // 0x4340(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue17;                 // 0x4341(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue18;                 // 0x4342(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue4;                 // 0x4343(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x4344(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData207[0x3];                                      // 0x4345(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimMontage_ReturnValue14;                   // 0x4348(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x434C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue8;                         // 0x434D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData208[0x2];                                      // 0x434E(0x0002) MISSED OFFSET
	float                                              CallFunc_PlayAnimMontage_ReturnValue15;                   // 0x4350(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue3;            // 0x4354(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData209[0x3];                                      // 0x4355(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue15;               // 0x4358(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData210[0x4];                                      // 0x4364(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue11;                       // 0x4368(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPointUnderwater_ReturnValue3;                  // 0x4370(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData211[0x3];                                      // 0x4371(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x4374(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue19;                 // 0x4378(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue20;                 // 0x4379(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue21;                 // 0x437A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData212[0x5];                                      // 0x437B(0x0005) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue12;                       // 0x4380(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue16;               // 0x4388(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPointUnderwater_ReturnValue4;                  // 0x4394(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue22;                 // 0x4395(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue8;                        // 0x4396(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue9;                         // 0x4397(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetComponentRotation_ReturnValue;             // 0x4398(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch2;                                 // 0x43A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw2;                                   // 0x43A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll2;                                  // 0x43AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue23;                 // 0x43B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData213[0x3];                                      // 0x43B1(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x43B4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue24;                 // 0x43C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue33;                           // 0x43C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Is_Quick_Tap_Teleport;                 // 0x43C2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData214[0x1];                                      // 0x43C3(0x0001) MISSED OFFSET
	int                                                K2Node_CustomEvent_Teleport_Target_Count;                 // 0x43C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue34;                           // 0x43C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData215[0x3];                                      // 0x43C9(0x0003) MISSED OFFSET
	int                                                CallFunc_Subtract_IntInt_ReturnValue;                     // 0x43CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_IntToFloat_ReturnValue2;                    // 0x43D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x43D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue8;                     // 0x43D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue7;                             // 0x43DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Lerp_ReturnValue2;                               // 0x43E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue2;                            // 0x43E4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x43F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData216[0x7];                                      // 0x43F1(0x0007) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue9;                 // 0x43F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue35;                           // 0x4400(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData217[0x7];                                      // 0x4401(0x0007) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController3;            // 0x4408(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast14_CastSuccess;                         // 0x4410(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue36;                           // 0x4411(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue37;                           // 0x4412(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData218[0x1];                                      // 0x4413(0x0001) MISSED OFFSET
	float                                              CallFunc_GetWorldCameraShakeScale_ReturnValue6;           // 0x4414(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue9;                     // 0x4418(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRange_ReturnValue7;                           // 0x441C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue8;                             // 0x4420(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetSocketLocationTemp_ReturnValue;               // 0x4424(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue6;             // 0x4430(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue4;              // 0x4438(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue3;               // 0x4444(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Lerp_ReturnValue3;                               // 0x4450(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue3;                            // 0x4454(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetActorRotation_ReturnValue;                    // 0x4460(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData219[0x3];                                      // 0x4461(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x4464(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_Lerp_ReturnValue4;                               // 0x4474(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue7;                         // 0x4478(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Is_Close_Enough_To_Hit_Big_Spacebar_Leap_Target_can_hit_target;// 0x4484(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Is_Close_Enough_To_Hit_Big_Spacebar_Leap_Target_can_hit_target2;// 0x4485(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData220[0x2];                                      // 0x4486(0x0002) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue2;                      // 0x4488(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue3;                      // 0x4490(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue38;                           // 0x4498(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue39;                           // 0x4499(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData221[0x6];                                      // 0x449A(0x0006) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue4;                      // 0x44A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VLerp_ReturnValue3;                              // 0x44A8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue40;                           // 0x44B4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData222[0x3];                                      // 0x44B5(0x0003) MISSED OFFSET
	float                                              CallFunc_Conv_IntToFloat_ReturnValue3;                    // 0x44B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Safe_Float_Divide___output3;                     // 0x44BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue5;                // 0x44C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue9;                             // 0x44C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue3;                // 0x44C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue6;                // 0x44CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue5;               // 0x44D0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate2;                    // 0x44DC(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x44EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate3;                    // 0x44F0(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue10;                // 0x4500(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue41;                           // 0x4508(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData223[0x7];                                      // 0x4509(0x0007) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController4;            // 0x4510(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast15_CastSuccess;                         // 0x4518(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue42;                           // 0x4519(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData224[0x2];                                      // 0x451A(0x0002) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue7;                // 0x451C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue43;                           // 0x4520(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData225[0x3];                                      // 0x4521(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue8;                // 0x4524(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue10;                    // 0x4528(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldCameraShakeScale_ReturnValue7;           // 0x452C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRange_ReturnValue8;                           // 0x4530(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue5;              // 0x4534(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue10;                            // 0x4540(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue4;               // 0x4544(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue17;               // 0x4550(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue13;                  // 0x455C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Divide_VectorFloat_ReturnValue3;                 // 0x4568(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData226[0x4];                                      // 0x4574(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue7;             // 0x4578(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue44;                           // 0x4580(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue3;                          // 0x4581(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue9;                        // 0x4582(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_does_it_have_enough_stamina_result;              // 0x4583(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData227[0x4];                                      // 0x4584(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x4588(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore2_RefProperty; // 0x4598(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_SphereTraceSingle_NEW_ActorsToIgnore3_RefProperty;// 0x45A8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore3_RefProperty; // 0x45B8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore4_RefProperty; // 0x45C8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceMulti_NEW_ActorsToIgnore_RefProperty;   // 0x45D8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceMulti_NEW_ActorsToIgnore2_RefProperty;  // 0x45E8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_SphereTraceSingle_NEW_ActorsToIgnore4_RefProperty;// 0x45F8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_SphereTraceSingle_NEW_ActorsToIgnore5_RefProperty;// 0x4608(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_SphereTraceSingle_NEW_ActorsToIgnore6_RefProperty;// 0x4618(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore5_RefProperty; // 0x4628(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LionfishLion_Character_BP.LionfishLion_Character_BP_C");
		return ptr;
	}


	void GetHudData(float* AttackComboPercent, float* MaxComboFlashingSpeed, double* LastUncloakTime, float* CloakCooldown, bool* IsFemale, bool* IsCamoActive, double* LastRoarBuffTime, float* RoarBuffCooldown, bool* HasMateBoost, double* LastTimeReleasedTeleport, float* TeleportCooldown, float* TeleportPercent, bool* IsCurrentlyChargingTeleport, class APrimalCharacter** LatestQuickteleportTarget, float* LeapCooldown, double* LastLeapTime, float* LeapPercent);
	void Keep_Checking_if_the_Fish_Has_Spawned();
	void try_feed_shadowman_on_delay();
	void Shortly_After_Falling_Asleep_Prevent_Affinity_Reset();
	void BPPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent);
	void Is_Lerping_While_Jumping();
	void Delay_Reset_Gravity();
	void LFL_Cloak_Transition(float Value);
	void ReceivePossessed(class AController** NewController);
	void Lerp_Camera_During_Jump();
	bool BPCanTakePassenger(class APrimalCharacter** Character, int* PassengerSeatIndex, bool* bForcePassenger, bool* bAllowFlyersAndWaterDinos);
	bool is_asleep();
	bool BPCanCryo(class AShooterPlayerController** ForPC);
	void IsPackLeader(bool* bIsLeader);
	void Display_No_Mate_Boost_Notification();
	void Prevented_Interval_to_Check_for_Boss_Dinos_for_Cloaking();
	void Is_Near_Boss();
	void ReceiveActorEndOverlap(class AActor** OtherActor);
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void Decrease_Camo_Stamina();
	bool can_cloak(class AActor* InputPin, class APrimalCharacter** AsPrimalCharacter);
	void Remove_self_as_origin_dino_for_cloaks(class APrimalCharacter* who_gets_buff);
	void add_cloak_buff_with_self_as_origin(class APrimalCharacter* who_gets_buff, bool for_solo_rider);
	void OnRep_is_solo_camo_active();
	void Show_Quick_Teleport_Indicator();
	void Delay_Check_for_Holding_Down_Crouch();
	void Short_Time_After_Initialization_To_Determine_Targeting_Team();
	void Long_Prevent_Tamed_Sleeping_Timer();
	void Has_Fish_Trap_Ready();
	void spawn_wild_inventory();
	void spawn_tamed_inventory();
	void Timeout_Check_To_Determine_If_Rider_Is_Still_Valid_For_Charging_Big_Spacebar_Leap();
	void Timeout_Check_For_Still_Holding_Spacebar();
	void Delay_And_Wake_Up();
	void delay_and_fall_asleep();
	bool Can_Teleport_Attack();
	void spawn_flame_location_on_the_ground(const struct FVector& Start_Point, const struct FVector& End_Point);
	void BPOnRefreshColorization(TArray<struct FLinearColor>* Colors);
	void Reset_animbp_anims_to_normal();
	void restrict_wild_teleport_attacking();
	void shortly_after_fleeing_from_taming();
	void show_particle_over_optimal_teleport_target();
	void toggle_max_combo_vfx_on_limbs();
	void Restrict_Max_Combo_Kill_Fx();
	void restrict_bite_fx();
	void Prep_For_Mouth_Slash();
	void Prep_For_Left_Paw_Slash();
	void prep_for_right_paw_slash();
	void Is_Landing_From_Big_Spacebar_Leap();
	bool BPPreventFallDamage(float* FallDamageAmount, struct FHitResult* HitResult);
	bool BPShouldForceFlee();
	void flee_after_feeding();
	void feed(class APlayerController* PC, float Fish_Weight, bool cheat_debug_bypass, bool Fallback);
	void bite_slash_vfx();
	void right_paw_slash_vfx();
	void left_paw_slash_vfx();
	void is_able_to_be_tamed(class APlayerController* PC, bool* can_tame, class FString* Text);
	class UAnimMontage* BPOverrideHurtAnim(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, bool* bIsPointDamage, struct FVector* PointDamageLocation, struct FVector* PointDamageHitNormal, struct FDamageEvent* DamageEvent);
	void print_string_manual(const class FString& In_String);
	void Stop_Release_Big_Spacebar_Leap_Anims();
	void stop_anim_montage_if_playing(class UAnimMontage* InputPin, float BlendOut);
	struct FRotator get_aerial_rotation_while_pouncing(struct FRotator* mesh_rot);
	void set_up_dynamic_mats();
	void Has_Found_Multiple_Targets();
	void Timer_Check_Teleport_Targets();
	void save_control_rot();
	void retrieve_control_rot();
	void Shortly_After_Tele();
	void Restrict_Was_Seen_Requests();
	void STATIC_someone_has_line_of_sight_to_lion(class AShooterPlayerController* player_controller, bool* NewParam);
	void Check_If_Viewed_By_Players();
	void Do_Attack_Cloak();
	void Server_Request_Charge_Big_Spacebar_Leap();
	void Server_Request_End_Charge_Big_Spacebar_Leap(const struct FVector& held_direction_inputs, class UObject* InputPin, int A2, int InputPin2);
	void Server_Request_Jump();
	void Server_Request_Anim_Start_Jump();
	void Server_Requiest_Crit_Bite();
	void Server_Request_Hold_Teleport(const struct FVector& view_direction, class UObject* Target, bool quick_tap_teleport);
	float BlueprintGetAttackWeight(int* AttackIndex, float* inputWeight, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void Add_solo_cloak_buffs();
	bool consolidated_can_attack(int InputPin);
	void (float _1, float _2, float* Output);
	struct FVector Get_Appropriate_Extra_Distance_to_Land_In_Front_the_Target_from_Current_Position(const struct FVector& current_location, class AActor* Enemy);
	bool Is_Teleport_End_Location_Blocked(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit);
	void Get_Desired_Teleport_Final_Location_In_Front_Of_the_Enemy(const struct FVector& current_position, class AActor* Enemy, struct FVector* final_location);
	void Check_If_The_LFL_Can_Physically_Fit_To_The_Teleport_Target(const struct FVector& Start, const struct FVector& End, bool* double_checked_and_all_clear);
	void disable_tele_targeting_vfx();
	void OnRep_is_sleeping_state();
	void STATIC_spawn_cloaked_footstep(class UParticleSystem* EmitterTemplate, const struct FRotator& Rotation, const struct FVector& InputPin);
	bool BPDinoTooltipCustomTamingProgressBar(bool* overrideTamingProgressBarIfActive, float* progressPercent, class FString* Label);
	void BPOnTamedProcessOrder(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted);
	void cooldown_after_action_before_being_able_to_sleep();
	void BP_OnTamedOrderReceived(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted);
	void Prevent_Tamed_Sleeping_Timer();
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void multiuse_logic(class APlayerController* PC, TArray<struct FMultiUseEntry>* local_multiuse, TArray<struct FMultiUseEntry>* return_multiuse);
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	float Natural_Armor_Defense_Amount_Calculation();
	void Set_up_Natural_Armor_value_based_on_level();
	void attempt_to_set_up_natural_armor();
	float teleport_stun_duration_calculation();
	void Time_Threshold_for_Determining_Held_Bite();
	void Short_Time_After_Ending_Teleport();
	void tele_attack_object_types(TArray<TEnumAsByte<EObjectTypeQuery>>* Array);
	void straight_line_teleport_charge_move_detection_sphere();
	void detect_targets_in_a_straight_line_over_time();
	void Identify_Best_Aimed_Target_For_Quickteleport___Clientside(class APrimalCharacter** Character);
	void set_dino_and_rider_hidden(bool Hidden, float PlayRate, bool dont_reverse_from_end);
	void Is_Valid_Teleport_Target_(class APrimalCharacter* Target, bool is_hud_elem_check, const struct FVector& teleport_trace_sphere_location, bool* can_target);
	void set_final_location_and_rotation_after_teleport(const struct FVector& Start_Loc, const struct FVector& end_loc, bool turn_around);
	void damage_teleport_target();
	void prepare_LFL_for_teleporting_to_target(const struct FVector& End, const struct FVector& Start);
	void is_line_of_sight_to_target_blocked(class AActor* Target, bool Debug, const struct FVector& from_specific_location, bool simple_check, bool* bLocked);
	struct FRotator get_rotation_to_face_opponent(const struct FVector& current_location, class AActor* Enemy);
	void Get_Desired_Teleport_Final_Location_Behind_The_Enemy(const struct FVector& current_position, class AActor* Enemy, struct FVector* final_location);
	struct FVector get_appropriate_extra_distance_to_land_behind_the_target_from_current_position(const struct FVector& current_location, class AActor* Enemy);
	void request_release_charge_teleport(bool Is_Quick_Tap_Teleport);
	void Sort_Selected_Teleport_Targets_By_Distance_From_Center();
	void Select_Next_Teleport_Target_While_Charging();
	struct FVector get_teleport_trace_sphere_location(const struct FVector& view_direction);
	void Is_Charging_Teleport();
	void STATIC_Teleport_Stop(class UObject* hit_target);
	void Start_Teleport(float Teleport_Strength_Percentage, bool Is_Quick_Tap_Teleport);
	float Get_Teleport_Character_Octree_Overlap_Radius();
	void is_mid_teleport(bool* is_mid_teleport);
	void Is_Teleport_Cooldown_Active();
	void Request_Release_Teleport();
	void Time_Threshold_For_Determining_Charge_Teleport();
	void Time_Threshold_For_Determining_Jump_Or_Big_Spacebar_Leap();
	bool BPOnStopJump();
	void sync_movement_inputs();
	float duration_to_hold_on_to_current_combo_count();
	void remove_character_from_max_combo_attacked_characters_array(class AActor* InputPin);
	void clear_recently_max_combo_attacked_characters_array();
	void BPKilledSomethingEvent(class APrimalCharacter** killedTarget);
	void PerformanceThrottledTick();
	void Blend_Fov_Back_To_Normal_After_Big_Spacebar_Leap();
	void Is_Close_Enough_To_Hit_Big_Spacebar_Leap_Target(bool* can_hit_target);
	void Is_Frozen_From_Hitstop();
	void On_Big_Spacebar_Leap_Land();
	void Is_Blending_FOV_Back_To_Normal_After_Big_Spacebar_Leap();
	bool BP_PreventMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode);
	void On_Big_Spacebar_Leap_Hit_Target(class APrimalCharacter* InputPin);
	void Request_Turnaround_Stop_on_Other_Side_Of_Big_Spacebar_Leap_Target();
	void STATIC_Check_for_Ground_and_Halt_Anim(bool* retry);
	void Extra_Big_Spacebar_Leap_Ground_Checks();
	void Prevent_Repeated_Big_Spacebar_Leap_Anim();
	void Is_Mid_Big_Spacebar_Leap(bool* Is_Mid_Big_Spacebar_Leap);
	void STATIC_lerp_time_to_move_to_other_side_of_the_target();
	void Post_Finisher_Buildup_FOV_Return_To_Normal();
	void Is_Playing_FOVIncrease_On_Finisher_Buildup();
	void Allow_Short_Time_Before_Swapping_Between_Big_Spacebar_Leap_Anticipation_Poses();
	void ReceiveTick(float* DeltaSeconds);
	void tick_events(float Delta);
	void Force_Initial_Big_Spacebar_Leap();
	void play_sleep_during_day_anim();
	bool Should_Restrict_Movement();
	void BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV);
	void BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	bool BPOnStartJump();
	void Update_Right_Swipe_Attack_Anim_Priorities(int Attack_index);
	void Update_Bite_Attack_Anim_Priorities(int Attack_index);
	void STATIC_RidingTick(float* DeltaSeconds);
	bool BPModifyDesiredRotation(float* DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation);
	void BPGetCrosshairLocation(float* CanvasClipX, float* CanvasClipY, float* OutX, float* OutY);
	struct FLinearColor BPGetCrosshairColor();
	void Entering_Or_Exiting_Roar_Movement_Restriction();
	void Entering_or_Exiting_Camo_Movement_Restriction();
	void Prevent_Big_Spacebar_Leap_Anim_at_First();
	void Low_Gravity_Timeout();
	void Post_Big_Spacebar_Leap_Landing_Reduced_Friction();
	void Low_Big_Spacebar_Leap_Friction();
	void BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode);
	void BPTimerNonDedicated();
	void Interpolate_Mesh();
	void hard_set_rotation_but_interp_mesh_location(const struct FRotator& NewRotation);
	void Set_Rotation_and_Interp_Mesh(const struct FRotator& NewRotation);
	void update_transforms();
	void update_anims(bool ensureAnimsPlaying);
	void STATIC_Is_Close_To_Ground(float CheckDistance, bool* Result);
	void Set_Use_Aim_Offsets(bool new_state);
	void Update_Jumping_Anim();
	void Manual_Play_Land_Anim();
	void Big_Spacebar_Leap_Start();
	void OnRep_CurrentClimbingState();
	void Net_Set_State(TEnumAsByte<E_PredatorClimbingState> new_state);
	void Can_Keep_Pouncing_during_Big_Spacebar_Leap(bool* Result);
	void STATIC_Big_Spacebar_Leap_Tick();
	void Get_Default_Dino(class ALionfishLion_Character_BP_C** Ref);
	void remove_carry_buff_from_prey();
	void can_carry_creature(class APrimalCharacter* Character, bool* Result);
	void Big_Spacebar_Leap_Stop(class UObject* hit_target);
	void initilialize_sleep();
	void Reenable_Collision();
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void Calculate_Big_Spacebar_Leap_Direction(class AActor* Targetted_Character, float Big_Spacebar_Leap_velocity, struct FVector* Big_Spacebar_Leap_dir);
	void True_Wake_Up_Other_Pack_Dinos();
	void wake_up_other_pack_dinos(bool reset_their_affinity);
	void Delay_True_Wake_Up();
	void Rotate_During_Big_Spacebar_Leap();
	void Update_Appearance();
	void OnRep_bIsDaytime();
	void Get_Is_Fully_Awake(bool* Result);
	void Dino_Needs_to_Sleep(bool* Result);
	void Has_Valid_Target(bool* Result);
	void Get_Sleep_Debt_to_Deprived_Ratio(float* Ratio);
	void Is_Dino_Grounded(bool* Result);
	void Is_Dino_in_Shallow_Water(bool* shallowWaters);
	void Can_Wake(bool* Result);
	void Can_Sleep(bool* Result);
	void On_Fall_Asleep();
	void On_Wake_Up();
	void Set_Torpidity(float newTorpidity);
	void Update_Sleep_Related_Actions();
	void Play_Natural_Sleeping_Anims(bool isFallingAsleep, bool isAlerted);
	void Net_Set_Natural_Sleep_State(bool isAsleep);
	void BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void BPBecomeAdult();
	void BPBecomeBaby();
	bool BPPreventRiding(class AShooterCharacter** ByPawn, bool* bDontCheckDistance);
	void Is_Possible_to_Sleep(bool* Result);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void Allow_Nocturnal_Logic(bool* Result);
	void Update_Sleep_Debt(float DeltaTime);
	void Has_Sleep_Debt(bool* Result);
	void Is_time_of_day_when_lion_wants_to_sleep(bool* Result);
	void Is_Target_Attacking_Ally(bool* Result);
	void Is_Tamed_Following(bool* Result);
	void Check_for_Wake();
	void Check_for_Sleep();
	void STATIC_BPTimerServer();
	void Check_Time_Of_Day(bool ForceUpdate);
	void Init_Nocturnal_Dino();
	void Setup_Refs();
	void BPNotifyStructurePlacedNearby(class APrimalStructure** NewStructure);
	void Wake_Up(bool forceSuccess);
	void Fall_Asleep(bool forceSuccess, bool ignoreIsPossible, bool Triggered_By_Multiuse);
	void Is_Sleep_Deprived(bool* Result);
	void Display_Message(const class FString& Message);
	void OnRep_is_camo_active();
	void net_set_use_camo(bool new_state, bool solo);
	void Can_Use_Camo(bool is_for_start, bool* Result);
	void does_it_have_enough_stamina(float stamina_requirement, bool* Result);
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode);
	void BP_OnTargetedByTamedOrder(class APrimalCharacter** OrderingCharacter, class APrimalDinoCharacter** AttackingDino, bool* bForced);
	void Add_Rider_to_Camo_Fade_Queue(class AShooterCharacter* Rider, bool EnterCamo, bool bInstant);
	void BPNotifyClearPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex);
	void BPNotifyIfPassengerLaunchShoulderMount(class APrimalCharacter** launchedCharacter);
	void Activate_Rider_Camo_Particles(bool EnterCamo, class AShooterCharacter* specificRider);
	void Clean_Allow_Target_when_Using_Camo_Array();
	void Set_All_Riders_Hidden(bool Hidden);
	void Set_Camo_Active(bool Active);
	void Request_Release_Big_Spacebar_Leap_Charge();
	bool STATIC_BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	struct FVector get_held_direction_relative_to_camera_forward(bool in_water);
	void Reset_Moveforward();
	bool BP_InterceptMoveForward(float* AxisValue);
	void Reset_Moveright();
	bool BP_InterceptMoveRight(float* AxisValue);
	void Is_Big_Spacebar_Leap_Cooldown_Active();
	void Is_in_Initial_Big_Spacebar_Leap();
	void Start_Big_Spacebar_Leap(float Big_Spacebar_Leap_Strength_Percentage);
	bool CanJumpInternal();
	float BP_GetCustomModifier_MaxSpeed();
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void Is_Charging_Big_Spacebar_Leap();
	void Apply_Pack_Buff();
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void InterceptInputEvent(class FString* InputName);
	void Reset_Current_Combo_Melee_Index();
	void Reset_Combo_Count();
	float STATIC_BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
	int BPAdjustAttackIndex(int* AttackIndex);
	void BPDoAttack(int* AttackIndex);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void BPNotifyLevelUp(int* ExtraCharacterLevel);
	void BPUnstasis();
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	float BPGetHUDOverrideBuffProgressBarPercent();
	void BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value);
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	bool BPHandleControllerInitiatedAttack(int* AttackIndex);
	bool BPHandleOnStopTargeting();
	void UserConstructionScript();
	void grow_teleport_target_sphere__FinishedFunc();
	void grow_teleport_target_sphere__UpdateFunc();
	void move_between_teleport_targets__FinishedFunc();
	void move_between_teleport_targets__UpdateFunc();
	void fade_hide_dino__FinishedFunc();
	void fade_hide_dino__UpdateFunc();
	void lerp_to_normal__FinishedFunc();
	void lerp_to_normal__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void stealth_anim_timeline__FinishedFunc();
	void stealth_anim_timeline__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void client_start_charge_Big_Spacebar_Leap();
	void client_end_charge_Big_Spacebar_Leap(bool is_max_combo_Big_Spacebar_Leap);
	void Event_CleanAllowTargetWhenUsingCamoArray();
	void Event_RestartCheckTargetArrayTimer();
	void multicast_started_roar();
	void ReceiveBeginPlay();
	void Re_initialize_nocturnal_dino();
	void OnIsDaytime();
	void OnIsNighttime();
	void EnableMovementAfterDelay(float Delay);
	void DisableMovementAfterDelay(float Delay);
	void BndEvt__Mesh_K2Node_ComponentBoundEvent_144_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult* Hit);
	void bind_sleeping_buff_dispatcher(class APrimalBuff* Buff);
	void awoken_from_other_buff_added();
	void Server_NetSetClimbingState(TEnumAsByte<E_PredatorClimbingState> NewState);
	void PreventLandingAnimBriefly();
	void BP_OnJumpPressed();
	void SyncGravityForBig_Spacebar_LeapFall();
	void client_started_secondary_roar();
	void delay_update_cloak_animbp();
	void multicast_hit_swipe_on_target(float combo_count);
	void multicast_hit_bite_on_target(float combo_value, const struct FVector& target_loc);
	void multicast_start_jumping();
	void temporarily_set_fall_blend_to_zero();
	void keep_trying_to_init_nocturnal_anim();
	void multicast_tame();
	void multicast_play_natural_sleeping_anims(bool is_falling_asleep, bool is_alerted);
	void early_end_Big_Spacebar_Leap();
	void lerp_to_location_after_Big_Spacebar_Leap();
	void multicast_Big_Spacebar_Leap_end();
	void multicast_started_Big_Spacebar_Leap_2(float Big_Spacebar_Leap_Strength_Percentage);
	void multicast_on_max_combo_Big_Spacebar_Leap_hit();
	void Hitstop(float Hitstop_Time);
	void max_combo_Big_Spacebar_Leap_hitstop();
	void multicast_on_killed_dino_with_max_combo_attack(const struct FVector& target_location);
	void ServerSyncMovementValues(float Synced_Right);
	void client_start_charge_teleport();
	void client_end_charge_teleport(bool is_max_combo_Teleport, bool Is_Quick_Tap_Teleport);
	void multicast_started_teleport_2(bool Is_Quick_Tap_Teleport, int Teleport_Target_Count);
	void teleport_to_targets();
	void start_teleport_attack_actual_movement(const struct FVector& initial_location);
	void soft_cancel_teleport_on_failing_to_get_targets(bool cancel_anim);
	void teleport_attack_to_position(const struct FVector& Start_Loc, const struct FVector& end_loc, bool probably_final_teleport, bool turn_around);
	void finished_teleport_attack();
	void hide_dino_for_teleport(bool Hidden, float PlayRate, bool dont_reverse_from_end);
	void BPDinoPostBeginPlay();
	void restart_dino_clientside();
	void soft_cancel_charge_Big_Spacebar_Leap();
	void InpAxisEvt_MoveUp_K2Node_InputAxisEvent_612(float AxisValue);
	void Multi_UpdateBuffTime(bool bIsActive);
	void trace_loc(const struct FVector& NewParam);
	void lerp_loc_to_normal();
	void stop_mesh_lerp_to_normal();
	void Set_New_Time_on_Fade(float New_Time);
	void Lerp_While_Jumping();
	void OnActorCustomEvent_Event(const struct FName& EventCustomName, const class FString& EventCustomString, class AActor* InstigatorActor);
	void lerp_rot_to_next_tele_loc(float new_yaw, float prev_yaw);
	void activate_max_combo_Big_Spacebar_Leap_particle();
	void activate_water_Big_Spacebar_Leap_particles();
	void ExecuteUbergraph_LionfishLion_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
