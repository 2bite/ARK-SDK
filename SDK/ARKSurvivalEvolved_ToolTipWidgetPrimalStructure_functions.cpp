// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ToolTipWidgetPrimalStructure_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ToolTipWidgetPrimalStructure.ToolTipWidgetPrimalStructure_C.ExecuteUbergraph_ToolTipWidgetPrimalStructure
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UToolTipWidgetPrimalStructure_C::ExecuteUbergraph_ToolTipWidgetPrimalStructure(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTipWidgetPrimalStructure.ToolTipWidgetPrimalStructure_C.ExecuteUbergraph_ToolTipWidgetPrimalStructure");

	UToolTipWidgetPrimalStructure_C_ExecuteUbergraph_ToolTipWidgetPrimalStructure_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
