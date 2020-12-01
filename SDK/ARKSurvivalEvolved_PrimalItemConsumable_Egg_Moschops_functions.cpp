// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Moschops_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_Moschops.PrimalItemConsumable_Egg_Moschops_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Moschops
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Moschops_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Moschops(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Moschops.PrimalItemConsumable_Egg_Moschops_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Moschops");

	UPrimalItemConsumable_Egg_Moschops_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Moschops_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
