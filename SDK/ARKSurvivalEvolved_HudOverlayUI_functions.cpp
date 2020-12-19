// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HudOverlayUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HudOverlayUI.HudOverlayUI_C.ExecuteUbergraph_HudOverlayUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHudOverlayUI_C::ExecuteUbergraph_HudOverlayUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudOverlayUI.HudOverlayUI_C.ExecuteUbergraph_HudOverlayUI");

	UHudOverlayUI_C_ExecuteUbergraph_HudOverlayUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
