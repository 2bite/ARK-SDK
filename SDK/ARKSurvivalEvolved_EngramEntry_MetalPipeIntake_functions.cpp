// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MetalPipeIntake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MetalPipeIntake.EngramEntry_MetalPipeIntake_C.ExecuteUbergraph_EngramEntry_MetalPipeIntake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MetalPipeIntake_C::ExecuteUbergraph_EngramEntry_MetalPipeIntake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MetalPipeIntake.EngramEntry_MetalPipeIntake_C.ExecuteUbergraph_EngramEntry_MetalPipeIntake");

	UEngramEntry_MetalPipeIntake_C_ExecuteUbergraph_EngramEntry_MetalPipeIntake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
