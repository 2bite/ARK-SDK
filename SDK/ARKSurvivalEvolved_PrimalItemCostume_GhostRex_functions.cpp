// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_GhostRex_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_GhostRex.PrimalItemCostume_GhostRex_C.ExecuteUbergraph_PrimalItemCostume_GhostRex
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_GhostRex_C::ExecuteUbergraph_PrimalItemCostume_GhostRex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_GhostRex.PrimalItemCostume_GhostRex_C.ExecuteUbergraph_PrimalItemCostume_GhostRex");

	UPrimalItemCostume_GhostRex_C_ExecuteUbergraph_PrimalItemCostume_GhostRex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
