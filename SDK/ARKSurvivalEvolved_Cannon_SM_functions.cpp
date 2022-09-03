// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Cannon_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cannon_SM.Cannon_SM_C.LoadFromNearby
// ()

void ACannon_SM_C::LoadFromNearby()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cannon_SM.Cannon_SM_C.LoadFromNearby");

	ACannon_SM_C_LoadFromNearby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cannon_SM.Cannon_SM_C.ValidAmmoContainerNearby
// ()
// Parameters:
// bool                           ContainerNearby                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACannon_SM_C::ValidAmmoContainerNearby(bool* ContainerNearby)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cannon_SM.Cannon_SM_C.ValidAmmoContainerNearby");

	ACannon_SM_C_ValidAmmoContainerNearby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContainerNearby != nullptr)
		*ContainerNearby = params.ContainerNearby;
}


// Function Cannon_SM.Cannon_SM_C.IsValidToFire
// (NetReliable, NetRequest, NetResponse, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           ValidToFire                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACannon_SM_C::IsValidToFire(bool* ValidToFire)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cannon_SM.Cannon_SM_C.IsValidToFire");

	ACannon_SM_C_IsValidToFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidToFire != nullptr)
		*ValidToFire = params.ValidToFire;
}


// Function Cannon_SM.Cannon_SM_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACannon_SM_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cannon_SM.Cannon_SM_C.BPTryMultiUse");

	ACannon_SM_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Cannon_SM.Cannon_SM_C.BPGetMultiUseEntries
// (NetReliable, Exec, Native, Event, NetResponse, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ACannon_SM_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cannon_SM.Cannon_SM_C.BPGetMultiUseEntries");

	ACannon_SM_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Cannon_SM.Cannon_SM_C.UserConstructionScript
// ()

void ACannon_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cannon_SM.Cannon_SM_C.UserConstructionScript");

	ACannon_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cannon_SM.Cannon_SM_C.CannonFire
// ()

void ACannon_SM_C::CannonFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cannon_SM.Cannon_SM_C.CannonFire");

	ACannon_SM_C_CannonFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cannon_SM.Cannon_SM_C.BPNotifyInventoryItemChange
// ()
// Parameters:
// bool*                          bIsItemAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void ACannon_SM_C::BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cannon_SM.Cannon_SM_C.BPNotifyInventoryItemChange");

	ACannon_SM_C_BPNotifyInventoryItemChange_Params params;
	params.bIsItemAdd = bIsItemAdd;
	params.theItem = theItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cannon_SM.Cannon_SM_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ACannon_SM_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cannon_SM.Cannon_SM_C.BPClientDoMultiUse");

	ACannon_SM_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cannon_SM.Cannon_SM_C.ExecuteUbergraph_Cannon_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACannon_SM_C::ExecuteUbergraph_Cannon_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cannon_SM.Cannon_SM_C.ExecuteUbergraph_Cannon_SM");

	ACannon_SM_C_ExecuteUbergraph_Cannon_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
