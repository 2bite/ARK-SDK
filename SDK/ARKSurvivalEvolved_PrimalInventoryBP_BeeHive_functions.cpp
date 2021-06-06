// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_BeeHive_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C.BPInventoryRefresh
// ()

void UPrimalInventoryBP_BeeHive_C::BPInventoryRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C.BPInventoryRefresh");

	UPrimalInventoryBP_BeeHive_C_BPInventoryRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C.TryToConsumeFlowers
// ()
// Parameters:
// int                            NumToConsume                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumFailedToConsume             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NumActuallyConsumed            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_BeeHive_C::TryToConsumeFlowers(int NumToConsume, int* NumFailedToConsume, int* NumActuallyConsumed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C.TryToConsumeFlowers");

	UPrimalInventoryBP_BeeHive_C_TryToConsumeFlowers_Params params;
	params.NumToConsume = NumToConsume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumFailedToConsume != nullptr)
		*NumFailedToConsume = params.NumFailedToConsume;
	if (NumActuallyConsumed != nullptr)
		*NumActuallyConsumed = params.NumActuallyConsumed;
}


// Function PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C.BPAccessedInventory
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_BeeHive_C::BPAccessedInventory(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C.BPAccessedInventory");

	UPrimalInventoryBP_BeeHive_C_BPAccessedInventory_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C.ExecuteUbergraph_PrimalInventoryBP_BeeHive
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_BeeHive_C::ExecuteUbergraph_PrimalInventoryBP_BeeHive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C.ExecuteUbergraph_PrimalInventoryBP_BeeHive");

	UPrimalInventoryBP_BeeHive_C_ExecuteUbergraph_PrimalInventoryBP_BeeHive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
