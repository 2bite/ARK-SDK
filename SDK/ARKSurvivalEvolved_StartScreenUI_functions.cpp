// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StartScreenUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StartScreenUI.StartScreenUI_C.ExecuteUbergraph_StartScreenUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStartScreenUI_C::ExecuteUbergraph_StartScreenUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StartScreenUI.StartScreenUI_C.ExecuteUbergraph_StartScreenUI");

	UStartScreenUI_C_ExecuteUbergraph_StartScreenUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
