#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjScoutTracker_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjScoutTracker.ProjScoutTracker_C.SpawnImpactVFX
struct AProjScoutTracker_C_SpawnImpactVFX_Params
{
};

// Function ProjScoutTracker.ProjScoutTracker_C.ScheduleNextTrackerImpactVFXSpawn
struct AProjScoutTracker_C_ScheduleNextTrackerImpactVFXSpawn_Params
{
};

// Function ProjScoutTracker.ProjScoutTracker_C.Is Clientor Single Player
struct AProjScoutTracker_C_Is_Clientor_Single_Player_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProjScoutTracker.ProjScoutTracker_C.IsServerOrSinglePlayer
struct AProjScoutTracker_C_IsServerOrSinglePlayer_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProjScoutTracker.ProjScoutTracker_C.ReceiveBeginPlay
struct AProjScoutTracker_C_ReceiveBeginPlay_Params
{
};

// Function ProjScoutTracker.ProjScoutTracker_C.ReceiveEndPlay
struct AProjScoutTracker_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjScoutTracker.ProjScoutTracker_C.ReceiveActorBeginOverlap
struct AProjScoutTracker_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjScoutTracker.ProjScoutTracker_C.UserConstructionScript
struct AProjScoutTracker_C_UserConstructionScript_Params
{
};

// Function ProjScoutTracker.ProjScoutTracker_C.TraceForTrackerHits
struct AProjScoutTracker_C_TraceForTrackerHits_Params
{
};

// Function ProjScoutTracker.ProjScoutTracker_C.SpawnImactVFXAndScheduleNextImpact
struct AProjScoutTracker_C_SpawnImactVFXAndScheduleNextImpact_Params
{
};

// Function ProjScoutTracker.ProjScoutTracker_C.ClientSpawnImpactVFX
struct AProjScoutTracker_C_ClientSpawnImpactVFX_Params
{
};

// Function ProjScoutTracker.ProjScoutTracker_C.ExecuteUbergraph_ProjScoutTracker
struct AProjScoutTracker_C_ExecuteUbergraph_ProjScoutTracker_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
