#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x02C0 (0x70D0 - 0x6E10)
class ABuff_Companion_HLNA_Gen2_C : public ABuff_Companion_HLNA_C
{
public:
	float                                              distance_to_check_for_nearby_explorer_notes_for_reaction; // 0x6E10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              interval_to_check_for_nearby_explorer_notes_for_reaction; // 0x6E14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              interval_to_check_for_nearby_explorer_notes_for_reaction_extra_delay;// 0x6E18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              distance_to_check_for_nearby_dispatchers_for_reaction;    // 0x6E1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              interval_to_check_for_nearby_dispatchers_for_reaction;    // 0x6E20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x6E24(0x0004) MISSED OFFSET
	TArray<struct FCompanionReactionData>              CompanionReactions_Gen2_FirstDispatcherEncountered;       // 0x6E28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCompanionReactionData>              CompanionReactions_Gen2_FirstExplorerNoteEncountered;     // 0x6E38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCompanionReactionData>              CompanionReactions_Gen2_NewExplorerNoteEncountered;       // 0x6E48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCompanionReactionData>              CompanionReactions_Gen2_FirstMutagenEncountered;          // 0x6E58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCompanionReactionData>              CompanionReactions_Gen2_FinalBossIsReady;                 // 0x6E68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FCompanionReactionData                      ReactionTemplateWithSFXArray;                             // 0x6E78(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                plant_species_R_explorer_note_index;                      // 0x6F18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x6F1C(0x0004) MISSED OFFSET
	TArray<struct FName>                               ReqMissionTags_Gamma;                                     // 0x6F20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               ReqMissionTags_Beta;                                      // 0x6F30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               ReqMissionTags_Alpha;                                     // 0x6F40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FStruct_ArrayOfMissionModules>       ExplorerNoteLinkedCompanionReactionModules;               // 0x6F50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        ExplorerNoteLinkedCompanionReactionModules_Indices;       // 0x6F60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x6F70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x6F71(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x6F74(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_explorer_note_index;                   // 0x6F78(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x6F7C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x6F80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x6F81(0x0007) MISSED OFFSET
	struct FCompanionReactionData                      CallFunc_Array_Get_Item;                                  // 0x6F88(0x00A0) (Transient, DuplicateTransient)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x7028(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x702C(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      K2Node_CustomEvent_Reaction_Data;                         // 0x7030(0x00A0) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C");
		return ptr;
	}


	void STATIC_PlayLinkedCompanionReactionsByExplorerNoteIndex(int* index);
	bool BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams);
	void OnCompanionReactionPlayed(int* UniqueID, struct FCompanionReactionData* PlayedReactionData);
	void play_reaction_for_explorer_note_index(int explorer_note_index);
	void NotifyItemAddedToCropPlot(class UPrimalItem** anItem);
	void Has_Completed_All_Required_Missions_For_Final_Boss(const struct FName& Class, bool* NewParam);
	void Check_for_Nearby_Explorer_Notes();
	void STATIC_Check_For_Nearby_Dispatchers();
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
