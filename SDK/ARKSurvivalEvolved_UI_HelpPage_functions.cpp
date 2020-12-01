// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_UI_HelpPage_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_HelpPage.UI_HelpPage_C.ExecuteUbergraph_UI_HelpPage
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HelpPage_C::ExecuteUbergraph_UI_HelpPage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HelpPage.UI_HelpPage_C.ExecuteUbergraph_UI_HelpPage");

	UUI_HelpPage_C_ExecuteUbergraph_UI_HelpPage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
