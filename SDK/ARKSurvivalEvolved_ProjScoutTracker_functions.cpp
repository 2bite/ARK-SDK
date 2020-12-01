// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjScoutTracker_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjScoutTracker.ProjScoutTracker_C.SpawnImpactVFX
// ()

void AProjScoutTracker_C::SpawnImpactVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjScoutTracker.ProjScoutTracker_C.SpawnImpactVFX");

	AProjScoutTracker_C_SpawnImpactVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjScoutTracker.ProjScoutTracker_C.ScheduleNextTrackerImpactVFXSpawn
// (NetRequest, Event, Static, MulticastDelegate, Public, Protected, NetServer, NetClient, DLLImport, Const, NetValidate)

void AProjScoutTracker_C::STATIC_ScheduleNextTrackerImpactVFXSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjScoutTracker.ProjScoutTracker_C.ScheduleNextTrackerImpactVFXSpawn");

	AProjScoutTracker_C_ScheduleNextTrackerImpactVFXSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjScoutTracker.ProjScoutTracker_C.Is Clientor Single Player
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjScoutTracker_C::Is_Clientor_Single_Player(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjScoutTracker.ProjScoutTracker_C.Is Clientor Single Player");

	AProjScoutTracker_C_Is_Clientor_Single_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjScoutTracker.ProjScoutTracker_C.IsServerOrSinglePlayer
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjScoutTracker_C::IsServerOrSinglePlayer(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjScoutTracker.ProjScoutTracker_C.IsServerOrSinglePlayer");

	AProjScoutTracker_C_IsServerOrSinglePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjScoutTracker.ProjScoutTracker_C.ReceiveBeginPlay
// ()

void AProjScoutTracker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjScoutTracker.ProjScoutTracker_C.ReceiveBeginPlay");

	AProjScoutTracker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjScoutTracker.ProjScoutTracker_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void AProjScoutTracker_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjScoutTracker.ProjScoutTracker_C.ReceiveEndPlay");

	AProjScoutTracker_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjScoutTracker.ProjScoutTracker_C.ReceiveActorBeginOverlap
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjScoutTracker_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjScoutTracker.ProjScoutTracker_C.ReceiveActorBeginOverlap");

	AProjScoutTracker_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjScoutTracker.ProjScoutTracker_C.UserConstructionScript
// ()

void AProjScoutTracker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjScoutTracker.ProjScoutTracker_C.UserConstructionScript");

	AProjScoutTracker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjScoutTracker.ProjScoutTracker_C.TraceForTrackerHits
// ()

void AProjScoutTracker_C::TraceForTrackerHits()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjScoutTracker.ProjScoutTracker_C.TraceForTrackerHits");

	AProjScoutTracker_C_TraceForTrackerHits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjScoutTracker.ProjScoutTracker_C.SpawnImactVFXAndScheduleNextImpact
// ()

void AProjScoutTracker_C::SpawnImactVFXAndScheduleNextImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjScoutTracker.ProjScoutTracker_C.SpawnImactVFXAndScheduleNextImpact");

	AProjScoutTracker_C_SpawnImactVFXAndScheduleNextImpact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjScoutTracker.ProjScoutTracker_C.ClientSpawnImpactVFX
// ()

void AProjScoutTracker_C::ClientSpawnImpactVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjScoutTracker.ProjScoutTracker_C.ClientSpawnImpactVFX");

	AProjScoutTracker_C_ClientSpawnImpactVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjScoutTracker.ProjScoutTracker_C.ExecuteUbergraph_ProjScoutTracker
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjScoutTracker_C::ExecuteUbergraph_ProjScoutTracker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjScoutTracker.ProjScoutTracker_C.ExecuteUbergraph_ProjScoutTracker");

	AProjScoutTracker_C_ExecuteUbergraph_ProjScoutTracker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
