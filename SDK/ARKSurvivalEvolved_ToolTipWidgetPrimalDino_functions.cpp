// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ToolTipWidgetPrimalDino_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ToolTipWidgetPrimalDino.ToolTipWidgetPrimalDino_C.ExecuteUbergraph_ToolTipWidgetPrimalDino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UToolTipWidgetPrimalDino_C::ExecuteUbergraph_ToolTipWidgetPrimalDino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTipWidgetPrimalDino.ToolTipWidgetPrimalDino_C.ExecuteUbergraph_ToolTipWidgetPrimalDino");

	UToolTipWidgetPrimalDino_C_ExecuteUbergraph_ToolTipWidgetPrimalDino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
