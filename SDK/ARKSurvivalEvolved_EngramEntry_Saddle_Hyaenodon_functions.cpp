// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Hyaenodon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Hyaenodon.EngramEntry_Saddle_Hyaenodon_C.ExecuteUbergraph_EngramEntry_Saddle_Hyaenodon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Hyaenodon_C::ExecuteUbergraph_EngramEntry_Saddle_Hyaenodon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Hyaenodon.EngramEntry_Saddle_Hyaenodon_C.ExecuteUbergraph_EngramEntry_Saddle_Hyaenodon");

	UEngramEntry_Saddle_Hyaenodon_C_ExecuteUbergraph_EngramEntry_Saddle_Hyaenodon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
