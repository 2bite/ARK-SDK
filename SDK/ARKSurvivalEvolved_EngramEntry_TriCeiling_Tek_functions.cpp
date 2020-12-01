// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TriCeiling_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TriCeiling_Tek.EngramEntry_TriCeiling_Tek_C.ExecuteUbergraph_EngramEntry_TriCeiling_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TriCeiling_Tek_C::ExecuteUbergraph_EngramEntry_TriCeiling_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TriCeiling_Tek.EngramEntry_TriCeiling_Tek_C.ExecuteUbergraph_EngramEntry_TriCeiling_Tek");

	UEngramEntry_TriCeiling_Tek_C_ExecuteUbergraph_EngramEntry_TriCeiling_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
