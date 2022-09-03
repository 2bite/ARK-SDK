// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Phoenix_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Phoenix.DinoTamedInventoryComponent_Phoenix_C.BPAllowUseInInventory
// ()
// Parameters:
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsRemoteInventory             (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ByPC                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoTamedInventoryComponent_Phoenix_C::BPAllowUseInInventory(class UPrimalItem** theItem, bool* bIsRemoteInventory, class AShooterPlayerController** ByPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Phoenix.DinoTamedInventoryComponent_Phoenix_C.BPAllowUseInInventory");

	UDinoTamedInventoryComponent_Phoenix_C_BPAllowUseInInventory_Params params;
	params.theItem = theItem;
	params.bIsRemoteInventory = bIsRemoteInventory;
	params.ByPC = ByPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoTamedInventoryComponent_Phoenix.DinoTamedInventoryComponent_Phoenix_C.OverrideUseItem
// ()
// Parameters:
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoTamedInventoryComponent_Phoenix_C::OverrideUseItem(class UPrimalItem** theItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Phoenix.DinoTamedInventoryComponent_Phoenix_C.OverrideUseItem");

	UDinoTamedInventoryComponent_Phoenix_C_OverrideUseItem_Params params;
	params.theItem = theItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoTamedInventoryComponent_Phoenix.DinoTamedInventoryComponent_Phoenix_C.ExecuteUbergraph_DinoTamedInventoryComponent_Phoenix
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Phoenix_C::ExecuteUbergraph_DinoTamedInventoryComponent_Phoenix(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Phoenix.DinoTamedInventoryComponent_Phoenix_C.ExecuteUbergraph_DinoTamedInventoryComponent_Phoenix");

	UDinoTamedInventoryComponent_Phoenix_C_ExecuteUbergraph_DinoTamedInventoryComponent_Phoenix_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
