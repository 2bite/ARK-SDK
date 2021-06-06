// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_LoadoutDummy_Hotbar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_Hotbar_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.BPClientDoMultiUse");

	AStructure_LoadoutDummy_Hotbar_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.BPGetMultiUseEntries
// (NetReliable, MulticastDelegate, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AStructure_LoadoutDummy_Hotbar_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.BPGetMultiUseEntries");

	AStructure_LoadoutDummy_Hotbar_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.BPRefreshedStructureColors
// ()

void AStructure_LoadoutDummy_Hotbar_C::BPRefreshedStructureColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.BPRefreshedStructureColors");

	AStructure_LoadoutDummy_Hotbar_C_BPRefreshedStructureColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AStructure_LoadoutDummy_Hotbar_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.BPAdjustDamage");

	AStructure_LoadoutDummy_Hotbar_C_BPAdjustDamage_Params params;
	params.IncomingDamage = IncomingDamage;
	params.TheDamageEvent = TheDamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.RefreshNullSlots
// ()

void AStructure_LoadoutDummy_Hotbar_C::RefreshNullSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.RefreshNullSlots");

	AStructure_LoadoutDummy_Hotbar_C_RefreshNullSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.RemoveAllItems
// ()

void AStructure_LoadoutDummy_Hotbar_C::RemoveAllItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.RemoveAllItems");

	AStructure_LoadoutDummy_Hotbar_C_RemoveAllItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.BPNotifyInventoryItemChange
// ()
// Parameters:
// bool*                          bIsItemAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_Hotbar_C::BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.BPNotifyInventoryItemChange");

	AStructure_LoadoutDummy_Hotbar_C_BPNotifyInventoryItemChange_Params params;
	params.bIsItemAdd = bIsItemAdd;
	params.theItem = theItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.RefreshItemIcons
// (NetRequest, Event, NetResponse, MulticastDelegate, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void AStructure_LoadoutDummy_Hotbar_C::RefreshItemIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.RefreshItemIcons");

	AStructure_LoadoutDummy_Hotbar_C_RefreshItemIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.UserConstructionScript
// ()

void AStructure_LoadoutDummy_Hotbar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.UserConstructionScript");

	AStructure_LoadoutDummy_Hotbar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.Multi_SetSlotImages
// ()

void AStructure_LoadoutDummy_Hotbar_C::Multi_SetSlotImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.Multi_SetSlotImages");

	AStructure_LoadoutDummy_Hotbar_C_Multi_SetSlotImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.ReceiveBeginPlay
// ()

void AStructure_LoadoutDummy_Hotbar_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.ReceiveBeginPlay");

	AStructure_LoadoutDummy_Hotbar_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.ExecuteUbergraph_Structure_LoadoutDummy_Hotbar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_Hotbar_C::ExecuteUbergraph_Structure_LoadoutDummy_Hotbar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.ExecuteUbergraph_Structure_LoadoutDummy_Hotbar");

	AStructure_LoadoutDummy_Hotbar_C_ExecuteUbergraph_Structure_LoadoutDummy_Hotbar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
