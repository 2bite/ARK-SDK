// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ToolTipWidgetPrimalDinoExtended_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ToolTipWidgetPrimalDinoExtended.ToolTipWidgetPrimalDinoExtended_C.ExecuteUbergraph_ToolTipWidgetPrimalDinoExtended
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UToolTipWidgetPrimalDinoExtended_C::ExecuteUbergraph_ToolTipWidgetPrimalDinoExtended(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTipWidgetPrimalDinoExtended.ToolTipWidgetPrimalDinoExtended_C.ExecuteUbergraph_ToolTipWidgetPrimalDinoExtended");

	UToolTipWidgetPrimalDinoExtended_C_ExecuteUbergraph_ToolTipWidgetPrimalDinoExtended_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
