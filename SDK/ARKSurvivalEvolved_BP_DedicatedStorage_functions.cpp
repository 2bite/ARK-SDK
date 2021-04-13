// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_DedicatedStorage_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DedicatedStorage.BP_DedicatedStorage_C.IsPlayerControllerValid
// ()
// Parameters:
// class APlayerController*       thePC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DedicatedStorage_C::IsPlayerControllerValid(class APlayerController* thePC, bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DedicatedStorage.BP_DedicatedStorage_C.IsPlayerControllerValid");

	ABP_DedicatedStorage_C_IsPlayerControllerValid_Params params;
	params.thePC = thePC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_DedicatedStorage.BP_DedicatedStorage_C.DropAllInventoryOnGround
// ()

void ABP_DedicatedStorage_C::DropAllInventoryOnGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DedicatedStorage.BP_DedicatedStorage_C.DropAllInventoryOnGround");

	ABP_DedicatedStorage_C_DropAllInventoryOnGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPOverrideAllowStructureAccess
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsAccessAllowed               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForInventoryOnly              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_DedicatedStorage_C::BPOverrideAllowStructureAccess(class AShooterPlayerController** ForPC, bool* bIsAccessAllowed, bool* bForInventoryOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPOverrideAllowStructureAccess");

	ABP_DedicatedStorage_C_BPOverrideAllowStructureAccess_Params params;
	params.ForPC = ForPC;
	params.bIsAccessAllowed = bIsAccessAllowed;
	params.bForInventoryOnly = bForInventoryOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DedicatedStorage.BP_DedicatedStorage_C.GetResourceStackSize
// ()
// Parameters:
// int                            StackSize                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DedicatedStorage_C::GetResourceStackSize(int* StackSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DedicatedStorage.BP_DedicatedStorage_C.GetResourceStackSize");

	ABP_DedicatedStorage_C_GetResourceStackSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StackSize != nullptr)
		*StackSize = params.StackSize;
}


// Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPOnDemolish
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DedicatedStorage_C::BPOnDemolish(class APlayerController** ForPC, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPOnDemolish");

	ABP_DedicatedStorage_C_BPOnDemolish_Params params;
	params.ForPC = ForPC;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DedicatedStorage.BP_DedicatedStorage_C.FillInventory
// ()

void ABP_DedicatedStorage_C::FillInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DedicatedStorage.BP_DedicatedStorage_C.FillInventory");

	ABP_DedicatedStorage_C_FillInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DedicatedStorage.BP_DedicatedStorage_C.BlueprintDrawHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DedicatedStorage_C::BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DedicatedStorage.BP_DedicatedStorage_C.BlueprintDrawHUD");

	ABP_DedicatedStorage_C_BlueprintDrawHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DedicatedStorage.BP_DedicatedStorage_C.IsFuel
// ()
// Parameters:
// class UPrimalInventoryComponent* inventory                      (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Fuel                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DedicatedStorage_C::IsFuel(class UPrimalInventoryComponent* inventory, class UClass* ItemClass, bool* Fuel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DedicatedStorage.BP_DedicatedStorage_C.IsFuel");

	ABP_DedicatedStorage_C_IsFuel_Params params;
	params.inventory = inventory;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Fuel != nullptr)
		*Fuel = params.Fuel;
}


// Function BP_DedicatedStorage.BP_DedicatedStorage_C.DropRestrictedItems
// ()

void ABP_DedicatedStorage_C::DropRestrictedItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DedicatedStorage.BP_DedicatedStorage_C.DropRestrictedItems");

	ABP_DedicatedStorage_C_DropRestrictedItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPUnstasis
// ()

