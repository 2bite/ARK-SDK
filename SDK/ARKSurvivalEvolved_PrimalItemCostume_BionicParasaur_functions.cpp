// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_BionicParasaur_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_BionicParasaur.PrimalItemCostume_BionicParasaur_C.ExecuteUbergraph_PrimalItemCostume_BionicParasaur
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_BionicParasaur_C::ExecuteUbergraph_PrimalItemCostume_BionicParasaur(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_BionicParasaur.PrimalItemCostume_BionicParasaur_C.ExecuteUbergraph_PrimalItemCostume_BionicParasaur");

	UPrimalItemCostume_BionicParasaur_C_ExecuteUbergraph_PrimalItemCostume_BionicParasaur_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
