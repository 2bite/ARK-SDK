#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossArenaManager_Forest_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BossArenaManager_Forest.BossArenaManager_Forest_C.SpawnedBoss
struct ABossArenaManager_Forest_C_SpawnedBoss_Params
{
	class APrimalDinoCharacter**                       Boss;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BossArenaManager_Forest.BossArenaManager_Forest_C.IssueReturnWarning
struct ABossArenaManager_Forest_C_IssueReturnWarning_Params
{
};

// Function BossArenaManager_Forest.BossArenaManager_Forest_C.UserConstructionScript
struct ABossArenaManager_Forest_C_UserConstructionScript_Params
{
};

// Function BossArenaManager_Forest.BossArenaManager_Forest_C.ExecuteUbergraph_BossArenaManager_Forest
struct ABossArenaManager_Forest_C_ExecuteUbergraph_BossArenaManager_Forest_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
