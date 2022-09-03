// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Ichthyornis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_Ichthyornis.PrimalItemConsumable_Egg_Ichthyornis_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Ichthyornis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Ichthyornis_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Ichthyornis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Ichthyornis.PrimalItemConsumable_Egg_Ichthyornis_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Ichthyornis");

	UPrimalItemConsumable_Egg_Ichthyornis_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Ichthyornis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
