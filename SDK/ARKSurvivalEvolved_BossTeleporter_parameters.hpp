#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossTeleporter_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BossTeleporter.BossTeleporter_C.ManageArenaDisableBuffsForCharacter
struct ABossTeleporter_C_ManageArenaDisableBuffsForCharacter_Params
{
	class APrimalCharacter*                            forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BossTeleporter.BossTeleporter_C.BackupCallArenaDidTeleportOnLevelLoaded
struct ABossTeleporter_C_BackupCallArenaDidTeleportOnLevelLoaded_Params
{
};

// Function BossTeleporter.BossTeleporter_C.Do TeleportSound
struct ABossTeleporter_C_Do_TeleportSound_Params
{
};

// Function BossTeleporter.BossTeleporter_C.BuffTickClient
struct ABossTeleporter_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BossTeleporter.BossTeleporter_C.DoTeleport
struct ABossTeleporter_C_DoTeleport_Params
{
};

// Function BossTeleporter.BossTeleporter_C.UserConstructionScript
struct ABossTeleporter_C_UserConstructionScript_Params
{
};

// Function BossTeleporter.BossTeleporter_C.NetDoTeleport
struct ABossTeleporter_C_NetDoTeleport_Params
{
};

// Function BossTeleporter.BossTeleporter_C.ReceiveBeginPlay
struct ABossTeleporter_C_ReceiveBeginPlay_Params
{
};

// Function BossTeleporter.BossTeleporter_C.ExecuteUbergraph_BossTeleporter
struct ABossTeleporter_C_ExecuteUbergraph_BossTeleporter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
