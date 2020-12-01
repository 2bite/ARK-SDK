// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TriFoundation_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TriFoundation_Tek.EngramEntry_TriFoundation_Tek_C.ExecuteUbergraph_EngramEntry_TriFoundation_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TriFoundation_Tek_C::ExecuteUbergraph_EngramEntry_TriFoundation_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TriFoundation_Tek.EngramEntry_TriFoundation_Tek_C.ExecuteUbergraph_EngramEntry_TriFoundation_Tek");

	UEngramEntry_TriFoundation_Tek_C_ExecuteUbergraph_EngramEntry_TriFoundation_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
