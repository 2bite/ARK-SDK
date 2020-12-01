// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_BP_Eel_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_BP_Eel.DinoTamedInventoryComponent_BP_Eel_C.OverrideUseItem
// ()
// Parameters:
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoTamedInventoryComponent_BP_Eel_C::OverrideUseItem(class UPrimalItem** theItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_BP_Eel.DinoTamedInventoryComponent_BP_Eel_C.OverrideUseItem");

	UDinoTamedInventoryComponent_BP_Eel_C_OverrideUseItem_Params params;
	params.theItem = theItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoTamedInventoryComponent_BP_Eel.DinoTamedInventoryComponent_BP_Eel_C.BPAllowUseInInventory
// ()
// Parameters:
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsRemoteInventory             (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ByPC                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoTamedInventoryComponent_BP_Eel_C::BPAllowUseInInventory(class UPrimalItem** theItem, bool* bIsRemoteInventory, class AShooterPlayerController** ByPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_BP_Eel.DinoTamedInventoryComponent_BP_Eel_C.BPAllowUseInInventory");

	UDinoTamedInventoryComponent_BP_Eel_C_BPAllowUseInInventory_Params params;
	params.theItem = theItem;
	params.bIsRemoteInventory = bIsRemoteInventory;
	params.ByPC = ByPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoTamedInventoryComponent_BP_Eel.DinoTamedInventoryComponent_BP_Eel_C.ExecuteUbergraph_DinoTamedInventoryComponent_BP_Eel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_BP_Eel_C::ExecuteUbergraph_DinoTamedInventoryComponent_BP_Eel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_BP_Eel.DinoTamedInventoryComponent_BP_Eel_C.ExecuteUbergraph_DinoTamedInventoryComponent_BP_Eel");

	UDinoTamedInventoryComponent_BP_Eel_C_ExecuteUbergraph_DinoTamedInventoryComponent_BP_Eel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif