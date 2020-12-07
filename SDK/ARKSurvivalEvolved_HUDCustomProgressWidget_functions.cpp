// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HUDCustomProgressWidget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUDCustomProgressWidget.HUDCustomProgressWidget_C.ExecuteUbergraph_HUDCustomProgressWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHUDCustomProgressWidget_C::ExecuteUbergraph_HUDCustomProgressWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDCustomProgressWidget.HUDCustomProgressWidget_C.ExecuteUbergraph_HUDCustomProgressWidget");

	UHUDCustomProgressWidget_C_ExecuteUbergraph_HUDCustomProgressWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
