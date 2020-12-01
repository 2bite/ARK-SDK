// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListEntryWidgetPrimalItem_StatEquipped_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DataListEntryWidgetPrimalItem_StatEquipped.DataListEntryWidgetPrimalItem_StatEquipped_C.ExecuteUbergraph_DataListEntryWidgetPrimalItem_StatEquipped
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDataListEntryWidgetPrimalItem_StatEquipped_C::ExecuteUbergraph_DataListEntryWidgetPrimalItem_StatEquipped(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetPrimalItem_StatEquipped.DataListEntryWidgetPrimalItem_StatEquipped_C.ExecuteUbergraph_DataListEntryWidgetPrimalItem_StatEquipped");

	UDataListEntryWidgetPrimalItem_StatEquipped_C_ExecuteUbergraph_DataListEntryWidgetPrimalItem_StatEquipped_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
