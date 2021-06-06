// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_IndustrialGrinder_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.GrindAllItems
// ()
// Parameters:
// class APlayerController*       ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_IndustrialGrinder_C::GrindAllItems(class APlayerController* ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.GrindAllItems");

	AStorageBox_IndustrialGrinder_C_GrindAllItems_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.IsValidForGrindingAll
// ()
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStorageBox_IndustrialGrinder_C::IsValidForGrindingAll(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.IsValidForGrindingAll");

	AStorageBox_IndustrialGrinder_C_IsValidForGrindingAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.BPPreGetMultiUseEntries
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_IndustrialGrinder_C::BPPreGetMultiUseEntries(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.BPPreGetMultiUseEntries");

	AStorageBox_IndustrialGrinder_C_BPPreGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.HasCraftingRequirementsGreaterThanOne
// (Native, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimalItem*             InItem                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TRUE                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStorageBox_IndustrialGrinder_C::STATIC_HasCraftingRequirementsGreaterThanOne(class UPrimalItem* InItem, bool* TRUE)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.HasCraftingRequirementsGreaterThanOne");

	AStorageBox_IndustrialGrinder_C_HasCraftingRequirementsGreaterThanOne_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TRUE != nullptr)
		*TRUE = params.TRUE;
}


// Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.GetReplacementItem
// ()
// Parameters:
// class UClass*                  InItemClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutItemClass                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStorageBox_IndustrialGrinder_C::GetReplacementItem(class UClass* InItemClass, class UClass** OutItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.GetReplacementItem");

	AStorageBox_IndustrialGrinder_C_GetReplacementItem_Params params;
	params.InItemClass = InItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutItemClass != nullptr)
		*OutItemClass = params.OutItemClass;
}


// Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.IsValidGrindingItem
// ()
// Parameters:
// class UPrimalItem*             ItemToCheck                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStorageBox_IndustrialGrinder_C::IsValidGrindingItem(class UPrimalItem* ItemToCheck, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.IsValidGrindingItem");

	AStorageBox_IndustrialGrinder_C_IsValidGrindingItem_Params params;
	params.ItemToCheck = ItemToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.GrindItem
// (NetReliable, Exec, MulticastDelegate, Public, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimalItem*             ItemToGrind                    (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController* ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           grindStack                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           MuteSound                      (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_IndustrialGrinder_C::GrindItem(class UPrimalItem* ItemToGrind, class AShooterPlayerController* ForPC, bool grindStack, bool MuteSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.GrindItem");

	AStorageBox_IndustrialGrinder_C_GrindItem_Params params;
	params.ItemToGrind = ItemToGrind;
	params.ForPC = ForPC;
	params.grindStack = grindStack;
	params.MuteSound = MuteSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStorageBox_IndustrialGrinder_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.BPServerHandleNetExecCommand");

	AStorageBox_IndustrialGrinder_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.BPClientDoMultiUse
// (NetReliable, NetRequest, Exec, Native, Event, MulticastDelegate, Public, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_IndustrialGrinder_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.BPClientDoMultiUse");

	AStorageBox_IndustrialGrinder_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.BPGetMultiUseEntries
// (NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AStorageBox_IndustrialGrinder_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.BPGetMultiUseEntries");

	AStorageBox_IndustrialGrinder_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.UserConstructionScript
// ()

void AStorageBox_IndustrialGrinder_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.UserConstructionScript");

	AStorageBox_IndustrialGrinder_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.ExecuteUbergraph_StorageBox_IndustrialGrinder
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_IndustrialGrinder_C::ExecuteUbergraph_StorageBox_IndustrialGrinder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.ExecuteUbergraph_StorageBox_IndustrialGrinder");

	AStorageBox_IndustrialGrinder_C_ExecuteUbergraph_StorageBox_IndustrialGrinder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
