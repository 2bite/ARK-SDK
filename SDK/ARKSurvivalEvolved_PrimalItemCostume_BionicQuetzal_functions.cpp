// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_BionicQuetzal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_BionicQuetzal.PrimalItemCostume_BionicQuetzal_C.ExecuteUbergraph_PrimalItemCostume_BionicQuetzal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_BionicQuetzal_C::ExecuteUbergraph_PrimalItemCostume_BionicQuetzal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_BionicQuetzal.PrimalItemCostume_BionicQuetzal_C.ExecuteUbergraph_PrimalItemCostume_BionicQuetzal");

	UPrimalItemCostume_BionicQuetzal_C_ExecuteUbergraph_PrimalItemCostume_BionicQuetzal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
