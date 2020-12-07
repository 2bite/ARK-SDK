// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Daeodon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Daeodon.EngramEntry_Saddle_Daeodon_C.ExecuteUbergraph_EngramEntry_Saddle_Daeodon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Daeodon_C::ExecuteUbergraph_EngramEntry_Saddle_Daeodon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Daeodon.EngramEntry_Saddle_Daeodon_C.ExecuteUbergraph_EngramEntry_Saddle_Daeodon");

	UEngramEntry_Saddle_Daeodon_C_ExecuteUbergraph_EngramEntry_Saddle_Daeodon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
