// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_GreenhouseRoof_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_GreenhouseRoof.EngramEntry_GreenhouseRoof_C.ExecuteUbergraph_EngramEntry_GreenhouseRoof
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_GreenhouseRoof_C::ExecuteUbergraph_EngramEntry_GreenhouseRoof(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_GreenhouseRoof.EngramEntry_GreenhouseRoof_C.ExecuteUbergraph_EngramEntry_GreenhouseRoof");

	UEngramEntry_GreenhouseRoof_C_ExecuteUbergraph_EngramEntry_GreenhouseRoof_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
