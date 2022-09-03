// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_ForgeCapable_Cherufe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_ForgeCapable_Cherufe.DinoTamedInventoryComponent_ForgeCapable_Cherufe_C.BPAllowUseInInventory
// ()
// Parameters:
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsRemoteInventory             (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ByPC                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoTamedInventoryComponent_ForgeCapable_Cherufe_C::BPAllowUseInInventory(class UPrimalItem** theItem, bool* bIsRemoteInventory, class AShooterPlayerController** ByPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_ForgeCapable_Cherufe.DinoTamedInventoryComponent_ForgeCapable_Cherufe_C.BPAllowUseInInventory");

	UDinoTamedInventoryComponent_ForgeCapable_Cherufe_C_BPAllowUseInInventory_Params params;
	params.theItem = theItem;
	params.bIsRemoteInventory = bIsRemoteInventory;
	params.ByPC = ByPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoTamedInventoryComponent_ForgeCapable_Cherufe.DinoTamedInventoryComponent_ForgeCapable_Cherufe_C.OverrideUseItem
// ()
// Parameters:
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoTamedInventoryComponent_ForgeCapable_Cherufe_C::OverrideUseItem(class UPrimalItem** theItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_ForgeCapable_Cherufe.DinoTamedInventoryComponent_ForgeCapable_Cherufe_C.OverrideUseItem");

	UDinoTamedInventoryComponent_ForgeCapable_Cherufe_C_OverrideUseItem_Params params;
	params.theItem = theItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoTamedInventoryComponent_ForgeCapable_Cherufe.DinoTamedInventoryComponent_ForgeCapable_Cherufe_C.ExecuteUbergraph_DinoTamedInventoryComponent_ForgeCapable_Cherufe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_ForgeCapable_Cherufe_C::ExecuteUbergraph_DinoTamedInventoryComponent_ForgeCapable_Cherufe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_ForgeCapable_Cherufe.DinoTamedInventoryComponent_ForgeCapable_Cherufe_C.ExecuteUbergraph_DinoTamedInventoryComponent_ForgeCapable_Cherufe");

	UDinoTamedInventoryComponent_ForgeCapable_Cherufe_C_ExecuteUbergraph_DinoTamedInventoryComponent_ForgeCapable_Cherufe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
