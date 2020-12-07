// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_StonePipeTap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_StonePipeTap.EngramEntry_StonePipeTap_C.ExecuteUbergraph_EngramEntry_StonePipeTap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_StonePipeTap_C::ExecuteUbergraph_EngramEntry_StonePipeTap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_StonePipeTap.EngramEntry_StonePipeTap_C.ExecuteUbergraph_EngramEntry_StonePipeTap");

	UEngramEntry_StonePipeTap_C_ExecuteUbergraph_EngramEntry_StonePipeTap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
