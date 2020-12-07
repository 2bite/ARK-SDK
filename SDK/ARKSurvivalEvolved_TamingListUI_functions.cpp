// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TamingListUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TamingListUI.TamingListUI_C.ExecuteUbergraph_TamingListUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTamingListUI_C::ExecuteUbergraph_TamingListUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TamingListUI.TamingListUI_C.ExecuteUbergraph_TamingListUI");

	UTamingListUI_C_ExecuteUbergraph_TamingListUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
