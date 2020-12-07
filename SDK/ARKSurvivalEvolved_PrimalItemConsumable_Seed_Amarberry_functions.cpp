// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Seed_Amarberry_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Seed_Amarberry.PrimalItemConsumable_Seed_Amarberry_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Amarberry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Seed_Amarberry_C::ExecuteUbergraph_PrimalItemConsumable_Seed_Amarberry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_Amarberry.PrimalItemConsumable_Seed_Amarberry_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Amarberry");

	UPrimalItemConsumable_Seed_Amarberry_C_ExecuteUbergraph_PrimalItemConsumable_Seed_Amarberry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
