// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Seed_DefensePlant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Seed_DefensePlant.PrimalItemConsumable_Seed_DefensePlant_C.BPAllowRemoteAddToInventory
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, Public, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UPrimalInventoryComponent** invComp                        (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ByPC                           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRequestedByPlayer             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItemConsumable_Seed_DefensePlant_C::STATIC_BPAllowRemoteAddToInventory(class UPrimalInventoryComponent** invComp, class AShooterPlayerController** ByPC, bool* bRequestedByPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_DefensePlant.PrimalItemConsumable_Seed_DefensePlant_C.BPAllowRemoteAddToInventory");

	UPrimalItemConsumable_Seed_DefensePlant_C_BPAllowRemoteAddToInventory_Params params;
	params.invComp = invComp;
	params.ByPC = ByPC;
	params.bRequestedByPlayer = bRequestedByPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemConsumable_Seed_DefensePlant.PrimalItemConsumable_Seed_DefensePlant_C.BPCanAddToInventory
// ()
// Parameters:
// class UPrimalInventoryComponent** toInventory                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItemConsumable_Seed_DefensePlant_C::BPCanAddToInventory(class UPrimalInventoryComponent** toInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_DefensePlant.PrimalItemConsumable_Seed_DefensePlant_C.BPCanAddToInventory");

	UPrimalItemConsumable_Seed_DefensePlant_C_BPCanAddToInventory_Params params;
	params.toInventory = toInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemConsumable_Seed_DefensePlant.PrimalItemConsumable_Seed_DefensePlant_C.ExecuteUbergraph_PrimalItemConsumable_Seed_DefensePlant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Seed_DefensePlant_C::ExecuteUbergraph_PrimalItemConsumable_Seed_DefensePlant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_DefensePlant.PrimalItemConsumable_Seed_DefensePlant_C.ExecuteUbergraph_PrimalItemConsumable_Seed_DefensePlant");

	UPrimalItemConsumable_Seed_DefensePlant_C_ExecuteUbergraph_PrimalItemConsumable_Seed_DefensePlant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
