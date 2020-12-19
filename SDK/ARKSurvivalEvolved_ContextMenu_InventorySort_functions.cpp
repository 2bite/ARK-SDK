// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ContextMenu_InventorySort_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ContextMenu_InventorySort.ContextMenu_InventorySort_C.ExecuteUbergraph_ContextMenu_InventorySort
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UContextMenu_InventorySort_C::ExecuteUbergraph_ContextMenu_InventorySort(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenu_InventorySort.ContextMenu_InventorySort_C.ExecuteUbergraph_ContextMenu_InventorySort");

	UContextMenu_InventorySort_C_ExecuteUbergraph_ContextMenu_InventorySort_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
