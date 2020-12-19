// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListEntryWidgetPrimalItem_QuickItemDyeUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DataListEntryWidgetPrimalItem_QuickItemDyeUI.DataListEntryWidgetPrimalItem_QuickItemDyeUI_C.ExecuteUbergraph_DataListEntryWidgetPrimalItem_QuickItemDyeUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDataListEntryWidgetPrimalItem_QuickItemDyeUI_C::ExecuteUbergraph_DataListEntryWidgetPrimalItem_QuickItemDyeUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetPrimalItem_QuickItemDyeUI.DataListEntryWidgetPrimalItem_QuickItemDyeUI_C.ExecuteUbergraph_DataListEntryWidgetPrimalItem_QuickItemDyeUI");

	UDataListEntryWidgetPrimalItem_QuickItemDyeUI_C_ExecuteUbergraph_DataListEntryWidgetPrimalItem_QuickItemDyeUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
