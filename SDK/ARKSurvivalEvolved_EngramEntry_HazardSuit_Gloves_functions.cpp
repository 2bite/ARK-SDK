// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_HazardSuit_Gloves_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_HazardSuit_Gloves.EngramEntry_HazardSuit_Gloves_C.ExecuteUbergraph_EngramEntry_HazardSuit_Gloves
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_HazardSuit_Gloves_C::ExecuteUbergraph_EngramEntry_HazardSuit_Gloves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_HazardSuit_Gloves.EngramEntry_HazardSuit_Gloves_C.ExecuteUbergraph_EngramEntry_HazardSuit_Gloves");

	UEngramEntry_HazardSuit_Gloves_C_ExecuteUbergraph_EngramEntry_HazardSuit_Gloves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
