// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Argentavis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Argentavis.EngramEntry_Saddle_Argentavis_C.ExecuteUbergraph_EngramEntry_Saddle_Argentavis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Argentavis_C::ExecuteUbergraph_EngramEntry_Saddle_Argentavis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Argentavis.EngramEntry_Saddle_Argentavis_C.ExecuteUbergraph_EngramEntry_Saddle_Argentavis");

	UEngramEntry_Saddle_Argentavis_C_ExecuteUbergraph_EngramEntry_Saddle_Argentavis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
