// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WorldSettingsEventOverrides_Ragnarok_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WorldSettingsEventOverrides_Ragnarok.WorldSettingsEventOverrides_Ragnarok_C.ExecuteUbergraph_WorldSettingsEventOverrides_Ragnarok
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWorldSettingsEventOverrides_Ragnarok_C::ExecuteUbergraph_WorldSettingsEventOverrides_Ragnarok(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldSettingsEventOverrides_Ragnarok.WorldSettingsEventOverrides_Ragnarok_C.ExecuteUbergraph_WorldSettingsEventOverrides_Ragnarok");

	UWorldSettingsEventOverrides_Ragnarok_C_ExecuteUbergraph_WorldSettingsEventOverrides_Ragnarok_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
