// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_HazardSuit_Chest_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_HazardSuit_Chest.EngramEntry_HazardSuit_Chest_C.ExecuteUbergraph_EngramEntry_HazardSuit_Chest
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_HazardSuit_Chest_C::ExecuteUbergraph_EngramEntry_HazardSuit_Chest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_HazardSuit_Chest.EngramEntry_HazardSuit_Chest_C.ExecuteUbergraph_EngramEntry_HazardSuit_Chest");

	UEngramEntry_HazardSuit_Chest_C_ExecuteUbergraph_EngramEntry_HazardSuit_Chest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
