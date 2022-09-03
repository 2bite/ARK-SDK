// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ToolTipWidgetPrimalItem_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ToolTipWidgetPrimalItem.ToolTipWidgetPrimalItem_C.ExecuteUbergraph_ToolTipWidgetPrimalItem
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UToolTipWidgetPrimalItem_C::ExecuteUbergraph_ToolTipWidgetPrimalItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTipWidgetPrimalItem.ToolTipWidgetPrimalItem_C.ExecuteUbergraph_ToolTipWidgetPrimalItem");

	UToolTipWidgetPrimalItem_C_ExecuteUbergraph_ToolTipWidgetPrimalItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
