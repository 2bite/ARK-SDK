// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PauseMenu_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PauseMenu.PauseMenu_C.ExecuteUbergraph_PauseMenu
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPauseMenu_C::ExecuteUbergraph_PauseMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ExecuteUbergraph_PauseMenu");

	UPauseMenu_C_ExecuteUbergraph_PauseMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif