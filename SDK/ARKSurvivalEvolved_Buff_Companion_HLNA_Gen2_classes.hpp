#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Companion_HLNA_Gen2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C
// 0x02C0 (0x6970 - 0x66B0)
class ABuff_Companion_HLNA_Gen2_C : public ABuff_Companion_HLNA_C
{
public:
	float                                              distance_to_check_for_nearby_explorer_notes_for_reaction; // 0x66B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              interval_to_check_for_nearby_explorer_notes_for_reaction; // 0x66B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              interval_to_check_for_nearby_explorer_notes_for_reaction_extra_delay;// 0x66B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              distance_to_check_for_nearby_dispatchers_for_reaction;    // 0x66BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              interval_to_check_for_nearby_dispatchers_for_reaction;    // 0x66C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x66C4(0x0004) MISSED OFFSET
	TArray<struct FCompanionReactionData>              CompanionReactions_Gen2_FirstDispatcherEncountered;       // 0x66C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCompanionReactionData>              CompanionReactions_Gen2_FirstExplorerNoteEncountered;     // 0x66D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCompanionReactionData>              CompanionReactions_Gen2_NewExplorerNoteEncountered;       // 0x66E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCompanionReactionData>              CompanionReactions_Gen2_FirstMutagenEncountered;          // 0x66F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCompanionReactionData>              CompanionReactions_Gen2_FinalBossIsReady;                 // 0x6708(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FCompanionReactionData                      ReactionTemplateWithSFXArray;                             // 0x6718(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                plant_species_R_explorer_note_index;                      // 0x67B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x67BC(0x0004) MISSED OFFSET
	TArray<struct FName>                               ReqMissionTags_Gamma;                                     // 0x67C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               ReqMissionTags_Beta;                                      // 0x67D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               ReqMissionTags_Alpha;                                     // 0x67E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FStruct_ArrayOfMissionModules>       ExplorerNoteLinkedCompanionReactionModules;               // 0x67F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        ExplorerNoteLinkedCompanionReactionModules_Indices;       // 0x6800(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x6810(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x6811(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x6814(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_explorer_note_index;                   // 0x6818(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x681C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x6820(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x6821(0x0007) MISSED OFFSET
	struct FCompanionReactionData                      CallFunc_Array_Get_Item;                                  // 0x6828(0x00A0) (Transient, DuplicateTransient)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x68C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x68CC(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      K2Node_CustomEvent_Reaction_Data;                         // 0x68D0(0x00A0) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C");
		return ptr;
	}


	void STATIC_PlayLinkedCompanionReactionsByExplorerNoteIndex(int* index);
	bool STATIC_BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams);
	void STATIC_OnCompanionReactionPlayed(int* UniqueID, struct FCompanionReactionData* PlayedReactionData);
	void STATIC_play_reaction_for_explorer_note_index(int explorer_note_index);
	void NotifyItemAddedToCropPlot(class UPrimalItem** anItem);
	void Has_Completed_All_Required_Missions_For_Final_Boss(const struct FName& Class, bool* NewParam);
	void Check_for_Nearby_Explorer_Notes();
	void Check_For_Nearby_Dispatchers();
	void OnMyPlayerMissionComplete(class APrimalBuff_MissionData** MissionDataBuff, class AMissionType** Mission, bool* bSuccess);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void React_To_Ability_To_Start_Final_Boss_Mission_Gen2();
	void PublicStopCompanionReaction();
	void unlock_explorer_note_on_client(int explorer_note_index);
	void delay_play_explorer_note_reaction(const struct FCompanionReactionData& Reaction_Data);
	void ExecuteUbergraph_Buff_Companion_HLNA_Gen2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
