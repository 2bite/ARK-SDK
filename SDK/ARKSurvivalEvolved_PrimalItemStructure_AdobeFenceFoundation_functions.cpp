// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_AdobeFenceFoundation_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_AdobeFenceFoundation.PrimalItemStructure_AdobeFenceFoundation_C.ExecuteUbergraph_PrimalItemStructure_AdobeFenceFoundation
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_AdobeFenceFoundation_C::ExecuteUbergraph_PrimalItemStructure_AdobeFenceFoundation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_AdobeFenceFoundation.PrimalItemStructure_AdobeFenceFoundation_C.ExecuteUbergraph_PrimalItemStructure_AdobeFenceFoundation");

	UPrimalItemStructure_AdobeFenceFoundation_C_ExecuteUbergraph_PrimalItemStructure_AdobeFenceFoundation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
