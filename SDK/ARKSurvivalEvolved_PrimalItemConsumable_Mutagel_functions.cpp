// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Mutagel_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.BPPreUseItem
// ()

void UPrimalItemConsumable_Mutagel_C::BPPreUseItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.BPPreUseItem");

	UPrimalItemConsumable_Mutagel_C_BPPreUseItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.BPServerHandleItemNetExecCommand
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)

void UPrimalItemConsumable_Mutagel_C::BPServerHandleItemNetExecCommand(class AShooterPlayerController** ForPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.BPServerHandleItemNetExecCommand");

	UPrimalItemConsumable_Mutagel_C_BPServerHandleItemNetExecCommand_Params params;
	params.ForPC = ForPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;
}


// Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.find strider
// (NetRequest, Exec, Event, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           Backup                         (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoCharacter*    strider                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Mutagel_C::find_strider(bool Backup, class APrimalDinoCharacter** strider)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.find strider");

	UPrimalItemConsumable_Mutagel_C_find_strider_Params params;
	params.Backup = Backup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (strider != nullptr)
		*strider = params.strider;
}


// Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.GetAmountInInventory
// ()
// Parameters:
// int                            NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Mutagel_C::GetAmountInInventory(int* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.GetAmountInInventory");

	UPrimalItemConsumable_Mutagel_C_GetAmountInInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.CalculateAmountNeeded
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPrimalItemConsumable_Mutagel_C::CalculateAmountNeeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.CalculateAmountNeeded");

	UPrimalItemConsumable_Mutagel_C_CalculateAmountNeeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.BPGetItemDescription
// (Net, NetReliable, Native, Event, NetResponse, NetMulticast, Public, Private, Protected, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class FString*                 InDescription                  (Parm, ZeroConstructor)
// bool*                          bGetLongDescription            (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItemConsumable_Mutagel_C::BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.BPGetItemDescription");

	UPrimalItemConsumable_Mutagel_C_BPGetItemDescription_Params params;
	params.InDescription = InDescription;
	params.bGetLongDescription = bGetLongDescription;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.BlueprintUsed
// (NetReliable, Exec, NetResponse, Static, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UPrimalItemConsumable_Mutagel_C::STATIC_BlueprintUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.BlueprintUsed");

	UPrimalItemConsumable_Mutagel_C_BlueprintUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.BPCanUse
// (NetReliable, NetMulticast, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool*                          bIgnoreCooldown                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItemConsumable_Mutagel_C::BPCanUse(bool* bIgnoreCooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.BPCanUse");

	UPrimalItemConsumable_Mutagel_C_BPCanUse_Params params;
	params.bIgnoreCooldown = bIgnoreCooldown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.ExecuteUbergraph_PrimalItemConsumable_Mutagel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Mutagel_C::ExecuteUbergraph_PrimalItemConsumable_Mutagel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.ExecuteUbergraph_PrimalItemConsumable_Mutagel");

	UPrimalItemConsumable_Mutagel_C_ExecuteUbergraph_PrimalItemConsumable_Mutagel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
