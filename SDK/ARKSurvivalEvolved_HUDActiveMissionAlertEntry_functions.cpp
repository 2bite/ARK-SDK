// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HUDActiveMissionAlertEntry_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUDActiveMissionAlertEntry.HUDActiveMissionAlertEntry_C.ExecuteUbergraph_HUDActiveMissionAlertEntry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHUDActiveMissionAlertEntry_C::ExecuteUbergraph_HUDActiveMissionAlertEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDActiveMissionAlertEntry.HUDActiveMissionAlertEntry_C.ExecuteUbergraph_HUDActiveMissionAlertEntry");

	UHUDActiveMissionAlertEntry_C_ExecuteUbergraph_HUDActiveMissionAlertEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
