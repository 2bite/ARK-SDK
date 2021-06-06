// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ShadowDrakeSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ShadowDrakeSaddle.EngramEntry_ShadowDrakeSaddle_C.ExecuteUbergraph_EngramEntry_ShadowDrakeSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ShadowDrakeSaddle_C::ExecuteUbergraph_EngramEntry_ShadowDrakeSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ShadowDrakeSaddle.EngramEntry_ShadowDrakeSaddle_C.ExecuteUbergraph_EngramEntry_ShadowDrakeSaddle");

	UEngramEntry_ShadowDrakeSaddle_C_ExecuteUbergraph_EngramEntry_ShadowDrakeSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
