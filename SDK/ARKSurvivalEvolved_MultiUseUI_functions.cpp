// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MultiUseUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MultiUseUI.MultiUseUI_C.ExecuteUbergraph_MultiUseUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMultiUseUI_C::ExecuteUbergraph_MultiUseUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiUseUI.MultiUseUI_C.ExecuteUbergraph_MultiUseUI");

	UMultiUseUI_C_ExecuteUbergraph_MultiUseUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
