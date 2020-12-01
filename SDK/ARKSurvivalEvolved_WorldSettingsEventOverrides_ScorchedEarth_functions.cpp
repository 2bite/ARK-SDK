// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WorldSettingsEventOverrides_ScorchedEarth_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WorldSettingsEventOverrides_ScorchedEarth.WorldSettingsEventOverrides_ScorchedEarth_C.ExecuteUbergraph_WorldSettingsEventOverrides_ScorchedEarth
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWorldSettingsEventOverrides_ScorchedEarth_C::ExecuteUbergraph_WorldSettingsEventOverrides_ScorchedEarth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldSettingsEventOverrides_ScorchedEarth.WorldSettingsEventOverrides_ScorchedEarth_C.ExecuteUbergraph_WorldSettingsEventOverrides_ScorchedEarth");

	UWorldSettingsEventOverrides_ScorchedEarth_C_ExecuteUbergraph_WorldSettingsEventOverrides_ScorchedEarth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
