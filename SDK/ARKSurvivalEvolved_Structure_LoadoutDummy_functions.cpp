// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_LoadoutDummy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructure_LoadoutDummy_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPServerHandleNetExecCommand");

	AStructure_LoadoutDummy_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.UpdateInventorySize
// ()

void AStructure_LoadoutDummy_C::UpdateInventorySize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.UpdateInventorySize");

	AStructure_LoadoutDummy_C_UpdateInventorySize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.GetCurrentlyUsedHotbarSlots
// ()
// Parameters:
// int                            OutUsedSlots                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::GetCurrentlyUsedHotbarSlots(int* OutUsedSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.GetCurrentlyUsedHotbarSlots");

	AStructure_LoadoutDummy_C_GetCurrentlyUsedHotbarSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutUsedSlots != nullptr)
		*OutUsedSlots = params.OutUsedSlots;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.OnRep_CurrentMaxInventoryItems
// ()

void AStructure_LoadoutDummy_C::OnRep_CurrentMaxInventoryItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.OnRep_CurrentMaxInventoryItems");

	AStructure_LoadoutDummy_C_OnRep_CurrentMaxInventoryItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.AddItemSafe
// ()
// Parameters:
// class UPrimalItem*             Item                           (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalInventoryComponent* toInventory                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalInventoryComponent* FromInventory                  (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       OwningPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDontStack                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalInventoryComponent* AnotherFallbackInventory       (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem*             InsertAfterItem                (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem*             OutItem                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bAddedToTarget                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::AddItemSafe(class UPrimalItem* Item, class UPrimalInventoryComponent* toInventory, class UPrimalInventoryComponent* FromInventory, class AShooterCharacter* OwningPlayer, bool bDontStack, class UPrimalInventoryComponent* AnotherFallbackInventory, class UPrimalItem* InsertAfterItem, class UPrimalItem** OutItem, bool* bAddedToTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.AddItemSafe");

	AStructure_LoadoutDummy_C_AddItemSafe_Params params;
	params.Item = Item;
	params.toInventory = toInventory;
	params.FromInventory = FromInventory;
	params.OwningPlayer = OwningPlayer;
	params.bDontStack = bDontStack;
	params.AnotherFallbackInventory = AnotherFallbackInventory;
	params.InsertAfterItem = InsertAfterItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutItem != nullptr)
		*OutItem = params.OutItem;
	if (bAddedToTarget != nullptr)
		*bAddedToTarget = params.bAddedToTarget;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.AddAndEquipItem
// ()
// Parameters:
// class UPrimalItem*             Item                           (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalInventoryComponent* toInventory                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalInventoryComponent* FromInventory                  (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::AddAndEquipItem(class UPrimalItem* Item, class UPrimalInventoryComponent* toInventory, class UPrimalInventoryComponent* FromInventory, class APlayerController* ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.AddAndEquipItem");

	AStructure_LoadoutDummy_C_AddAndEquipItem_Params params;
	params.Item = Item;
	params.toInventory = toInventory;
	params.FromInventory = FromInventory;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.AddToOverflowDroppedInventory
// ()
// Parameters:
// class UPrimalItem*             anItem                         (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem*             newItem                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::AddToOverflowDroppedInventory(class UPrimalItem* anItem, class UPrimalItem** newItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.AddToOverflowDroppedInventory");

	AStructure_LoadoutDummy_C_AddToOverflowDroppedInventory_Params params;
	params.anItem = anItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newItem != nullptr)
		*newItem = params.newItem;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPNotifyInventoryItemChange
