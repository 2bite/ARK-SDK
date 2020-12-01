// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_HazardSuit_Pants_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_HazardSuit_Pants.EngramEntry_HazardSuit_Pants_C.ExecuteUbergraph_EngramEntry_HazardSuit_Pants
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_HazardSuit_Pants_C::ExecuteUbergraph_EngramEntry_HazardSuit_Pants(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_HazardSuit_Pants.EngramEntry_HazardSuit_Pants_C.ExecuteUbergraph_EngramEntry_HazardSuit_Pants");

	UEngramEntry_HazardSuit_Pants_C_ExecuteUbergraph_EngramEntry_HazardSuit_Pants_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
