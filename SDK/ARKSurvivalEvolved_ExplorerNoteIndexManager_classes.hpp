#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplorerNoteIndexManager_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExplorerNoteIndexManager.ExplorerNoteIndexManager_C
// 0x0020 (0x0048 - 0x0028)
class UExplorerNoteIndexManager_C : public UObject
{
public:
	TArray<int>                                        Genesis_1_Random_Factoid_Explorer_Notes_Indicies;         // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        Genesis_1_Ordered_Glitch_Story_Mission_Explorer_Notes_Indicies;// 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ExplorerNoteIndexManager.ExplorerNoteIndexManager_C");
		return ptr;
	}


	void Story_Explorer_Note_Unlocked_Count_and_Max(int* Unlocked_Count, int* Max_Story_Explorer_Notes);
	void Still_Has_Story_Explorer_Note_This_Player_Can_Unlock(bool* still_has_some_to_unlock);
	void Still_Has_Factoid_Explorer_Note_This_Player_Can_Unlock(bool* still_has_some_to_unlock);
	void Get_Next_Gen_1_Glitch_Story_Mission_Explorer_Note_Index(int* next_unlockable_glitch_story_mission_note_index);
	void Get_Random_Gen_1_Factoid_Explorer_Note_Index(int* unlockable_random_explorer_note_index);
	void GetNextUnlockableExplorerNoteIndex(TArray<int>* array_of_explorer_note_indicies, bool* Success, int* next_index);
	void GetRandomUnlockableExplorerNoteIndex(TArray<int>* array_of_explorer_note_indicies, bool* Success, int* random_unlockable_index);
	void ExecuteUbergraph_ExplorerNoteIndexManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
