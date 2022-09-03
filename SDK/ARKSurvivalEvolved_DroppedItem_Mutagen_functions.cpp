// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItem_Mutagen_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.SpawnItem
// ()
// Parameters:
// class AActor*                  Manager                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SpawnedItem                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADroppedItem_Mutagen_C::SpawnItem(class AActor* Manager, class AActor** SpawnedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.SpawnItem");

	ADroppedItem_Mutagen_C_SpawnItem_Params params;
	params.Manager = Manager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedItem != nullptr)
		*SpawnedItem = params.SpawnedItem;
}


// Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.UnlockExplorerNote
// (Exec, Event, NetMulticast, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)

void ADroppedItem_Mutagen_C::UnlockExplorerNote(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.UnlockExplorerNote");

	ADroppedItem_Mutagen_C_UnlockExplorerNote_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADroppedItem_Mutagen_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.BPTryMultiUse");

	ADroppedItem_Mutagen_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.BPGetMultiUseEntries
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ADroppedItem_Mutagen_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.BPGetMultiUseEntries");

	ADroppedItem_Mutagen_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.BPOnItemPickedUp
// ()
// Parameters:
// class APlayerController**      ByPC                           (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            InventoryItem                  (Parm, ZeroConstructor, IsPlainOldData)

void ADroppedItem_Mutagen_C::BPOnItemPickedUp(class APlayerController** ByPC, class UPrimalItem** InventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.BPOnItemPickedUp");

	ADroppedItem_Mutagen_C_BPOnItemPickedUp_Params params;
	params.ByPC = ByPC;
	params.InventoryItem = InventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.ReceiveBeginPlay
// ()

void ADroppedItem_Mutagen_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.ReceiveBeginPlay");

	ADroppedItem_Mutagen_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.ReceiveDestroyed
// ()

void ADroppedItem_Mutagen_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.ReceiveDestroyed");

	ADroppedItem_Mutagen_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.UserConstructionScript
// ()

void ADroppedItem_Mutagen_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.UserConstructionScript");

	ADroppedItem_Mutagen_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.itemPickedUp
// ()
// Parameters:
// class AActor*                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       ByPC                           (Parm, ZeroConstructor, IsPlainOldData)

void ADroppedItem_Mutagen_C::itemPickedUp(class AActor* Item, class APlayerController* ByPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.itemPickedUp");

	ADroppedItem_Mutagen_C_itemPickedUp_Params params;
	params.Item = Item;
	params.ByPC = ByPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.AdjustableSpawnDelayChanged
// ()

void ADroppedItem_Mutagen_C::AdjustableSpawnDelayChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.AdjustableSpawnDelayChanged");

	ADroppedItem_Mutagen_C_AdjustableSpawnDelayChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.CheckForFallThrough
// ()

void ADroppedItem_Mutagen_C::CheckForFallThrough()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.CheckForFallThrough");

	ADroppedItem_Mutagen_C_CheckForFallThrough_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.ExecuteUbergraph_DroppedItem_Mutagen
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADroppedItem_Mutagen_C::ExecuteUbergraph_DroppedItem_Mutagen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.ExecuteUbergraph_DroppedItem_Mutagen");

	ADroppedItem_Mutagen_C_ExecuteUbergraph_DroppedItem_Mutagen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
