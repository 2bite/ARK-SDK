// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WorldSettingsEventOverrides_LostIsland_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WorldSettingsEventOverrides_LostIsland.WorldSettingsEventOverrides_LostIsland_C.ExecuteUbergraph_WorldSettingsEventOverrides_LostIsland
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWorldSettingsEventOverrides_LostIsland_C::ExecuteUbergraph_WorldSettingsEventOverrides_LostIsland(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldSettingsEventOverrides_LostIsland.WorldSettingsEventOverrides_LostIsland_C.ExecuteUbergraph_WorldSettingsEventOverrides_LostIsland");

	UWorldSettingsEventOverrides_LostIsland_C_ExecuteUbergraph_WorldSettingsEventOverrides_LostIsland_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
