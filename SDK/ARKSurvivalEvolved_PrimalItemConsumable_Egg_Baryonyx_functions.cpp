// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Baryonyx_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_Baryonyx.PrimalItemConsumable_Egg_Baryonyx_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Baryonyx
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Baryonyx_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Baryonyx(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Baryonyx.PrimalItemConsumable_Egg_Baryonyx_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Baryonyx");

	UPrimalItemConsumable_Egg_Baryonyx_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Baryonyx_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
