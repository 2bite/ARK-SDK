// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ScubaPants_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ScubaPants.EngramEntry_ScubaPants_C.ExecuteUbergraph_EngramEntry_ScubaPants
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ScubaPants_C::ExecuteUbergraph_EngramEntry_ScubaPants(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ScubaPants.EngramEntry_ScubaPants_C.ExecuteUbergraph_EngramEntry_ScubaPants");

	UEngramEntry_ScubaPants_C_ExecuteUbergraph_EngramEntry_ScubaPants_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
