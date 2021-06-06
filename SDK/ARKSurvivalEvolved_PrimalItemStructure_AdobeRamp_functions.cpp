// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_AdobeRamp_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_AdobeRamp.PrimalItemStructure_AdobeRamp_C.ExecuteUbergraph_PrimalItemStructure_AdobeRamp
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_AdobeRamp_C::ExecuteUbergraph_PrimalItemStructure_AdobeRamp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_AdobeRamp.PrimalItemStructure_AdobeRamp_C.ExecuteUbergraph_PrimalItemStructure_AdobeRamp");

	UPrimalItemStructure_AdobeRamp_C_ExecuteUbergraph_PrimalItemStructure_AdobeRamp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
