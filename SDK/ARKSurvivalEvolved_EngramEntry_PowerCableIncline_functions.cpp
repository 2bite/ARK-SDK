// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_PowerCableIncline_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_PowerCableIncline.EngramEntry_PowerCableIncline_C.ExecuteUbergraph_EngramEntry_PowerCableIncline
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_PowerCableIncline_C::ExecuteUbergraph_EngramEntry_PowerCableIncline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_PowerCableIncline.EngramEntry_PowerCableIncline_C.ExecuteUbergraph_EngramEntry_PowerCableIncline");

	UEngramEntry_PowerCableIncline_C_ExecuteUbergraph_EngramEntry_PowerCableIncline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
