// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekGrenadeLauncherHelper_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.GetValidAmmoTypes_1
// ()
// Parameters:
// TArray<class UClass*>          TypesInInventory               (Parm, OutParm, ZeroConstructor)

void ABuff_TekGrenadeLauncherHelper_C::GetValidAmmoTypes_1(TArray<class UClass*>* TypesInInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.GetValidAmmoTypes_1");

	ABuff_TekGrenadeLauncherHelper_C_GetValidAmmoTypes_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TypesInInventory != nullptr)
		*TypesInInventory = params.TypesInInventory;
}


// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ReceiveDestroyed
// ()

void ABuff_TekGrenadeLauncherHelper_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ReceiveDestroyed");

	ABuff_TekGrenadeLauncherHelper_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPInstigatorDied
// ()

void ABuff_TekGrenadeLauncherHelper_C::BPInstigatorDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPInstigatorDied");

	ABuff_TekGrenadeLauncherHelper_C_BPInstigatorDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPHandleOnStartFire
// ()
// Parameters:
// bool*                          bFromGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekGrenadeLauncherHelper_C::BPHandleOnStartFire(bool* bFromGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPHandleOnStartFire");

	ABuff_TekGrenadeLauncherHelper_C_BPHandleOnStartFire_Params params;
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ShouldUpdateAmmoCount
// ()
// Parameters:
// class APrimalCharacter*        ForShooterChar                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShouldUpdate                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekGrenadeLauncherHelper_C::ShouldUpdateAmmoCount(class APrimalCharacter* ForShooterChar, bool* bShouldUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ShouldUpdateAmmoCount");

	ABuff_TekGrenadeLauncherHelper_C_ShouldUpdateAmmoCount_Params params;
	params.ForShooterChar = ForShooterChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShouldUpdate != nullptr)
		*bShouldUpdate = params.bShouldUpdate;
}


// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.InitWeapon
// ()

void ABuff_TekGrenadeLauncherHelper_C::InitWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.InitWeapon");

	ABuff_TekGrenadeLauncherHelper_C_InitWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.AmmoNameToType
// ()
// Parameters:
// struct FName                   AmmoTypeName                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  AmmoType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekGrenadeLauncherHelper_C::AmmoNameToType(const struct FName& AmmoTypeName, class UClass** AmmoType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.AmmoNameToType");

	ABuff_TekGrenadeLauncherHelper_C_AmmoNameToType_Params params;
	params.AmmoTypeName = AmmoTypeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoType != nullptr)
		*AmmoType = params.AmmoType;
}


// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.GenerateAmmoWheelEntries
// (Exec, NetResponse, Static, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, Const)
// Parameters:
// TArray<struct FCustomWheelEntry> AmmoEntries                    (Parm, OutParm, ZeroConstructor)

void ABuff_TekGrenadeLauncherHelper_C::STATIC_GenerateAmmoWheelEntries(TArray<struct FCustomWheelEntry>* AmmoEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.GenerateAmmoWheelEntries");

	ABuff_TekGrenadeLauncherHelper_C_GenerateAmmoWheelEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoEntries != nullptr)
		*AmmoEntries = params.AmmoEntries;
}


// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.GenerateSlotWheelEntries
// (NetReliable, NetRequest, Event, NetResponse, Static, MulticastDelegate, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, Const)
// Parameters:
// TArray<struct FCustomWheelEntry> Entries                        (Parm, OutParm, ZeroConstructor)

void ABuff_TekGrenadeLauncherHelper_C::STATIC_GenerateSlotWheelEntries(TArray<struct FCustomWheelEntry>* Entries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.GenerateSlotWheelEntries");

	ABuff_TekGrenadeLauncherHelper_C_GenerateSlotWheelEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Entries != nullptr)
		*Entries = params.Entries;
}


// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.CalcAmmoWidgetLocation
// ()
// Parameters:
// int                            InInt                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D ABuff_TekGrenadeLauncherHelper_C::CalcAmmoWidgetLocation(int InInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.CalcAmmoWidgetLocation");

	ABuff_TekGrenadeLauncherHelper_C_CalcAmmoWidgetLocation_Params params;
	params.InInt = InInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.GetItemShortName
