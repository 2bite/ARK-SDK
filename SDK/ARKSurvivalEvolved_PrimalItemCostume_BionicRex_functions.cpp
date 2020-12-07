// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_BionicRex_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_BionicRex.PrimalItemCostume_BionicRex_C.ExecuteUbergraph_PrimalItemCostume_BionicRex
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_BionicRex_C::ExecuteUbergraph_PrimalItemCostume_BionicRex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_BionicRex.PrimalItemCostume_BionicRex_C.ExecuteUbergraph_PrimalItemCostume_BionicRex");

	UPrimalItemCostume_BionicRex_C_ExecuteUbergraph_PrimalItemCostume_BionicRex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
