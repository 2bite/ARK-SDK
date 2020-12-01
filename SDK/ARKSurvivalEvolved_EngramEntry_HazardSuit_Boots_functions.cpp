// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_HazardSuit_Boots_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_HazardSuit_Boots.EngramEntry_HazardSuit_Boots_C.ExecuteUbergraph_EngramEntry_HazardSuit_Boots
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_HazardSuit_Boots_C::ExecuteUbergraph_EngramEntry_HazardSuit_Boots(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_HazardSuit_Boots.EngramEntry_HazardSuit_Boots_C.ExecuteUbergraph_EngramEntry_HazardSuit_Boots");

	UEngramEntry_HazardSuit_Boots_C_ExecuteUbergraph_EngramEntry_HazardSuit_Boots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
