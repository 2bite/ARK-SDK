// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_BeerJarAlt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_BeerJarAlt.PrimalItemConsumable_BeerJarAlt_C.ExecuteUbergraph_PrimalItemConsumable_BeerJarAlt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_BeerJarAlt_C::ExecuteUbergraph_PrimalItemConsumable_BeerJarAlt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_BeerJarAlt.PrimalItemConsumable_BeerJarAlt_C.ExecuteUbergraph_PrimalItemConsumable_BeerJarAlt");

	UPrimalItemConsumable_BeerJarAlt_C_ExecuteUbergraph_PrimalItemConsumable_BeerJarAlt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
