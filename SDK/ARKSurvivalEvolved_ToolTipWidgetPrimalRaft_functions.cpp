// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ToolTipWidgetPrimalRaft_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ToolTipWidgetPrimalRaft.ToolTipWidgetPrimalRaft_C.ExecuteUbergraph_ToolTipWidgetPrimalRaft
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UToolTipWidgetPrimalRaft_C::ExecuteUbergraph_ToolTipWidgetPrimalRaft(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTipWidgetPrimalRaft.ToolTipWidgetPrimalRaft_C.ExecuteUbergraph_ToolTipWidgetPrimalRaft");

	UToolTipWidgetPrimalRaft_C_ExecuteUbergraph_ToolTipWidgetPrimalRaft_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