// ()
// Parameters:
// class UClass*                  FromClass                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString ABuff_TekGrenadeLauncherHelper_C::GetItemShortName(class UClass* FromClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.GetItemShortName");

	ABuff_TekGrenadeLauncherHelper_C_GetItemShortName_Params params;
	params.FromClass = FromClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.GetValidAmmoTypes
// ()
// Parameters:
// TArray<class UClass*>          TypesInInventory               (Parm, OutParm, ZeroConstructor)

void ABuff_TekGrenadeLauncherHelper_C::GetValidAmmoTypes(TArray<class UClass*>* TypesInInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.GetValidAmmoTypes");

	ABuff_TekGrenadeLauncherHelper_C_GetValidAmmoTypes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TypesInInventory != nullptr)
		*TypesInInventory = params.TypesInInventory;
}


// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.SyncHUDElementSlots
// (NetReliable, Native, Event, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, Const)

void ABuff_TekGrenadeLauncherHelper_C::SyncHUDElementSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.SyncHUDElementSlots");

	ABuff_TekGrenadeLauncherHelper_C_SyncHUDElementSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ReceiveBeginPlay
// ()

void ABuff_TekGrenadeLauncherHelper_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ReceiveBeginPlay");

	ABuff_TekGrenadeLauncherHelper_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPGetHUDElements
// (NetRequest, Exec, Static, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_TekGrenadeLauncherHelper_C::STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPGetHUDElements");

	ABuff_TekGrenadeLauncherHelper_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.UserConstructionScript
// ()

void ABuff_TekGrenadeLauncherHelper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.UserConstructionScript");

	ABuff_TekGrenadeLauncherHelper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekGrenadeLauncherHelper_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BuffTickClient");

	ABuff_TekGrenadeLauncherHelper_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.OnSlotSelected
// ()

void ABuff_TekGrenadeLauncherHelper_C::OnSlotSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.OnSlotSelected");

	ABuff_TekGrenadeLauncherHelper_C_OnSlotSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.OnAmmoTypeSelected
// ()

void ABuff_TekGrenadeLauncherHelper_C::OnAmmoTypeSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.OnAmmoTypeSelected");

	ABuff_TekGrenadeLauncherHelper_C_OnAmmoTypeSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPHandleOnStartAltFire
// ()
// Parameters:
// bool*                          bFromGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekGrenadeLauncherHelper_C::BPHandleOnStartAltFire(bool* bFromGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPHandleOnStartAltFire");

	ABuff_TekGrenadeLauncherHelper_C_BPHandleOnStartAltFire_Params params;
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPHandleOnStopAltFire
// ()
// Parameters:
// bool*                          bFromGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekGrenadeLauncherHelper_C::BPHandleOnStopAltFire(bool* bFromGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPHandleOnStopAltFire");

	ABuff_TekGrenadeLauncherHelper_C_BPHandleOnStopAltFire_Params params;
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ShowSlotSelectWheel
// ()

void ABuff_TekGrenadeLauncherHelper_C::ShowSlotSelectWheel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ShowSlotSelectWheel");

	ABuff_TekGrenadeLauncherHelper_C_ShowSlotSelectWheel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.HideSlotSelectWheel
// ()

void ABuff_TekGrenadeLauncherHelper_C::HideSlotSelectWheel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.HideSlotSelectWheel");

	ABuff_TekGrenadeLauncherHelper_C_HideSlotSelectWheel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.OnAmmoTypeUnloaded
// ()

void ABuff_TekGrenadeLauncherHelper_C::OnAmmoTypeUnloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.OnAmmoTypeUnloaded");

	ABuff_TekGrenadeLauncherHelper_C_OnAmmoTypeUnloaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ExecuteUbergraph_Buff_TekGrenadeLauncherHelper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekGrenadeLauncherHelper_C::ExecuteUbergraph_Buff_TekGrenadeLauncherHelper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ExecuteUbergraph_Buff_TekGrenadeLauncherHelper");

	ABuff_TekGrenadeLauncherHelper_C_ExecuteUbergraph_Buff_TekGrenadeLauncherHelper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
