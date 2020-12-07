// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_BoneTrike_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_BoneTrike.PrimalItemCostume_BoneTrike_C.ExecuteUbergraph_PrimalItemCostume_BoneTrike
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_BoneTrike_C::ExecuteUbergraph_PrimalItemCostume_BoneTrike(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_BoneTrike.PrimalItemCostume_BoneTrike_C.ExecuteUbergraph_PrimalItemCostume_BoneTrike");

	UPrimalItemCostume_BoneTrike_C_ExecuteUbergraph_PrimalItemCostume_BoneTrike_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
