// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_AdobeStairs_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_AdobeStairs.EngramEntry_AdobeStairs_C.ExecuteUbergraph_EngramEntry_AdobeStairs
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_AdobeStairs_C::ExecuteUbergraph_EngramEntry_AdobeStairs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_AdobeStairs.EngramEntry_AdobeStairs_C.ExecuteUbergraph_EngramEntry_AdobeStairs");

	UEngramEntry_AdobeStairs_C_ExecuteUbergraph_EngramEntry_AdobeStairs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
