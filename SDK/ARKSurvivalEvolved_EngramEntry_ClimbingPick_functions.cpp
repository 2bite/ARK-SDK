// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ClimbingPick_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ClimbingPick.EngramEntry_ClimbingPick_C.ExecuteUbergraph_EngramEntry_ClimbingPick
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ClimbingPick_C::ExecuteUbergraph_EngramEntry_ClimbingPick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ClimbingPick.EngramEntry_ClimbingPick_C.ExecuteUbergraph_EngramEntry_ClimbingPick");

	UEngramEntry_ClimbingPick_C_ExecuteUbergraph_EngramEntry_ClimbingPick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
