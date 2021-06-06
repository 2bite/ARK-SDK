// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TriFoundation_Metal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TriFoundation_Metal.EngramEntry_TriFoundation_Metal_C.ExecuteUbergraph_EngramEntry_TriFoundation_Metal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TriFoundation_Metal_C::ExecuteUbergraph_EngramEntry_TriFoundation_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TriFoundation_Metal.EngramEntry_TriFoundation_Metal_C.ExecuteUbergraph_EngramEntry_TriFoundation_Metal");

	UEngramEntry_TriFoundation_Metal_C_ExecuteUbergraph_EngramEntry_TriFoundation_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
