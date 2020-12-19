// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Seed_Citronal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Seed_Citronal.PrimalItemConsumable_Seed_Citronal_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Citronal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Seed_Citronal_C::ExecuteUbergraph_PrimalItemConsumable_Seed_Citronal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_Citronal.PrimalItemConsumable_Seed_Citronal_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Citronal");

	UPrimalItemConsumable_Seed_Citronal_C_ExecuteUbergraph_PrimalItemConsumable_Seed_Citronal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
