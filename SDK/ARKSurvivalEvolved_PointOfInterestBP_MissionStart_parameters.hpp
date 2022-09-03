#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PointOfInterestBP_MissionStart_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.StartMyMission
struct APointOfInterestBP_MissionStart_C_StartMyMission_Params
{
	class APlayerController*                           WithPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.CanBeViewed
struct APointOfInterestBP_MissionStart_C_CanBeViewed_Params
{
	class AActor**                                     ByActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.CanPlayerStartMyMission
struct APointOfInterestBP_MissionStart_C_CanPlayerStartMyMission_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.BPGetMultiUseEntries
struct APointOfInterestBP_MissionStart_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.BPTryMultiUse
struct APointOfInterestBP_MissionStart_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.UserConstructionScript
struct APointOfInterestBP_MissionStart_C_UserConstructionScript_Params
{
};

// Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.ExecuteUbergraph_PointOfInterestBP_MissionStart
struct APointOfInterestBP_MissionStart_C_ExecuteUbergraph_PointOfInterestBP_MissionStart_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
