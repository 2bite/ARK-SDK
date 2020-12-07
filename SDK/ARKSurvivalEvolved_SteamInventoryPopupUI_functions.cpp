// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SteamInventoryPopupUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SteamInventoryPopupUI.SteamInventoryPopupUI_C.ExecuteUbergraph_SteamInventoryPopupUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USteamInventoryPopupUI_C::ExecuteUbergraph_SteamInventoryPopupUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamInventoryPopupUI.SteamInventoryPopupUI_C.ExecuteUbergraph_SteamInventoryPopupUI");

	USteamInventoryPopupUI_C_ExecuteUbergraph_SteamInventoryPopupUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
