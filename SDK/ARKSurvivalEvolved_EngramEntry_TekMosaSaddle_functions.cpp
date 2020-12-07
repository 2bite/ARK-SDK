// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekMosaSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekMosaSaddle.EngramEntry_TekMosaSaddle_C.ExecuteUbergraph_EngramEntry_TekMosaSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekMosaSaddle_C::ExecuteUbergraph_EngramEntry_TekMosaSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekMosaSaddle.EngramEntry_TekMosaSaddle_C.ExecuteUbergraph_EngramEntry_TekMosaSaddle");

	UEngramEntry_TekMosaSaddle_C_ExecuteUbergraph_EngramEntry_TekMosaSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
