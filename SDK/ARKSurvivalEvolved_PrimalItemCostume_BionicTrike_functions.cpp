// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_BionicTrike_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_BionicTrike.PrimalItemCostume_BionicTrike_C.ExecuteUbergraph_PrimalItemCostume_BionicTrike
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_BionicTrike_C::ExecuteUbergraph_PrimalItemCostume_BionicTrike(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_BionicTrike.PrimalItemCostume_BionicTrike_C.ExecuteUbergraph_PrimalItemCostume_BionicTrike");

	UPrimalItemCostume_BionicTrike_C_ExecuteUbergraph_PrimalItemCostume_BionicTrike_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
