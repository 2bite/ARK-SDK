// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_RollratSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_RollratSaddle.EngramEntry_RollratSaddle_C.ExecuteUbergraph_EngramEntry_RollratSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_RollratSaddle_C::ExecuteUbergraph_EngramEntry_RollratSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_RollratSaddle.EngramEntry_RollratSaddle_C.ExecuteUbergraph_EngramEntry_RollratSaddle");

	UEngramEntry_RollratSaddle_C_ExecuteUbergraph_EngramEntry_RollratSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
