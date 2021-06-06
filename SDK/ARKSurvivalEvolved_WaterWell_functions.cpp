// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterWell_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WaterWell.WaterWell_C.UpdateWaterSpawn
// ()

void AWaterWell_C::UpdateWaterSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterWell.WaterWell_C.UpdateWaterSpawn");

	AWaterWell_C_UpdateWaterSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterWell.WaterWell_C.BPInventoryItemUsed
// ()
// Parameters:
// class UObject**                InventoryItemObject            (Parm, ZeroConstructor, IsPlainOldData)

void AWaterWell_C::BPInventoryItemUsed(class UObject** InventoryItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterWell.WaterWell_C.BPInventoryItemUsed");

	AWaterWell_C_BPInventoryItemUsed_Params params;
	params.InventoryItemObject = InventoryItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterWell.WaterWell_C.IsAWaterItem
// ()
// Parameters:
// class UObject*                 PrimalItem                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWaterWell_C::IsAWaterItem(class UObject* PrimalItem, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterWell.WaterWell_C.IsAWaterItem");

	AWaterWell_C_IsAWaterItem_Params params;
	params.PrimalItem = PrimalItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WaterWell.WaterWell_C.BPForceAllowsInventoryUse
// ()
// Parameters:
// class UObject**                InventoryItemObject            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWaterWell_C::BPForceAllowsInventoryUse(class UObject** InventoryItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterWell.WaterWell_C.BPForceAllowsInventoryUse");

	AWaterWell_C_BPForceAllowsInventoryUse_Params params;
	params.InventoryItemObject = InventoryItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WaterWell.WaterWell_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWaterWell_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterWell.WaterWell_C.BPTryMultiUse");

	AWaterWell_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WaterWell.WaterWell_C.BPGetMultiUseEntries
// (Exec, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AWaterWell_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterWell.WaterWell_C.BPGetMultiUseEntries");

	AWaterWell_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function WaterWell.WaterWell_C.UserConstructionScript
// ()

void AWaterWell_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterWell.WaterWell_C.UserConstructionScript");

	AWaterWell_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterWell.WaterWell_C.ReceiveBeginPlay
// ()

void AWaterWell_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterWell.WaterWell_C.ReceiveBeginPlay");

	AWaterWell_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterWell.WaterWell_C.PlayWaterParticles
// ()

void AWaterWell_C::PlayWaterParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterWell.WaterWell_C.PlayWaterParticles");

	AWaterWell_C_PlayWaterParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterWell.WaterWell_C.ExecuteUbergraph_WaterWell
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWaterWell_C::ExecuteUbergraph_WaterWell(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterWell.WaterWell_C.ExecuteUbergraph_WaterWell");

	AWaterWell_C_ExecuteUbergraph_WaterWell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
