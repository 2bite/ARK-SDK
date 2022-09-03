#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossArenaManager_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BossArenaManager.BossArenaManager_C.ManageArenaEnableBuffsForCharacter
struct ABossArenaManager_C_ManageArenaEnableBuffsForCharacter_Params
{
	class APrimalCharacter*                            forChar;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BossArenaManager.BossArenaManager_C.SpawnedBoss
struct ABossArenaManager_C_SpawnedBoss_Params
{
};

// Function BossArenaManager.BossArenaManager_C.SFXBack to Home
struct ABossArenaManager_C_SFXBack_to_Home_Params
{
};

// Function BossArenaManager.BossArenaManager_C.IssueReturnWarning
struct ABossArenaManager_C_IssueReturnWarning_Params
{
};

// Function BossArenaManager.BossArenaManager_C.BPClientHandleNetExecCommand
struct ABossArenaManager_C_BPClientHandleNetExecCommand_Params
{
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BossArenaManager.BossArenaManager_C.KillMinions
struct ABossArenaManager_C_KillMinions_Params
{
};

// Function BossArenaManager.BossArenaManager_C.CheckForActivePlayers
struct ABossArenaManager_C_CheckForActivePlayers_Params
{
};

// Function BossArenaManager.BossArenaManager_C.GetAllActorsInBossArena
struct ABossArenaManager_C_GetAllActorsInBossArena_Params
{
	bool                                               bIncludeUnconscious;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeUntamedCreatures;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeDead;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnorePlayers;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreDinos;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreAttached;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              TheActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BossArenaManager.BossArenaManager_C.IssueTimeWarning
struct ABossArenaManager_C_IssueTimeWarning_Params
{
};

// Function BossArenaManager.BossArenaManager_C.KillAllOccupants
struct ABossArenaManager_C_KillAllOccupants_Params
{
};

// Function BossArenaManager.BossArenaManager_C.TeleportBackToHome
struct ABossArenaManager_C_TeleportBackToHome_Params
{
};

// Function BossArenaManager.BossArenaManager_C.DidTeleport
struct ABossArenaManager_C_DidTeleport_Params
{
	struct FVector                                     ReturnPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OverrideBossClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BossArenaManager.BossArenaManager_C.IsValidForTeleport
struct ABossArenaManager_C_IsValidForTeleport_Params
{
	class FString                                      InvalidReason;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BossArenaManager.BossArenaManager_C.UserConstructionScript
struct ABossArenaManager_C_UserConstructionScript_Params
{
};

// Function BossArenaManager.BossArenaManager_C.StartBoss
struct ABossArenaManager_C_StartBoss_Params
{
};

// Function BossArenaManager.BossArenaManager_C.ReceiveBeginPlay
struct ABossArenaManager_C_ReceiveBeginPlay_Params
{
};

// Function BossArenaManager.BossArenaManager_C.ReceiveTick
struct ABossArenaManager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BossArenaManager.BossArenaManager_C.EventTeleportToHome
struct ABossArenaManager_C_EventTeleportToHome_Params
{
};

// Function BossArenaManager.BossArenaManager_C.SFXTeleportToHome
struct ABossArenaManager_C_SFXTeleportToHome_Params
{
};

// Function BossArenaManager.BossArenaManager_C.ExecuteUbergraph_BossArenaManager
struct ABossArenaManager_C_ExecuteUbergraph_BossArenaManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
