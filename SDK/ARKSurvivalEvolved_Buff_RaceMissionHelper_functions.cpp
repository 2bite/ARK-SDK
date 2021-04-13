// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RaceMissionHelper_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.Tick_UpdatePowerUps
// ()

void ABuff_RaceMissionHelper_C::Tick_UpdatePowerUps()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.Tick_UpdatePowerUps");

	ABuff_RaceMissionHelper_C_Tick_UpdatePowerUps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ListenServerUpdateCheckpoints
// (NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FMissionWorldIndicator> MissionDataBuff                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AShooterCharacter*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RaceMissionHelper_C::STATIC_ListenServerUpdateCheckpoints(class AShooterCharacter* PC, TArray<struct FMissionWorldIndicator>* MissionDataBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ListenServerUpdateCheckpoints");

	ABuff_RaceMissionHelper_C_ListenServerUpdateCheckpoints_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MissionDataBuff != nullptr)
		*MissionDataBuff = params.MissionDataBuff;
}


// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.UpdateCheckpoint
// ()
// Parameters:
// class AMissionTrigger_RaceCheckpoint_C* PreviousCheckpoint             (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionTrigger_RaceCheckpoint_C* NewCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RaceMissionHelper_C::UpdateCheckpoint(class AMissionTrigger_RaceCheckpoint_C* PreviousCheckpoint, class AMissionTrigger_RaceCheckpoint_C* NewCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.UpdateCheckpoint");

	ABuff_RaceMissionHelper_C_UpdateCheckpoint_Params params;
	params.PreviousCheckpoint = PreviousCheckpoint;
	params.NewCheckpoint = NewCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.Update Out Of Bounds Particle
// ()

void ABuff_RaceMissionHelper_C::Update_Out_Of_Bounds_Particle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.Update Out Of Bounds Particle");

	ABuff_RaceMissionHelper_C_Update_Out_Of_Bounds_Particle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.UpdateNextCheckpointDirectionIndicator
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RaceMissionHelper_C::UpdateNextCheckpointDirectionIndicator(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.UpdateNextCheckpointDirectionIndicator");

	ABuff_RaceMissionHelper_C_UpdateNextCheckpointDirectionIndicator_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.GetPlaceText
// ()
// Parameters:
// int                            Place                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Text                           (Parm, OutParm, ZeroConstructor)

void ABuff_RaceMissionHelper_C::GetPlaceText(int Place, class FString* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.GetPlaceText");

	ABuff_RaceMissionHelper_C_GetPlaceText_Params params;
	params.Place = Place;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_RaceMissionHelper_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BPGetHUDElements");

	ABuff_RaceMissionHelper_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.UserConstructionScript
// ()

void ABuff_RaceMissionHelper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.UserConstructionScript");

	ABuff_RaceMissionHelper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.MissionClientDataUpdated_Event
// ()
// Parameters:
// class APrimalBuff_MissionData* MissionDataBuff                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RaceMissionHelper_C::MissionClientDataUpdated_Event(class APrimalBuff_MissionData* MissionDataBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.MissionClientDataUpdated_Event");

	ABuff_RaceMissionHelper_C_MissionClientDataUpdated_Event_Params params;
	params.MissionDataBuff = MissionDataBuff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RaceMissionHelper_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BuffTickClient");

	ABuff_RaceMissionHelper_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RaceMissionHelper_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BPDeactivated");

	ABuff_RaceMissionHelper_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ClientUpdatePlace
// ()
// Parameters:
// int                            NewPlace                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumberOfPlayers                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RaceMissionHelper_C::ClientUpdatePlace(int NewPlace, int NumberOfPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ClientUpdatePlace");

	ABuff_RaceMissionHelper_C_ClientUpdatePlace_Params params;
	params.NewPlace = NewPlace;
	params.NumberOfPlayers = NumberOfPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RaceMissionHelper_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BPSetupForInstigator");

	ABuff_RaceMissionHelper_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RaceMissionHelper_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BuffTickServer");

	ABuff_RaceMissionHelper_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.Client_UpdateCurrentCheckpointPowerUpTriggers
// ()
// Parameters:
// TArray<class AMissionTrigger*> PowerUpTriggers                (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABuff_RaceMissionHelper_C::Client_UpdateCurrentCheckpointPowerUpTriggers(TArray<class AMissionTrigger*>* PowerUpTriggers)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.Client_UpdateCurrentCheckpointPowerUpTriggers");

	ABuff_RaceMissionHelper_C_Client_UpdateCurrentCheckpointPowerUpTriggers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PowerUpTriggers != nullptr)
		*PowerUpTriggers = params.PowerUpTriggers;
}


// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.DeactivatePowerUpEmitters
// ()

void ABuff_RaceMissionHelper_C::DeactivatePowerUpEmitters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.DeactivatePowerUpEmitters");

	ABuff_RaceMissionHelper_C_DeactivatePowerUpEmitters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.DeactivateSinglePowerUpEmitter
// ()
// Parameters:
// int                            TriggerOrder                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            CustomDataInt                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RaceMissionHelper_C::DeactivateSinglePowerUpEmitter(int TriggerOrder, int CustomDataInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.DeactivateSinglePowerUpEmitter");

	ABuff_RaceMissionHelper_C_DeactivateSinglePowerUpEmitter_Params params;
	params.TriggerOrder = TriggerOrder;
	params.CustomDataInt = CustomDataInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.RideMissionDino
// ()

void ABuff_RaceMissionHelper_C::RideMissionDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.RideMissionDino");

	ABuff_RaceMissionHelper_C_RideMissionDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.DeactivateSinglePowerUpTriggerEmitter
// ()
// Parameters:
// class AMissionTrigger*         TriggerHit                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RaceMissionHelper_C::DeactivateSinglePowerUpTriggerEmitter(class AMissionTrigger* TriggerHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.DeactivateSinglePowerUpTriggerEmitter");

	ABuff_RaceMissionHelper_C_DeactivateSinglePowerUpTriggerEmitter_Params params;
	params.TriggerHit = TriggerHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ClientUnhideActors
// ()
// Parameters:
// TArray<class AActor*>          ActorsToUnhide                 (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABuff_RaceMissionHelper_C::ClientUnhideActors(TArray<class AActor*>* ActorsToUnhide)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ClientUnhideActors");

	ABuff_RaceMissionHelper_C_ClientUnhideActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorsToUnhide != nullptr)
		*ActorsToUnhide = params.ActorsToUnhide;
}


// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ClientUpdateBestTime
// ()
// Parameters:
// float                          BestTime                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RaceMissionHelper_C::ClientUpdateBestTime(float BestTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ClientUpdateBestTime");

	ABuff_RaceMissionHelper_C_ClientUpdateBestTime_Params params;
	params.BestTime = BestTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.SetCheckPoint
// ()
// Parameters:
// int                            newIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RaceMissionHelper_C::SetCheckPoint(int newIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.SetCheckPoint");

	ABuff_RaceMissionHelper_C_SetCheckPoint_Params params;
	params.newIndex = newIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ClientPlayFinishFX
// ()

void ABuff_RaceMissionHelper_C::ClientPlayFinishFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ClientPlayFinishFX");

	ABuff_RaceMissionHelper_C_ClientPlayFinishFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.DestroyDino
// ()

void ABuff_RaceMissionHelper_C::DestroyDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.DestroyDino");

	ABuff_RaceMissionHelper_C_DestroyDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.TeleportBackToStart
// ()

void ABuff_RaceMissionHelper_C::TeleportBackToStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.TeleportBackToStart");

	ABuff_RaceMissionHelper_C_TeleportBackToStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ExecuteUbergraph_Buff_RaceMissionHelper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RaceMissionHelper_C::ExecuteUbergraph_Buff_RaceMissionHelper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ExecuteUbergraph_Buff_RaceMissionHelper");

	ABuff_RaceMissionHelper_C_ExecuteUbergraph_Buff_RaceMissionHelper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
