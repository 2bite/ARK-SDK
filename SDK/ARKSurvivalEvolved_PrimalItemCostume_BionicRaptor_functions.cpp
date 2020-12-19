// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_BionicRaptor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_BionicRaptor.PrimalItemCostume_BionicRaptor_C.ExecuteUbergraph_PrimalItemCostume_BionicRaptor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_BionicRaptor_C::ExecuteUbergraph_PrimalItemCostume_BionicRaptor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_BionicRaptor.PrimalItemCostume_BionicRaptor_C.ExecuteUbergraph_PrimalItemCostume_BionicRaptor");

	UPrimalItemCostume_BionicRaptor_C_ExecuteUbergraph_PrimalItemCostume_BionicRaptor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
