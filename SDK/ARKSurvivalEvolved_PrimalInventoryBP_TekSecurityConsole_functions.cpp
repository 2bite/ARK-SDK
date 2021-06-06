// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TekSecurityConsole_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TekSecurityConsole.PrimalInventoryBP_TekSecurityConsole_C.OnConsoleUpdated
// ()

void UPrimalInventoryBP_TekSecurityConsole_C::OnConsoleUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TekSecurityConsole.PrimalInventoryBP_TekSecurityConsole_C.OnConsoleUpdated");

	UPrimalInventoryBP_TekSecurityConsole_C_OnConsoleUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalInventoryBP_TekSecurityConsole.PrimalInventoryBP_TekSecurityConsole_C.BPNotifyItemAdded
// ()
// Parameters:
// class UPrimalItem**            anItem                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_TekSecurityConsole_C::BPNotifyItemAdded(class UPrimalItem** anItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TekSecurityConsole.PrimalInventoryBP_TekSecurityConsole_C.BPNotifyItemAdded");

	UPrimalInventoryBP_TekSecurityConsole_C_BPNotifyItemAdded_Params params;
	params.anItem = anItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalInventoryBP_TekSecurityConsole.PrimalInventoryBP_TekSecurityConsole_C.ExecuteUbergraph_PrimalInventoryBP_TekSecurityConsole
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_TekSecurityConsole_C::ExecuteUbergraph_PrimalInventoryBP_TekSecurityConsole(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TekSecurityConsole.PrimalInventoryBP_TekSecurityConsole_C.ExecuteUbergraph_PrimalInventoryBP_TekSecurityConsole");

	UPrimalInventoryBP_TekSecurityConsole_C_ExecuteUbergraph_PrimalInventoryBP_TekSecurityConsole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
