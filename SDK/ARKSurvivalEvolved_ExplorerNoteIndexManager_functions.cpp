// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplorerNoteIndexManager_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Story Explorer Note Unlocked Count and Max
// ()
// Parameters:
// int                            Unlocked_Count                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Max_Story_Explorer_Notes       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UExplorerNoteIndexManager_C::Story_Explorer_Note_Unlocked_Count_and_Max(int* Unlocked_Count, int* Max_Story_Explorer_Notes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Story Explorer Note Unlocked Count and Max");

	UExplorerNoteIndexManager_C_Story_Explorer_Note_Unlocked_Count_and_Max_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Unlocked_Count != nullptr)
		*Unlocked_Count = params.Unlocked_Count;
	if (Max_Story_Explorer_Notes != nullptr)
		*Max_Story_Explorer_Notes = params.Max_Story_Explorer_Notes;
}


// Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Still Has Story Explorer Note This Player Can Unlock
// ()
// Parameters:
// bool                           still_has_some_to_unlock       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UExplorerNoteIndexManager_C::Still_Has_Story_Explorer_Note_This_Player_Can_Unlock(bool* still_has_some_to_unlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Still Has Story Explorer Note This Player Can Unlock");

	UExplorerNoteIndexManager_C_Still_Has_Story_Explorer_Note_This_Player_Can_Unlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (still_has_some_to_unlock != nullptr)
		*still_has_some_to_unlock = params.still_has_some_to_unlock;
}


// Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Still Has Factoid Explorer Note This Player Can Unlock
// ()
// Parameters:
// bool                           still_has_some_to_unlock       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UExplorerNoteIndexManager_C::Still_Has_Factoid_Explorer_Note_This_Player_Can_Unlock(bool* still_has_some_to_unlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Still Has Factoid Explorer Note This Player Can Unlock");

	UExplorerNoteIndexManager_C_Still_Has_Factoid_Explorer_Note_This_Player_Can_Unlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (still_has_some_to_unlock != nullptr)
		*still_has_some_to_unlock = params.still_has_some_to_unlock;
}


// Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Get Next Gen 1 Glitch Story Mission Explorer Note Index
// ()
// Parameters:
// int                            next_unlockable_glitch_story_mission_note_index (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UExplorerNoteIndexManager_C::Get_Next_Gen_1_Glitch_Story_Mission_Explorer_Note_Index(int* next_unlockable_glitch_story_mission_note_index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Get Next Gen 1 Glitch Story Mission Explorer Note Index");

	UExplorerNoteIndexManager_C_Get_Next_Gen_1_Glitch_Story_Mission_Explorer_Note_Index_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (next_unlockable_glitch_story_mission_note_index != nullptr)
		*next_unlockable_glitch_story_mission_note_index = params.next_unlockable_glitch_story_mission_note_index;
}


// Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Get Random Gen 1 Factoid Explorer Note Index
// ()
// Parameters:
// int                            unlockable_random_explorer_note_index (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UExplorerNoteIndexManager_C::Get_Random_Gen_1_Factoid_Explorer_Note_Index(int* unlockable_random_explorer_note_index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Get Random Gen 1 Factoid Explorer Note Index");

	UExplorerNoteIndexManager_C_Get_Random_Gen_1_Factoid_Explorer_Note_Index_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (unlockable_random_explorer_note_index != nullptr)
		*unlockable_random_explorer_note_index = params.unlockable_random_explorer_note_index;
}


// Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.GetNextUnlockableExplorerNoteIndex
// ()
// Parameters:
// TArray<int>                    array_of_explorer_note_indicies (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            next_index                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UExplorerNoteIndexManager_C::GetNextUnlockableExplorerNoteIndex(TArray<int>* array_of_explorer_note_indicies, bool* Success, int* next_index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.GetNextUnlockableExplorerNoteIndex");

	UExplorerNoteIndexManager_C_GetNextUnlockableExplorerNoteIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (array_of_explorer_note_indicies != nullptr)
		*array_of_explorer_note_indicies = params.array_of_explorer_note_indicies;
	if (Success != nullptr)
		*Success = params.Success;
	if (next_index != nullptr)
		*next_index = params.next_index;
}


// Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.GetRandomUnlockableExplorerNoteIndex
// ()
// Parameters:
// TArray<int>                    array_of_explorer_note_indicies (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            random_unlockable_index        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UExplorerNoteIndexManager_C::GetRandomUnlockableExplorerNoteIndex(TArray<int>* array_of_explorer_note_indicies, bool* Success, int* random_unlockable_index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.GetRandomUnlockableExplorerNoteIndex");

	UExplorerNoteIndexManager_C_GetRandomUnlockableExplorerNoteIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (array_of_explorer_note_indicies != nullptr)
		*array_of_explorer_note_indicies = params.array_of_explorer_note_indicies;
	if (Success != nullptr)
		*Success = params.Success;
	if (random_unlockable_index != nullptr)
		*random_unlockable_index = params.random_unlockable_index;
}


// Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.ExecuteUbergraph_ExplorerNoteIndexManager
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UExplorerNoteIndexManager_C::ExecuteUbergraph_ExplorerNoteIndexManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.ExecuteUbergraph_ExplorerNoteIndexManager");

	UExplorerNoteIndexManager_C_ExecuteUbergraph_ExplorerNoteIndexManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
