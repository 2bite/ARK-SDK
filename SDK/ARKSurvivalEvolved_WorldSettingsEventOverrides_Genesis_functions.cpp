// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WorldSettingsEventOverrides_Genesis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WorldSettingsEventOverrides_Genesis.WorldSettingsEventOverrides_Genesis_C.ExecuteUbergraph_WorldSettingsEventOverrides_Genesis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWorldSettingsEventOverrides_Genesis_C::ExecuteUbergraph_WorldSettingsEventOverrides_Genesis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldSettingsEventOverrides_Genesis.WorldSettingsEventOverrides_Genesis_C.ExecuteUbergraph_WorldSettingsEventOverrides_Genesis");

	UWorldSettingsEventOverrides_Genesis_C_ExecuteUbergraph_WorldSettingsEventOverrides_Genesis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
