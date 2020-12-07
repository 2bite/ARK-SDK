#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Leaderboard_Race_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Leaderboard_Race.Leaderboard_Race_C.BPFormatLeaderboardRow
struct ULeaderboard_Race_C_BPFormatLeaderboardRow_Params
{
	struct FName*                                      MissionTag;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLeaderboardRow                             DatabaseRow;                                              // (Parm, OutParm, ReferenceParm)
	struct FLeaderboardDisplayRow                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Leaderboard_Race.Leaderboard_Race_C.SelectIcon
struct ULeaderboard_Race_C_SelectIcon_Params
{
	int                                                Place;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Leaderboard_Race.Leaderboard_Race_C.ExecuteUbergraph_Leaderboard_Race
struct ULeaderboard_Race_C_ExecuteUbergraph_Leaderboard_Race_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
