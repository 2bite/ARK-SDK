// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Seed_BaseSuperVeggie_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Seed_BaseSuperVeggie.PrimalItemConsumable_Seed_BaseSuperVeggie_C.ExecuteUbergraph_PrimalItemConsumable_Seed_BaseSuperVeggie
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Seed_BaseSuperVeggie_C::ExecuteUbergraph_PrimalItemConsumable_Seed_BaseSuperVeggie(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_BaseSuperVeggie.PrimalItemConsumable_Seed_BaseSuperVeggie_C.ExecuteUbergraph_PrimalItemConsumable_Seed_BaseSuperVeggie");

	UPrimalItemConsumable_Seed_BaseSuperVeggie_C_ExecuteUbergraph_PrimalItemConsumable_Seed_BaseSuperVeggie_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
