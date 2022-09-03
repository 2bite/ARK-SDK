// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_ReindeerStag_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_ReindeerStag.PrimalItemCostume_ReindeerStag_C.ExecuteUbergraph_PrimalItemCostume_ReindeerStag
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_ReindeerStag_C::ExecuteUbergraph_PrimalItemCostume_ReindeerStag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_ReindeerStag.PrimalItemCostume_ReindeerStag_C.ExecuteUbergraph_PrimalItemCostume_ReindeerStag");

	UPrimalItemCostume_ReindeerStag_C_ExecuteUbergraph_PrimalItemCostume_ReindeerStag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
