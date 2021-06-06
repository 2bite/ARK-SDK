// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Companion_HLNA_Gen2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.PlayLinkedCompanionReactionsByExplorerNoteIndex
// (NetRequest, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, Const)
// Parameters:
// int*                           index                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_Gen2_C::STATIC_PlayLinkedCompanionReactionsByExplorerNoteIndex(int* index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.PlayLinkedCompanionReactionsByExplorerNoteIndex");

	ABuff_Companion_HLNA_Gen2_C_PlayLinkedCompanionReactionsByExplorerNoteIndex_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.BPClientHandleNetExecCommand
// (NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, Const)
// Parameters:
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Companion_HLNA_Gen2_C::STATIC_BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.BPClientHandleNetExecCommand");

	ABuff_Companion_HLNA_Gen2_C_BPClientHandleNetExecCommand_Params params;
	params.CommandName = CommandName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.OnCompanionReactionPlayed
// (NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, Const)
// Parameters:
// struct FCompanionReactionData  PlayedReactionData             (Parm, OutParm, ReferenceParm)
// int*                           UniqueID                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_Gen2_C::STATIC_OnCompanionReactionPlayed(int* UniqueID, struct FCompanionReactionData* PlayedReactionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.OnCompanionReactionPlayed");

	ABuff_Companion_HLNA_Gen2_C_OnCompanionReactionPlayed_Params params;
	params.UniqueID = UniqueID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayedReactionData != nullptr)
		*PlayedReactionData = params.PlayedReactionData;
}


// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.play reaction for explorer note index
// (NetReliable, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, Const)
// Parameters:
// int                            explorer_note_index            (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_Gen2_C::STATIC_play_reaction_for_explorer_note_index(int explorer_note_index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.play reaction for explorer note index");

	ABuff_Companion_HLNA_Gen2_C_play_reaction_for_explorer_note_index_Params params;
	params.explorer_note_index = explorer_note_index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.NotifyItemAddedToCropPlot
// ()
// Parameters:
// class UPrimalItem**            anItem                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_Gen2_C::NotifyItemAddedToCropPlot(class UPrimalItem** anItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.NotifyItemAddedToCropPlot");

	ABuff_Companion_HLNA_Gen2_C_NotifyItemAddedToCropPlot_Params params;
	params.anItem = anItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.Has Completed All Required Missions For Final Boss
// ()
// Parameters:
// struct FName                   Class                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_Gen2_C::Has_Completed_All_Required_Missions_For_Final_Boss(const struct FName& Class, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.Has Completed All Required Missions For Final Boss");

	ABuff_Companion_HLNA_Gen2_C_Has_Completed_All_Required_Missions_For_Final_Boss_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.Check for Nearby Explorer Notes
// (NetReliable, Native, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, Const)

void ABuff_Companion_HLNA_Gen2_C::Check_for_Nearby_Explorer_Notes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.Check for Nearby Explorer Notes");

	ABuff_Companion_HLNA_Gen2_C_Check_for_Nearby_Explorer_Notes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.Check For Nearby Dispatchers
// (NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, Const)

void ABuff_Companion_HLNA_Gen2_C::Check_For_Nearby_Dispatchers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.Check For Nearby Dispatchers");

	ABuff_Companion_HLNA_Gen2_C_Check_For_Nearby_Dispatchers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.OnMyPlayerMissionComplete
// ()
// Parameters:
// class APrimalBuff_MissionData** MissionDataBuff                (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionType**           Mission                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_Gen2_C::OnMyPlayerMissionComplete(class APrimalBuff_MissionData** MissionDataBuff, class AMissionType** Mission, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.OnMyPlayerMissionComplete");

	ABuff_Companion_HLNA_Gen2_C_OnMyPlayerMissionComplete_Params params;
	params.MissionDataBuff = MissionDataBuff;
	params.Mission = Mission;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.ReceiveBeginPlay
// ()

void ABuff_Companion_HLNA_Gen2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.ReceiveBeginPlay");

	ABuff_Companion_HLNA_Gen2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.UserConstructionScript
// ()

void ABuff_Companion_HLNA_Gen2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.UserConstructionScript");

	ABuff_Companion_HLNA_Gen2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.React To Ability To Start Final Boss Mission Gen2
// ()

void ABuff_Companion_HLNA_Gen2_C::React_To_Ability_To_Start_Final_Boss_Mission_Gen2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.React To Ability To Start Final Boss Mission Gen2");

	ABuff_Companion_HLNA_Gen2_C_React_To_Ability_To_Start_Final_Boss_Mission_Gen2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.PublicStopCompanionReaction
// ()

void ABuff_Companion_HLNA_Gen2_C::PublicStopCompanionReaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.PublicStopCompanionReaction");

	ABuff_Companion_HLNA_Gen2_C_PublicStopCompanionReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.unlock explorer note on client
// ()
// Parameters:
// int                            explorer_note_index            (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_Gen2_C::unlock_explorer_note_on_client(int explorer_note_index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.unlock explorer note on client");

	ABuff_Companion_HLNA_Gen2_C_unlock_explorer_note_on_client_Params params;
	params.explorer_note_index = explorer_note_index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.delay play explorer note reaction
// ()
// Parameters:
// struct FCompanionReactionData  Reaction_Data                  (Parm)

void ABuff_Companion_HLNA_Gen2_C::delay_play_explorer_note_reaction(const struct FCompanionReactionData& Reaction_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.delay play explorer note reaction");

	ABuff_Companion_HLNA_Gen2_C_delay_play_explorer_note_reaction_Params params;
	params.Reaction_Data = Reaction_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.ExecuteUbergraph_Buff_Companion_HLNA_Gen2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_Gen2_C::ExecuteUbergraph_Buff_Companion_HLNA_Gen2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.ExecuteUbergraph_Buff_Companion_HLNA_Gen2");

	ABuff_Companion_HLNA_Gen2_C_ExecuteUbergraph_Buff_Companion_HLNA_Gen2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
