#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Companion_HLNA_Gen2_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.PlayLinkedCompanionReactionsByExplorerNoteIndex
struct ABuff_Companion_HLNA_Gen2_C_PlayLinkedCompanionReactionsByExplorerNoteIndex_Params
{
	int*                                               index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.BPClientHandleNetExecCommand
struct ABuff_Companion_HLNA_Gen2_C_BPClientHandleNetExecCommand_Params
{
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.OnCompanionReactionPlayed
struct ABuff_Companion_HLNA_Gen2_C_OnCompanionReactionPlayed_Params
{
	struct FCompanionReactionData                      PlayedReactionData;                                       // (Parm, OutParm, ReferenceParm)
	int*                                               UniqueID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.play reaction for explorer note index
struct ABuff_Companion_HLNA_Gen2_C_play_reaction_for_explorer_note_index_Params
{
	int                                                explorer_note_index;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.NotifyItemAddedToCropPlot
struct ABuff_Companion_HLNA_Gen2_C_NotifyItemAddedToCropPlot_Params
{
	class UPrimalItem**                                anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.Has Completed All Required Missions For Final Boss
struct ABuff_Companion_HLNA_Gen2_C_Has_Completed_All_Required_Missions_For_Final_Boss_Params
{
	struct FName                                       Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.Check for Nearby Explorer Notes
struct ABuff_Companion_HLNA_Gen2_C_Check_for_Nearby_Explorer_Notes_Params
{
};

// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.Check For Nearby Dispatchers
struct ABuff_Companion_HLNA_Gen2_C_Check_For_Nearby_Dispatchers_Params
{
};

// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.OnMyPlayerMissionComplete
struct ABuff_Companion_HLNA_Gen2_C_OnMyPlayerMissionComplete_Params
{
	class APrimalBuff_MissionData**                    MissionDataBuff;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionType**                               Mission;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.ReceiveBeginPlay
struct ABuff_Companion_HLNA_Gen2_C_ReceiveBeginPlay_Params
{
};

// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.UserConstructionScript
struct ABuff_Companion_HLNA_Gen2_C_UserConstructionScript_Params
{
};

// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.React To Ability To Start Final Boss Mission Gen2
struct ABuff_Companion_HLNA_Gen2_C_React_To_Ability_To_Start_Final_Boss_Mission_Gen2_Params
{
};

// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.PublicStopCompanionReaction
struct ABuff_Companion_HLNA_Gen2_C_PublicStopCompanionReaction_Params
{
};

// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.unlock explorer note on client
struct ABuff_Companion_HLNA_Gen2_C_unlock_explorer_note_on_client_Params
{
	int                                                explorer_note_index;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.delay play explorer note reaction
struct ABuff_Companion_HLNA_Gen2_C_delay_play_explorer_note_reaction_Params
{
	struct FCompanionReactionData                      Reaction_Data;                                            // (Parm)
};

// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.ExecuteUbergraph_Buff_Companion_HLNA_Gen2
struct ABuff_Companion_HLNA_Gen2_C_ExecuteUbergraph_Buff_Companion_HLNA_Gen2_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
