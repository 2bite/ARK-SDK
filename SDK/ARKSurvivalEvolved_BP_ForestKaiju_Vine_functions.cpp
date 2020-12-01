// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_ForestKaiju_Vine_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.VineCollisionCheck
// (Exec, Event, Static, NetMulticast, Private, HasOutParms, HasDefaults, BlueprintPure, NetValidate)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              ActorToIgnore                  (Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              OtherActorToIgnore             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ForestKaiju_Vine_C::STATIC_VineCollisionCheck(const struct FVector& Start, const struct FVector& End, class ACharacter* ActorToIgnore, class ACharacter* OtherActorToIgnore, bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.VineCollisionCheck");

	ABP_ForestKaiju_Vine_C_VineCollisionCheck_Params params;
	params.Start = Start;
	params.End = End;
	params.ActorToIgnore = ActorToIgnore;
	params.OtherActorToIgnore = OtherActorToIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.OnRep_EndVineLocation
// ()

void ABP_ForestKaiju_Vine_C::OnRep_EndVineLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.OnRep_EndVineLocation");

	ABP_ForestKaiju_Vine_C_OnRep_EndVineLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.TargetDataContainsTarget
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Private, HasOutParms, HasDefaults, BlueprintPure, NetValidate)
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ForestKaiju_Vine_C::STATIC_TargetDataContainsTarget(class APrimalCharacter* Target, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.TargetDataContainsTarget");

	ABP_ForestKaiju_Vine_C_TargetDataContainsTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.Get Current Vine End Location
// ()
// Parameters:
// struct FVector                 EndPosition                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ForestKaiju_Vine_C::Get_Current_Vine_End_Location(struct FVector* EndPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.Get Current Vine End Location");

	ABP_ForestKaiju_Vine_C_Get_Current_Vine_End_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EndPosition != nullptr)
		*EndPosition = params.EndPosition;
}


// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.GetVineTargets
// (NetReliable, NetRequest, Event, Public, Private, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ForestKaiju_Vine_C::GetVineTargets(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.GetVineTargets");

	ABP_ForestKaiju_Vine_C_GetVineTargets_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.UpdateVines
// (NetReliable, Exec, Native, NetResponse, Public, Private, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)

void ABP_ForestKaiju_Vine_C::UpdateVines()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.UpdateVines");

	ABP_ForestKaiju_Vine_C_UpdateVines_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.InitVines
// (Exec, Static, Public, Private, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)

void ABP_ForestKaiju_Vine_C::STATIC_InitVines()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.InitVines");

	ABP_ForestKaiju_Vine_C_InitVines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.ReceiveBeginPlay
// ()

void ABP_ForestKaiju_Vine_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.ReceiveBeginPlay");

	ABP_ForestKaiju_Vine_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.GetAIState
// ()
// Parameters:
// class UForestKaiju_AttackAIState_Grab_C* State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ForestKaiju_Vine_C::GetAIState(class UForestKaiju_AttackAIState_Grab_C** State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.GetAIState");

	ABP_ForestKaiju_Vine_C_GetAIState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ForestKaiju_Vine_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.ReceiveTick");

	ABP_ForestKaiju_Vine_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.UserConstructionScript
// ()

void ABP_ForestKaiju_Vine_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.UserConstructionScript");

	ABP_ForestKaiju_Vine_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.SERVER_VineReachedGoal
// ()

void ABP_ForestKaiju_Vine_C::SERVER_VineReachedGoal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.SERVER_VineReachedGoal");

	ABP_ForestKaiju_Vine_C_SERVER_VineReachedGoal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.SetVineStartEnd
// ()
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ForestKaiju_Vine_C::SetVineStartEnd(const struct FVector& Start, const struct FVector& End)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.SetVineStartEnd");

	ABP_ForestKaiju_Vine_C_SetVineStartEnd_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.MULTI_ReplicateTargets
// ()
// Parameters:
// TArray<struct FVineTargetData> Targets                        (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_ForestKaiju_Vine_C::MULTI_ReplicateTargets(TArray<struct FVineTargetData>* Targets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.MULTI_ReplicateTargets");

	ABP_ForestKaiju_Vine_C_MULTI_ReplicateTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Targets != nullptr)
		*Targets = params.Targets;
}


// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.ExecuteUbergraph_BP_ForestKaiju_Vine
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ForestKaiju_Vine_C::ExecuteUbergraph_BP_ForestKaiju_Vine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.ExecuteUbergraph_BP_ForestKaiju_Vine");

	ABP_ForestKaiju_Vine_C_ExecuteUbergraph_BP_ForestKaiju_Vine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
