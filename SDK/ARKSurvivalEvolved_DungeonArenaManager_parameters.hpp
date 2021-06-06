#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DungeonArenaManager_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DungeonArenaManager.DungeonArenaManager_C.GetNumEntitiesInCave
struct ADungeonArenaManager_C_GetNumEntitiesInCave_Params
{
	int                                                NumPlayers;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumDinos;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DungeonArenaManager.DungeonArenaManager_C.BPClientHandleNetExecCommand
struct ADungeonArenaManager_C_BPClientHandleNetExecCommand_Params
{
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DungeonArenaManager.DungeonArenaManager_C.ActivateArena
struct ADungeonArenaManager_C_ActivateArena_Params
{
	int                                                DifficultyIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DungeonArenaManager.DungeonArenaManager_C.IssueTimeWarning
struct ADungeonArenaManager_C_IssueTimeWarning_Params
{
};

// Function DungeonArenaManager.DungeonArenaManager_C.KillAllOccupants
struct ADungeonArenaManager_C_KillAllOccupants_Params
{
};

// Function DungeonArenaManager.DungeonArenaManager_C.Is Valid for Activation
struct ADungeonArenaManager_C_Is_Valid_for_Activation_Params
{
	class FString                                      InvalidReason;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function DungeonArenaManager.DungeonArenaManager_C.UserConstructionScript
struct ADungeonArenaManager_C_UserConstructionScript_Params
{
};

// Function DungeonArenaManager.DungeonArenaManager_C.ReceiveTick
struct ADungeonArenaManager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DungeonArenaManager.DungeonArenaManager_C.ExecuteUbergraph_DungeonArenaManager
struct ADungeonArenaManager_C_ExecuteUbergraph_DungeonArenaManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
