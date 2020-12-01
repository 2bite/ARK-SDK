// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EX_BossArenaManager_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EX_BossArenaManager.EX_BossArenaManager_C.SendAscensionPreload
// ()

void AEX_BossArenaManager_C::SendAscensionPreload()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager.EX_BossArenaManager_C.SendAscensionPreload");

	AEX_BossArenaManager_C_SendAscensionPreload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossArenaManager.EX_BossArenaManager_C.SetMusicInBiomes
// ()
// Parameters:
// class USoundBase*              MusicToPlay                    (Parm, ZeroConstructor, IsPlainOldData)

void AEX_BossArenaManager_C::SetMusicInBiomes(class USoundBase* MusicToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager.EX_BossArenaManager_C.SetMusicInBiomes");

	AEX_BossArenaManager_C_SetMusicInBiomes_Params params;
	params.MusicToPlay = MusicToPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossArenaManager.EX_BossArenaManager_C.PlayStartingAscensionMatinee
// ()

void AEX_BossArenaManager_C::PlayStartingAscensionMatinee()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager.EX_BossArenaManager_C.PlayStartingAscensionMatinee");

	AEX_BossArenaManager_C_PlayStartingAscensionMatinee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossArenaManager.EX_BossArenaManager_C.SendAscension
// ()

void AEX_BossArenaManager_C::SendAscension()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager.EX_BossArenaManager_C.SendAscension");

	AEX_BossArenaManager_C_SendAscension_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossArenaManager.EX_BossArenaManager_C.Spawn Ascension FVX
// ()

void AEX_BossArenaManager_C::Spawn_Ascension_FVX()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager.EX_BossArenaManager_C.Spawn Ascension FVX");

	AEX_BossArenaManager_C_Spawn_Ascension_FVX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossArenaManager.EX_BossArenaManager_C.SpawnedBoss
// ()
// Parameters:
// class APrimalDinoCharacter*    Boss                           (Parm, ZeroConstructor, IsPlainOldData)

void AEX_BossArenaManager_C::SpawnedBoss(class APrimalDinoCharacter* Boss)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager.EX_BossArenaManager_C.SpawnedBoss");

	AEX_BossArenaManager_C_SpawnedBoss_Params params;
	params.Boss = Boss;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossArenaManager.EX_BossArenaManager_C.SFXBack to Home
// ()

void AEX_BossArenaManager_C::SFXBack_to_Home()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager.EX_BossArenaManager_C.SFXBack to Home");

	AEX_BossArenaManager_C_SFXBack_to_Home_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossArenaManager.EX_BossArenaManager_C.IssueReturnWarning
// (NetReliable, NetRequest, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void AEX_BossArenaManager_C::IssueReturnWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager.EX_BossArenaManager_C.IssueReturnWarning");

	AEX_BossArenaManager_C_IssueReturnWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossArenaManager.EX_BossArenaManager_C.BPClientHandleNetExecCommand
// (Net, NetRequest, Exec, Native, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEX_BossArenaManager_C::BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager.EX_BossArenaManager_C.BPClientHandleNetExecCommand");

	AEX_BossArenaManager_C_BPClientHandleNetExecCommand_Params params;
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


// Function EX_BossArenaManager.EX_BossArenaManager_C.KillMinions
// ()

void AEX_BossArenaManager_C::KillMinions()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager.EX_BossArenaManager_C.KillMinions");

	AEX_BossArenaManager_C_KillMinions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossArenaManager.EX_BossArenaManager_C.CheckForActivePlayers
// ()

void AEX_BossArenaManager_C::CheckForActivePlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager.EX_BossArenaManager_C.CheckForActivePlayers");

	AEX_BossArenaManager_C_CheckForActivePlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossArenaManager.EX_BossArenaManager_C.GetAllActorsOnAscensionPlatform
// ()
// Parameters:
// bool                           bIncludeUnconscious            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeUntamedCreatures       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeDead                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnorePlayers                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnoreDinos                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnoreAttached                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          TheActors                      (Parm, OutParm, ZeroConstructor)

void AEX_BossArenaManager_C::GetAllActorsOnAscensionPlatform(bool bIncludeUnconscious, bool bIncludeUntamedCreatures, bool bIncludeDead, bool bIgnorePlayers, bool bIgnoreDinos, bool bIgnoreAttached, TArray<class AActor*>* TheActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager.EX_BossArenaManager_C.GetAllActorsOnAscensionPlatform");

	AEX_BossArenaManager_C_GetAllActorsOnAscensionPlatform_Params params;
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


// Function EX_BossArenaManager.EX_BossArenaManager_C.IssueTimeWarning
// (Native, Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetClient, DLLImport, BlueprintEvent, NetValidate)

void AEX_BossArenaManager_C::STATIC_IssueTimeWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager.EX_BossArenaManager_C.IssueTimeWarning");

	AEX_BossArenaManager_C_IssueTimeWarning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossArenaManager.EX_BossArenaManager_C.KillAllOccupants
// ()

void AEX_BossArenaManager_C::KillAllOccupants()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager.EX_BossArenaManager_C.KillAllOccupants");

	AEX_BossArenaManager_C_KillAllOccupants_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossArenaManager.EX_BossArenaManager_C.TeleportBackToHome
// ()

void AEX_BossArenaManager_C::TeleportBackToHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager.EX_BossArenaManager_C.TeleportBackToHome");

	AEX_BossArenaManager_C_TeleportBackToHome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossArenaManager.EX_BossArenaManager_C.DidTeleport
// ()
// Parameters:
// struct FVector                 ReturnPosition                 (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OverrideBossClass              (Parm, ZeroConstructor, IsPlainOldData)

void AEX_BossArenaManager_C::DidTeleport(const struct FVector& ReturnPosition, class UClass* OverrideBossClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager.EX_BossArenaManager_C.DidTeleport");

	AEX_BossArenaManager_C_DidTeleport_Params params;
	params.ReturnPosition = ReturnPosition;
	params.OverrideBossClass = OverrideBossClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossArenaManager.EX_BossArenaManager_C.IsValidForTeleport
// ()
// Parameters:
// class FString                  InvalidReason                  (Parm, OutParm, ZeroConstructor)

void AEX_BossArenaManager_C::IsValidForTeleport(class FString* InvalidReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager.EX_BossArenaManager_C.IsValidForTeleport");

	AEX_BossArenaManager_C_IsValidForTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InvalidReason != nullptr)
		*InvalidReason = params.InvalidReason;
}


// Function EX_BossArenaManager.EX_BossArenaManager_C.UserConstructionScript
// (NetReliable, NetRequest, NetResponse, MulticastDelegate, Protected, Delegate, NetClient, DLLImport, BlueprintEvent, NetValidate)

void AEX_BossArenaManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager.EX_BossArenaManager_C.UserConstructionScript");

	AEX_BossArenaManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossArenaManager.EX_BossArenaManager_C.StartBoss
// ()

void AEX_BossArenaManager_C::StartBoss()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager.EX_BossArenaManager_C.StartBoss");

	AEX_BossArenaManager_C_StartBoss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossArenaManager.EX_BossArenaManager_C.ReceiveBeginPlay
// ()

void AEX_BossArenaManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager.EX_BossArenaManager_C.ReceiveBeginPlay");

	AEX_BossArenaManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossArenaManager.EX_BossArenaManager_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AEX_BossArenaManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager.EX_BossArenaManager_C.ReceiveTick");

	AEX_BossArenaManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossArenaManager.EX_BossArenaManager_C.KaijuKilled
// ()

void AEX_BossArenaManager_C::KaijuKilled()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager.EX_BossArenaManager_C.KaijuKilled");

	AEX_BossArenaManager_C_KaijuKilled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossArenaManager.EX_BossArenaManager_C.BndEvt__TitanInfoVolume_K2Node_ComponentBoundEvent_349_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void AEX_BossArenaManager_C::BndEvt__TitanInfoVolume_K2Node_ComponentBoundEvent_349_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager.EX_BossArenaManager_C.BndEvt__TitanInfoVolume_K2Node_ComponentBoundEvent_349_ComponentBeginOverlapSignature__DelegateSignature");

	AEX_BossArenaManager_C_BndEvt__TitanInfoVolume_K2Node_ComponentBoundEvent_349_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepResult != nullptr)
		*SweepResult = params.SweepResult;
}


