// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Toilet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Toilet.EngramEntry_Toilet_C.ExecuteUbergraph_EngramEntry_Toilet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Toilet_C::ExecuteUbergraph_EngramEntry_Toilet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Toilet.EngramEntry_Toilet_C.ExecuteUbergraph_EngramEntry_Toilet");

	UEngramEntry_Toilet_C_ExecuteUbergraph_EngramEntry_Toilet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
