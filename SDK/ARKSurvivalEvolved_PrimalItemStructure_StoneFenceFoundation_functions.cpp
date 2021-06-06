// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StoneFenceFoundation_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_StoneFenceFoundation.PrimalItemStructure_StoneFenceFoundation_C.ExecuteUbergraph_PrimalItemStructure_StoneFenceFoundation
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_StoneFenceFoundation_C::ExecuteUbergraph_PrimalItemStructure_StoneFenceFoundation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_StoneFenceFoundation.PrimalItemStructure_StoneFenceFoundation_C.ExecuteUbergraph_PrimalItemStructure_StoneFenceFoundation");

	UPrimalItemStructure_StoneFenceFoundation_C_ExecuteUbergraph_PrimalItemStructure_StoneFenceFoundation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
