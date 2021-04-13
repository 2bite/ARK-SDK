// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ScoutReturnToThrower_Actor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.OnRep_Colors
// (Native, NetResponse, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const, NetValidate)

void AScoutReturnToThrower_Actor_C::OnRep_Colors()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.OnRep_Colors");

	AScoutReturnToThrower_Actor_C_OnRep_Colors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.OnRep_ScoutItemClient
// ()

void AScoutReturnToThrower_Actor_C::OnRep_ScoutItemClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.OnRep_ScoutItemClient");

	AScoutReturnToThrower_Actor_C_OnRep_ScoutItemClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.Set Colors
// ()
// Parameters:
// TArray<struct FLinearColor>    Colors                         (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AScoutReturnToThrower_Actor_C::Set_Colors(TArray<struct FLinearColor>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.Set Colors");

	AScoutReturnToThrower_Actor_C_Set_Colors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;
}


// Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.Tick
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AScoutReturnToThrower_Actor_C::Tick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.Tick");

	AScoutReturnToThrower_Actor_C_Tick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.UserConstructionScript
// ()

void AScoutReturnToThrower_Actor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.UserConstructionScript");

	AScoutReturnToThrower_Actor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AScoutReturnToThrower_Actor_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.ReceiveTick");

	AScoutReturnToThrower_Actor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.ReceiveBeginPlay
// ()

void AScoutReturnToThrower_Actor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.ReceiveBeginPlay");

	AScoutReturnToThrower_Actor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.DelayedDestroy
// ()

void AScoutReturnToThrower_Actor_C::DelayedDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.DelayedDestroy");

	AScoutReturnToThrower_Actor_C_DelayedDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.ReplicateScoutItem
// ()

void AScoutReturnToThrower_Actor_C::ReplicateScoutItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.ReplicateScoutItem");

	AScoutReturnToThrower_Actor_C_ReplicateScoutItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.ExecuteUbergraph_ScoutReturnToThrower_Actor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AScoutReturnToThrower_Actor_C::ExecuteUbergraph_ScoutReturnToThrower_Actor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.ExecuteUbergraph_ScoutReturnToThrower_Actor");

	AScoutReturnToThrower_Actor_C_ExecuteUbergraph_ScoutReturnToThrower_Actor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
