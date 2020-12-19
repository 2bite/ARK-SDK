// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_StonePipeStraight_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_StonePipeStraight.EngramEntry_StonePipeStraight_C.ExecuteUbergraph_EngramEntry_StonePipeStraight
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_StonePipeStraight_C::ExecuteUbergraph_EngramEntry_StonePipeStraight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_StonePipeStraight.EngramEntry_StonePipeStraight_C.ExecuteUbergraph_EngramEntry_StonePipeStraight");

	UEngramEntry_StonePipeStraight_C_ExecuteUbergraph_EngramEntry_StonePipeStraight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
