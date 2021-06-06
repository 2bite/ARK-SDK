// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DayCycleManager_Gen2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.BPAllowSpawningCrate
// ()
// Parameters:
// class UClass**                 CrateType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADayCycleManager_Gen2_C::BPAllowSpawningCrate(class UClass** CrateType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.BPAllowSpawningCrate");

	ADayCycleManager_Gen2_C_BPAllowSpawningCrate_Params params;
	params.CrateType = CrateType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.SetupBackdropWarpMesh
// ()

void ADayCycleManager_Gen2_C::SetupBackdropWarpMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.SetupBackdropWarpMesh");

	ADayCycleManager_Gen2_C_SetupBackdropWarpMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.OnRep_WarpState
// ()

void ADayCycleManager_Gen2_C::OnRep_WarpState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.OnRep_WarpState");

	ADayCycleManager_Gen2_C_OnRep_WarpState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.DebugPrintWarpState
// (Net, Static, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, Const)
// Parameters:
// class FString                  WarpState                      (Parm, ZeroConstructor)

void ADayCycleManager_Gen2_C::STATIC_DebugPrintWarpState(const class FString& WarpState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.DebugPrintWarpState");

	ADayCycleManager_Gen2_C_DebugPrintWarpState_Params params;
	params.WarpState = WarpState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.SaveSkyboxInfo
// ()

void ADayCycleManager_Gen2_C::SaveSkyboxInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.SaveSkyboxInfo");

	ADayCycleManager_Gen2_C_SaveSkyboxInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.PlayWarpMatinee
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeLeft                       (Parm, ZeroConstructor, IsPlainOldData)

void ADayCycleManager_Gen2_C::PlayWarpMatinee(int index, float TimeLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.PlayWarpMatinee");

	ADayCycleManager_Gen2_C_PlayWarpMatinee_Params params;
	params.index = index;
	params.TimeLeft = TimeLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.LoadWarpBackdrop
// ()
// Parameters:
// bool                           Load                           (Parm, ZeroConstructor, IsPlainOldData)

void ADayCycleManager_Gen2_C::LoadWarpBackdrop(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.LoadWarpBackdrop");

	ADayCycleManager_Gen2_C_LoadWarpBackdrop_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.LoadAsteroids
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void ADayCycleManager_Gen2_C::LoadAsteroids(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.LoadAsteroids");

	ADayCycleManager_Gen2_C_LoadAsteroids_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UnloadAsteroids
// (NetReliable, NetRequest, Exec, Native, Event, Static, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, Const)

void ADayCycleManager_Gen2_C::STATIC_UnloadAsteroids()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UnloadAsteroids");

	ADayCycleManager_Gen2_C_UnloadAsteroids_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.GetShipRootFromBackdropLevel
// ()

void ADayCycleManager_Gen2_C::GetShipRootFromBackdropLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.GetShipRootFromBackdropLevel");

	ADayCycleManager_Gen2_C_GetShipRootFromBackdropLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateSublevels
// ()

void ADayCycleManager_Gen2_C::UpdateSublevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateSublevels");

	ADayCycleManager_Gen2_C_UpdateSublevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ShouldLoadSublevels
// ()
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADayCycleManager_Gen2_C::ShouldLoadSublevels(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ShouldLoadSublevels");

	ADayCycleManager_Gen2_C_ShouldLoadSublevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ClearSpaceCrates
// ()

void ADayCycleManager_Gen2_C::ClearSpaceCrates()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ClearSpaceCrates");

	ADayCycleManager_Gen2_C_ClearSpaceCrates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.RandomizeSkybox
// ()
// Parameters:
// int                            newIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADayCycleManager_Gen2_C::RandomizeSkybox(int* newIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.RandomizeSkybox");

	ADayCycleManager_Gen2_C_RandomizeSkybox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newIndex != nullptr)
		*newIndex = params.newIndex;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.SetupSkyboxTables
// (NetReliable, NetRequest, NetResponse, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, Const)

void ADayCycleManager_Gen2_C::SetupSkyboxTables()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.SetupSkyboxTables");

	ADayCycleManager_Gen2_C_SetupSkyboxTables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.BPOnDCMCheat
// ()
// Parameters:
// struct FName*                  CheatName                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ADayCycleManager_Gen2_C::BPOnDCMCheat(struct FName* CheatName, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.BPOnDCMCheat");

	ADayCycleManager_Gen2_C_BPOnDCMCheat_Params params;
	params.CheatName = CheatName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ClientInitializeHazards
// ()

void ADayCycleManager_Gen2_C::ClientInitializeHazards()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ClientInitializeHazards");

	ADayCycleManager_Gen2_C_ClientInitializeHazards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.SetupSpaceHazards
// (Exec, Native, Event, NetResponse, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, Const)

void ADayCycleManager_Gen2_C::SetupSpaceHazards()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.SetupSpaceHazards");

	ADayCycleManager_Gen2_C_SetupSpaceHazards_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.GetRockwellStormLocations
// ()
// Parameters:
// TArray<struct FVector>         Locations                      (Parm, OutParm, ZeroConstructor)

void ADayCycleManager_Gen2_C::GetRockwellStormLocations(TArray<struct FVector>* Locations)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.GetRockwellStormLocations");

	ADayCycleManager_Gen2_C_GetRockwellStormLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locations != nullptr)
		*Locations = params.Locations;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.GetEdenStormLocations
// ()
// Parameters:
// TArray<struct FVector>         Locations                      (Parm, OutParm, ZeroConstructor)

void ADayCycleManager_Gen2_C::GetEdenStormLocations(TArray<struct FVector>* Locations)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.GetEdenStormLocations");

	ADayCycleManager_Gen2_C_GetEdenStormLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locations != nullptr)
		*Locations = params.Locations;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.CompareWeatherLocation
// ()
// Parameters:
// struct FVector                 StormLocaiton                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LocationToCompare              (Parm, ZeroConstructor, IsPlainOldData)
// float                          StormBaseRadius                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InStormRadius                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADayCycleManager_Gen2_C::CompareWeatherLocation(const struct FVector& StormLocaiton, const struct FVector& LocationToCompare, float StormBaseRadius, bool* InStormRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.CompareWeatherLocation");

	ADayCycleManager_Gen2_C_CompareWeatherLocation_Params params;
	params.StormLocaiton = StormLocaiton;
	params.LocationToCompare = LocationToCompare;
	params.StormBaseRadius = StormBaseRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InStormRadius != nullptr)
		*InStormRadius = params.InStormRadius;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.IsLocationInWeatherEvent
// ()
// Parameters:
// bool                           Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ADayCycleManager_Gen2_C::IsLocationInWeatherEvent(bool Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.IsLocationInWeatherEvent");

	ADayCycleManager_Gen2_C_IsLocationInWeatherEvent_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.IsRainingAtLocation
// ()
// Parameters:
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADayCycleManager_Gen2_C::IsRainingAtLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.IsRainingAtLocation");

	ADayCycleManager_Gen2_C_IsRainingAtLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.Earth Quake Drop Item at Location
// (NetRequest, NetMulticast, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, Const)
// Parameters:
// struct FVector                 AtLoc                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            BiomeArea                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                AtRot                          (Parm, ZeroConstructor, IsPlainOldData)

void ADayCycleManager_Gen2_C::Earth_Quake_Drop_Item_at_Location(const struct FVector& AtLoc, int BiomeArea, const struct FRotator& AtRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.Earth Quake Drop Item at Location");

	ADayCycleManager_Gen2_C_Earth_Quake_Drop_Item_at_Location_Params params;
	params.AtLoc = AtLoc;
	params.BiomeArea = BiomeArea;
	params.AtRot = AtRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ManageStormVectors
// ()
// Parameters:
// TArray<struct FVector>         BiomeVectorArray               (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          ChanceToAddStorm               (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxNumStorms                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          BiomeXMin                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          BiomeXMax                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          BiomeYMin                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          BiomeYMax                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          StormRateOfTravel              (Parm, ZeroConstructor, IsPlainOldData)
// TArray<double>                 StormTimeArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          StormLifetime                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           BiomeHasActiveStorm            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADayCycleManager_Gen2_C::ManageStormVectors(float ChanceToAddStorm, int MaxNumStorms, float BiomeXMin, float BiomeXMax, float BiomeYMin, float BiomeYMax, float StormRateOfTravel, float StormLifetime, TArray<struct FVector>* BiomeVectorArray, TArray<double>* StormTimeArray, bool* BiomeHasActiveStorm)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ManageStormVectors");

	ADayCycleManager_Gen2_C_ManageStormVectors_Params params;
	params.ChanceToAddStorm = ChanceToAddStorm;
	params.MaxNumStorms = MaxNumStorms;
	params.BiomeXMin = BiomeXMin;
	params.BiomeXMax = BiomeXMax;
	params.BiomeYMin = BiomeYMin;
	params.BiomeYMax = BiomeYMax;
	params.StormRateOfTravel = StormRateOfTravel;
	params.StormLifetime = StormLifetime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BiomeVectorArray != nullptr)
		*BiomeVectorArray = params.BiomeVectorArray;
	if (StormTimeArray != nullptr)
		*StormTimeArray = params.StormTimeArray;
	if (BiomeHasActiveStorm != nullptr)
		*BiomeHasActiveStorm = params.BiomeHasActiveStorm;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UserConstructionScript
// ()

void ADayCycleManager_Gen2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UserConstructionScript");

	ADayCycleManager_Gen2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateAreaBuff
// ()

void ADayCycleManager_Gen2_C::UpdateAreaBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateAreaBuff");

	ADayCycleManager_Gen2_C_UpdateAreaBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ReceiveBeginPlay
// ()

void ADayCycleManager_Gen2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ReceiveBeginPlay");

	ADayCycleManager_Gen2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.InitializeSpaceHazards
// ()

void ADayCycleManager_Gen2_C::InitializeSpaceHazards()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.InitializeSpaceHazards");

	ADayCycleManager_Gen2_C_InitializeSpaceHazards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.EnsureSublevelsAreLoaded
// ()

void ADayCycleManager_Gen2_C::EnsureSublevelsAreLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.EnsureSublevelsAreLoaded");

	ADayCycleManager_Gen2_C_EnsureSublevelsAreLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.TriggerWarp
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void ADayCycleManager_Gen2_C::TriggerWarp(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.TriggerWarp");

	ADayCycleManager_Gen2_C_TriggerWarp_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.EndWarp
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void ADayCycleManager_Gen2_C::EndWarp(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.EndWarp");

	ADayCycleManager_Gen2_C_EndWarp_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.DebugEndWarp
// ()

void ADayCycleManager_Gen2_C::DebugEndWarp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.DebugEndWarp");

	ADayCycleManager_Gen2_C_DebugEndWarp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.NetEndWarp
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void ADayCycleManager_Gen2_C::NetEndWarp(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.NetEndWarp");

	ADayCycleManager_Gen2_C_NetEndWarp_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateSkybox
// ()

void ADayCycleManager_Gen2_C::UpdateSkybox()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateSkybox");

	ADayCycleManager_Gen2_C_UpdateSkybox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.CheckForShipRoot
// ()

void ADayCycleManager_Gen2_C::CheckForShipRoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.CheckForShipRoot");

	ADayCycleManager_Gen2_C_CheckForShipRoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ServerWarpWarmUpComplete
// ()

void ADayCycleManager_Gen2_C::ServerWarpWarmUpComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ServerWarpWarmUpComplete");

	ADayCycleManager_Gen2_C_ServerWarpWarmUpComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ServerWarpCooldownComplete
// ()

void ADayCycleManager_Gen2_C::ServerWarpCooldownComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ServerWarpCooldownComplete");

	ADayCycleManager_Gen2_C_ServerWarpCooldownComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.NetWarpLoopStarted
// ()

void ADayCycleManager_Gen2_C::NetWarpLoopStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.NetWarpLoopStarted");

	ADayCycleManager_Gen2_C_NetWarpLoopStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.RecieveMatineeUpdated
// ()

void ADayCycleManager_Gen2_C::RecieveMatineeUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.RecieveMatineeUpdated");

	ADayCycleManager_Gen2_C_RecieveMatineeUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ExecuteUbergraph_DayCycleManager_Gen2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADayCycleManager_Gen2_C::ExecuteUbergraph_DayCycleManager_Gen2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ExecuteUbergraph_DayCycleManager_Gen2");

	ADayCycleManager_Gen2_C_ExecuteUbergraph_DayCycleManager_Gen2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateSkyboxIndex__DelegateSignature
// ()
// Parameters:
// int                            CurrentIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void ADayCycleManager_Gen2_C::UpdateSkyboxIndex__DelegateSignature(int CurrentIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateSkyboxIndex__DelegateSignature");

	ADayCycleManager_Gen2_C_UpdateSkyboxIndex__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateAreaBuffPlayerStatus__DelegateSignature
// ()
// Parameters:
// bool                           IsInCave                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUnderwater                   (Parm, ZeroConstructor, IsPlainOldData)

void ADayCycleManager_Gen2_C::UpdateAreaBuffPlayerStatus__DelegateSignature(bool IsInCave, bool IsUnderwater)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateAreaBuffPlayerStatus__DelegateSignature");

	ADayCycleManager_Gen2_C_UpdateAreaBuffPlayerStatus__DelegateSignature_Params params;
	params.IsInCave = IsInCave;
	params.IsUnderwater = IsUnderwater;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
