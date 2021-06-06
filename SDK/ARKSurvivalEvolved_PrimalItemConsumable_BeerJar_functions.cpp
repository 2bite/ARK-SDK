// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_BeerJar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_BeerJar.PrimalItemConsumable_BeerJar_C.ExecuteUbergraph_PrimalItemConsumable_BeerJar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_BeerJar_C::ExecuteUbergraph_PrimalItemConsumable_BeerJar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_BeerJar.PrimalItemConsumable_BeerJar_C.ExecuteUbergraph_PrimalItemConsumable_BeerJar");

	UPrimalItemConsumable_BeerJar_C_ExecuteUbergraph_PrimalItemConsumable_BeerJar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
