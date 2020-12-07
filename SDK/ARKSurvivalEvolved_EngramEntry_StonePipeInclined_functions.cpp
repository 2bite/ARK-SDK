// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_StonePipeInclined_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_StonePipeInclined.EngramEntry_StonePipeInclined_C.ExecuteUbergraph_EngramEntry_StonePipeInclined
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_StonePipeInclined_C::ExecuteUbergraph_EngramEntry_StonePipeInclined(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_StonePipeInclined.EngramEntry_StonePipeInclined_C.ExecuteUbergraph_EngramEntry_StonePipeInclined");

	UEngramEntry_StonePipeInclined_C_ExecuteUbergraph_EngramEntry_StonePipeInclined_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
