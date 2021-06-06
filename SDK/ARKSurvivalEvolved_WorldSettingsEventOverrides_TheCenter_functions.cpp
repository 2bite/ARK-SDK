// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WorldSettingsEventOverrides_TheCenter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WorldSettingsEventOverrides_TheCenter.WorldSettingsEventOverrides_TheCenter_C.ExecuteUbergraph_WorldSettingsEventOverrides_TheCenter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWorldSettingsEventOverrides_TheCenter_C::ExecuteUbergraph_WorldSettingsEventOverrides_TheCenter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldSettingsEventOverrides_TheCenter.WorldSettingsEventOverrides_TheCenter_C.ExecuteUbergraph_WorldSettingsEventOverrides_TheCenter");

	UWorldSettingsEventOverrides_TheCenter_C_ExecuteUbergraph_WorldSettingsEventOverrides_TheCenter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
