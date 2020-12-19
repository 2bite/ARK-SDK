#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionTypeBlueprintBase_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.PlaySoundForPlayersOnMission
struct AMissionTypeBlueprintBase_C_PlaySoundForPlayersOnMission_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.BPStaticIsPlayerEligibleForMission
struct AMissionTypeBlueprintBase_C_BPStaticIsPlayerEligibleForMission_Params
{
	class APlayerController**                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalBuff_MissionData**                    PlayerMissionData;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      OutReason;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.BPGetMetaTagsAsInts
struct AMissionTypeBlueprintBase_C_BPGetMetaTagsAsInts_Params
{
	TArray<int>                                        OutTagIds;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.UserConstructionScript
struct AMissionTypeBlueprintBase_C_UserConstructionScript_Params
{
};

// Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.OnMissionPhaseStarted
struct AMissionTypeBlueprintBase_C_OnMissionPhaseStarted_Params
{
	struct FName*                                      OldPhase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewPhase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.BPOnMissionDeactivated
struct AMissionTypeBlueprintBase_C_BPOnMissionDeactivated_Params
{
};

// Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.ExecuteUbergraph_MissionTypeBlueprintBase
struct AMissionTypeBlueprintBase_C_ExecuteUbergraph_MissionTypeBlueprintBase_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
