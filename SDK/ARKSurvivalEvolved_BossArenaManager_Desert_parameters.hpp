#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossArenaManager_Desert_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BossArenaManager_Desert.BossArenaManager_Desert_C.SpawnedBoss
struct ABossArenaManager_Desert_C_SpawnedBoss_Params
{
	class APrimalDinoCharacter**                       Boss;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BossArenaManager_Desert.BossArenaManager_Desert_C.IssueReturnWarning
struct ABossArenaManager_Desert_C_IssueReturnWarning_Params
{
};

// Function BossArenaManager_Desert.BossArenaManager_Desert_C.UserConstructionScript
struct ABossArenaManager_Desert_C_UserConstructionScript_Params
{
};

// Function BossArenaManager_Desert.BossArenaManager_Desert_C.ExecuteUbergraph_BossArenaManager_Desert
struct ABossArenaManager_Desert_C_ExecuteUbergraph_BossArenaManager_Desert_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
