// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_GhostReaper_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_GhostReaper.PrimalItemCostume_GhostReaper_C.ExecuteUbergraph_PrimalItemCostume_GhostReaper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_GhostReaper_C::ExecuteUbergraph_PrimalItemCostume_GhostReaper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_GhostReaper.PrimalItemCostume_GhostReaper_C.ExecuteUbergraph_PrimalItemCostume_GhostReaper");

	UPrimalItemCostume_GhostReaper_C_ExecuteUbergraph_PrimalItemCostume_GhostReaper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
