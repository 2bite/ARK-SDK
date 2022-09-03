#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionType_GlitchCounter_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.OnUnlockedExplorerNote
struct AMissionType_GlitchCounter_Base_C_OnUnlockedExplorerNote_Params
{
};

// Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.GetCompletedGlitchCount
struct AMissionType_GlitchCounter_Base_C_GetCompletedGlitchCount_Params
{
	class AShooterCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CountCompleted;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.StaticOnReplicatedMissionDataUpdated
struct AMissionType_GlitchCounter_Base_C_StaticOnReplicatedMissionDataUpdated_Params
{
	class APrimalBuff_MissionData**                    missionData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.StaticOnMissionDataInitialized
struct AMissionType_GlitchCounter_Base_C_StaticOnMissionDataInitialized_Params
{
	class APrimalBuff_MissionData**                    missionData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.GetMissionDisplayName
struct AMissionType_GlitchCounter_Base_C_GetMissionDisplayName_Params
{
	class APlayerController**                          ShootCont;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.GetNumGlitchesCompleted
struct AMissionType_GlitchCounter_Base_C_GetNumGlitchesCompleted_Params
{
	class AShooterCharacter*                           ShooterCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.GetIntFromMissionType
struct AMissionType_GlitchCounter_Base_C_GetIntFromMissionType_Params
{
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.IsMissionComplete
struct AMissionType_GlitchCounter_Base_C_IsMissionComplete_Params
{
	class AShooterCharacter**                          forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.UserConstructionScript
struct AMissionType_GlitchCounter_Base_C_UserConstructionScript_Params
{
};

// Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.ExecuteUbergraph_MissionType_GlitchCounter_Base
struct AMissionType_GlitchCounter_Base_C_ExecuteUbergraph_MissionType_GlitchCounter_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
