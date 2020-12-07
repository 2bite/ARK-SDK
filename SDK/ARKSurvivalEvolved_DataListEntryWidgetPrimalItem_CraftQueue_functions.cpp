// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListEntryWidgetPrimalItem_CraftQueue_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DataListEntryWidgetPrimalItem_CraftQueue.DataListEntryWidgetPrimalItem_CraftQueue_C.ExecuteUbergraph_DataListEntryWidgetPrimalItem_CraftQueue
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDataListEntryWidgetPrimalItem_CraftQueue_C::ExecuteUbergraph_DataListEntryWidgetPrimalItem_CraftQueue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetPrimalItem_CraftQueue.DataListEntryWidgetPrimalItem_CraftQueue_C.ExecuteUbergraph_DataListEntryWidgetPrimalItem_CraftQueue");

	UDataListEntryWidgetPrimalItem_CraftQueue_C_ExecuteUbergraph_DataListEntryWidgetPrimalItem_CraftQueue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
