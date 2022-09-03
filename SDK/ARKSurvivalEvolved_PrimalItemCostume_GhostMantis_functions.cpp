// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_GhostMantis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_GhostMantis.PrimalItemCostume_GhostMantis_C.ExecuteUbergraph_PrimalItemCostume_GhostMantis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_GhostMantis_C::ExecuteUbergraph_PrimalItemCostume_GhostMantis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_GhostMantis.PrimalItemCostume_GhostMantis_C.ExecuteUbergraph_PrimalItemCostume_GhostMantis");

	UPrimalItemCostume_GhostMantis_C_ExecuteUbergraph_PrimalItemCostume_GhostMantis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
