#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DayCycleManager_Gen2_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.BPAllowSpawningCrate
struct ADayCycleManager_Gen2_C_BPAllowSpawningCrate_Params
{
	class UClass**                                     CrateType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.SetupBackdropWarpMesh
struct ADayCycleManager_Gen2_C_SetupBackdropWarpMesh_Params
{
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.OnRep_WarpState
struct ADayCycleManager_Gen2_C_OnRep_WarpState_Params
{
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.DebugPrintWarpState
struct ADayCycleManager_Gen2_C_DebugPrintWarpState_Params
{
	class FString                                      WarpState;                                                // (Parm, ZeroConstructor)
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.SaveSkyboxInfo
struct ADayCycleManager_Gen2_C_SaveSkyboxInfo_Params
{
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.PlayWarpMatinee
struct ADayCycleManager_Gen2_C_PlayWarpMatinee_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeLeft;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.LoadWarpBackdrop
struct ADayCycleManager_Gen2_C_LoadWarpBackdrop_Params
{
	bool                                               Load;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.LoadAsteroids
struct ADayCycleManager_Gen2_C_LoadAsteroids_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UnloadAsteroids
struct ADayCycleManager_Gen2_C_UnloadAsteroids_Params
{
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.GetShipRootFromBackdropLevel
struct ADayCycleManager_Gen2_C_GetShipRootFromBackdropLevel_Params
{
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateSublevels
struct ADayCycleManager_Gen2_C_UpdateSublevels_Params
{
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ShouldLoadSublevels
struct ADayCycleManager_Gen2_C_ShouldLoadSublevels_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ClearSpaceCrates
struct ADayCycleManager_Gen2_C_ClearSpaceCrates_Params
{
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.RandomizeSkybox
struct ADayCycleManager_Gen2_C_RandomizeSkybox_Params
{
	int                                                newIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.SetupSkyboxTables
struct ADayCycleManager_Gen2_C_SetupSkyboxTables_Params
{
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.BPOnDCMCheat
struct ADayCycleManager_Gen2_C_BPOnDCMCheat_Params
{
	struct FName*                                      CheatName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ClientInitializeHazards
struct ADayCycleManager_Gen2_C_ClientInitializeHazards_Params
{
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.SetupSpaceHazards
struct ADayCycleManager_Gen2_C_SetupSpaceHazards_Params
{
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.GetRockwellStormLocations
struct ADayCycleManager_Gen2_C_GetRockwellStormLocations_Params
{
	TArray<struct FVector>                             Locations;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.GetEdenStormLocations
struct ADayCycleManager_Gen2_C_GetEdenStormLocations_Params
{
	TArray<struct FVector>                             Locations;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.CompareWeatherLocation
struct ADayCycleManager_Gen2_C_CompareWeatherLocation_Params
{
	struct FVector                                     StormLocaiton;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationToCompare;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StormBaseRadius;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InStormRadius;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.IsLocationInWeatherEvent
struct ADayCycleManager_Gen2_C_IsLocationInWeatherEvent_Params
{
	bool                                               Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.IsRainingAtLocation
struct ADayCycleManager_Gen2_C_IsRainingAtLocation_Params
{
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.Earth Quake Drop Item at Location
struct ADayCycleManager_Gen2_C_Earth_Quake_Drop_Item_at_Location_Params
{
	struct FVector                                     AtLoc;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BiomeArea;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AtRot;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ManageStormVectors
struct ADayCycleManager_Gen2_C_ManageStormVectors_Params
{
	TArray<struct FVector>                             BiomeVectorArray;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              ChanceToAddStorm;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumStorms;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BiomeXMin;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BiomeXMax;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BiomeYMin;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BiomeYMax;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StormRateOfTravel;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<double>                                     StormTimeArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              StormLifetime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BiomeHasActiveStorm;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UserConstructionScript
struct ADayCycleManager_Gen2_C_UserConstructionScript_Params
{
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateAreaBuff
struct ADayCycleManager_Gen2_C_UpdateAreaBuff_Params
{
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ReceiveBeginPlay
struct ADayCycleManager_Gen2_C_ReceiveBeginPlay_Params
{
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.InitializeSpaceHazards
struct ADayCycleManager_Gen2_C_InitializeSpaceHazards_Params
{
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.EnsureSublevelsAreLoaded
struct ADayCycleManager_Gen2_C_EnsureSublevelsAreLoaded_Params
{
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.TriggerWarp
struct ADayCycleManager_Gen2_C_TriggerWarp_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.EndWarp
struct ADayCycleManager_Gen2_C_EndWarp_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.DebugEndWarp
struct ADayCycleManager_Gen2_C_DebugEndWarp_Params
{
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.NetEndWarp
struct ADayCycleManager_Gen2_C_NetEndWarp_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateSkybox
struct ADayCycleManager_Gen2_C_UpdateSkybox_Params
{
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.CheckForShipRoot
struct ADayCycleManager_Gen2_C_CheckForShipRoot_Params
{
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ServerWarpWarmUpComplete
struct ADayCycleManager_Gen2_C_ServerWarpWarmUpComplete_Params
{
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ServerWarpCooldownComplete
struct ADayCycleManager_Gen2_C_ServerWarpCooldownComplete_Params
{
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.NetWarpLoopStarted
struct ADayCycleManager_Gen2_C_NetWarpLoopStarted_Params
{
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.RecieveMatineeUpdated
struct ADayCycleManager_Gen2_C_RecieveMatineeUpdated_Params
{
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ExecuteUbergraph_DayCycleManager_Gen2
struct ADayCycleManager_Gen2_C_ExecuteUbergraph_DayCycleManager_Gen2_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateSkyboxIndex__DelegateSignature
struct ADayCycleManager_Gen2_C_UpdateSkyboxIndex__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateAreaBuffPlayerStatus__DelegateSignature
struct ADayCycleManager_Gen2_C_UpdateAreaBuffPlayerStatus__DelegateSignature_Params
{
	bool                                               IsInCave;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUnderwater;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
