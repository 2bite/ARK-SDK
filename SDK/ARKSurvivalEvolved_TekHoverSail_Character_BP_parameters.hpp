#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekHoverSail_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPCameraRotationFinal
struct ATekHoverSail_Character_BP_C_BPCameraRotationFinal_Params
{
	class APrimalCharacter**                           viewingCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InCurrentFinalRot;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Clear Trick Hint Text
struct ATekHoverSail_Character_BP_C_Clear_Trick_Hint_Text_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Add Trick Hint Text
struct ATekHoverSail_Character_BP_C_Add_Trick_Hint_Text_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnRefreshColorization
struct ATekHoverSail_Character_BP_C_BPOnRefreshColorization_Params
{
	TArray<struct FLinearColor>                        Colors;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Holds Trick Button - direction variant
struct ATekHoverSail_Character_BP_C_Client_Holds_Trick_Button___direction_variant_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOverrideFPVViewLocation
struct ATekHoverSail_Character_BP_C_BPOverrideFPVViewLocation_Params
{
	class APrimalCharacter**                           viewingCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetFPVViewLocation
struct ATekHoverSail_Character_BP_C_BPGetFPVViewLocation_Params
{
	class APrimalCharacter**                           viewingCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ClearTrickActivationText
struct ATekHoverSail_Character_BP_C_ClearTrickActivationText_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Add Trick Activation Text
struct ATekHoverSail_Character_BP_C_Add_Trick_Activation_Text_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ResetAccumulatedTricks
struct ATekHoverSail_Character_BP_C_ResetAccumulatedTricks_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Add To Accumulated Trick
struct ATekHoverSail_Character_BP_C_Add_To_Accumulated_Trick_Params
{
	int                                                TrickIndexToAdd;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.HandleThrusterSFX
struct ATekHoverSail_Character_BP_C_HandleThrusterSFX_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DeactivateGroundFX
struct ATekHoverSail_Character_BP_C_DeactivateGroundFX_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.HandleCrouch
struct ATekHoverSail_Character_BP_C_HandleCrouch_Params
{
	bool                                               bWasReleased;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetTotalFuelUnits
struct ATekHoverSail_Character_BP_C_GetTotalFuelUnits_Params
{
	int                                                NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.try refill from inventory
struct ATekHoverSail_Character_BP_C_try_refill_from_inventory_Params
{
	class UPrimalInventoryComponent*                   InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyClearPassenger
struct ATekHoverSail_Character_BP_C_BPNotifyClearPassenger_Params
{
	class APrimalCharacter**                           PassengerChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Delaymount
struct ATekHoverSail_Character_BP_C_Delaymount_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPHandleUseButtonPress
struct ATekHoverSail_Character_BP_C_BPHandleUseButtonPress_Params
{
	class AShooterPlayerController**                   RiderController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.is FPV
struct ATekHoverSail_Character_BP_C_is_FPV_Params
{
	class AShooterCharacter*                           InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.spawn collision sparks vfx
struct ATekHoverSail_Character_BP_C_spawn_collision_sparks_vfx_Params
{
	struct FVector                                     hit_norm;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     hit_location;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              impact_strength;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Restricted Sparks Spawn Rate
struct ATekHoverSail_Character_BP_C_Restricted_Sparks_Spawn_Rate_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Attach Player To Sail Open Socket Location
struct ATekHoverSail_Character_BP_C_Attach_Player_To_Sail_Open_Socket_Location_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Lerp To Sail Open Socket Location
struct ATekHoverSail_Character_BP_C_Lerp_To_Sail_Open_Socket_Location_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Lerp To Weapon Out Location
struct ATekHoverSail_Character_BP_C_Lerp_To_Weapon_Out_Location_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Attach Player To Weapon Out Location
struct ATekHoverSail_Character_BP_C_Attach_Player_To_Weapon_Out_Location_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyAddPassenger
struct ATekHoverSail_Character_BP_C_BPNotifyAddPassenger_Params
{
	class APrimalCharacter**                           PassengerChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Halt Hoversail
struct ATekHoverSail_Character_BP_C_Client_Halt_Hoversail_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.destroy if item reference is gone
struct ATekHoverSail_Character_BP_C_destroy_if_item_reference_is_gone_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Duration After Drifting To Have Increased Speed
struct ATekHoverSail_Character_BP_C_Duration_After_Drifting_To_Have_Increased_Speed_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.destroy itself
struct ATekHoverSail_Character_BP_C_destroy_itself_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPTriggerStasisEvent
struct ATekHoverSail_Character_BP_C_BPTriggerStasisEvent_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Trick Score Display Timer
struct ATekHoverSail_Character_BP_C_Trick_Score_Display_Timer_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BoostBonusDisplayTimer
struct ATekHoverSail_Character_BP_C_BoostBonusDisplayTimer_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Shortly After Clearing
struct ATekHoverSail_Character_BP_C_Shortly_After_Clearing_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Time After Drift To Retain Velocity
struct ATekHoverSail_Character_BP_C_Time_After_Drift_To_Retain_Velocity_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.is player holding drift
struct ATekHoverSail_Character_BP_C_is_player_holding_drift_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Presses Held Drift Button
struct ATekHoverSail_Character_BP_C_Client_Presses_Held_Drift_Button_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Releases Held Drift Button
struct ATekHoverSail_Character_BP_C_Client_Releases_Held_Drift_Button_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.set up everything for detecting tricks in the air
struct ATekHoverSail_Character_BP_C_set_up_everything_for_detecting_tricks_in_the_air_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Completed 360 in air
struct ATekHoverSail_Character_BP_C_Completed_360_in_air_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Completed Held Trick for Bonus
struct ATekHoverSail_Character_BP_C_Completed_Held_Trick_for_Bonus_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Completed One Shot Trick For Bonus
struct ATekHoverSail_Character_BP_C_Completed_One_Shot_Trick_For_Bonus_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Shortly After Drift Boost
struct ATekHoverSail_Character_BP_C_Is_Shortly_After_Drift_Boost_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Can Request Drift Boost
struct ATekHoverSail_Character_BP_C_Can_Request_Drift_Boost_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Request drift boost
struct ATekHoverSail_Character_BP_C_Request_drift_boost_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Request Boost After Drift
struct ATekHoverSail_Character_BP_C_Request_Boost_After_Drift_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Allowed Time After Stopping Drift To Be Able To Boost
struct ATekHoverSail_Character_BP_C_Allowed_Time_After_Stopping_Drift_To_Be_Able_To_Boost_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.client releases trick button
struct ATekHoverSail_Character_BP_C_client_releases_trick_button_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.client holds trick button
struct ATekHoverSail_Character_BP_C_client_holds_trick_button_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Releases camera button
struct ATekHoverSail_Character_BP_C_Client_Releases_camera_button_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Holds camera button
struct ATekHoverSail_Character_BP_C_Client_Holds_camera_button_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Presses FreeSpin Button
struct ATekHoverSail_Character_BP_C_Client_Presses_FreeSpin_Button_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Releases FreeSpin Button
struct ATekHoverSail_Character_BP_C_Client_Releases_FreeSpin_Button_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.client releases spin button
struct ATekHoverSail_Character_BP_C_client_releases_spin_button_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Holds Spin Button
struct ATekHoverSail_Character_BP_C_Client_Holds_Spin_Button_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveTick
struct ATekHoverSail_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Player Currently Holding And Able To Aerial Boost
struct ATekHoverSail_Character_BP_C_Is_Player_Currently_Holding_And_Able_To_Aerial_Boost_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Delay Before Starting To Recharge Boost In Air
struct ATekHoverSail_Character_BP_C_Delay_Before_Starting_To_Recharge_Boost_In_Air_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Aerial Boost Drain
struct ATekHoverSail_Character_BP_C_Aerial_Boost_Drain_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Recharge Aerial Boost
struct ATekHoverSail_Character_BP_C_Recharge_Aerial_Boost_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct ATekHoverSail_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Aerial Boosting Active_Not pure
struct ATekHoverSail_Character_BP_C_Is_Aerial_Boosting_Active_Not_pure_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.is cliff diving
struct ATekHoverSail_Character_BP_C_is_cliff_diving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Near Ground not pure
struct ATekHoverSail_Character_BP_C_Is_Near_Ground_not_pure_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOverrideCameraViewTarget
struct ATekHoverSail_Character_BP_C_BPOverrideCameraViewTarget_Params
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

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.can boost forward on landing trick
struct ATekHoverSail_Character_BP_C_can_boost_forward_on_landing_trick_Params
{
	bool                                               Has_Landed_Trick;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.can request full boost
struct ATekHoverSail_Character_BP_C_can_request_full_boost_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetGravityZScale
struct ATekHoverSail_Character_BP_C_BPGetGravityZScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Finished Putting Sail Down
struct ATekHoverSail_Character_BP_C_Finished_Putting_Sail_Down_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Aerial Boosting Active
struct ATekHoverSail_Character_BP_C_Is_Aerial_Boosting_Active_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.can aerial boost
struct ATekHoverSail_Character_BP_C_can_aerial_boost_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Get Aerial Charge Meter Amount
struct ATekHoverSail_Character_BP_C_Get_Aerial_Charge_Meter_Amount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.finished aerial boost timer completely
struct ATekHoverSail_Character_BP_C_finished_aerial_boost_timer_completely_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.reset aerial boost
struct ATekHoverSail_Character_BP_C_reset_aerial_boost_Params
{
	bool                                               ignore_time_constraint;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Finish Aerial Boost
struct ATekHoverSail_Character_BP_C_Finish_Aerial_Boost_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.begin aerial boosting
struct ATekHoverSail_Character_BP_C_begin_aerial_boosting_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Release Holding Tricks
struct ATekHoverSail_Character_BP_C_Release_Holding_Tricks_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.request full boost
struct ATekHoverSail_Character_BP_C_request_full_boost_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.does skiff want to run
struct ATekHoverSail_Character_BP_C_does_skiff_want_to_run_Params
{
	bool                                               wants_to_run;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ThrottledTick
struct ATekHoverSail_Character_BP_C_ThrottledTick_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.is near ground
struct ATekHoverSail_Character_BP_C_is_near_ground_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Reset Hold Forward
struct ATekHoverSail_Character_BP_C_Reset_Hold_Forward_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Reset Hold Right
struct ATekHoverSail_Character_BP_C_Reset_Hold_Right_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.RidingTick
struct ATekHoverSail_Character_BP_C_RidingTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetRiderSocket
struct ATekHoverSail_Character_BP_C_BPGetRiderSocket_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyClearRider
struct ATekHoverSail_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.EnableTurnToFaceRotation
struct ATekHoverSail_Character_BP_C_EnableTurnToFaceRotation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ModifySkiffHorizontalInputs
struct ATekHoverSail_Character_BP_C_ModifySkiffHorizontalInputs_Params
{
	struct FVector                                     Input;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewInput;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetCurrentHoverFloorZ
struct ATekHoverSail_Character_BP_C_GetCurrentHoverFloorZ_Params
{
	bool                                               bUseAverage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValidFloor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FloorZ;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetHoverSlopeDeltaRatio_PURE
struct ATekHoverSail_Character_BP_C_GetHoverSlopeDeltaRatio_PURE_Params
{
	bool                                               bAdjustWithMax;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetHoverSlopeDeltaRatio
struct ATekHoverSail_Character_BP_C_GetHoverSlopeDeltaRatio_Params
{
	bool                                               bAdjustWithMax;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DoHoverSlopeCheck
struct ATekHoverSail_Character_BP_C_DoHoverSlopeCheck_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPCanCryo
struct ATekHoverSail_Character_BP_C_BPCanCryo_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsSkiffRepairModeCooldownActive
struct ATekHoverSail_Character_BP_C_IsSkiffRepairModeCooldownActive_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPost;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RemainingTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsSkiffRepairDisabledFromDamage
struct ATekHoverSail_Character_BP_C_IsSkiffRepairDisabledFromDamage_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RemainingTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPAcknowledgeServerCorrection
struct ATekHoverSail_Character_BP_C_BPAcknowledgeServerCorrection_Params
{
	float*                                             TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NewLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NewVel;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        NewBase;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewBaseBoneName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnStopJump
struct ATekHoverSail_Character_BP_C_BPOnStopJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnStartJump
struct ATekHoverSail_Character_BP_C_BPOnStartJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyToggleHUD
struct ATekHoverSail_Character_BP_C_BPNotifyToggleHUD_Params
{
	bool*                                              bHudHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CalculateTotalAlternateFuel
struct ATekHoverSail_Character_BP_C_CalculateTotalAlternateFuel_Params
{
	float                                              TotalAltFuel;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetRepairModeHudMessage
struct ATekHoverSail_Character_BP_C_GetRepairModeHudMessage_Params
{
	class FString                                      Message;                                                  // (Parm, OutParm, ZeroConstructor)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageDamageFX
struct ATekHoverSail_Character_BP_C_Tick_ManageDamageFX_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.NetSetCachedLandedRootRotationOffset
struct ATekHoverSail_Character_BP_C_NetSetCachedLandedRootRotationOffset_Params
{
	struct FRotator                                    NewOffset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnBasedPawnRemovedNotify
struct ATekHoverSail_Character_BP_C_BP_OnBasedPawnRemovedNotify_Params
{
	class AActor**                                     RemovedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnBasedPawnAddedNotify
struct ATekHoverSail_Character_BP_C_BP_OnBasedPawnAddedNotify_Params
{
	class AActor**                                     AddedActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetFuelConversionRateForClass
struct ATekHoverSail_Character_BP_C_GetFuelConversionRateForClass_Params
{
	class UClass*                                      ForClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffRepairModeStateChanged
struct ATekHoverSail_Character_BP_C_OnSkiffRepairModeStateChanged_Params
{
	bool                                               bNewState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.NetSetSkiffRepairModeActive
struct ATekHoverSail_Character_BP_C_NetSetSkiffRepairModeActive_Params
{
	bool                                               bNewActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CanSkiffUseRepairMode
struct ATekHoverSail_Character_BP_C_CanSkiffUseRepairMode_Params
{
	bool                                               bForStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPTryMultiUse
struct ATekHoverSail_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Get Repair Mode Hud Message_PURE
struct ATekHoverSail_Character_BP_C_Get_Repair_Mode_Hud_Message_PURE_Params
{
	class FString                                      Message;                                                  // (Parm, OutParm, ZeroConstructor)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BlueprintDrawFloatingHUD
struct ATekHoverSail_Character_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetMultiUseEntries
struct ATekHoverSail_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageAutoRepair
struct ATekHoverSail_Character_BP_C_Tick_ManageAutoRepair_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_ForceAllowAddBuff
struct ATekHoverSail_Character_BP_C_BP_ForceAllowAddBuff_Params
{
	class UClass**                                     BuffClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BlueprintPlayDying
struct ATekHoverSail_Character_BP_C_BlueprintPlayDying_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPServerHandleNetExecCommand
struct ATekHoverSail_Character_BP_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ConsumeFuel
struct ATekHoverSail_Character_BP_C_ConsumeFuel_Params
{
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MulticastFuel;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.HasEnoughFuel
struct ATekHoverSail_Character_BP_C_HasEnoughFuel_Params
{
	float                                              RequiredFuel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.TryRefillCurrentFuelUnit
struct ATekHoverSail_Character_BP_C_TryRefillCurrentFuelUnit_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.HasAnyFuel
struct ATekHoverSail_Character_BP_C_HasAnyFuel_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentFuel;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPInventoryItemDropped
struct ATekHoverSail_Character_BP_C_BPInventoryItemDropped_Params
{
	class UObject**                                    InventoryItemObject;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyInventoryItemChange
struct ATekHoverSail_Character_BP_C_BPNotifyInventoryItemChange_Params
{
	bool*                                              bIsItemAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffInventoryUpdated
struct ATekHoverSail_Character_BP_C_OnSkiffInventoryUpdated_Params
{
	class UPrimalItem*                                 UpdatedItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPSetupTamed
struct ATekHoverSail_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DisableLevelUps
struct ATekHoverSail_Character_BP_C_DisableLevelUps_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BSetupDinoTameable
struct ATekHoverSail_Character_BP_C_BSetupDinoTameable_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ShowDropDinoIndicator
struct ATekHoverSail_Character_BP_C_Tick_ShowDropDinoIndicator_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetSkiffAcceleration
struct ATekHoverSail_Character_BP_C_GetSkiffAcceleration_Params
{
	struct FVector                                     NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsValidHoverTraceHit
struct ATekHoverSail_Character_BP_C_IsValidHoverTraceHit_Params
{
	struct FHitResult                                  ForHit;                                                   // (Parm, OutParm, ReferenceParm)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsSkiffRunning
struct ATekHoverSail_Character_BP_C_IsSkiffRunning_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnSetRunning
struct ATekHoverSail_Character_BP_C_BP_OnSetRunning_Params
{
	bool*                                              bNewIsRunning;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnReceiveSkiff2dMovementInput
struct ATekHoverSail_Character_BP_C_OnReceiveSkiff2dMovementInput_Params
{
	float                                              InputAxisVal;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bright;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldIntercept;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPCanBeBaseForCharacter
struct ATekHoverSail_Character_BP_C_BPCanBeBaseForCharacter_Params
{
	class APawn**                                      Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetRiderUnboardDirection
struct ATekHoverSail_Character_BP_C_BPGetRiderUnboardDirection_Params
{
	class APrimalCharacter**                           RidingCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetRiderUnboardLocation
struct ATekHoverSail_Character_BP_C_BPGetRiderUnboardLocation_Params
{
	class APrimalCharacter**                           RidingCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CanHover
struct ATekHoverSail_Character_BP_C_CanHover_Params
{
	bool                                               bForStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnTamedOrderReceived
struct ATekHoverSail_Character_BP_C_BP_OnTamedOrderReceived_Params
{
	class APrimalCharacter**                           FromCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDinoTamedOrder>*                      OrderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     enemyTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              orderNotExecuted;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.WantsToFlyUp
struct ATekHoverSail_Character_BP_C_WantsToFlyUp_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_CheckSkiffInputs
struct ATekHoverSail_Character_BP_C_Tick_CheckSkiffInputs_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.UpdateSyncedFuelAmount
struct ATekHoverSail_Character_BP_C_UpdateSyncedFuelAmount_Params
{
	bool                                               bWasChanged;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetSkiffBlockersTraceIgnoreActors
struct ATekHoverSail_Character_BP_C_GetSkiffBlockersTraceIgnoreActors_Params
{
	TArray<class AActor*>                              IgnoreActors;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageSkiffCamera
struct ATekHoverSail_Character_BP_C_Tick_ManageSkiffCamera_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsPhysicsVolumeLava
struct ATekHoverSail_Character_BP_C_IsPhysicsVolumeLava_Params
{
	class APhysicsVolume*                              CheckVolume;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLava;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CanSkiffTryToTrulyLand
struct ATekHoverSail_Character_BP_C_CanSkiffTryToTrulyLand_Params
{
	struct FVector                                     WithFlyingVelocity;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnStartLandFailed
struct ATekHoverSail_Character_BP_C_BP_OnStartLandFailed_Params
{
	int*                                               ReasonIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ResetSkiffInputs
struct ATekHoverSail_Character_BP_C_ResetSkiffInputs_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetEnvironmentalParticleTraceDistance
struct ATekHoverSail_Character_BP_C_GetEnvironmentalParticleTraceDistance_Params
{
	struct FName                                       ForSocketName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TraceDist;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveDestroyed
struct ATekHoverSail_Character_BP_C_ReceiveDestroyed_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageHoverGroundFX
struct ATekHoverSail_Character_BP_C_Tick_ManageHoverGroundFX_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffFailedTakeoff
struct ATekHoverSail_Character_BP_C_OnSkiffFailedTakeoff_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.SetTargetHoverHeight
struct ATekHoverSail_Character_BP_C_SetTargetHoverHeight_Params
{
	float                                              NewHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.UpdateSkiffHoverState
struct ATekHoverSail_Character_BP_C_UpdateSkiffHoverState_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffHoverStateChanged
struct ATekHoverSail_Character_BP_C_OnSkiffHoverStateChanged_Params
{
	TEnumAsByte<E_HoverSkiffHoverState>                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_HoverSkiffHoverState>                PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.NetSetSkiffHoverState
struct ATekHoverSail_Character_BP_C_NetSetSkiffHoverState_Params
{
	TEnumAsByte<E_HoverSkiffHoverState>                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_GetCustomModifier_MaxSpeed
struct ATekHoverSail_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetMinHoverHeight
struct ATekHoverSail_Character_BP_C_GetMinHoverHeight_Params
{
	float                                              MinHeight;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsSkiffChangingHoverHeight
struct ATekHoverSail_Character_BP_C_IsSkiffChangingHoverHeight_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_CanFly
struct ATekHoverSail_Character_BP_C_BP_CanFly_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageFuel
struct ATekHoverSail_Character_BP_C_Tick_ManageFuel_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetHUDElements
struct ATekHoverSail_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveAnyDamage
struct ATekHoverSail_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OverrideTerminalVelocity
struct ATekHoverSail_Character_BP_C_BP_OverrideTerminalVelocity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.KillSkiff
struct ATekHoverSail_Character_BP_C_KillSkiff_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffCrash
struct ATekHoverSail_Character_BP_C_OnSkiffCrash_Params
{
	bool                                               bFromImpact;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_PreventMovementMode
struct ATekHoverSail_Character_BP_C_BP_PreventMovementMode_Params
{
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_Crashing
struct ATekHoverSail_Character_BP_C_Tick_Crashing_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffStartedCrashing
struct ATekHoverSail_Character_BP_C_OnSkiffStartedCrashing_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPAdjustDamage
struct ATekHoverSail_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifySetRider
struct ATekHoverSail_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.UpdateOwningClientReplicatedInputs
struct ATekHoverSail_Character_BP_C_UpdateOwningClientReplicatedInputs_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.SetSkiffMovementInputAxisValue
struct ATekHoverSail_Character_BP_C_SetSkiffMovementInputAxisValue_Params
{
	int                                                Axis;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Newval;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_InterceptMoveRight
struct ATekHoverSail_Character_BP_C_BP_InterceptMoveRight_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_InterceptMoveForward
struct ATekHoverSail_Character_BP_C_BP_InterceptMoveForward_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPModifyRightDirectionInput
struct ATekHoverSail_Character_BP_C_BPModifyRightDirectionInput_Params
{
	struct FVector                                     directionInput;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPShouldLimitRightDirection
struct ATekHoverSail_Character_BP_C_BPShouldLimitRightDirection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_AllowWalkableSlopeOverride
struct ATekHoverSail_Character_BP_C_BP_AllowWalkableSlopeOverride_Params
{
	class UPrimitiveComponent**                        ForComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnMovementModeChangedNotify
struct ATekHoverSail_Character_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffSetFlight
struct ATekHoverSail_Character_BP_C_OnSkiffSetFlight_Params
{
	bool                                               bFly;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnSetFlight
struct ATekHoverSail_Character_BP_C_BPOnSetFlight_Params
{
	bool*                                              bFly;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveHit
struct ATekHoverSail_Character_BP_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DoSkiffHoverTraces
struct ATekHoverSail_Character_BP_C_DoSkiffHoverTraces_Params
{
	bool                                               bForceTraces;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnLanded
struct ATekHoverSail_Character_BP_C_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffLandingStageChanged
struct ATekHoverSail_Character_BP_C_OnSkiffLandingStageChanged_Params
{
	bool                                               bLanding;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnStartLandingNotify
struct ATekHoverSail_Character_BP_C_BP_OnStartLandingNotify_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CanSendInputRPC
struct ATekHoverSail_Character_BP_C_CanSendInputRPC_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetOverrideCameraInterpSpeed
struct ATekHoverSail_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params
{
	float*                                             DefaultTPVCameraSpeedInterpolationMultiplier;             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DefaultTPVOffsetInterpSpeed;                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TPVCameraSpeedInterpolationMultiplier;                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TPVOffsetInterpSpeed;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_GetCustomModifier_RotationRate
struct ATekHoverSail_Character_BP_C_BP_GetCustomModifier_RotationRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOverrideFlyingVelocity
struct ATekHoverSail_Character_BP_C_BPOverrideFlyingVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPModifyDesiredRotation
struct ATekHoverSail_Character_BP_C_BPModifyDesiredRotation_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InDesiredRotation;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    OutDesiredRotation;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.SetForceSkiffDescend
struct ATekHoverSail_Character_BP_C_SetForceSkiffDescend_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.StopHovering
struct ATekHoverSail_Character_BP_C_StopHovering_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.SetTimerIntervals
struct ATekHoverSail_Character_BP_C_SetTimerIntervals_Params
{
	bool                                               Fast;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPShouldLimitForwardDirection
struct ATekHoverSail_Character_BP_C_BPShouldLimitForwardDirection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPModifyForwardDirectionInput
struct ATekHoverSail_Character_BP_C_BPModifyForwardDirectionInput_Params
{
	struct FVector                                     directionInput;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPTimerServer
struct ATekHoverSail_Character_BP_C_BPTimerServer_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPTimerNonDedicated
struct ATekHoverSail_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.UserConstructionScript
struct ATekHoverSail_Character_BP_C_UserConstructionScript_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.wobble timeline__FinishedFunc
struct ATekHoverSail_Character_BP_C_wobble_timeline__FinishedFunc_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.wobble timeline__UpdateFunc
struct ATekHoverSail_Character_BP_C_wobble_timeline__UpdateFunc_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_0__FinishedFunc
struct ATekHoverSail_Character_BP_C_Timeline_0__FinishedFunc_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_0__UpdateFunc
struct ATekHoverSail_Character_BP_C_Timeline_0__UpdateFunc_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_1__FinishedFunc
struct ATekHoverSail_Character_BP_C_Timeline_1__FinishedFunc_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_1__UpdateFunc
struct ATekHoverSail_Character_BP_C_Timeline_1__UpdateFunc_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_2__FinishedFunc
struct ATekHoverSail_Character_BP_C_Timeline_2__FinishedFunc_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_2__UpdateFunc
struct ATekHoverSail_Character_BP_C_Timeline_2__UpdateFunc_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.InterceptInputEvent
struct ATekHoverSail_Character_BP_C_InterceptInputEvent_Params
{
	class FString*                                     InputName;                                                // (Parm, ZeroConstructor)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_RequestBraking
struct ATekHoverSail_Character_BP_C_Server_RequestBraking_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveBeginPlay
struct ATekHoverSail_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPUnstasis
struct ATekHoverSail_Character_BP_C_BPUnstasis_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnStartSkiffLanding
struct ATekHoverSail_Character_BP_C_Multi_OnStartSkiffLanding_Params
{
	bool                                               bLanding;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffSetFlight
struct ATekHoverSail_Character_BP_C_Multi_OnSkiffSetFlight_Params
{
	bool                                               bFly;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_SyncMovementInputs
struct ATekHoverSail_Character_BP_C_Server_SyncMovementInputs_Params
{
	struct FVector                                     MoveInputs;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_OnFireInputPressed
struct ATekHoverSail_Character_BP_C_Server_OnFireInputPressed_Params
{
	bool                                               bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_OnTargetingInputPressed
struct ATekHoverSail_Character_BP_C_Server_OnTargetingInputPressed_Params
{
	bool                                               bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffStartedCrashing
struct ATekHoverSail_Character_BP_C_Multi_OnSkiffStartedCrashing_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffCrash
struct ATekHoverSail_Character_BP_C_Multi_OnSkiffCrash_Params
{
	bool                                               bFromImpact;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DestroySkiff
struct ATekHoverSail_Character_BP_C_DestroySkiff_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CrashTimeout
struct ATekHoverSail_Character_BP_C_CrashTimeout_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffHoverStateChanged
struct ATekHoverSail_Character_BP_C_Multi_OnSkiffHoverStateChanged_Params
{
	TEnumAsByte<E_HoverSkiffHoverState>                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_HoverSkiffHoverState>                PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_SetSkiffHoverState
struct ATekHoverSail_Character_BP_C_Server_SetSkiffHoverState_Params
{
	TEnumAsByte<E_HoverSkiffHoverState>                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffFailedTakeoff
struct ATekHoverSail_Character_BP_C_Multi_OnSkiffFailedTakeoff_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffRepairModeStateChanged
struct ATekHoverSail_Character_BP_C_Multi_OnSkiffRepairModeStateChanged_Params
{
	bool                                               bNewState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_SyncFuelPercent
struct ATekHoverSail_Character_BP_C_Multi_SyncFuelPercent_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_SetSkiffFlight
struct ATekHoverSail_Character_BP_C_Server_SetSkiffFlight_Params
{
	bool                                               NewFlight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_StartSkiffLanding
struct ATekHoverSail_Character_BP_C_Server_StartSkiffLanding_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.multi close sail
struct ATekHoverSail_Character_BP_C_multi_close_sail_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.multi open sail
struct ATekHoverSail_Character_BP_C_multi_open_sail_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.full boosted multicast
struct ATekHoverSail_Character_BP_C_full_boosted_multicast_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.open sail
struct ATekHoverSail_Character_BP_C_open_sail_Params
{
	bool                                               is_open;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.wobble
struct ATekHoverSail_Character_BP_C_wobble_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.resync anim
struct ATekHoverSail_Character_BP_C_resync_anim_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_SyncAim
struct ATekHoverSail_Character_BP_C_Server_SyncAim_Params
{
	struct FVector                                     Aiming_Direction;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Successfully Lands A Trick
struct ATekHoverSail_Character_BP_C_Successfully_Lands_A_Trick_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.play camera impact on ground
struct ATekHoverSail_Character_BP_C_play_camera_impact_on_ground_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.on start aerial boost
struct ATekHoverSail_Character_BP_C_on_start_aerial_boost_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ServerSyncMovementValues
struct ATekHoverSail_Character_BP_C_ServerSyncMovementValues_Params
{
	float                                              Synced_Right;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Synced_Fwd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.on recharge aerial boost
struct ATekHoverSail_Character_BP_C_on_recharge_aerial_boost_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.on delay before recharge aerial boost
struct ATekHoverSail_Character_BP_C_on_delay_before_recharge_aerial_boost_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Drift Boosted Multicast
struct ATekHoverSail_Character_BP_C_Drift_Boosted_Multicast_Params
{
	struct FVector                                     boost_direction;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               forward_boost;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multicast completed trick in air
struct ATekHoverSail_Character_BP_C_Multicast_completed_trick_in_air_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.PUBLIC: Add Aerial Boost Charge Percentage Amount
struct ATekHoverSail_Character_BP_C_PUBLIC__Add_Aerial_Boost_Charge_Percentage_Amount_Params
{
	float                                              Percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.multicast add aerial boost charge
struct ATekHoverSail_Character_BP_C_multicast_add_aerial_boost_charge_Params
{
	float                                              Percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.lerp to riding socket
struct ATekHoverSail_Character_BP_C_lerp_to_riding_socket_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.stop lerp to riding socket
struct ATekHoverSail_Character_BP_C_stop_lerp_to_riding_socket_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.lerp to open sail socket
struct ATekHoverSail_Character_BP_C_lerp_to_open_sail_socket_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.stop lerp to open sail socket
struct ATekHoverSail_Character_BP_C_stop_lerp_to_open_sail_socket_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.dismount
struct ATekHoverSail_Character_BP_C_dismount_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multicast_RefreshColors
struct ATekHoverSail_Character_BP_C_Multicast_RefreshColors_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.MultiTrickActivationText
struct ATekHoverSail_Character_BP_C_MultiTrickActivationText_Params
{
};

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ExecuteUbergraph_TekHoverSail_Character_BP
struct ATekHoverSail_Character_BP_C_ExecuteUbergraph_TekHoverSail_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
