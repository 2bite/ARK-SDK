#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionRace_Interface_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionRace_Interface.MissionRace_Interface_C.GetPlayerRanking
struct UMissionRace_Interface_C_GetPlayerRanking_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Ranking;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionRace_Interface.MissionRace_Interface_C.GetRaceData
struct UMissionRace_Interface_C_GetRaceData_Params
{
	TArray<struct FRacePlayerData>                     RaceData;                                                 // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
