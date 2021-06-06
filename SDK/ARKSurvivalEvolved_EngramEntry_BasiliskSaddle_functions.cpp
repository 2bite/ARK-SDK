// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_BasiliskSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_BasiliskSaddle.EngramEntry_BasiliskSaddle_C.ExecuteUbergraph_EngramEntry_BasiliskSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_BasiliskSaddle_C::ExecuteUbergraph_EngramEntry_BasiliskSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_BasiliskSaddle.EngramEntry_BasiliskSaddle_C.ExecuteUbergraph_EngramEntry_BasiliskSaddle");

	UEngramEntry_BasiliskSaddle_C_ExecuteUbergraph_EngramEntry_BasiliskSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
