// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_WyvernMilk_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_WyvernMilk.PrimalItemConsumable_WyvernMilk_C.BlueprintUsed
// ()

void UPrimalItemConsumable_WyvernMilk_C::BlueprintUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_WyvernMilk.PrimalItemConsumable_WyvernMilk_C.BlueprintUsed");

	UPrimalItemConsumable_WyvernMilk_C_BlueprintUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_WyvernMilk.PrimalItemConsumable_WyvernMilk_C.ExecuteUbergraph_PrimalItemConsumable_WyvernMilk
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_WyvernMilk_C::ExecuteUbergraph_PrimalItemConsumable_WyvernMilk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_WyvernMilk.PrimalItemConsumable_WyvernMilk_C.ExecuteUbergraph_PrimalItemConsumable_WyvernMilk");

	UPrimalItemConsumable_WyvernMilk_C_ExecuteUbergraph_PrimalItemConsumable_WyvernMilk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
