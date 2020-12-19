// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WorldSettingsEventOverrides_CrystalIsles_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WorldSettingsEventOverrides_CrystalIsles.WorldSettingsEventOverrides_CrystalIsles_C.ExecuteUbergraph_WorldSettingsEventOverrides_CrystalIsles
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWorldSettingsEventOverrides_CrystalIsles_C::ExecuteUbergraph_WorldSettingsEventOverrides_CrystalIsles(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldSettingsEventOverrides_CrystalIsles.WorldSettingsEventOverrides_CrystalIsles_C.ExecuteUbergraph_WorldSettingsEventOverrides_CrystalIsles");

	UWorldSettingsEventOverrides_CrystalIsles_C_ExecuteUbergraph_WorldSettingsEventOverrides_CrystalIsles_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
