#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossArenaManager_Snow_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BossArenaManager_Snow.BossArenaManager_Snow_C.SpawnedBoss
struct ABossArenaManager_Snow_C_SpawnedBoss_Params
{
	class APrimalDinoCharacter**                       Boss;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BossArenaManager_Snow.BossArenaManager_Snow_C.IssueReturnWarning
struct ABossArenaManager_Snow_C_IssueReturnWarning_Params
{
};

// Function BossArenaManager_Snow.BossArenaManager_Snow_C.UserConstructionScript
struct ABossArenaManager_Snow_C_UserConstructionScript_Params
{
};

// Function BossArenaManager_Snow.BossArenaManager_Snow_C.ExecuteUbergraph_BossArenaManager_Snow
struct ABossArenaManager_Snow_C_ExecuteUbergraph_BossArenaManager_Snow_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
