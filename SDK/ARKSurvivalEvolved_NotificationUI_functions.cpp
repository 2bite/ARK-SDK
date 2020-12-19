// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_NotificationUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NotificationUI.NotificationUI_C.ExecuteUbergraph_NotificationUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UNotificationUI_C::ExecuteUbergraph_NotificationUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationUI.NotificationUI_C.ExecuteUbergraph_NotificationUI");

	UNotificationUI_C_ExecuteUbergraph_NotificationUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
