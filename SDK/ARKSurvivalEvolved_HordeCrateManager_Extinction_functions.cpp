// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HordeCrateManager_Extinction_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.ResetSpawnPriority
// ()

void AHordeCrateManager_Extinction_C::ResetSpawnPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.ResetSpawnPriority");

	AHordeCrateManager_Extinction_C_ResetSpawnPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.Get Difficulty Index
// ()
// Parameters:
// int                            ReturnDifficulty               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHordeCrateManager_Extinction_C::Get_Difficulty_Index(int* ReturnDifficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.Get Difficulty Index");

	AHordeCrateManager_Extinction_C_Get_Difficulty_Index_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnDifficulty != nullptr)
		*ReturnDifficulty = params.ReturnDifficulty;
}


// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.AreValidNetworksForType
// ()
// Parameters:
// TEnumAsByte<EHordeTypeEnum>    HordeType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsAvailable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHordeCrateManager_Extinction_C::AreValidNetworksForType(TEnumAsByte<EHordeTypeEnum> HordeType, bool* bIsAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.AreValidNetworksForType");

	AHordeCrateManager_Extinction_C_AreValidNetworksForType_Params params;
	params.HordeType = HordeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsAvailable != nullptr)
		*bIsAvailable = params.bIsAvailable;
}


// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.IsDifficultyCompatible
// ()
// Parameters:
// int                            TestDifficulty                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ChosenDifficulty               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsCompatible                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHordeCrateManager_Extinction_C::IsDifficultyCompatible(int TestDifficulty, int ChosenDifficulty, bool* bIsCompatible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.IsDifficultyCompatible");

	AHordeCrateManager_Extinction_C_IsDifficultyCompatible_Params params;
	params.TestDifficulty = TestDifficulty;
	params.ChosenDifficulty = ChosenDifficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsCompatible != nullptr)
		*bIsCompatible = params.bIsCompatible;
}


// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.BPForceStartHorde
// ()
// Parameters:
// class AActor**                 SpawnNetwork                   (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** PC                             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           DifficultyIndex                (Parm, ZeroConstructor, IsPlainOldData)

void AHordeCrateManager_Extinction_C::BPForceStartHorde(class AActor** SpawnNetwork, class AShooterPlayerController** PC, class UClass** ActorClass, int* DifficultyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.BPForceStartHorde");

	AHordeCrateManager_Extinction_C_BPForceStartHorde_Params params;
	params.SpawnNetwork = SpawnNetwork;
	params.PC = PC;
	params.ActorClass = ActorClass;
	params.DifficultyIndex = DifficultyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.GetActiveEvent
// ()
// Parameters:
// class AHordeSpawnNetwork_C*    Network                        (Parm, ZeroConstructor, IsPlainOldData)

void AHordeCrateManager_Extinction_C::GetActiveEvent(class AHordeSpawnNetwork_C* Network)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.GetActiveEvent");

	AHordeCrateManager_Extinction_C_GetActiveEvent_Params params;
	params.Network = Network;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.EndActiveEvent
// (NetReliable, Exec, Native, Event, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintPure, Const, NetValidate)
// Parameters:
// class AActor*                  TheCrate                       (Parm, ZeroConstructor, IsPlainOldData)

void AHordeCrateManager_Extinction_C::EndActiveEvent(class AActor* TheCrate)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.EndActiveEvent");

	AHordeCrateManager_Extinction_C_EndActiveEvent_Params params;
	params.TheCrate = TheCrate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.CreateActiveEvent
// (NetReliable, Native, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintPure, Const, NetValidate)

void AHordeCrateManager_Extinction_C::CreateActiveEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.CreateActiveEvent");

	AHordeCrateManager_Extinction_C_CreateActiveEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.DeployCrate
// (Exec, Native, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintPure, Const, NetValidate)
// Parameters:
// TEnumAsByte<EHordeTypeEnum>    HordeEventType                 (Parm, ZeroConstructor, IsPlainOldData)
// class ASupplyCrate_Base_Horde_C* ACrate                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHordeCrateManager_Extinction_C::DeployCrate(TEnumAsByte<EHordeTypeEnum> HordeEventType, class ASupplyCrate_Base_Horde_C** ACrate)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.DeployCrate");

	AHordeCrateManager_Extinction_C_DeployCrate_Params params;
	params.HordeEventType = HordeEventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ACrate != nullptr)
		*ACrate = params.ACrate;
}


// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.AreValidNetworksForDifficulty
// ()
// Parameters:
// int                            InDiffLevel                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAreValid                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHordeCrateManager_Extinction_C::AreValidNetworksForDifficulty(int InDiffLevel, bool* bAreValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.AreValidNetworksForDifficulty");

	AHordeCrateManager_Extinction_C_AreValidNetworksForDifficulty_Params params;
	params.InDiffLevel = InDiffLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAreValid != nullptr)
		*bAreValid = params.bAreValid;
}


// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.Get Avail Networks Of Difficulty
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintPure, Const, NetValidate)
// Parameters:
// int                            InDifficulty                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AHordeSpawnNetwork_C*> NetworksPreferred              (Parm, OutParm, ZeroConstructor)
// TArray<class AHordeSpawnNetwork_C*> NetworksNotPreferred           (Parm, OutParm, ZeroConstructor)

void AHordeCrateManager_Extinction_C::STATIC_Get_Avail_Networks_Of_Difficulty(int InDifficulty, TArray<class AHordeSpawnNetwork_C*>* NetworksPreferred, TArray<class AHordeSpawnNetwork_C*>* NetworksNotPreferred)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.Get Avail Networks Of Difficulty");

	AHordeCrateManager_Extinction_C_Get_Avail_Networks_Of_Difficulty_Params params;
	params.InDifficulty = InDifficulty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NetworksPreferred != nullptr)
		*NetworksPreferred = params.NetworksPreferred;
	if (NetworksNotPreferred != nullptr)
		*NetworksNotPreferred = params.NetworksNotPreferred;
}


// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.Find Random Spawn Network
// (NetReliable, NetRequest, Exec, Event, Public, Private, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, Const, NetValidate)
// Parameters:
// class AHordeSpawnNetwork_C*    RetHordeNetwork                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bIsStassised                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHordeCrateManager_Extinction_C::Find_Random_Spawn_Network(class AHordeSpawnNetwork_C** RetHordeNetwork, bool* bIsStassised)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.Find Random Spawn Network");

	AHordeCrateManager_Extinction_C_Find_Random_Spawn_Network_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetHordeNetwork != nullptr)
		*RetHordeNetwork = params.RetHordeNetwork;
	if (bIsStassised != nullptr)
		*bIsStassised = params.bIsStassised;
}


// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.GetActiveEvents
// (NetRequest, Exec, Native, Event, NetResponse, Public, Private, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, Const, NetValidate)
// Parameters:
// int                            DifficultyLevel                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAnyActiveEvents               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHordeCrateEvent> VarEvents                      (Parm, OutParm, ZeroConstructor)

void AHordeCrateManager_Extinction_C::GetActiveEvents(int DifficultyLevel, bool* bAnyActiveEvents, TArray<struct FHordeCrateEvent>* VarEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.GetActiveEvents");

	AHordeCrateManager_Extinction_C_GetActiveEvents_Params params;
	params.DifficultyLevel = DifficultyLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAnyActiveEvents != nullptr)
		*bAnyActiveEvents = params.bAnyActiveEvents;
	if (VarEvents != nullptr)
		*VarEvents = params.VarEvents;
}


// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.CanStartDeployment
// (Exec, NetResponse, Static, Public, Private, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, Const, NetValidate)
// Parameters:
// bool                           bCanStart                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHordeCrateManager_Extinction_C::STATIC_CanStartDeployment(bool* bCanStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.CanStartDeployment");

	AHordeCrateManager_Extinction_C_CanStartDeployment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanStart != nullptr)
		*bCanStart = params.bCanStart;
}


// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.UserConstructionScript
// ()

void AHordeCrateManager_Extinction_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.UserConstructionScript");

	AHordeCrateManager_Extinction_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.ReceiveBeginPlay
// ()

void AHordeCrateManager_Extinction_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.ReceiveBeginPlay");

	AHordeCrateManager_Extinction_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.CheckCrateDeployment
// ()

void AHordeCrateManager_Extinction_C::CheckCrateDeployment()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.CheckCrateDeployment");

	AHordeCrateManager_Extinction_C_CheckCrateDeployment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.StartCrateCheckTimer
// ()

void AHordeCrateManager_Extinction_C::StartCrateCheckTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.StartCrateCheckTimer");

	AHordeCrateManager_Extinction_C_StartCrateCheckTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.StartHordeNodeTimer
// ()

void AHordeCrateManager_Extinction_C::StartHordeNodeTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.StartHordeNodeTimer");

	AHordeCrateManager_Extinction_C_StartHordeNodeTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.ExecuteUbergraph_HordeCrateManager_Extinction
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AHordeCrateManager_Extinction_C::ExecuteUbergraph_HordeCrateManager_Extinction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.ExecuteUbergraph_HordeCrateManager_Extinction");

	AHordeCrateManager_Extinction_C_ExecuteUbergraph_HordeCrateManager_Extinction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
