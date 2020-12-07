// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Scissors_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Scissors.EngramEntry_Scissors_C.ExecuteUbergraph_EngramEntry_Scissors
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Scissors_C::ExecuteUbergraph_EngramEntry_Scissors(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Scissors.EngramEntry_Scissors_C.ExecuteUbergraph_EngramEntry_Scissors");

	UEngramEntry_Scissors_C_ExecuteUbergraph_EngramEntry_Scissors_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
