// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_GreenhouseCeiling_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_GreenhouseCeiling.EngramEntry_GreenhouseCeiling_C.ExecuteUbergraph_EngramEntry_GreenhouseCeiling
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_GreenhouseCeiling_C::ExecuteUbergraph_EngramEntry_GreenhouseCeiling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_GreenhouseCeiling.EngramEntry_GreenhouseCeiling_C.ExecuteUbergraph_EngramEntry_GreenhouseCeiling");

	UEngramEntry_GreenhouseCeiling_C_ExecuteUbergraph_EngramEntry_GreenhouseCeiling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
