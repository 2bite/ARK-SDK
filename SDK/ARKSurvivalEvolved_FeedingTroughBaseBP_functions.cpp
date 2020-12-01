// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FeedingTroughBaseBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AFeedingTroughBaseBP_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.BPClientDoMultiUse");

	AFeedingTroughBaseBP_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AFeedingTroughBaseBP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.BPGetMultiUseEntries");

	AFeedingTroughBaseBP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ReceiveBeginPlay
// ()

void AFeedingTroughBaseBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ReceiveBeginPlay");

	AFeedingTroughBaseBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ThrottledTick
// ()

void AFeedingTroughBaseBP_C::ThrottledTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ThrottledTick");

	AFeedingTroughBaseBP_C_ThrottledTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.UserConstructionScript
// ()

void AFeedingTroughBaseBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.UserConstructionScript");

	AFeedingTroughBaseBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ExecuteUbergraph_FeedingTroughBaseBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFeedingTroughBaseBP_C::ExecuteUbergraph_FeedingTroughBaseBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ExecuteUbergraph_FeedingTroughBaseBP");

	AFeedingTroughBaseBP_C_ExecuteUbergraph_FeedingTroughBaseBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