// ()
// Parameters:
// bool*                          bIsItemAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPNotifyInventoryItemChange");

	AStructure_LoadoutDummy_C_BPNotifyInventoryItemChange_Params params;
	params.bIsItemAdd = bIsItemAdd;
	params.theItem = theItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.IsControllerValid
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::IsControllerValid(class APlayerController* Controller, bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.IsControllerValid");

	AStructure_LoadoutDummy_C_IsControllerValid_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SetHotbarCurrentHealth
// ()

void AStructure_LoadoutDummy_C::SetHotbarCurrentHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SetHotbarCurrentHealth");

	AStructure_LoadoutDummy_C_SetHotbarCurrentHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveDestroyed
// ()

void AStructure_LoadoutDummy_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveDestroyed");

	AStructure_LoadoutDummy_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPPlacedStructure
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::BPPlacedStructure(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPPlacedStructure");

	AStructure_LoadoutDummy_C_BPPlacedStructure_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPClientDoMultiUse");

	AStructure_LoadoutDummy_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPOnDemolish
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::BPOnDemolish(class APlayerController** ForPC, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPOnDemolish");

	AStructure_LoadoutDummy_C_BPOnDemolish_Params params;
	params.ForPC = ForPC;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SetTextRendererColor
// ()

void AStructure_LoadoutDummy_C::SetTextRendererColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SetTextRendererColor");

	AStructure_LoadoutDummy_C_SetTextRendererColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.OnRep_HotbarID
// ()

void AStructure_LoadoutDummy_C::OnRep_HotbarID()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.OnRep_HotbarID");

	AStructure_LoadoutDummy_C_OnRep_HotbarID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.CreateHotbarStructure
// (NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::STATIC_CreateHotbarStructure(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.CreateHotbarStructure");

	AStructure_LoadoutDummy_C_CreateHotbarStructure_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Everything
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::Fill_Dummy_Everything(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Everything");

	AStructure_LoadoutDummy_C_Fill_Dummy_Everything_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Everything
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::Fill_Character_Everything(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Everything");

	AStructure_LoadoutDummy_C_Fill_Character_Everything_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Inventory
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::Fill_Dummy_Inventory(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Inventory");

	AStructure_LoadoutDummy_C_Fill_Dummy_Inventory_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Inventory
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::Fill_Character_Inventory(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Inventory");

	AStructure_LoadoutDummy_C_Fill_Character_Inventory_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap Everything
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::Swap_Everything(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap Everything");

	AStructure_LoadoutDummy_C_Swap_Everything_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap All Inventory
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludingHotbar               (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::Swap_All_Inventory(class APlayerController* PC, bool bIncludingHotbar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap All Inventory");

	AStructure_LoadoutDummy_C_Swap_All_Inventory_Params params;
	params.PC = PC;
	params.bIncludingHotbar = bIncludingHotbar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap All Hotbar
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPrimalItem*>     CachedCharacterItems           (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AStructure_LoadoutDummy_C::Swap_All_Hotbar(class APlayerController* PC, TArray<class UPrimalItem*>* CachedCharacterItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap All Hotbar");

	AStructure_LoadoutDummy_C_Swap_All_Hotbar_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CachedCharacterItems != nullptr)
		*CachedCharacterItems = params.CachedCharacterItems;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Hotbar
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::Fill_Dummy_Hotbar(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Hotbar");

	AStructure_LoadoutDummy_C_Fill_Dummy_Hotbar_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Hotbar
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::Fill_Character_Hotbar(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Hotbar");

	AStructure_LoadoutDummy_C_Fill_Character_Hotbar_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Equipment
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::Fill_Dummy_Equipment(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Equipment");

	AStructure_LoadoutDummy_C_Fill_Dummy_Equipment_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Equipment
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::Fill_Character_Equipment(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Equipment");

	AStructure_LoadoutDummy_C_Fill_Character_Equipment_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SwapAllEquipment
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::SwapAllEquipment(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SwapAllEquipment");

	AStructure_LoadoutDummy_C_SwapAllEquipment_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructure_LoadoutDummy_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPTryMultiUse");

	AStructure_LoadoutDummy_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPGetMultiUseEntries
// (Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AStructure_LoadoutDummy_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPGetMultiUseEntries");

	AStructure_LoadoutDummy_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.UserConstructionScript
// ()

void AStructure_LoadoutDummy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.UserConstructionScript");

	AStructure_LoadoutDummy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveEndPlay");

	AStructure_LoadoutDummy_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveBeginPlay
// ()

void AStructure_LoadoutDummy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveBeginPlay");

	AStructure_LoadoutDummy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ExecuteUbergraph_Structure_LoadoutDummy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::ExecuteUbergraph_Structure_LoadoutDummy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ExecuteUbergraph_Structure_LoadoutDummy");

	AStructure_LoadoutDummy_C_ExecuteUbergraph_Structure_LoadoutDummy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
