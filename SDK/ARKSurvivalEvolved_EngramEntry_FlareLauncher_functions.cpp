// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_FlareLauncher_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_FlareLauncher.EngramEntry_FlareLauncher_C.ExecuteUbergraph_EngramEntry_FlareLauncher
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_FlareLauncher_C::ExecuteUbergraph_EngramEntry_FlareLauncher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_FlareLauncher.EngramEntry_FlareLauncher_C.ExecuteUbergraph_EngramEntry_FlareLauncher");

	UEngramEntry_FlareLauncher_C_ExecuteUbergraph_EngramEntry_FlareLauncher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
