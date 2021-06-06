// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Parachute_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Parachute.EngramEntry_Parachute_C.ExecuteUbergraph_EngramEntry_Parachute
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Parachute_C::ExecuteUbergraph_EngramEntry_Parachute(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Parachute.EngramEntry_Parachute_C.ExecuteUbergraph_EngramEntry_Parachute");

	UEngramEntry_Parachute_C_ExecuteUbergraph_EngramEntry_Parachute_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