void ABP_DedicatedStorage_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPUnstasis");

	ABP_DedicatedStorage_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DedicatedStorage.BP_DedicatedStorage_C.HandleConsolidate
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DedicatedStorage_C::HandleConsolidate(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DedicatedStorage.BP_DedicatedStorage_C.HandleConsolidate");

	ABP_DedicatedStorage_C_HandleConsolidate_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DedicatedStorage.BP_DedicatedStorage_C.HandleWithdraw
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DedicatedStorage_C::HandleWithdraw(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DedicatedStorage.BP_DedicatedStorage_C.HandleWithdraw");

	ABP_DedicatedStorage_C_HandleWithdraw_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DedicatedStorage.BP_DedicatedStorage_C.HandleDeposit
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DedicatedStorage_C::HandleDeposit(class APlayerController* PC, class APrimalCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DedicatedStorage.BP_DedicatedStorage_C.HandleDeposit");

	ABP_DedicatedStorage_C_HandleDeposit_Params params;
	params.PC = PC;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DedicatedStorage.BP_DedicatedStorage_C.OnRep_ResourceCount
// ()

void ABP_DedicatedStorage_C::OnRep_ResourceCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DedicatedStorage.BP_DedicatedStorage_C.OnRep_ResourceCount");

	ABP_DedicatedStorage_C_OnRep_ResourceCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPNotifyInventoryItemChange
// ()
// Parameters:
// bool*                          bIsItemAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DedicatedStorage_C::BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPNotifyInventoryItemChange");

	ABP_DedicatedStorage_C_BPNotifyInventoryItemChange_Params params;
	params.bIsItemAdd = bIsItemAdd;
	params.theItem = theItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DedicatedStorage.BP_DedicatedStorage_C.OnRep_SelectedResourceClass
// ()

void ABP_DedicatedStorage_C::OnRep_SelectedResourceClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DedicatedStorage.BP_DedicatedStorage_C.OnRep_SelectedResourceClass");

	ABP_DedicatedStorage_C_OnRep_SelectedResourceClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DedicatedStorage.BP_DedicatedStorage_C.ReceiveBeginPlay
// ()

void ABP_DedicatedStorage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DedicatedStorage.BP_DedicatedStorage_C.ReceiveBeginPlay");

	ABP_DedicatedStorage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_DedicatedStorage_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPTryMultiUse");

	ABP_DedicatedStorage_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPGetMultiUseEntries
// (Exec, Native, Event, NetResponse, MulticastDelegate, Private, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABP_DedicatedStorage_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPGetMultiUseEntries");

	ABP_DedicatedStorage_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function BP_DedicatedStorage.BP_DedicatedStorage_C.UserConstructionScript
// ()

void ABP_DedicatedStorage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DedicatedStorage.BP_DedicatedStorage_C.UserConstructionScript");

	ABP_DedicatedStorage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DedicatedStorage.BP_DedicatedStorage_C.MultiClearResourceClass
// ()

void ABP_DedicatedStorage_C::MultiClearResourceClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DedicatedStorage.BP_DedicatedStorage_C.MultiClearResourceClass");

	ABP_DedicatedStorage_C_MultiClearResourceClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPDied
// ()
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController**            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DedicatedStorage_C::BPDied(float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPDied");

	ABP_DedicatedStorage_C_BPDied_Params params;
	params.KillingDamage = KillingDamage;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPOnStructurePickup
// ()
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 ItemType                       (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            NewlyPickedUpItem              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsQuickPickup                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DedicatedStorage_C::BPOnStructurePickup(class APlayerController** PlayerController, class UClass** ItemType, class UPrimalItem** NewlyPickedUpItem, bool* bIsQuickPickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPOnStructurePickup");

	ABP_DedicatedStorage_C_BPOnStructurePickup_Params params;
	params.PlayerController = PlayerController;
	params.ItemType = ItemType;
	params.NewlyPickedUpItem = NewlyPickedUpItem;
	params.bIsQuickPickup = bIsQuickPickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DedicatedStorage.BP_DedicatedStorage_C.ExecuteUbergraph_BP_DedicatedStorage
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DedicatedStorage_C::ExecuteUbergraph_BP_DedicatedStorage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DedicatedStorage.BP_DedicatedStorage_C.ExecuteUbergraph_BP_DedicatedStorage");

	ABP_DedicatedStorage_C_ExecuteUbergraph_BP_DedicatedStorage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
