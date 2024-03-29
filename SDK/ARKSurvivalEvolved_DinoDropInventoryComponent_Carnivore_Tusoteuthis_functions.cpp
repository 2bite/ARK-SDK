// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDropInventoryComponent_Carnivore_Tusoteuthis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDropInventoryComponent_Carnivore_Tusoteuthis.DinoDropInventoryComponent_Carnivore_Tusoteuthis_C.BPAllowUseInInventory
// ()
// Parameters:
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsRemoteInventory             (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ByPC                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoDropInventoryComponent_Carnivore_Tusoteuthis_C::BPAllowUseInInventory(class UPrimalItem** theItem, bool* bIsRemoteInventory, class AShooterPlayerController** ByPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDropInventoryComponent_Carnivore_Tusoteuthis.DinoDropInventoryComponent_Carnivore_Tusoteuthis_C.BPAllowUseInInventory");

	UDinoDropInventoryComponent_Carnivore_Tusoteuthis_C_BPAllowUseInInventory_Params params;
	params.theItem = theItem;
	params.bIsRemoteInventory = bIsRemoteInventory;
	params.ByPC = ByPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoDropInventoryComponent_Carnivore_Tusoteuthis.DinoDropInventoryComponent_Carnivore_Tusoteuthis_C.BPRemoteInventoryAllowRemoveItems
// ()
// Parameters:
// class AShooterPlayerController** PC                             (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            anItemToTransfer               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoDropInventoryComponent_Carnivore_Tusoteuthis_C::BPRemoteInventoryAllowRemoveItems(class AShooterPlayerController** PC, class UPrimalItem** anItemToTransfer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDropInventoryComponent_Carnivore_Tusoteuthis.DinoDropInventoryComponent_Carnivore_Tusoteuthis_C.BPRemoteInventoryAllowRemoveItems");

	UDinoDropInventoryComponent_Carnivore_Tusoteuthis_C_BPRemoteInventoryAllowRemoveItems_Params params;
	params.PC = PC;
	params.anItemToTransfer = anItemToTransfer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoDropInventoryComponent_Carnivore_Tusoteuthis.DinoDropInventoryComponent_Carnivore_Tusoteuthis_C.ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Tusoteuthis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDropInventoryComponent_Carnivore_Tusoteuthis_C::ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Tusoteuthis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDropInventoryComponent_Carnivore_Tusoteuthis.DinoDropInventoryComponent_Carnivore_Tusoteuthis_C.ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Tusoteuthis");

	UDinoDropInventoryComponent_Carnivore_Tusoteuthis_C_ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Tusoteuthis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
