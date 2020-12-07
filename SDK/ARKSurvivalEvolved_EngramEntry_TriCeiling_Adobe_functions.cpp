// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TriCeiling_Adobe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TriCeiling_Adobe.EngramEntry_TriCeiling_Adobe_C.ExecuteUbergraph_EngramEntry_TriCeiling_Adobe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TriCeiling_Adobe_C::ExecuteUbergraph_EngramEntry_TriCeiling_Adobe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TriCeiling_Adobe.EngramEntry_TriCeiling_Adobe_C.ExecuteUbergraph_EngramEntry_TriCeiling_Adobe");

	UEngramEntry_TriCeiling_Adobe_C_ExecuteUbergraph_EngramEntry_TriCeiling_Adobe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
