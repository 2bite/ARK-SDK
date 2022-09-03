// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekLight_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekLight.PrimalItemStructure_TekLight_C.ExecuteUbergraph_PrimalItemStructure_TekLight
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekLight_C::ExecuteUbergraph_PrimalItemStructure_TekLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekLight.PrimalItemStructure_TekLight_C.ExecuteUbergraph_PrimalItemStructure_TekLight");

	UPrimalItemStructure_TekLight_C_ExecuteUbergraph_PrimalItemStructure_TekLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
