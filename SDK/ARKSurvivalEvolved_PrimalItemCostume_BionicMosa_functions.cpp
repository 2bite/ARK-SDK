// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_BionicMosa_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_BionicMosa.PrimalItemCostume_BionicMosa_C.ExecuteUbergraph_PrimalItemCostume_BionicMosa
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_BionicMosa_C::ExecuteUbergraph_PrimalItemCostume_BionicMosa(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_BionicMosa.PrimalItemCostume_BionicMosa_C.ExecuteUbergraph_PrimalItemCostume_BionicMosa");

	UPrimalItemCostume_BionicMosa_C_ExecuteUbergraph_PrimalItemCostume_BionicMosa_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
