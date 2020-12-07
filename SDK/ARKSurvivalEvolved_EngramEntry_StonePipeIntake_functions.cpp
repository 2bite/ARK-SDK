// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_StonePipeIntake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_StonePipeIntake.EngramEntry_StonePipeIntake_C.ExecuteUbergraph_EngramEntry_StonePipeIntake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_StonePipeIntake_C::ExecuteUbergraph_EngramEntry_StonePipeIntake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_StonePipeIntake.EngramEntry_StonePipeIntake_C.ExecuteUbergraph_EngramEntry_StonePipeIntake");

	UEngramEntry_StonePipeIntake_C_ExecuteUbergraph_EngramEntry_StonePipeIntake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
