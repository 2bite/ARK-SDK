// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekExosuit_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekExosuit.EngramEntry_TekExosuit_C.ExecuteUbergraph_EngramEntry_TekExosuit
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekExosuit_C::ExecuteUbergraph_EngramEntry_TekExosuit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekExosuit.EngramEntry_TekExosuit_C.ExecuteUbergraph_EngramEntry_TekExosuit");

	UEngramEntry_TekExosuit_C_ExecuteUbergraph_EngramEntry_TekExosuit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
