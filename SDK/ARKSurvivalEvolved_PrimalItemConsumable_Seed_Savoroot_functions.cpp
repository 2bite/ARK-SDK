// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Seed_Savoroot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Seed_Savoroot.PrimalItemConsumable_Seed_Savoroot_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Savoroot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Seed_Savoroot_C::ExecuteUbergraph_PrimalItemConsumable_Seed_Savoroot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_Savoroot.PrimalItemConsumable_Seed_Savoroot_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Savoroot");

	UPrimalItemConsumable_Seed_Savoroot_C_ExecuteUbergraph_PrimalItemConsumable_Seed_Savoroot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
