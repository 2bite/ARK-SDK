// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekBowHelper_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekBowHelper.Buff_TekBowHelper_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekBowHelper_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekBowHelper.Buff_TekBowHelper_C.BPClientDoMultiUse");

	ABuff_TekBowHelper_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekBowHelper.Buff_TekBowHelper_C.BPGetMultiUseEntries
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABuff_TekBowHelper_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekBowHelper.Buff_TekBowHelper_C.BPGetMultiUseEntries");

	ABuff_TekBowHelper_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Buff_TekBowHelper.Buff_TekBowHelper_C.BPPreventNotifySound
// ()
// Parameters:
// class USoundBase**             SoundIn                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekBowHelper_C::BPPreventNotifySound(class USoundBase** SoundIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekBowHelper.Buff_TekBowHelper_C.BPPreventNotifySound");

	ABuff_TekBowHelper_C_BPPreventNotifySound_Params params;
	params.SoundIn = SoundIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekBowHelper.Buff_TekBowHelper_C.BPGetHUDElements
// (NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_TekBowHelper_C::STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekBowHelper.Buff_TekBowHelper_C.BPGetHUDElements");

	ABuff_TekBowHelper_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_TekBowHelper.Buff_TekBowHelper_C.UserConstructionScript
// ()

void ABuff_TekBowHelper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekBowHelper.Buff_TekBowHelper_C.UserConstructionScript");

	ABuff_TekBowHelper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekBowHelper.Buff_TekBowHelper_C.ExecuteUbergraph_Buff_TekBowHelper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekBowHelper_C::ExecuteUbergraph_Buff_TekBowHelper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekBowHelper.Buff_TekBowHelper_C.ExecuteUbergraph_Buff_TekBowHelper");

	ABuff_TekBowHelper_C_ExecuteUbergraph_Buff_TekBowHelper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
