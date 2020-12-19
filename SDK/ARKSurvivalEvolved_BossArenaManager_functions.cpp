// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossArenaManager_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BossArenaManager.BossArenaManager_C.SpawnedBoss
// ()

void ABossArenaManager_C::SpawnedBoss()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.SpawnedBoss");

	ABossArenaManager_C_SpawnedBoss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager.BossArenaManager_C.SFXBack to Home
// ()

void ABossArenaManager_C::SFXBack_to_Home()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.SFXBack to Home");

	ABossArenaManager_C_SFXBack_to_Home_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager.BossArenaManager_C.IssueReturnWarning
// (Exec, Public, Protected, NetServer, NetClient, BlueprintEvent, Const)

void ABossArenaManager_C::IssueReturnWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.IssueReturnWarning");

	ABossArenaManager_C_IssueReturnWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager.BossArenaManager_C.BPClientHandleNetExecCommand
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, NetServer, NetClient, BlueprintEvent, Const)
// Parameters:
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABossArenaManager_C::STATIC_BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.BPClientHandleNetExecCommand");

	ABossArenaManager_C_BPClientHandleNetExecCommand_Params params;
	params.CommandName = CommandName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function BossArenaManager.BossArenaManager_C.KillMinions
// ()

void ABossArenaManager_C::KillMinions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.KillMinions");

	ABossArenaManager_C_KillMinions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager.BossArenaManager_C.CheckForActivePlayers
// ()

void ABossArenaManager_C::CheckForActivePlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.CheckForActivePlayers");

	ABossArenaManager_C_CheckForActivePlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager.BossArenaManager_C.GetAllActorsInBossArena
// ()
// Parameters:
// bool                           bIncludeUnconscious            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeUntamedCreatures       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeDead                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnorePlayers                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnoreDinos                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnoreAttached                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          TheActors                      (Parm, OutParm, ZeroConstructor)

void ABossArenaManager_C::GetAllActorsInBossArena(bool bIncludeUnconscious, bool bIncludeUntamedCreatures, bool bIncludeDead, bool bIgnorePlayers, bool bIgnoreDinos, bool bIgnoreAttached, TArray<class AActor*>* TheActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.GetAllActorsInBossArena");

	ABossArenaManager_C_GetAllActorsInBossArena_Params params;
	params.bIncludeUnconscious = bIncludeUnconscious;
	params.bIncludeUntamedCreatures = bIncludeUntamedCreatures;
	params.bIncludeDead = bIncludeDead;
	params.bIgnorePlayers = bIgnorePlayers;
	params.bIgnoreDinos = bIgnoreDinos;
	params.bIgnoreAttached = bIgnoreAttached;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TheActors != nullptr)
		*TheActors = params.TheActors;
}


// Function BossArenaManager.BossArenaManager_C.IssueTimeWarning
// (Exec, Event, NetResponse, Static, Public, Protected, NetServer, NetClient, BlueprintEvent, Const)

void ABossArenaManager_C::STATIC_IssueTimeWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.IssueTimeWarning");

	ABossArenaManager_C_IssueTimeWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager.BossArenaManager_C.KillAllOccupants
// ()

void ABossArenaManager_C::KillAllOccupants()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.KillAllOccupants");

	ABossArenaManager_C_KillAllOccupants_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager.BossArenaManager_C.TeleportBackToHome
// ()

void ABossArenaManager_C::TeleportBackToHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.TeleportBackToHome");

	ABossArenaManager_C_TeleportBackToHome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager.BossArenaManager_C.DidTeleport
// ()
// Parameters:
// struct FVector                 ReturnPosition                 (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OverrideBossClass              (Parm, ZeroConstructor, IsPlainOldData)

void ABossArenaManager_C::DidTeleport(const struct FVector& ReturnPosition, class UClass* OverrideBossClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.DidTeleport");

	ABossArenaManager_C_DidTeleport_Params params;
	params.ReturnPosition = ReturnPosition;
	params.OverrideBossClass = OverrideBossClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager.BossArenaManager_C.IsValidForTeleport
// (NetReliable, Event, NetResponse, MulticastDelegate, Private, NetServer, NetClient, BlueprintEvent, Const)
// Parameters:
// class FString                  InvalidReason                  (Parm, OutParm, ZeroConstructor)

void ABossArenaManager_C::IsValidForTeleport(class FString* InvalidReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.IsValidForTeleport");

	ABossArenaManager_C_IsValidForTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InvalidReason != nullptr)
		*InvalidReason = params.InvalidReason;
}


// Function BossArenaManager.BossArenaManager_C.UserConstructionScript
// ()

void ABossArenaManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.UserConstructionScript");

	ABossArenaManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager.BossArenaManager_C.StartBoss
// ()

void ABossArenaManager_C::StartBoss()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.StartBoss");

	ABossArenaManager_C_StartBoss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager.BossArenaManager_C.ReceiveBeginPlay
// ()

void ABossArenaManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.ReceiveBeginPlay");

	ABossArenaManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager.BossArenaManager_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABossArenaManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.ReceiveTick");

	ABossArenaManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager.BossArenaManager_C.EventTeleportToHome
// ()

void ABossArenaManager_C::EventTeleportToHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.EventTeleportToHome");

	ABossArenaManager_C_EventTeleportToHome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager.BossArenaManager_C.SFXTeleportToHome
// ()

void ABossArenaManager_C::SFXTeleportToHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.SFXTeleportToHome");

	ABossArenaManager_C_SFXTeleportToHome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager.BossArenaManager_C.ExecuteUbergraph_BossArenaManager
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABossArenaManager_C::ExecuteUbergraph_BossArenaManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.ExecuteUbergraph_BossArenaManager");

	ABossArenaManager_C_ExecuteUbergraph_BossArenaManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
