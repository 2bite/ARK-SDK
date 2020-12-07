#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossArenaManager_FZ_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BossArenaManager_FZ.BossArenaManager_FZ_C.SpawnedBoss
struct ABossArenaManager_FZ_C_SpawnedBoss_Params
{
	class APrimalDinoCharacter**                       Boss;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BossArenaManager_FZ.BossArenaManager_FZ_C.IssueReturnWarning
struct ABossArenaManager_FZ_C_IssueReturnWarning_Params
{
};

// Function BossArenaManager_FZ.BossArenaManager_FZ_C.UserConstructionScript
struct ABossArenaManager_FZ_C_UserConstructionScript_Params
{
};

// Function BossArenaManager_FZ.BossArenaManager_FZ_C.ExecuteUbergraph_BossArenaManager_FZ
struct ABossArenaManager_FZ_C_ExecuteUbergraph_BossArenaManager_FZ_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
