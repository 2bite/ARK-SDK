// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DepthOfFieldMenu_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DepthOfFieldMenu.DepthOfFieldMenu_C.ExecuteUbergraph_DepthOfFieldMenu
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDepthOfFieldMenu_C::ExecuteUbergraph_DepthOfFieldMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DepthOfFieldMenu.DepthOfFieldMenu_C.ExecuteUbergraph_DepthOfFieldMenu");

	UDepthOfFieldMenu_C_ExecuteUbergraph_DepthOfFieldMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
