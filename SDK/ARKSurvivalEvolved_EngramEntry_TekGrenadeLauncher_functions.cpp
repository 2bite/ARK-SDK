// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekGrenadeLauncher_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekGrenadeLauncher.EngramEntry_TekGrenadeLauncher_C.ExecuteUbergraph_EngramEntry_TekGrenadeLauncher
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekGrenadeLauncher_C::ExecuteUbergraph_EngramEntry_TekGrenadeLauncher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekGrenadeLauncher.EngramEntry_TekGrenadeLauncher_C.ExecuteUbergraph_EngramEntry_TekGrenadeLauncher");

	UEngramEntry_TekGrenadeLauncher_C_ExecuteUbergraph_EngramEntry_TekGrenadeLauncher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