// Function EX_BossArenaManager.EX_BossArenaManager_C.Call Event Kaiju Despawned
// ()
// Parameters:
// class APrimalDinoCharacter*    Kaiju                          (Parm, ZeroConstructor, IsPlainOldData)

void AEX_BossArenaManager_C::Call_Event_Kaiju_Despawned(class APrimalDinoCharacter* Kaiju)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager.EX_BossArenaManager_C.Call Event Kaiju Despawned");

	AEX_BossArenaManager_C_Call_Event_Kaiju_Despawned_Params params;
	params.Kaiju = Kaiju;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossArenaManager.EX_BossArenaManager_C.CallEvent_PlayKaijuSecondPhaseMusic
// ()
// Parameters:
// class APrimalDinoCharacter*    Kaiju                          (Parm, ZeroConstructor, IsPlainOldData)

void AEX_BossArenaManager_C::CallEvent_PlayKaijuSecondPhaseMusic(class APrimalDinoCharacter* Kaiju)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager.EX_BossArenaManager_C.CallEvent_PlayKaijuSecondPhaseMusic");

	AEX_BossArenaManager_C_CallEvent_PlayKaijuSecondPhaseMusic_Params params;
	params.Kaiju = Kaiju;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossArenaManager.EX_BossArenaManager_C.ExecuteUbergraph_EX_BossArenaManager
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEX_BossArenaManager_C::ExecuteUbergraph_EX_BossArenaManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager.EX_BossArenaManager_C.ExecuteUbergraph_EX_BossArenaManager");

	AEX_BossArenaManager_C_ExecuteUbergraph_EX_BossArenaManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
