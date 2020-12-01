// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_InventoryPanel_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InventoryPanel.InventoryPanel_C.ExecuteUbergraph_InventoryPanel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryPanel_C::ExecuteUbergraph_InventoryPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryPanel.InventoryPanel_C.ExecuteUbergraph_InventoryPanel");

	UInventoryPanel_C_ExecuteUbergraph_InventoryPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
