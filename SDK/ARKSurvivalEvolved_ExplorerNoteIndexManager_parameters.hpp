#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplorerNoteIndexManager_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Story Explorer Note Unlocked Count and Max
struct UExplorerNoteIndexManager_C_Story_Explorer_Note_Unlocked_Count_and_Max_Params
{
	int                                                Unlocked_Count;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Max_Story_Explorer_Notes;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Still Has Story Explorer Note This Player Can Unlock
struct UExplorerNoteIndexManager_C_Still_Has_Story_Explorer_Note_This_Player_Can_Unlock_Params
{
	bool                                               still_has_some_to_unlock;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Still Has Factoid Explorer Note This Player Can Unlock
struct UExplorerNoteIndexManager_C_Still_Has_Factoid_Explorer_Note_This_Player_Can_Unlock_Params
{
	bool                                               still_has_some_to_unlock;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Get Next Gen 1 Glitch Story Mission Explorer Note Index
struct UExplorerNoteIndexManager_C_Get_Next_Gen_1_Glitch_Story_Mission_Explorer_Note_Index_Params
{
	int                                                next_unlockable_glitch_story_mission_note_index;          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Get Random Gen 1 Factoid Explorer Note Index
struct UExplorerNoteIndexManager_C_Get_Random_Gen_1_Factoid_Explorer_Note_Index_Params
{
	int                                                unlockable_random_explorer_note_index;                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.GetNextUnlockableExplorerNoteIndex
struct UExplorerNoteIndexManager_C_GetNextUnlockableExplorerNoteIndex_Params
{
	TArray<int>                                        array_of_explorer_note_indicies;                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                next_index;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.GetRandomUnlockableExplorerNoteIndex
struct UExplorerNoteIndexManager_C_GetRandomUnlockableExplorerNoteIndex_Params
{
	TArray<int>                                        array_of_explorer_note_indicies;                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                random_unlockable_index;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.ExecuteUbergraph_ExplorerNoteIndexManager
struct UExplorerNoteIndexManager_C_ExecuteUbergraph_ExplorerNoteIndexManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
