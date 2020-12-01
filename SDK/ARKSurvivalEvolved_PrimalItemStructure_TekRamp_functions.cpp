// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekRamp_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekRamp.PrimalItemStructure_TekRamp_C.ExecuteUbergraph_PrimalItemStructure_TekRamp
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekRamp_C::ExecuteUbergraph_PrimalItemStructure_TekRamp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekRamp.PrimalItemStructure_TekRamp_C.ExecuteUbergraph_PrimalItemStructure_TekRamp");

	UPrimalItemStructure_TekRamp_C_ExecuteUbergraph_PrimalItemStructure_TekRamp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
