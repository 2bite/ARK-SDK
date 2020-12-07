// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryComponentBP_CityTerminal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryComponentBP_CityTerminal.PrimalInventoryComponentBP_CityTerminal_C.BPIsCraftingAllowed
// ()
// Parameters:
// class UPrimalItem**            anItem                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryComponentBP_CityTerminal_C::BPIsCraftingAllowed(class UPrimalItem** anItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryComponentBP_CityTerminal.PrimalInventoryComponentBP_CityTerminal_C.BPIsCraftingAllowed");

	UPrimalInventoryComponentBP_CityTerminal_C_BPIsCraftingAllowed_Params params;
	params.anItem = anItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalInventoryComponentBP_CityTerminal.PrimalInventoryComponentBP_CityTerminal_C.BPRemoteInventoryAllowCrafting
// ()
// Parameters:
// class AShooterPlayerController** PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryComponentBP_CityTerminal_C::BPRemoteInventoryAllowCrafting(class AShooterPlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryComponentBP_CityTerminal.PrimalInventoryComponentBP_CityTerminal_C.BPRemoteInventoryAllowCrafting");

	UPrimalInventoryComponentBP_CityTerminal_C_BPRemoteInventoryAllowCrafting_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalInventoryComponentBP_CityTerminal.PrimalInventoryComponentBP_CityTerminal_C.BPIsValidCraftingResource
// ()
// Parameters:
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryComponentBP_CityTerminal_C::BPIsValidCraftingResource(class UPrimalItem** theItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryComponentBP_CityTerminal.PrimalInventoryComponentBP_CityTerminal_C.BPIsValidCraftingResource");

	UPrimalInventoryComponentBP_CityTerminal_C_BPIsValidCraftingResource_Params params;
	params.theItem = theItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalInventoryComponentBP_CityTerminal.PrimalInventoryComponentBP_CityTerminal_C.ExecuteUbergraph_PrimalInventoryComponentBP_CityTerminal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryComponentBP_CityTerminal_C::ExecuteUbergraph_PrimalInventoryComponentBP_CityTerminal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryComponentBP_CityTerminal.PrimalInventoryComponentBP_CityTerminal_C.ExecuteUbergraph_PrimalInventoryComponentBP_CityTerminal");

	UPrimalInventoryComponentBP_CityTerminal_C_ExecuteUbergraph_PrimalInventoryComponentBP_CityTerminal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
