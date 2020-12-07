// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_RocketLauncher_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_RocketLauncher.EngramEntry_RocketLauncher_C.ExecuteUbergraph_EngramEntry_RocketLauncher
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_RocketLauncher_C::ExecuteUbergraph_EngramEntry_RocketLauncher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_RocketLauncher.EngramEntry_RocketLauncher_C.ExecuteUbergraph_EngramEntry_RocketLauncher");

	UEngramEntry_RocketLauncher_C_ExecuteUbergraph_EngramEntry_RocketLauncher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
