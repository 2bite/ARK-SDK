// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ChatBoxUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChatBoxUI.ChatBoxUI_C.ExecuteUbergraph_ChatBoxUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UChatBoxUI_C::ExecuteUbergraph_ChatBoxUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatBoxUI.ChatBoxUI_C.ExecuteUbergraph_ChatBoxUI");

	UChatBoxUI_C_ExecuteUbergraph_ChatBoxUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
