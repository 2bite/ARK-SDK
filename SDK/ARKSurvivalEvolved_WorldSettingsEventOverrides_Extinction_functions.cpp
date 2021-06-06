// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WorldSettingsEventOverrides_Extinction_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WorldSettingsEventOverrides_Extinction.WorldSettingsEventOverrides_Extinction_C.ExecuteUbergraph_WorldSettingsEventOverrides_Extinction
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWorldSettingsEventOverrides_Extinction_C::ExecuteUbergraph_WorldSettingsEventOverrides_Extinction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldSettingsEventOverrides_Extinction.WorldSettingsEventOverrides_Extinction_C.ExecuteUbergraph_WorldSettingsEventOverrides_Extinction");

	UWorldSettingsEventOverrides_Extinction_C_ExecuteUbergraph_WorldSettingsEventOverrides_Extinction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
