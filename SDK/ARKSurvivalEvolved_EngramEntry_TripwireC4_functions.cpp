// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TripwireC4_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TripwireC4.EngramEntry_TripwireC4_C.ExecuteUbergraph_EngramEntry_TripwireC4
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TripwireC4_C::ExecuteUbergraph_EngramEntry_TripwireC4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TripwireC4.EngramEntry_TripwireC4_C.ExecuteUbergraph_EngramEntry_TripwireC4");

	UEngramEntry_TripwireC4_C_ExecuteUbergraph_EngramEntry_TripwireC4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
