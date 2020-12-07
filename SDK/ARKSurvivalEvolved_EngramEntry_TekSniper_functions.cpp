// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekSniper_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekSniper.EngramEntry_TekSniper_C.ExecuteUbergraph_EngramEntry_TekSniper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekSniper_C::ExecuteUbergraph_EngramEntry_TekSniper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekSniper.EngramEntry_TekSniper_C.ExecuteUbergraph_EngramEntry_TekSniper");

	UEngramEntry_TekSniper_C_ExecuteUbergraph_EngramEntry_TekSniper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
