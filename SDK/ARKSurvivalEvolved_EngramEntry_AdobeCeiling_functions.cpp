// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_AdobeCeiling_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_AdobeCeiling.EngramEntry_AdobeCeiling_C.ExecuteUbergraph_EngramEntry_AdobeCeiling
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_AdobeCeiling_C::ExecuteUbergraph_EngramEntry_AdobeCeiling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_AdobeCeiling.EngramEntry_AdobeCeiling_C.ExecuteUbergraph_EngramEntry_AdobeCeiling");

	UEngramEntry_AdobeCeiling_C_ExecuteUbergraph_EngramEntry_AdobeCeiling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
