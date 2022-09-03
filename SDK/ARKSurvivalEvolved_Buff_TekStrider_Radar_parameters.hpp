#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_Radar_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Clear Local Shared Target
struct ABuff_TekStrider_Radar_C_Clear_Local_Shared_Target_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.add shared target
struct ABuff_TekStrider_Radar_C_add_shared_target_Params
{
	class APrimalCharacter*                            New_Target;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Interval Share Server Target to Rider
struct ABuff_TekStrider_Radar_C_Interval_Share_Server_Target_to_Rider_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Trigger Held
struct ABuff_TekStrider_Radar_C_Trigger_Held_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.TriggerReleased
struct ABuff_TekStrider_Radar_C_TriggerReleased_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Quicktap
struct ABuff_TekStrider_Radar_C_Quicktap_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Radar Change Filter to Only Dinos
struct ABuff_TekStrider_Radar_C_Radar_Change_Filter_to_Only_Dinos_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Radar Change Filter to Only Humans
struct ABuff_TekStrider_Radar_C_Radar_Change_Filter_to_Only_Humans_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Radar Change Filter to Both Dinos And Humans
struct ABuff_TekStrider_Radar_C_Radar_Change_Filter_to_Both_Dinos_And_Humans_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.find targets
struct ABuff_TekStrider_Radar_C_find_targets_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Flash Target
struct ABuff_TekStrider_Radar_C_Flash_Target_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.BPClientHandleNetExecCommand
struct ABuff_TekStrider_Radar_C_BPClientHandleNetExecCommand_Params
{
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.clear rider
struct ABuff_TekStrider_Radar_C_clear_rider_Params
{
	class AShooterCharacter**                          prev_rider;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Highlight Latest Shared Target
struct ABuff_TekStrider_Radar_C_Highlight_Latest_Shared_Target_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.set rider
struct ABuff_TekStrider_Radar_C_set_rider_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Restrict Sharing Target Info
struct ABuff_TekStrider_Radar_C_Restrict_Sharing_Target_Info_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Update Shared Target Location
struct ABuff_TekStrider_Radar_C_Update_Shared_Target_Location_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Keep Shared Target Visible
struct ABuff_TekStrider_Radar_C_Keep_Shared_Target_Visible_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Restrict Updating Nearby Teammates
struct ABuff_TekStrider_Radar_C_Restrict_Updating_Nearby_Teammates_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.BPServerHandleNetExecCommand
struct ABuff_TekStrider_Radar_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Get Dino Info HUDElement Desired Location
struct ABuff_TekStrider_Radar_C_Get_Dino_Info_HUDElement_Desired_Location_Params
{
	int                                                ListPositionIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Set Container HUDElement Size
struct ABuff_TekStrider_Radar_C_Set_Container_HUDElement_Size_Params
{
	int                                                DinoInfoListItemQuantity;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.SetActorStencilValue
struct ABuff_TekStrider_Radar_C_SetActorStencilValue_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Lowered Rate Of Updating Screenspace Loc Of Radar Hud Elems
struct ABuff_TekStrider_Radar_C_Lowered_Rate_Of_Updating_Screenspace_Loc_Of_Radar_Hud_Elems_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.update radar
struct ABuff_TekStrider_Radar_C_update_radar_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.can fire
struct ABuff_TekStrider_Radar_C_can_fire_Params
{
	bool                                               from_animbp;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.BuffTickClient
struct ABuff_TekStrider_Radar_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Clear Radar Characters
struct ABuff_TekStrider_Radar_C_Clear_Radar_Characters_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Delay Before Fadeout
struct ABuff_TekStrider_Radar_C_Delay_Before_Fadeout_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.OnRep_IsAlertActive
struct ABuff_TekStrider_Radar_C_OnRep_IsAlertActive_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Is Small Creature
struct ABuff_TekStrider_Radar_C_Is_Small_Creature_Params
{
	class APrimalDinoCharacter*                        creature;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSmall;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Is Dino Hostile
struct ABuff_TekStrider_Radar_C_Is_Dino_Hostile_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FleeingCountsAsHostile;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsHostile;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Classify Scanning Target
struct ABuff_TekStrider_Radar_C_Classify_Scanning_Target_Params
{
	class AActor*                                      ScanTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPara_WarningMode>                     WarningMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FleeingCountsAsHostile;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnemy;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSmallCreature;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Get Nearby Enemies
struct ABuff_TekStrider_Radar_C_Get_Nearby_Enemies_Params
{
	TArray<struct FVector>                             Locations;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Notify Player About Alert
struct ABuff_TekStrider_Radar_C_Notify_Player_About_Alert_Params
{
	class AShooterCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.BPGetHUDElements
struct ABuff_TekStrider_Radar_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Is Dino in Cone?
struct ABuff_TekStrider_Radar_C_Is_Dino_in_Cone__Params
{
	class APrimalCharacter*                            Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          Hits;                                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsInCone;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Get Cone Forward
struct ABuff_TekStrider_Radar_C_Get_Cone_Forward_Params
{
	struct FVector                                     Forward;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Get Cone Origin
struct ABuff_TekStrider_Radar_C_Get_Cone_Origin_Params
{
	struct FVector                                     ConeOrigin;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Deactivate Attachment
struct ABuff_TekStrider_Radar_C_Deactivate_Attachment_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Trigger
struct ABuff_TekStrider_Radar_C_Trigger_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.BPSetupForInstigator
struct ABuff_TekStrider_Radar_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.UserConstructionScript
struct ABuff_TekStrider_Radar_C_UserConstructionScript_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Timeline_0__FinishedFunc
struct ABuff_TekStrider_Radar_C_Timeline_0__FinishedFunc_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Timeline_0__UpdateFunc
struct ABuff_TekStrider_Radar_C_Timeline_0__UpdateFunc_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Multicast_Activate
struct ABuff_TekStrider_Radar_C_Multicast_Activate_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Multicast_Deactivate
struct ABuff_TekStrider_Radar_C_Multicast_Deactivate_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.StopAlertTick
struct ABuff_TekStrider_Radar_C_StopAlertTick_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Fadeout Hud Elem
struct ABuff_TekStrider_Radar_C_Fadeout_Hud_Elem_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.multicast toggle shared target
struct ABuff_TekStrider_Radar_C_multicast_toggle_shared_target_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.MulticastSetHasScannerListSorted
struct ABuff_TekStrider_Radar_C_MulticastSetHasScannerListSorted_Params
{
	bool                                               NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.MulticastSetSortedFoundCharacters
struct ABuff_TekStrider_Radar_C_MulticastSetSortedFoundCharacters_Params
{
};

// Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.ExecuteUbergraph_Buff_TekStrider_Radar
struct ABuff_TekStrider_Radar_C_ExecuteUbergraph_Buff_TekStrider_Radar_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
