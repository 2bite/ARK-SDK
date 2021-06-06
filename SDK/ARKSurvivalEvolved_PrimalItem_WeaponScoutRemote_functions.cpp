// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponScoutRemote_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.GetScoutStats
// (NetReliable, NetRequest, Static, Public, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<float>                  Stats                          (Parm, OutParm, ZeroConstructor)

void UPrimalItem_WeaponScoutRemote_C::STATIC_GetScoutStats(TArray<float>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.GetScoutStats");

	UPrimalItem_WeaponScoutRemote_C_GetScoutStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BPGetItemIcon
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UPrimalItem_WeaponScoutRemote_C::BPGetItemIcon(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BPGetItemIcon");

	UPrimalItem_WeaponScoutRemote_C_BPGetItemIcon_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BPGetItemName
// ()
// Parameters:
// class FString*                 ItemNameIn                     (Parm, ZeroConstructor)
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItem_WeaponScoutRemote_C::BPGetItemName(class FString* ItemNameIn, class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BPGetItemName");

	UPrimalItem_WeaponScoutRemote_C_BPGetItemName_Params params;
	params.ItemNameIn = ItemNameIn;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.SetScoutCharacterStatusValues
// (NetReliable, Event, Static, Public, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<float>                  Stats                          (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPrimalItem_WeaponScoutRemote_C::STATIC_SetScoutCharacterStatusValues(TArray<float>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.SetScoutCharacterStatusValues");

	UPrimalItem_WeaponScoutRemote_C_SetScoutCharacterStatusValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.OnRep_ScoutStats
// ()

void UPrimalItem_WeaponScoutRemote_C::OnRep_ScoutStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.OnRep_ScoutStats");

	UPrimalItem_WeaponScoutRemote_C_OnRep_ScoutStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BPGetItemDescription
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString*                 InDescription                  (Parm, ZeroConstructor)
// bool*                          bGetLongDescription            (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItem_WeaponScoutRemote_C::STATIC_BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BPGetItemDescription");

	UPrimalItem_WeaponScoutRemote_C_BPGetItemDescription_Params params;
	params.InDescription = InDescription;
	params.bGetLongDescription = bGetLongDescription;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.ScoutPossessedBySurvivor
// ()

void UPrimalItem_WeaponScoutRemote_C::ScoutPossessedBySurvivor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.ScoutPossessedBySurvivor");

	UPrimalItem_WeaponScoutRemote_C_ScoutPossessedBySurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.ScoutReleasedPossessingSurvivor
// ()

void UPrimalItem_WeaponScoutRemote_C::ScoutReleasedPossessingSurvivor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.ScoutReleasedPossessingSurvivor");

	UPrimalItem_WeaponScoutRemote_C_ScoutReleasedPossessingSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BlueprintUnequipped
// ()

void UPrimalItem_WeaponScoutRemote_C::BlueprintUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BlueprintUnequipped");

	UPrimalItem_WeaponScoutRemote_C_BlueprintUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.Can FireWeapon
// (NetReliable, Event, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EScoutRemoteReturnCode> FailReason                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponScoutRemote_C::Can_FireWeapon(bool* Result, TEnumAsByte<EScoutRemoteReturnCode>* FailReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.Can FireWeapon");

	UPrimalItem_WeaponScoutRemote_C_Can_FireWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (FailReason != nullptr)
		*FailReason = params.FailReason;
}


// Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BlueprintEquipped
// ()
// Parameters:
// bool*                          bIsFromSaveGame                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponScoutRemote_C::BlueprintEquipped(bool* bIsFromSaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BlueprintEquipped");

	UPrimalItem_WeaponScoutRemote_C_BlueprintEquipped_Params params;
	params.bIsFromSaveGame = bIsFromSaveGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.ExecuteUbergraph_PrimalItem_WeaponScoutRemote
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponScoutRemote_C::ExecuteUbergraph_PrimalItem_WeaponScoutRemote(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.ExecuteUbergraph_PrimalItem_WeaponScoutRemote");

	UPrimalItem_WeaponScoutRemote_C_ExecuteUbergraph_PrimalItem_WeaponScoutRemote_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
