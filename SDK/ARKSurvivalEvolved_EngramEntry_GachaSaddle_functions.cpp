// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_GachaSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_GachaSaddle.EngramEntry_GachaSaddle_C.ExecuteUbergraph_EngramEntry_GachaSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_GachaSaddle_C::ExecuteUbergraph_EngramEntry_GachaSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_GachaSaddle.EngramEntry_GachaSaddle_C.ExecuteUbergraph_EngramEntry_GachaSaddle");

	UEngramEntry_GachaSaddle_C_ExecuteUbergraph_EngramEntry_GachaSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
