// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Vessel_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Vessel.EngramEntry_Vessel_C.ExecuteUbergraph_EngramEntry_Vessel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Vessel_C::ExecuteUbergraph_EngramEntry_Vessel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Vessel.EngramEntry_Vessel_C.ExecuteUbergraph_EngramEntry_Vessel");

	UEngramEntry_Vessel_C_ExecuteUbergraph_EngramEntry_Vessel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
