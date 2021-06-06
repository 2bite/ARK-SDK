// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_TekCanteenRefill_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_TekCanteenRefill.PrimalItemConsumable_TekCanteenRefill_C.BPCrafted
// ()

void UPrimalItemConsumable_TekCanteenRefill_C::BPCrafted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenRefill.PrimalItemConsumable_TekCanteenRefill_C.BPCrafted");

	UPrimalItemConsumable_TekCanteenRefill_C_BPCrafted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_TekCanteenRefill.PrimalItemConsumable_TekCanteenRefill_C.ExecuteUbergraph_PrimalItemConsumable_TekCanteenRefill
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_TekCanteenRefill_C::ExecuteUbergraph_PrimalItemConsumable_TekCanteenRefill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenRefill.PrimalItemConsumable_TekCanteenRefill_C.ExecuteUbergraph_PrimalItemConsumable_TekCanteenRefill");

	UPrimalItemConsumable_TekCanteenRefill_C_ExecuteUbergraph_PrimalItemConsumable_TekCanteenRefill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
