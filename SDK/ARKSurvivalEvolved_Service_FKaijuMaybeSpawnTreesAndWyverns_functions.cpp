// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_FKaijuMaybeSpawnTreesAndWyverns_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.SpawnBuffingTree
// (Exec, Native, Event, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UService_FKaijuMaybeSpawnTreesAndWyverns_C::SpawnBuffingTree(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.SpawnBuffingTree");

	UService_FKaijuMaybeSpawnTreesAndWyverns_C_SpawnBuffingTree_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ShouldSpawnBuffingTrees
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UService_FKaijuMaybeSpawnTreesAndWyverns_C::ShouldSpawnBuffingTrees(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ShouldSpawnBuffingTrees");

	UService_FKaijuMaybeSpawnTreesAndWyverns_C_ShouldSpawnBuffingTrees_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.MaybeSpawn Tree on Enemy
// ()

void UService_FKaijuMaybeSpawnTreesAndWyverns_C::MaybeSpawn_Tree_on_Enemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.MaybeSpawn Tree on Enemy");

	UService_FKaijuMaybeSpawnTreesAndWyverns_C_MaybeSpawn_Tree_on_Enemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.SpawnWyvern
// (Exec, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UService_FKaijuMaybeSpawnTreesAndWyverns_C::STATIC_SpawnWyvern(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.SpawnWyvern");

	UService_FKaijuMaybeSpawnTreesAndWyverns_C_SpawnWyvern_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ShouldSpawnWyverns
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UService_FKaijuMaybeSpawnTreesAndWyverns_C::ShouldSpawnWyverns(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ShouldSpawnWyverns");

	UService_FKaijuMaybeSpawnTreesAndWyverns_C_ShouldSpawnWyverns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ShouldSpawnPoisonTrees
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UService_FKaijuMaybeSpawnTreesAndWyverns_C::ShouldSpawnPoisonTrees(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ShouldSpawnPoisonTrees");

	UService_FKaijuMaybeSpawnTreesAndWyverns_C_ShouldSpawnPoisonTrees_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UService_FKaijuMaybeSpawnTreesAndWyverns_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ReceiveTick");

	UService_FKaijuMaybeSpawnTreesAndWyverns_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ReceiveActivation
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UService_FKaijuMaybeSpawnTreesAndWyverns_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ReceiveActivation");

	UService_FKaijuMaybeSpawnTreesAndWyverns_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ExecuteUbergraph_Service_FKaijuMaybeSpawnTreesAndWyverns
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UService_FKaijuMaybeSpawnTreesAndWyverns_C::ExecuteUbergraph_Service_FKaijuMaybeSpawnTreesAndWyverns(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ExecuteUbergraph_Service_FKaijuMaybeSpawnTreesAndWyverns");

	UService_FKaijuMaybeSpawnTreesAndWyverns_C_ExecuteUbergraph_Service_FKaijuMaybeSpawnTreesAndWyverns_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
