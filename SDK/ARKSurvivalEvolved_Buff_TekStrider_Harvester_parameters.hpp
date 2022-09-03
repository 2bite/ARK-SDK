#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_Harvester_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Try To Add  Resource from first trace
struct ABuff_TekStrider_Harvester_C_Try_To_Add__Resource_from_first_trace_Params
{
	class UPrimitiveComponent*                         hit_component;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FOverlappedFoliageElement>           Resources;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     impact_point;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.clamp angle
struct ABuff_TekStrider_Harvester_C_clamp_angle_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Deactivate Firing Vfx
struct ABuff_TekStrider_Harvester_C_Deactivate_Firing_Vfx_Params
{
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BuffTickServer
struct ABuff_TekStrider_Harvester_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BPGetHUDElements
struct ABuff_TekStrider_Harvester_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.CanActivateHarvester
struct ABuff_TekStrider_Harvester_C_CanActivateHarvester_Params
{
	bool                                               check_special_conditions_for_debugging;                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.GetOwnerStriderLinkedDediStorageSelectedItemClass
struct ABuff_TekStrider_Harvester_C_GetOwnerStriderLinkedDediStorageSelectedItemClass_Params
{
	bool                                               bIsValid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemClass;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.ShouldHarvestFoliage
struct ABuff_TekStrider_Harvester_C_ShouldHarvestFoliage_Params
{
	struct FOverlappedFoliageElement                   CheckFoliage;                                             // (Parm)
	struct FVector                                     override_harvest_loc;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BPClientDoMultiUse
struct ABuff_TekStrider_Harvester_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Cannot Fire Timer
struct ABuff_TekStrider_Harvester_C_Cannot_Fire_Timer_Params
{
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BPGetMultiUseEntries
struct ABuff_TekStrider_Harvester_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.add found foliage
struct ABuff_TekStrider_Harvester_C_add_found_foliage_Params
{
	TArray<struct FOverlappedFoliageElement>           Array;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.spawn targeting vfx
struct ABuff_TekStrider_Harvester_C_spawn_targeting_vfx_Params
{
	TArray<struct FVector>                             InputPin;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Pass In Foliage Limit
struct ABuff_TekStrider_Harvester_C_Pass_In_Foliage_Limit_Params
{
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Is Firing Clientside
struct ABuff_TekStrider_Harvester_C_Is_Firing_Clientside_Params
{
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Restriction on Passing Foliage to Server
struct ABuff_TekStrider_Harvester_C_Restriction_on_Passing_Foliage_to_Server_Params
{
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Delay Disable Independant Impact Mining Vfx 2
struct ABuff_TekStrider_Harvester_C_Delay_Disable_Independant_Impact_Mining_Vfx_2_Params
{
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.clamp aiming angle
struct ABuff_TekStrider_Harvester_C_clamp_aiming_angle_Params
{
	struct FVector                                     inVec;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.set aim indicator direction
struct ABuff_TekStrider_Harvester_C_set_aim_indicator_direction_Params
{
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Restrict Too Frequent Calls to Show Gather Vfx
struct ABuff_TekStrider_Harvester_C_Restrict_Too_Frequent_Calls_to_Show_Gather_Vfx_Params
{
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Is Firing
struct ABuff_TekStrider_Harvester_C_Is_Firing_Params
{
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.ReceiveBeginPlay
struct ABuff_TekStrider_Harvester_C_ReceiveBeginPlay_Params
{
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Delay Disable Independant Impact Mining Vfx
struct ABuff_TekStrider_Harvester_C_Delay_Disable_Independant_Impact_Mining_Vfx_Params
{
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Trigger
struct ABuff_TekStrider_Harvester_C_Trigger_Params
{
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Get Beam Origin and End
struct ABuff_TekStrider_Harvester_C_Get_Beam_Origin_and_End_Params
{
	struct FVector                                     Origin;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.GetBeamImpact
struct ABuff_TekStrider_Harvester_C_GetBeamImpact_Params
{
	struct FVector                                     BeamStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BeamEnd;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BeamImpact;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HitSomething_;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.IsAIControlled?
struct ABuff_TekStrider_Harvester_C_IsAIControlled__Params
{
	bool                                               IsAI_;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Update Beam Impact Location
struct ABuff_TekStrider_Harvester_C_Update_Beam_Impact_Location_Params
{
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BPSetupForInstigator
struct ABuff_TekStrider_Harvester_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BuffTickClient
struct ABuff_TekStrider_Harvester_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Buff Tick Server Logic
struct ABuff_TekStrider_Harvester_C_Buff_Tick_Server_Logic_Params
{
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Visual Beam Origin
struct ABuff_TekStrider_Harvester_C_Visual_Beam_Origin_Params
{
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.UserConstructionScript
struct ABuff_TekStrider_Harvester_C_UserConstructionScript_Params
{
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_ActivateBeam
struct ABuff_TekStrider_Harvester_C_Multicast_ActivateBeam_Params
{
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_DeactivateBeam
struct ABuff_TekStrider_Harvester_C_Multicast_DeactivateBeam_Params
{
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.ValidatePlayerBeamOnServer
struct ABuff_TekStrider_Harvester_C_ValidatePlayerBeamOnServer_Params
{
	struct FVector                                     ImpactPoint;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_UpdateBeamImpactLocation
struct ABuff_TekStrider_Harvester_C_Multicast_UpdateBeamImpactLocation_Params
{
	struct FVector                                     BeamImpactLocation;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_Pass_Multiple_Impact_Locations
struct ABuff_TekStrider_Harvester_C_Multicast_Pass_Multiple_Impact_Locations_Params
{
	TArray<struct FVector>                             impact_locations;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               contained_rocks;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.multicast begin charging shot
struct ABuff_TekStrider_Harvester_C_multicast_begin_charging_shot_Params
{
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.InventoryItemAdded__DelegateSignature_Event
struct ABuff_TekStrider_Harvester_C_InventoryItemAdded__DelegateSignature_Event_Params
{
	class UPrimalInventoryComponent*                   inventory;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem*                                 Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AmountAdded;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEquippedItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.bind item added
struct ABuff_TekStrider_Harvester_C_bind_item_added_Params
{
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.unbind item added
struct ABuff_TekStrider_Harvester_C_unbind_item_added_Params
{
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_Charge_Upcoming_Zaps
struct ABuff_TekStrider_Harvester_C_Multicast_Charge_Upcoming_Zaps_Params
{
	TArray<struct FVector>                             impact_locations;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               contained_rocks;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.passed-in foliage
struct ABuff_TekStrider_Harvester_C_passed_in_foliage_Params
{
	TArray<struct FOverlappedFoliageElement>           Foliage;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.ExecuteUbergraph_Buff_TekStrider_Harvester
struct ABuff_TekStrider_Harvester_C_ExecuteUbergraph_Buff_TekStrider_Harvester_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
