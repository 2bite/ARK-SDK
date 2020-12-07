// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_BionicStego_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_BionicStego.PrimalItemCostume_BionicStego_C.ExecuteUbergraph_PrimalItemCostume_BionicStego
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_BionicStego_C::ExecuteUbergraph_PrimalItemCostume_BionicStego(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_BionicStego.PrimalItemCostume_BionicStego_C.ExecuteUbergraph_PrimalItemCostume_BionicStego");

	UPrimalItemCostume_BionicStego_C_ExecuteUbergraph_PrimalItemCostume_BionicStego_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
