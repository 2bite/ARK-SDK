// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_GhostOwl_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_GhostOwl.PrimalItemCostume_GhostOwl_C.ExecuteUbergraph_PrimalItemCostume_GhostOwl
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_GhostOwl_C::ExecuteUbergraph_PrimalItemCostume_GhostOwl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_GhostOwl.PrimalItemCostume_GhostOwl_C.ExecuteUbergraph_PrimalItemCostume_GhostOwl");

	UPrimalItemCostume_GhostOwl_C_ExecuteUbergraph_PrimalItemCostume_GhostOwl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
