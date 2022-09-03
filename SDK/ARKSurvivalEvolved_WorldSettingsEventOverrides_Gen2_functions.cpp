// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WorldSettingsEventOverrides_Gen2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WorldSettingsEventOverrides_Gen2.WorldSettingsEventOverrides_Gen2_C.ExecuteUbergraph_WorldSettingsEventOverrides_Gen2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWorldSettingsEventOverrides_Gen2_C::ExecuteUbergraph_WorldSettingsEventOverrides_Gen2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldSettingsEventOverrides_Gen2.WorldSettingsEventOverrides_Gen2_C.ExecuteUbergraph_WorldSettingsEventOverrides_Gen2");

	UWorldSettingsEventOverrides_Gen2_C_ExecuteUbergraph_WorldSettingsEventOverrides_Gen2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
