// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CookingUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CookingUI.CookingUI_C.ExecuteUbergraph_CookingUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCookingUI_C::ExecuteUbergraph_CookingUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CookingUI.CookingUI_C.ExecuteUbergraph_CookingUI");

	UCookingUI_C_ExecuteUbergraph_CookingUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
