// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Fabricator_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Fabricator.PrimalItemStructure_Fabricator_C.ExecuteUbergraph_PrimalItemStructure_Fabricator
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Fabricator_C::ExecuteUbergraph_PrimalItemStructure_Fabricator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Fabricator.PrimalItemStructure_Fabricator_C.ExecuteUbergraph_PrimalItemStructure_Fabricator");

	UPrimalItemStructure_Fabricator_C_ExecuteUbergraph_PrimalItemStructure_Fabricator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
