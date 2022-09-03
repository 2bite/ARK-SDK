// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_AnimeParasaur_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_AnimeParasaur.PrimalItemCostume_AnimeParasaur_C.ExecuteUbergraph_PrimalItemCostume_AnimeParasaur
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_AnimeParasaur_C::ExecuteUbergraph_PrimalItemCostume_AnimeParasaur(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_AnimeParasaur.PrimalItemCostume_AnimeParasaur_C.ExecuteUbergraph_PrimalItemCostume_AnimeParasaur");

	UPrimalItemCostume_AnimeParasaur_C_ExecuteUbergraph_PrimalItemCostume_AnimeParasaur_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
