// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_AnimeRaptor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_AnimeRaptor.PrimalItemCostume_AnimeRaptor_C.ExecuteUbergraph_PrimalItemCostume_AnimeRaptor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_AnimeRaptor_C::ExecuteUbergraph_PrimalItemCostume_AnimeRaptor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_AnimeRaptor.PrimalItemCostume_AnimeRaptor_C.ExecuteUbergraph_PrimalItemCostume_AnimeRaptor");

	UPrimalItemCostume_AnimeRaptor_C_ExecuteUbergraph_PrimalItemCostume_AnimeRaptor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
