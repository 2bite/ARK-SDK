// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Seed_Mejoberry_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Seed_Mejoberry.PrimalItemConsumable_Seed_Mejoberry_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Mejoberry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Seed_Mejoberry_C::ExecuteUbergraph_PrimalItemConsumable_Seed_Mejoberry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_Mejoberry.PrimalItemConsumable_Seed_Mejoberry_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Mejoberry");

	UPrimalItemConsumable_Seed_Mejoberry_C_ExecuteUbergraph_PrimalItemConsumable_Seed_Mejoberry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
