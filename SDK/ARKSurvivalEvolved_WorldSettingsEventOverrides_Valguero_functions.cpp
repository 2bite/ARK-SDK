// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WorldSettingsEventOverrides_Valguero_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WorldSettingsEventOverrides_Valguero.WorldSettingsEventOverrides_Valguero_C.ExecuteUbergraph_WorldSettingsEventOverrides_Valguero
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWorldSettingsEventOverrides_Valguero_C::ExecuteUbergraph_WorldSettingsEventOverrides_Valguero(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldSettingsEventOverrides_Valguero.WorldSettingsEventOverrides_Valguero_C.ExecuteUbergraph_WorldSettingsEventOverrides_Valguero");

	UWorldSettingsEventOverrides_Valguero_C_ExecuteUbergraph_WorldSettingsEventOverrides_Valguero_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
