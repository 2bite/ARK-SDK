// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Mutagen_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.BPPreUseItem
// ()

void UPrimalItemConsumable_Mutagen_C::BPPreUseItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.BPPreUseItem");

	UPrimalItemConsumable_Mutagen_C_BPPreUseItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.BPServerHandleItemNetExecCommand
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)

void UPrimalItemConsumable_Mutagen_C::BPServerHandleItemNetExecCommand(class AShooterPlayerController** ForPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.BPServerHandleItemNetExecCommand");

	UPrimalItemConsumable_Mutagen_C_BPServerHandleItemNetExecCommand_Params params;
	params.ForPC = ForPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;
}


// Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.find strider
// (NetRequest, Event, Static, NetMulticast, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           backup                         (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoCharacter*    strider                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Mutagen_C::STATIC_find_strider(bool backup, class APrimalDinoCharacter** strider)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.find strider");

	UPrimalItemConsumable_Mutagen_C_find_strider_Params params;
	params.backup = backup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (strider != nullptr)
		*strider = params.strider;
}


// Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.GetAmountInInventory
// ()
// Parameters:
// int                            NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Mutagen_C::GetAmountInInventory(int* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.GetAmountInInventory");

	UPrimalItemConsumable_Mutagen_C_GetAmountInInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.CalculateAmountNeeded
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPrimalItemConsumable_Mutagen_C::CalculateAmountNeeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.CalculateAmountNeeded");

	UPrimalItemConsumable_Mutagen_C_CalculateAmountNeeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.BPGetItemDescription
// (Net, NetRequest, Native, MulticastDelegate, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString*                 InDescription                  (Parm, ZeroConstructor)
// bool*                          bGetLongDescription            (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItemConsumable_Mutagen_C::BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.BPGetItemDescription");

	UPrimalItemConsumable_Mutagen_C_BPGetItemDescription_Params params;
	params.InDescription = InDescription;
	params.bGetLongDescription = bGetLongDescription;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.BlueprintUsed
// (NetReliable, NetRequest, Exec, Native, NetResponse, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UPrimalItemConsumable_Mutagen_C::BlueprintUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.BlueprintUsed");

	UPrimalItemConsumable_Mutagen_C_BlueprintUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.BPCanUse
// (NetRequest, Exec, Native, Static, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          bIgnoreCooldown                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItemConsumable_Mutagen_C::STATIC_BPCanUse(bool* bIgnoreCooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.BPCanUse");

	UPrimalItemConsumable_Mutagen_C_BPCanUse_Params params;
	params.bIgnoreCooldown = bIgnoreCooldown;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.ExecuteUbergraph_PrimalItemConsumable_Mutagen
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Mutagen_C::ExecuteUbergraph_PrimalItemConsumable_Mutagen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.ExecuteUbergraph_PrimalItemConsumable_Mutagen");

	UPrimalItemConsumable_Mutagen_C_ExecuteUbergraph_PrimalItemConsumable_Mutagen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
