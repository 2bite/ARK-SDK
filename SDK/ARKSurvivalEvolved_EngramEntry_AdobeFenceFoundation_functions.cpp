// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_AdobeFenceFoundation_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_AdobeFenceFoundation.EngramEntry_AdobeFenceFoundation_C.ExecuteUbergraph_EngramEntry_AdobeFenceFoundation
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_AdobeFenceFoundation_C::ExecuteUbergraph_EngramEntry_AdobeFenceFoundation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_AdobeFenceFoundation.EngramEntry_AdobeFenceFoundation_C.ExecuteUbergraph_EngramEntry_AdobeFenceFoundation");

	UEngramEntry_AdobeFenceFoundation_C_ExecuteUbergraph_EngramEntry_AdobeFenceFoundation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
