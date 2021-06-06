// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_AdobeRamp_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_AdobeRamp.EngramEntry_AdobeRamp_C.ExecuteUbergraph_EngramEntry_AdobeRamp
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_AdobeRamp_C::ExecuteUbergraph_EngramEntry_AdobeRamp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_AdobeRamp.EngramEntry_AdobeRamp_C.ExecuteUbergraph_EngramEntry_AdobeRamp");

	UEngramEntry_AdobeRamp_C_ExecuteUbergraph_EngramEntry_AdobeRamp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
