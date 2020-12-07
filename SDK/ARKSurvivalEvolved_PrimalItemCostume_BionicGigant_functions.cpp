// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_BionicGigant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_BionicGigant.PrimalItemCostume_BionicGigant_C.ExecuteUbergraph_PrimalItemCostume_BionicGigant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_BionicGigant_C::ExecuteUbergraph_PrimalItemCostume_BionicGigant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_BionicGigant.PrimalItemCostume_BionicGigant_C.ExecuteUbergraph_PrimalItemCostume_BionicGigant");

	UPrimalItemCostume_BionicGigant_C_ExecuteUbergraph_PrimalItemCostume_BionicGigant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
