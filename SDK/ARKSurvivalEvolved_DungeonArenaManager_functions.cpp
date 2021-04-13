// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DungeonArenaManager_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DungeonArenaManager.DungeonArenaManager_C.GetNumEntitiesInCave
// ()
// Parameters:
// int                            NumPlayers                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NumDinos                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADungeonArenaManager_C::GetNumEntitiesInCave(int* NumPlayers, int* NumDinos)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonArenaManager.DungeonArenaManager_C.GetNumEntitiesInCave");

	ADungeonArenaManager_C_GetNumEntitiesInCave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumPlayers != nullptr)
		*NumPlayers = params.NumPlayers;
	if (NumDinos != nullptr)
		*NumDinos = params.NumDinos;
}


// Function DungeonArenaManager.DungeonArenaManager_C.BPClientHandleNetExecCommand
// (Net, NetReliable, NetRequest, Exec, Event, Static, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable)
// Parameters:
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADungeonArenaManager_C::STATIC_BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonArenaManager.DungeonArenaManager_C.BPClientHandleNetExecCommand");

	ADungeonArenaManager_C_BPClientHandleNetExecCommand_Params params;
	params.CommandName = CommandName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function DungeonArenaManager.DungeonArenaManager_C.ActivateArena
// ()
// Parameters:
// int                            DifficultyIndex                (Parm, ZeroConstructor, IsPlainOldData)

void ADungeonArenaManager_C::ActivateArena(int DifficultyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonArenaManager.DungeonArenaManager_C.ActivateArena");

	ADungeonArenaManager_C_ActivateArena_Params params;
	params.DifficultyIndex = DifficultyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DungeonArenaManager.DungeonArenaManager_C.IssueTimeWarning
// (NetRequest, Exec, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintPure, NetValidate)

void ADungeonArenaManager_C::IssueTimeWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonArenaManager.DungeonArenaManager_C.IssueTimeWarning");

	ADungeonArenaManager_C_IssueTimeWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DungeonArenaManager.DungeonArenaManager_C.KillAllOccupants
// ()

void ADungeonArenaManager_C::KillAllOccupants()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonArenaManager.DungeonArenaManager_C.KillAllOccupants");

	ADungeonArenaManager_C_KillAllOccupants_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DungeonArenaManager.DungeonArenaManager_C.Is Valid for Activation
// ()
// Parameters:
// class FString                  InvalidReason                  (Parm, OutParm, ZeroConstructor)

void ADungeonArenaManager_C::Is_Valid_for_Activation(class FString* InvalidReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonArenaManager.DungeonArenaManager_C.Is Valid for Activation");

	ADungeonArenaManager_C_Is_Valid_for_Activation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InvalidReason != nullptr)
		*InvalidReason = params.InvalidReason;
}


// Function DungeonArenaManager.DungeonArenaManager_C.UserConstructionScript
// ()

void ADungeonArenaManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonArenaManager.DungeonArenaManager_C.UserConstructionScript");

	ADungeonArenaManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DungeonArenaManager.DungeonArenaManager_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADungeonArenaManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonArenaManager.DungeonArenaManager_C.ReceiveTick");

	ADungeonArenaManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DungeonArenaManager.DungeonArenaManager_C.ExecuteUbergraph_DungeonArenaManager
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADungeonArenaManager_C::ExecuteUbergraph_DungeonArenaManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonArenaManager.DungeonArenaManager_C.ExecuteUbergraph_DungeonArenaManager");

	ADungeonArenaManager_C_ExecuteUbergraph_DungeonArenaManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
