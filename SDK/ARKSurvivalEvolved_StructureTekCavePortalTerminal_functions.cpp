// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTekCavePortalTerminal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureTekCavePortalTerminal.StructureTekCavePortalTerminal_C.BPTryMultiUse
// (NetRequest, Native, Event, Static, NetMulticast, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructureTekCavePortalTerminal_C::STATIC_BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTekCavePortalTerminal.StructureTekCavePortalTerminal_C.BPTryMultiUse");

	AStructureTekCavePortalTerminal_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StructureTekCavePortalTerminal.StructureTekCavePortalTerminal_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Event, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AStructureTekCavePortalTerminal_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTekCavePortalTerminal.StructureTekCavePortalTerminal_C.BPGetMultiUseEntries");

	AStructureTekCavePortalTerminal_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function StructureTekCavePortalTerminal.StructureTekCavePortalTerminal_C.UserConstructionScript
// ()

void AStructureTekCavePortalTerminal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTekCavePortalTerminal.StructureTekCavePortalTerminal_C.UserConstructionScript");

	AStructureTekCavePortalTerminal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTekCavePortalTerminal.StructureTekCavePortalTerminal_C.ExecuteUbergraph_StructureTekCavePortalTerminal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureTekCavePortalTerminal_C::ExecuteUbergraph_StructureTekCavePortalTerminal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTekCavePortalTerminal.StructureTekCavePortalTerminal_C.ExecuteUbergraph_StructureTekCavePortalTerminal");

	AStructureTekCavePortalTerminal_C_ExecuteUbergraph_StructureTekCavePortalTerminal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
