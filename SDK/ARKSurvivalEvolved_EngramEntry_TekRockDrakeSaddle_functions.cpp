// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekRockDrakeSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekRockDrakeSaddle.EngramEntry_TekRockDrakeSaddle_C.ExecuteUbergraph_EngramEntry_TekRockDrakeSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekRockDrakeSaddle_C::ExecuteUbergraph_EngramEntry_TekRockDrakeSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekRockDrakeSaddle.EngramEntry_TekRockDrakeSaddle_C.ExecuteUbergraph_EngramEntry_TekRockDrakeSaddle");

	UEngramEntry_TekRockDrakeSaddle_C_ExecuteUbergraph_EngramEntry_TekRockDrakeSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
