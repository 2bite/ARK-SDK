// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CryopodInventoryTooltipWidget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CryopodInventoryTooltipWidget.CryopodInventoryTooltipWidget_C.ExecuteUbergraph_CryopodInventoryTooltipWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCryopodInventoryTooltipWidget_C::ExecuteUbergraph_CryopodInventoryTooltipWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CryopodInventoryTooltipWidget.CryopodInventoryTooltipWidget_C.ExecuteUbergraph_CryopodInventoryTooltipWidget");

	UCryopodInventoryTooltipWidget_C_ExecuteUbergraph_CryopodInventoryTooltipWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
