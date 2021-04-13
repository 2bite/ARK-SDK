// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionTypeBlueprintBase_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.PlaySoundForPlayersOnMission
// (NetReliable, Native, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTypeBlueprintBase_C::PlaySoundForPlayersOnMission(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.PlaySoundForPlayersOnMission");

	AMissionTypeBlueprintBase_C_PlaySoundForPlayersOnMission_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.BPStaticIsPlayerEligibleForMission
// (NetReliable, Native, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalBuff_MissionData** PlayerMissionData              (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  OutReason                      (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionTypeBlueprintBase_C::STATIC_BPStaticIsPlayerEligibleForMission(class APlayerController** Controller, class AShooterCharacter** PlayerPawn, class APrimalBuff_MissionData** PlayerMissionData, class FString* OutReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.BPStaticIsPlayerEligibleForMission");

	AMissionTypeBlueprintBase_C_BPStaticIsPlayerEligibleForMission_Params params;
	params.Controller = Controller;
	params.PlayerPawn = PlayerPawn;
	params.PlayerMissionData = PlayerMissionData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutReason != nullptr)
		*OutReason = params.OutReason;

	return params.ReturnValue;
}


// Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.BPGetMetaTagsAsInts
// ()
// Parameters:
// TArray<int>                    OutTagIds                      (Parm, OutParm, ZeroConstructor)

void AMissionTypeBlueprintBase_C::BPGetMetaTagsAsInts(TArray<int>* OutTagIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.BPGetMetaTagsAsInts");

	AMissionTypeBlueprintBase_C_BPGetMetaTagsAsInts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTagIds != nullptr)
		*OutTagIds = params.OutTagIds;
}


// Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.UserConstructionScript
// ()

void AMissionTypeBlueprintBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.UserConstructionScript");

	AMissionTypeBlueprintBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.OnMissionPhaseStarted
// ()
// Parameters:
// struct FName*                  OldPhase                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NewPhase                       (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTypeBlueprintBase_C::OnMissionPhaseStarted(struct FName* OldPhase, struct FName* NewPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.OnMissionPhaseStarted");

	AMissionTypeBlueprintBase_C_OnMissionPhaseStarted_Params params;
	params.OldPhase = OldPhase;
	params.NewPhase = NewPhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.BPOnMissionDeactivated
// ()

void AMissionTypeBlueprintBase_C::BPOnMissionDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.BPOnMissionDeactivated");

	AMissionTypeBlueprintBase_C_BPOnMissionDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.ExecuteUbergraph_MissionTypeBlueprintBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTypeBlueprintBase_C::ExecuteUbergraph_MissionTypeBlueprintBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.ExecuteUbergraph_MissionTypeBlueprintBase");

	AMissionTypeBlueprintBase_C_ExecuteUbergraph_MissionTypeBlueprintBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
