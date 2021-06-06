// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_StandingTorch_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_StandingTorch.EngramEntry_StandingTorch_C.ExecuteUbergraph_EngramEntry_StandingTorch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_StandingTorch_C::ExecuteUbergraph_EngramEntry_StandingTorch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_StandingTorch.EngramEntry_StandingTorch_C.ExecuteUbergraph_EngramEntry_StandingTorch");

	UEngramEntry_StandingTorch_C_ExecuteUbergraph_EngramEntry_StandingTorch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
