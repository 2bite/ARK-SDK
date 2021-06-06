// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DyeUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DyeUI.DyeUI_C.ExecuteUbergraph_DyeUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDyeUI_C::ExecuteUbergraph_DyeUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DyeUI.DyeUI_C.ExecuteUbergraph_DyeUI");

	UDyeUI_C_ExecuteUbergraph_DyeUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
