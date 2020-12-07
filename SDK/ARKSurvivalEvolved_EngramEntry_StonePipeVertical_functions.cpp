// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_StonePipeVertical_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_StonePipeVertical.EngramEntry_StonePipeVertical_C.ExecuteUbergraph_EngramEntry_StonePipeVertical
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_StonePipeVertical_C::ExecuteUbergraph_EngramEntry_StonePipeVertical(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_StonePipeVertical.EngramEntry_StonePipeVertical_C.ExecuteUbergraph_EngramEntry_StonePipeVertical");

	UEngramEntry_StonePipeVertical_C_ExecuteUbergraph_EngramEntry_StonePipeVertical_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
