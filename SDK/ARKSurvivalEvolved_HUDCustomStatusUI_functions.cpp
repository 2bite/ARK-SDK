// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HUDCustomStatusUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUDCustomStatusUI.HUDCustomStatusUI_C.ExecuteUbergraph_HUDCustomStatusUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHUDCustomStatusUI_C::ExecuteUbergraph_HUDCustomStatusUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDCustomStatusUI.HUDCustomStatusUI_C.ExecuteUbergraph_HUDCustomStatusUI");

	UHUDCustomStatusUI_C_ExecuteUbergraph_HUDCustomStatusUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
