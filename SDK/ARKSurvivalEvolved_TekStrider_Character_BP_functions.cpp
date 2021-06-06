// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekStrider_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Charge Variable Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ivalue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::Get_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float* fValue, double* dValue, bool* bBValue, int* ivalue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Charge Variable Interface");

	ATekStrider_Character_BP_C_Get_Charge_Variable_Interface_Params params;
	params.variableType = variableType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (fValue != nullptr)
		*fValue = params.fValue;
	if (dValue != nullptr)
		*dValue = params.dValue;
	if (bBValue != nullptr)
		*bBValue = params.bBValue;
	if (ivalue != nullptr)
		*ivalue = params.ivalue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetNumBatteries
// ()
// Parameters:
// int                            numBatteries                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::GetNumBatteries(int* numBatteries)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetNumBatteries");

	ATekStrider_Character_BP_C_GetNumBatteries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (numBatteries != nullptr)
		*numBatteries = params.numBatteries;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Restrict Transmitter VFX
// ()

void ATekStrider_Character_BP_C::Restrict_Transmitter_VFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Restrict Transmitter VFX");

	ATekStrider_Character_BP_C_Restrict_Transmitter_VFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnStartCarried
// ()
// Parameters:
// class APrimalDinoCharacter**   aDino                          (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::BP_OnStartCarried(class APrimalDinoCharacter** aDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnStartCarried");

	ATekStrider_Character_BP_C_BP_OnStartCarried_Params params;
	params.aDino = aDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPCanCryo
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekStrider_Character_BP_C::BPCanCryo(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPCanCryo");

	ATekStrider_Character_BP_C_BPCanCryo_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Number Of Missions Required To Tame This Strider Scaled By Level
// ()
// Parameters:
// int                            OutputPin                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::Get_Number_Of_Missions_Required_To_Tame_This_Strider_Scaled_By_Level(int* OutputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Number Of Missions Required To Tame This Strider Scaled By Level");

	ATekStrider_Character_BP_C_Get_Number_Of_Missions_Required_To_Tame_This_Strider_Scaled_By_Level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputPin != nullptr)
		*OutputPin = params.OutputPin;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.release right click
// (NetReliable, Native, Event, NetResponse, Private, Protected, Delegate, HasOutParms, NetClient, NetValidate)

void ATekStrider_Character_BP_C::release_right_click()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.release right click");

	ATekStrider_Character_BP_C_release_right_click_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Timeout Check for Still Holding Right Click
// ()

void ATekStrider_Character_BP_C::Timeout_Check_for_Still_Holding_Right_Click()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Timeout Check for Still Holding Right Click");

	ATekStrider_Character_BP_C_Timeout_Check_for_Still_Holding_Right_Click_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.update shield item durability based on health
// (NetRequest, Native, Static, Private, Protected, Delegate, HasOutParms, NetClient, NetValidate)

void ATekStrider_Character_BP_C::STATIC_update_shield_item_durability_based_on_health()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.update shield item durability based on health");

	ATekStrider_Character_BP_C_update_shield_item_durability_based_on_health_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Deactivate Transmitter Vfx on Timer
// ()

void ATekStrider_Character_BP_C::Deactivate_Transmitter_Vfx_on_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Deactivate Transmitter Vfx on Timer");

	ATekStrider_Character_BP_C_Deactivate_Transmitter_Vfx_on_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Triggered Lethal Dmg
// ()

void ATekStrider_Character_BP_C::Triggered_Lethal_Dmg()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Triggered Lethal Dmg");

	ATekStrider_Character_BP_C_Triggered_Lethal_Dmg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ResetLinkedDediStorageRepVars
// ()

void ATekStrider_Character_BP_C::ResetLinkedDediStorageRepVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ResetLinkedDediStorageRepVars");

	ATekStrider_Character_BP_C_ResetLinkedDediStorageRepVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.MakeDediStorageTitleString
// (NetRequest, Exec, Native, Event, Static, MulticastDelegate, Private, Protected, Delegate, HasOutParms, NetClient, NetValidate)
// Parameters:
// class FString                  BoxName                        (Parm, ZeroConstructor)
// class UClass*                  ItemType                       (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController* ForShooterPC                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemCount                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          DistanceToBox                  (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString ATekStrider_Character_BP_C::STATIC_MakeDediStorageTitleString(const class FString& BoxName, class UClass* ItemType, class AShooterPlayerController* ForShooterPC, int ItemCount, float DistanceToBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.MakeDediStorageTitleString");

	ATekStrider_Character_BP_C_MakeDediStorageTitleString_Params params;
	params.BoxName = BoxName;
	params.ItemType = ItemType;
	params.ForShooterPC = ForShooterPC;
	params.ItemCount = ItemCount;
	params.DistanceToBox = DistanceToBox;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.UpdateLinkedDediStorageRepVars
// ()

void ATekStrider_Character_BP_C::UpdateLinkedDediStorageRepVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.UpdateLinkedDediStorageRepVars");

	ATekStrider_Character_BP_C_UpdateLinkedDediStorageRepVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ConstructLinkedDediStorageTitle
// ()
// Parameters:
// class AShooterPlayerController* ForShooterPC                   (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Title                          (Parm, OutParm, ZeroConstructor)

void ATekStrider_Character_BP_C::ConstructLinkedDediStorageTitle(class AShooterPlayerController* ForShooterPC, class FString* Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ConstructLinkedDediStorageTitle");

	ATekStrider_Character_BP_C_ConstructLinkedDediStorageTitle_Params params;
	params.ForShooterPC = ForShooterPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Title != nullptr)
		*Title = params.Title;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Has Mutagel in Last Slot
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasMutagelInLastSlot           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::Has_Mutagel_in_Last_Slot(class APlayerController* PC, bool* HasMutagelInLastSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Has Mutagel in Last Slot");

	ATekStrider_Character_BP_C_Has_Mutagel_in_Last_Slot_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasMutagelInLastSlot != nullptr)
		*HasMutagelInLastSlot = params.HasMutagelInLastSlot;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Force Destroy Strider
// ()

void ATekStrider_Character_BP_C::Force_Destroy_Strider()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Force Destroy Strider");

	ATekStrider_Character_BP_C_Force_Destroy_Strider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.affinity per hack calculation
// ()
// Parameters:
// float                          Taming_speed_multiplier        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// bool                           in_grace_period                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          time_until_grace_period_ends   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          time_until_no_more_affinity    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          affinity_gained_before_taming_mult (Parm, OutParm, ZeroConstructor, IsPlainOldData)

float ATekStrider_Character_BP_C::affinity_per_hack_calculation(float Taming_speed_multiplier, bool* in_grace_period, float* time_until_grace_period_ends, float* time_until_no_more_affinity, float* affinity_gained_before_taming_mult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.affinity per hack calculation");

	ATekStrider_Character_BP_C_affinity_per_hack_calculation_Params params;
	params.Taming_speed_multiplier = Taming_speed_multiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (in_grace_period != nullptr)
		*in_grace_period = params.in_grace_period;
	if (time_until_grace_period_ends != nullptr)
		*time_until_grace_period_ends = params.time_until_grace_period_ends;
	if (time_until_no_more_affinity != nullptr)
		*time_until_no_more_affinity = params.time_until_no_more_affinity;
	if (affinity_gained_before_taming_mult != nullptr)
		*affinity_gained_before_taming_mult = params.affinity_gained_before_taming_mult;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.amount of affinity gained as appropriate to the dino level
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATekStrider_Character_BP_C::amount_of_affinity_gained_as_appropriate_to_the_dino_level()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.amount of affinity gained as appropriate to the dino level");

	ATekStrider_Character_BP_C_amount_of_affinity_gained_as_appropriate_to_the_dino_level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.RefreshNearbyDediStorageArrays
// ()

void ATekStrider_Character_BP_C::RefreshNearbyDediStorageArrays()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.RefreshNearbyDediStorageArrays");

	ATekStrider_Character_BP_C_RefreshNearbyDediStorageArrays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.CanTransferAnyItemsToNearbyDediStorages
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::CanTransferAnyItemsToNearbyDediStorages(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.CanTransferAnyItemsToNearbyDediStorages");

	ATekStrider_Character_BP_C_CanTransferAnyItemsToNearbyDediStorages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.CanTransferItemToDediStorage
// ()
// Parameters:
// class UPrimalItem*             CheckItem                      (Parm, ZeroConstructor, IsPlainOldData)
// class ABP_DedicatedStorage_C*  CheckStorage                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCheckForBlacklist             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::CanTransferItemToDediStorage(class UPrimalItem* CheckItem, class ABP_DedicatedStorage_C* CheckStorage, bool bCheckForBlacklist, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.CanTransferItemToDediStorage");

	ATekStrider_Character_BP_C_CanTransferItemToDediStorage_Params params;
	params.CheckItem = CheckItem;
	params.CheckStorage = CheckStorage;
	params.bCheckForBlacklist = bCheckForBlacklist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.CanUseLinkedDediStorageLogic
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::CanUseLinkedDediStorageLogic(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.CanUseLinkedDediStorageLogic");

	ATekStrider_Character_BP_C_CanUseLinkedDediStorageLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetLinkedDediStorageFloatingHudTitle
// ()
// Parameters:
// class AShooterPlayerController* ForShooterPC                   (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  TitleString                    (Parm, OutParm, ZeroConstructor)
// struct FLinearColor            TitleColor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::GetLinkedDediStorageFloatingHudTitle(class AShooterPlayerController* ForShooterPC, class FString* TitleString, struct FLinearColor* TitleColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetLinkedDediStorageFloatingHudTitle");

	ATekStrider_Character_BP_C_GetLinkedDediStorageFloatingHudTitle_Params params;
	params.ForShooterPC = ForShooterPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TitleString != nullptr)
		*TitleString = params.TitleString;
	if (TitleColor != nullptr)
		*TitleColor = params.TitleColor;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetNameStringForDediStorage
// ()
// Parameters:
// class ABP_DedicatedStorage_C*  ForStorage                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController* ForShooterPC                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAppendDistance                (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  NameString                     (Parm, OutParm, ZeroConstructor)

void ATekStrider_Character_BP_C::GetNameStringForDediStorage(class ABP_DedicatedStorage_C* ForStorage, class AShooterPlayerController* ForShooterPC, bool bAppendDistance, class FString* NameString)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetNameStringForDediStorage");

	ATekStrider_Character_BP_C_GetNameStringForDediStorage_Params params;
	params.ForStorage = ForStorage;
	params.ForShooterPC = ForShooterPC;
	params.bAppendDistance = bAppendDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NameString != nullptr)
		*NameString = params.NameString;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ValidateLinkedDediStorage
// ()
// Parameters:
// bool                           bIsValid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::ValidateLinkedDediStorage(bool* bIsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ValidateLinkedDediStorage");

	ATekStrider_Character_BP_C_ValidateLinkedDediStorage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsValid != nullptr)
		*bIsValid = params.bIsValid;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.TryTransferItemsToLinkedDediStorage
// ()
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::TryTransferItemsToLinkedDediStorage(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.TryTransferItemsToLinkedDediStorage");

	ATekStrider_Character_BP_C_TryTransferItemsToLinkedDediStorage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.RemoveIncompatibleDediStoragesFromArray
// ()
// Parameters:
// TArray<class ABP_DedicatedStorage_C*> FromArray                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ATekStrider_Character_BP_C::RemoveIncompatibleDediStoragesFromArray(TArray<class ABP_DedicatedStorage_C*>* FromArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.RemoveIncompatibleDediStoragesFromArray");

	ATekStrider_Character_BP_C_RemoveIncompatibleDediStoragesFromArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FromArray != nullptr)
		*FromArray = params.FromArray;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.TryTransferItemsToNearbyDediStorages
// ()
// Parameters:
// class AShooterPlayerController* ForShooterPC                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::TryTransferItemsToNearbyDediStorages(class AShooterPlayerController* ForShooterPC, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.TryTransferItemsToNearbyDediStorages");

	ATekStrider_Character_BP_C_TryTransferItemsToNearbyDediStorages_Params params;
	params.ForShooterPC = ForShooterPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.IsBlacklistedItemClass
// ()
// Parameters:
// class UClass*                  CheckItemClass                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::IsBlacklistedItemClass(class UClass* CheckItemClass, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.IsBlacklistedItemClass");

	ATekStrider_Character_BP_C_IsBlacklistedItemClass_Params params;
	params.CheckItemClass = CheckItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.IsDediStorageUsable
// ()
// Parameters:
// class ABP_DedicatedStorage_C*  CheckStorage                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::IsDediStorageUsable(class ABP_DedicatedStorage_C* CheckStorage, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.IsDediStorageUsable");

	ATekStrider_Character_BP_C_IsDediStorageUsable_Params params;
	params.CheckStorage = CheckStorage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.FindNearbyUsableDediStorageBoxes
// ()
// Parameters:
// bool                           bSortByDistance                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRemoveIncompatibleStorages    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRemoveLinkedStorage           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFoundAny                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class ABP_DedicatedStorage_C*> FoundBoxes                     (Parm, OutParm, ZeroConstructor)

void ATekStrider_Character_BP_C::FindNearbyUsableDediStorageBoxes(bool bSortByDistance, bool bRemoveIncompatibleStorages, bool bRemoveLinkedStorage, bool* bFoundAny, TArray<class ABP_DedicatedStorage_C*>* FoundBoxes)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.FindNearbyUsableDediStorageBoxes");

	ATekStrider_Character_BP_C_FindNearbyUsableDediStorageBoxes_Params params;
	params.bSortByDistance = bSortByDistance;
	params.bRemoveIncompatibleStorages = bRemoveIncompatibleStorages;
	params.bRemoveLinkedStorage = bRemoveLinkedStorage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFoundAny != nullptr)
		*bFoundAny = params.bFoundAny;
	if (FoundBoxes != nullptr)
		*FoundBoxes = params.FoundBoxes;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.TryDoDediStorageHarvestTransferMultiUse
// ()
// Parameters:
// class APlayerController*       ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::TryDoDediStorageHarvestTransferMultiUse(class APlayerController* ForPC, int UseIndex, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.TryDoDediStorageHarvestTransferMultiUse");

	ATekStrider_Character_BP_C_TryDoDediStorageHarvestTransferMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ClientDoDediStorageHarvestTransferMultiUse
// (NetReliable, Native, Event, Static, Private, Protected, Delegate, HasOutParms, NetClient, NetValidate)
// Parameters:
// class APlayerController*       ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::STATIC_ClientDoDediStorageHarvestTransferMultiUse(class APlayerController* ForPC, int ClientUseIndex, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ClientDoDediStorageHarvestTransferMultiUse");

	ATekStrider_Character_BP_C_ClientDoDediStorageHarvestTransferMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetDediStorageHarvestTransferMultiUseEntries
// (NetReliable, Native, NetResponse, Static, Private, Protected, Delegate, HasOutParms, NetClient, NetValidate)
// Parameters:
// TArray<struct FMultiUseEntry>  AppendToEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AShooterPlayerController* ForShooterPC                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::STATIC_GetDediStorageHarvestTransferMultiUseEntries(class AShooterPlayerController* ForShooterPC, TArray<struct FMultiUseEntry>* AppendToEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetDediStorageHarvestTransferMultiUseEntries");

	ATekStrider_Character_BP_C_GetDediStorageHarvestTransferMultiUseEntries_Params params;
	params.ForShooterPC = ForShooterPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AppendToEntries != nullptr)
		*AppendToEntries = params.AppendToEntries;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPClientHandleNetExecCommand
// ()
// Parameters:
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekStrider_Character_BP_C::BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPClientHandleNetExecCommand");

	ATekStrider_Character_BP_C_BPClientHandleNetExecCommand_Params params;
	params.CommandName = CommandName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOnRefreshColorization
// ()
// Parameters:
// TArray<struct FLinearColor>    Colors                         (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ATekStrider_Character_BP_C::BPOnRefreshColorization(TArray<struct FLinearColor>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOnRefreshColorization");

	ATekStrider_Character_BP_C_BPOnRefreshColorization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ClearLinkedDediStorage
// ()

void ATekStrider_Character_BP_C::ClearLinkedDediStorage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ClearLinkedDediStorage");

	ATekStrider_Character_BP_C_ClearLinkedDediStorage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnUncryo
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::BP_OnUncryo(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnUncryo");

	ATekStrider_Character_BP_C_BP_OnUncryo_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnCryo
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::BP_OnCryo(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnCryo");

	ATekStrider_Character_BP_C_BP_OnCryo_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.SetLinkedDediStorage
// ()
// Parameters:
// class ABP_DedicatedStorage_C*  NewLinkedStorage               (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::SetLinkedDediStorage(class ABP_DedicatedStorage_C* NewLinkedStorage)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.SetLinkedDediStorage");

	ATekStrider_Character_BP_C_SetLinkedDediStorage_Params params;
	params.NewLinkedStorage = NewLinkedStorage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Change Filter to Only Dinos
// (NetReliable, Exec, Native, NetResponse, NetMulticast, Private, Protected, Delegate, HasOutParms, NetClient, NetValidate)

void ATekStrider_Character_BP_C::Change_Filter_to_Only_Dinos()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Change Filter to Only Dinos");

	ATekStrider_Character_BP_C_Change_Filter_to_Only_Dinos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Change Filter to Only Humans
// (NetReliable, Event, NetResponse, NetMulticast, Private, Protected, Delegate, HasOutParms, NetClient, NetValidate)

void ATekStrider_Character_BP_C::Change_Filter_to_Only_Humans()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Change Filter to Only Humans");

	ATekStrider_Character_BP_C_Change_Filter_to_Only_Humans_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Change Filter to Both Dinos And Humans
// (NetReliable, Exec, Event, NetResponse, NetMulticast, Private, Protected, Delegate, HasOutParms, NetClient, NetValidate)

void ATekStrider_Character_BP_C::Change_Filter_to_Both_Dinos_And_Humans()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Change Filter to Both Dinos And Humans");

	ATekStrider_Character_BP_C_Change_Filter_to_Both_Dinos_And_Humans_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Detect Quicktap Right Click
// ()

void ATekStrider_Character_BP_C::Detect_Quicktap_Right_Click()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Detect Quicktap Right Click");

	ATekStrider_Character_BP_C_Detect_Quicktap_Right_Click_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.spawn tamed inventory
// ()

void ATekStrider_Character_BP_C::spawn_tamed_inventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.spawn tamed inventory");

	ATekStrider_Character_BP_C_spawn_tamed_inventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.spawn wild inventory
// ()

void ATekStrider_Character_BP_C::spawn_wild_inventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.spawn wild inventory");

	ATekStrider_Character_BP_C_spawn_wild_inventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.determine and request appropriate melee attack
// ()

void ATekStrider_Character_BP_C::determine_and_request_appropriate_melee_attack()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.determine and request appropriate melee attack");

	ATekStrider_Character_BP_C_determine_and_request_appropriate_melee_attack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintGetAttackWeight
// (Exec, Native, NetResponse, Static, NetMulticast, Private, Protected, Delegate, HasOutParms, NetClient, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         inputWeight                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATekStrider_Character_BP_C::STATIC_BlueprintGetAttackWeight(int* AttackIndex, float* inputWeight, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintGetAttackWeight");

	ATekStrider_Character_BP_C_BlueprintGetAttackWeight_Params params;
	params.AttackIndex = AttackIndex;
	params.inputWeight = inputWeight;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.combined can attack
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Private, Protected, Delegate, HasOutParms, NetClient, NetValidate)
// Parameters:
// int                            Attack_Index                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          DIst                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          attack_range_offset            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           can_attack                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::STATIC_combined_can_attack(int Attack_Index, float DIst, float attack_range_offset, bool* can_attack)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.combined can attack");

	ATekStrider_Character_BP_C_combined_can_attack_Params params;
	params.Attack_Index = Attack_Index;
	params.DIst = DIst;
	params.attack_range_offset = attack_range_offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (can_attack != nullptr)
		*can_attack = params.can_attack;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekStrider_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintCanRiderAttack");

	ATekStrider_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekStrider_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintCanAttack");

	ATekStrider_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Print String Manual
// ()
// Parameters:
// class FString                  String                         (Parm, ZeroConstructor)

void ATekStrider_Character_BP_C::Print_String_Manual(const class FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Print String Manual");

	ATekStrider_Character_BP_C_Print_String_Manual_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyClearRider");

	ATekStrider_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifySetRider");

	ATekStrider_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Charge Capacity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATekStrider_Character_BP_C::Get_Charge_Capacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Charge Capacity");

	ATekStrider_Character_BP_C_Get_Charge_Capacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.toggle transmitter vfx
// ()
// Parameters:
// bool                           Activate                       (Parm, ZeroConstructor, IsPlainOldData)
// double                         time_activated                 (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::toggle_transmitter_vfx(bool Activate, double time_activated)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.toggle transmitter vfx");

	ATekStrider_Character_BP_C_toggle_transmitter_vfx_Params params;
	params.Activate = Activate;
	params.time_activated = time_activated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.update tame percent on material
// ()
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::update_tame_percent_on_material(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.update tame percent on material");

	ATekStrider_Character_BP_C_update_tame_percent_on_material_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.set up dynamic mats
// ()

void ATekStrider_Character_BP_C::set_up_dynamic_mats()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.set up dynamic mats");

	ATekStrider_Character_BP_C_set_up_dynamic_mats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Focus Suck Location at Target
// ()

void ATekStrider_Character_BP_C::Focus_Suck_Location_at_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Focus Suck Location at Target");

	ATekStrider_Character_BP_C_Focus_Suck_Location_at_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPHandlePoop
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekStrider_Character_BP_C::BPHandlePoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPHandlePoop");

	ATekStrider_Character_BP_C_BPHandlePoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPPreventFirstPerson
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekStrider_Character_BP_C::BPPreventFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPPreventFirstPerson");

	ATekStrider_Character_BP_C_BPPreventFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPPreventInputType
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekStrider_Character_BP_C::BPPreventInputType(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPPreventInputType");

	ATekStrider_Character_BP_C_BPPreventInputType_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOverrideHurtAnim
// ()
// Parameters:
// float*                         DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  PawnInstigator                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsLocalPath                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PointDamageLocation            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PointDamageHitNormal           (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* ATekStrider_Character_BP_C::BPOverrideHurtAnim(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, bool* bIsPointDamage, struct FVector* PointDamageLocation, struct FVector* PointDamageHitNormal, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOverrideHurtAnim");

	ATekStrider_Character_BP_C_BPOverrideHurtAnim_Params params;
	params.DamageTaken = DamageTaken;
	params.PawnInstigator = PawnInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsLocalPath = bIsLocalPath;
	params.bIsPointDamage = bIsPointDamage;
	params.PointDamageLocation = PointDamageLocation;
	params.PointDamageHitNormal = PointDamageHitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATekStrider_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPAdjustDamage");

	ATekStrider_Character_BP_C_BPAdjustDamage_Params params;
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


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOnLethalDamage
// ()
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController**            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreventDeath                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::BPOnLethalDamage(float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent, bool* bPreventDeath)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOnLethalDamage");

	ATekStrider_Character_BP_C_BPOnLethalDamage_Params params;
	params.KillingDamage = KillingDamage;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
	if (bPreventDeath != nullptr)
		*bPreventDeath = params.bPreventDeath;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Reset Blend Time After Timer
// ()

void ATekStrider_Character_BP_C::Reset_Blend_Time_After_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Reset Blend Time After Timer");

	ATekStrider_Character_BP_C_Reset_Blend_Time_After_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.set blend time
// ()
// Parameters:
// float                          InputPin                       (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::set_blend_time(float InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.set blend time");

	ATekStrider_Character_BP_C_set_blend_time_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	ATekStrider_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.tick events
// (NetRequest, Native, Protected, Delegate, HasOutParms, NetClient, NetValidate)

void ATekStrider_Character_BP_C::tick_events()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.tick events");

	ATekStrider_Character_BP_C_tick_events_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_GetCustomModifier_MaxSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATekStrider_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_GetCustomModifier_MaxSpeed");

	ATekStrider_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Detect Double Tap Right Click
// ()

void ATekStrider_Character_BP_C::Detect_Double_Tap_Right_Click()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Detect Double Tap Right Click");

	ATekStrider_Character_BP_C_Detect_Double_Tap_Right_Click_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Detect Double Tap Crouch
// ()

void ATekStrider_Character_BP_C::Detect_Double_Tap_Crouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Detect Double Tap Crouch");

	ATekStrider_Character_BP_C_Detect_Double_Tap_Crouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Current Inventory Mutagel Count
// ()
// Parameters:
// class UObject*                 PC                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            current_amount                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::Get_Current_Inventory_Mutagel_Count(class UObject* PC, int* current_amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Current Inventory Mutagel Count");

	ATekStrider_Character_BP_C_Get_Current_Inventory_Mutagel_Count_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (current_amount != nullptr)
		*current_amount = params.current_amount;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Required Mutagel Count
// ()
// Parameters:
// int                            needed_amount                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::Get_Required_Mutagel_Count(int* needed_amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Required Mutagel Count");

	ATekStrider_Character_BP_C_Get_Required_Mutagel_Count_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (needed_amount != nullptr)
		*needed_amount = params.needed_amount;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Use Mutagel And Begin Hacking
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::Use_Mutagel_And_Begin_Hacking(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Use Mutagel And Begin Hacking");

	ATekStrider_Character_BP_C_Use_Mutagel_And_Begin_Hacking_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.completed enough missions
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekStrider_Character_BP_C::completed_enough_missions()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.completed enough missions");

	ATekStrider_Character_BP_C_completed_enough_missions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.backup timer has expired to bypass the wander distance if needed
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekStrider_Character_BP_C::backup_timer_has_expired_to_bypass_the_wander_distance_if_needed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.backup timer has expired to bypass the wander distance if needed");

	ATekStrider_Character_BP_C_backup_timer_has_expired_to_bypass_the_wander_distance_if_needed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.has wandered far enough to be able to hack again
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// float                          remaining_distance             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ATekStrider_Character_BP_C::has_wandered_far_enough_to_be_able_to_hack_again(float* remaining_distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.has wandered far enough to be able to hack again");

	ATekStrider_Character_BP_C_has_wandered_far_enough_to_be_able_to_hack_again_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (remaining_distance != nullptr)
		*remaining_distance = params.remaining_distance;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Is Able To Initiate A Hack Attempt
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekStrider_Character_BP_C::Is_Able_To_Initiate_A_Hack_Attempt(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Is Able To Initiate A Hack Attempt");

	ATekStrider_Character_BP_C_Is_Able_To_Initiate_A_Hack_Attempt_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Has Mutagel Ready
// ()

void ATekStrider_Character_BP_C::Has_Mutagel_Ready()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Has Mutagel Ready");

	ATekStrider_Character_BP_C_Has_Mutagel_Ready_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Has Required Mutagel
// ()
// Parameters:
// class UObject*                 Player_Controller              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// int                            Mutagel_Player_Has             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Mutagel_Required               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ATekStrider_Character_BP_C::Has_Required_Mutagel(class UObject* Player_Controller, int* Mutagel_Player_Has, int* Mutagel_Required)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Has Required Mutagel");

	ATekStrider_Character_BP_C_Has_Required_Mutagel_Params params;
	params.Player_Controller = Player_Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mutagel_Player_Has != nullptr)
		*Mutagel_Player_Has = params.Mutagel_Player_Has;
	if (Mutagel_Required != nullptr)
		*Mutagel_Required = params.Mutagel_Required;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.spawn targeted hacking particle
// ()
// Parameters:
// struct FVector                 hacking_loc                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Player                         (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::spawn_targeted_hacking_particle(const struct FVector& hacking_loc, class UObject* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.spawn targeted hacking particle");

	ATekStrider_Character_BP_C_spawn_targeted_hacking_particle_Params params;
	params.hacking_loc = hacking_loc;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Detect If Able To Be Hacked- For blinking lights only
// ()
// Parameters:
// bool                           can_hack                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           should_be_visible              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::Detect_If_Able_To_Be_Hacked__For_blinking_lights_only(bool* can_hack, bool* should_be_visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Detect If Able To Be Hacked- For blinking lights only");

	ATekStrider_Character_BP_C_Detect_If_Able_To_Be_Hacked__For_blinking_lights_only_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (can_hack != nullptr)
		*can_hack = params.can_hack;
	if (should_be_visible != nullptr)
		*should_be_visible = params.should_be_visible;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.
// ()
// Parameters:
// float                          _1                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          _2                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::(float _1, float _2, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.");

	ATekStrider_Character_BP_C__Params params;
	params._1 = _1;
	params._2 = _2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.advance hacking point
// ()

void ATekStrider_Character_BP_C::advance_hacking_point()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.advance hacking point");

	ATekStrider_Character_BP_C_advance_hacking_point_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.set up hacking interaction points
// ()

void ATekStrider_Character_BP_C::set_up_hacking_interaction_points()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.set up hacking interaction points");

	ATekStrider_Character_BP_C_set_up_hacking_interaction_points_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_GetCustomModifier_RotationRate
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATekStrider_Character_BP_C::BP_GetCustomModifier_RotationRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_GetCustomModifier_RotationRate");

	ATekStrider_Character_BP_C_BP_GetCustomModifier_RotationRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Is Looking At Specific Hack Interaction Point
// (NetReliable, Exec, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, NetClient, NetValidate)
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Is_Looking_at                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Hack_Interaction_Spot_World_Loc (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::STATIC_Is_Looking_At_Specific_Hack_Interaction_Point(class AShooterCharacter* Player, bool* Is_Looking_at, struct FVector* Hack_Interaction_Spot_World_Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Is Looking At Specific Hack Interaction Point");

	ATekStrider_Character_BP_C_Is_Looking_At_Specific_Hack_Interaction_Point_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_Looking_at != nullptr)
		*Is_Looking_at = params.Is_Looking_at;
	if (Hack_Interaction_Spot_World_Loc != nullptr)
		*Hack_Interaction_Spot_World_Loc = params.Hack_Interaction_Spot_World_Loc;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.activate current Hack Interaction Spot
// ()

void ATekStrider_Character_BP_C::activate_current_Hack_Interaction_Spot()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.activate current Hack Interaction Spot");

	ATekStrider_Character_BP_C_activate_current_Hack_Interaction_Spot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ReceiveTick");

	ATekStrider_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOverrideFloatingHUDLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ATekStrider_Character_BP_C::BPOverrideFloatingHUDLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOverrideFloatingHUDLocation");

	ATekStrider_Character_BP_C_BPOverrideFloatingHUDLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Throttled Request Mission Count
// ()
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::Throttled_Request_Mission_Count(class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Throttled Request Mission Count");

	ATekStrider_Character_BP_C_Throttled_Request_Mission_Count_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPDinoTooltipCustomTamingProgressBar
// ()
// Parameters:
// bool                           overrideTamingProgressBarIfActive (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          progressPercent                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  Label                          (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekStrider_Character_BP_C::BPDinoTooltipCustomTamingProgressBar(bool* overrideTamingProgressBarIfActive, float* progressPercent, class FString* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPDinoTooltipCustomTamingProgressBar");

	ATekStrider_Character_BP_C_BPDinoTooltipCustomTamingProgressBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (overrideTamingProgressBarIfActive != nullptr)
		*overrideTamingProgressBarIfActive = params.overrideTamingProgressBarIfActive;
	if (progressPercent != nullptr)
		*progressPercent = params.progressPercent;
	if (Label != nullptr)
		*Label = params.Label;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.on hacking hit success
// ()

void ATekStrider_Character_BP_C::on_hacking_hit_success()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.on hacking hit success");

	ATekStrider_Character_BP_C_on_hacking_hit_success_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.on hacking hit fail
// (NetReliable, Native, Static, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, NetClient, NetValidate)

void ATekStrider_Character_BP_C::STATIC_on_hacking_hit_fail()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.on hacking hit fail");

	ATekStrider_Character_BP_C_on_hacking_hit_fail_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ReceiveAnyDamage");

	ATekStrider_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.hacking success
// ()

void ATekStrider_Character_BP_C::hacking_success()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.hacking success");

	ATekStrider_Character_BP_C_hacking_success_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.sync mission complete status
// ()
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::sync_mission_complete_status(class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.sync mission complete status");

	ATekStrider_Character_BP_C_sync_mission_complete_status_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Restrict Sync Mission Complete Status
// ()

void ATekStrider_Character_BP_C::Restrict_Sync_Mission_Complete_Status()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Restrict Sync Mission Complete Status");

	ATekStrider_Character_BP_C_Restrict_Sync_Mission_Complete_Status_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyToggleHUD
// ()
// Parameters:
// bool*                          bHudHidden                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::BPNotifyToggleHUD(bool* bHudHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyToggleHUD");

	ATekStrider_Character_BP_C_BPNotifyToggleHUD_Params params;
	params.bHudHidden = bHudHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.On Passenger Weapon Changed
// ()
// Parameters:
// class AShooterWeapon*          newWeapon                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::On_Passenger_Weapon_Changed(class AShooterWeapon* newWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.On Passenger Weapon Changed");

	ATekStrider_Character_BP_C_On_Passenger_Weapon_Changed_Params params;
	params.newWeapon = newWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyAddPassenger
// ()
// Parameters:
// class APrimalCharacter**       PassengerChar                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::BPNotifyAddPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyAddPassenger");

	ATekStrider_Character_BP_C_BPNotifyAddPassenger_Params params;
	params.PassengerChar = PassengerChar;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyClearPassenger
// ()
// Parameters:
// class APrimalCharacter**       PassengerChar                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyClearPassenger");

	ATekStrider_Character_BP_C_BPNotifyClearPassenger_Params params;
	params.PassengerChar = PassengerChar;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnBasedPawnRemovedNotify
// ()
// Parameters:
// class AActor**                 RemovedActor                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::BP_OnBasedPawnRemovedNotify(class AActor** RemovedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnBasedPawnRemovedNotify");

	ATekStrider_Character_BP_C_BP_OnBasedPawnRemovedNotify_Params params;
	params.RemovedActor = RemovedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOverrideGetAttackAnimationIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimMontage*>    AnimationArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATekStrider_Character_BP_C::BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOverrideGetAttackAnimationIndex");

	ATekStrider_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationArray != nullptr)
		*AnimationArray = params.AnimationArray;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Spawn Tek Transmitter
// (Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, NetClient, NetValidate)
// Parameters:
// struct FVector                 NewParam                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                NewParam1                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::Spawn_Tek_Transmitter(const struct FVector& NewParam, const struct FRotator& NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Spawn Tek Transmitter");

	ATekStrider_Character_BP_C_Spawn_Tek_Transmitter_Params params;
	params.NewParam = NewParam;
	params.NewParam1 = NewParam1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPClientDoMultiUse
// (NetReliable, Native, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, NetClient, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::STATIC_BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPClientDoMultiUse");

	ATekStrider_Character_BP_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekStrider_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPTryMultiUse");

	ATekStrider_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, NetClient, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ATekStrider_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPGetMultiUseEntries");

	ATekStrider_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Spawn Bed
// (NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, NetClient, NetValidate)
// Parameters:
// struct FVector                 NewParam                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                NewParam1                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::Spawn_Bed(const struct FVector& NewParam, const struct FRotator& NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Spawn Bed");

	ATekStrider_Character_BP_C_Spawn_Bed_Params params;
	params.NewParam = NewParam;
	params.NewParam1 = NewParam1;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPServerHandleNetExecCommand
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, NetClient, NetValidate)
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekStrider_Character_BP_C::STATIC_BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPServerHandleNetExecCommand");

	ATekStrider_Character_BP_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.InterceptInputEvent
// (NetReliable, NetRequest, Exec, Native, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString*                 InputName                      (Parm, ZeroConstructor)

void ATekStrider_Character_BP_C::InterceptInputEvent(class FString* InputName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.InterceptInputEvent");

	ATekStrider_Character_BP_C_InterceptInputEvent_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.spawn platform saddle
// ()

void ATekStrider_Character_BP_C::spawn_platform_saddle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.spawn platform saddle");

	ATekStrider_Character_BP_C_spawn_platform_saddle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Spawn Attachments
// ()
// Parameters:
// int                            Manually_Set_Head              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Manually_Set_Chest             (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::Spawn_Attachments(int Manually_Set_Head, int Manually_Set_Chest)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Spawn Attachments");

	ATekStrider_Character_BP_C_Spawn_Attachments_Params params;
	params.Manually_Set_Head = Manually_Set_Head;
	params.Manually_Set_Chest = Manually_Set_Chest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Reset Moveright
// ()

void ATekStrider_Character_BP_C::Reset_Moveright()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Reset Moveright");

	ATekStrider_Character_BP_C_Reset_Moveright_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Reset Moveforward
// ()

void ATekStrider_Character_BP_C::Reset_Moveforward()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Reset Moveforward");

	ATekStrider_Character_BP_C_Reset_Moveforward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_InterceptMoveForward
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekStrider_Character_BP_C::BP_InterceptMoveForward(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_InterceptMoveForward");

	ATekStrider_Character_BP_C_BP_InterceptMoveForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_InterceptMoveRight
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekStrider_Character_BP_C::BP_InterceptMoveRight(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_InterceptMoveRight");

	ATekStrider_Character_BP_C_BP_InterceptMoveRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPGetHUDElements
// (NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ATekStrider_Character_BP_C::STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPGetHUDElements");

	ATekStrider_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPChangedActorTeam
// ()

void ATekStrider_Character_BP_C::BPChangedActorTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPChangedActorTeam");

	ATekStrider_Character_BP_C_BPChangedActorTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPTimerNonDedicated
// ()

void ATekStrider_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPTimerNonDedicated");

	ATekStrider_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintDrawFloatingHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintDrawFloatingHUD");

	ATekStrider_Character_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPTimerServer
// ()

void ATekStrider_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPTimerServer");

	ATekStrider_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Update Max Charge
// ()

void ATekStrider_Character_BP_C::Update_Max_Charge()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Update Max Charge");

	ATekStrider_Character_BP_C_Update_Max_Charge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyLevelUp
// (NetResponse, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           ExtraCharacterLevel            (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::STATIC_BPNotifyLevelUp(int* ExtraCharacterLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyLevelUp");

	ATekStrider_Character_BP_C_BPNotifyLevelUp_Params params;
	params.ExtraCharacterLevel = ExtraCharacterLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Unstasis Logic
// ()

void ATekStrider_Character_BP_C::Unstasis_Logic()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Unstasis Logic");

	ATekStrider_Character_BP_C_Unstasis_Logic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPSetupTamed");

	ATekStrider_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnRep_bAutoChargeActive
// ()

void ATekStrider_Character_BP_C::OnRep_bAutoChargeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnRep_bAutoChargeActive");

	ATekStrider_Character_BP_C_OnRep_bAutoChargeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Actual Radius
// ()
// Parameters:
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::Get_Actual_Radius(float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Actual Radius");

	ATekStrider_Character_BP_C_Get_Actual_Radius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Radius != nullptr)
		*Radius = params.Radius;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Passive Charge Gain
// ()
// Parameters:
// float                          Charge_Gain                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::Get_Passive_Charge_Gain(float* Charge_Gain)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Passive Charge Gain");

	ATekStrider_Character_BP_C_Get_Passive_Charge_Gain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Charge_Gain != nullptr)
		*Charge_Gain = params.Charge_Gain;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Update Charge Radius
// ()

void ATekStrider_Character_BP_C::Update_Charge_Radius()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Update Charge Radius");

	ATekStrider_Character_BP_C_Update_Charge_Radius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Auto Charge Notify
// ()

void ATekStrider_Character_BP_C::Auto_Charge_Notify()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Auto Charge Notify");

	ATekStrider_Character_BP_C_Auto_Charge_Notify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Init
// ()

void ATekStrider_Character_BP_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Init");

	ATekStrider_Character_BP_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Initialize Charge Buff
// ()

void ATekStrider_Character_BP_C::Initialize_Charge_Buff()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Initialize Charge Buff");

	ATekStrider_Character_BP_C_Initialize_Charge_Buff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Create Charge Buff
// ()

void ATekStrider_Character_BP_C::Create_Charge_Buff()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Create Charge Buff");

	ATekStrider_Character_BP_C_Create_Charge_Buff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Destroy Charge Buff
// ()

void ATekStrider_Character_BP_C::Destroy_Charge_Buff()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Destroy Charge Buff");

	ATekStrider_Character_BP_C_Destroy_Charge_Buff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.On Charge Event
// ()

void ATekStrider_Character_BP_C::On_Charge_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.On Charge Event");

	ATekStrider_Character_BP_C_On_Charge_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Create Charge Manager
// ()

void ATekStrider_Character_BP_C::Create_Charge_Manager()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Create Charge Manager");

	ATekStrider_Character_BP_C_Create_Charge_Manager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetAttachmentBuffs
// ()
// Parameters:
// TArray<class ABuff_TekStrider_Attachment_Base_C*> Buffs                          (Parm, OutParm, ZeroConstructor)

void ATekStrider_Character_BP_C::GetAttachmentBuffs(TArray<class ABuff_TekStrider_Attachment_Base_C*>* Buffs)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetAttachmentBuffs");

	ATekStrider_Character_BP_C_GetAttachmentBuffs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Buffs != nullptr)
		*Buffs = params.Buffs;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPGetCrosshairAlpha
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATekStrider_Character_BP_C::BPGetCrosshairAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPGetCrosshairAlpha");

	ATekStrider_Character_BP_C_BPGetCrosshairAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPDoAttack
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPDoAttack");

	ATekStrider_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetAttachmentBuff
// ()
// Parameters:
// TEnumAsByte<EPrimalEquipmentType> AttachmentType                 (Parm, ZeroConstructor, IsPlainOldData)
// class ABuff_TekStrider_Attachment_Base_C* Buff                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::GetAttachmentBuff(TEnumAsByte<EPrimalEquipmentType> AttachmentType, class ABuff_TekStrider_Attachment_Base_C** Buff)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetAttachmentBuff");

	ATekStrider_Character_BP_C_GetAttachmentBuff_Params params;
	params.AttachmentType = AttachmentType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Buff != nullptr)
		*Buff = params.Buff;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyInventoryItemChange
// ()
// Parameters:
// bool*                          bIsItemAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyInventoryItemChange");

	ATekStrider_Character_BP_C_BPNotifyInventoryItemChange_Params params;
	params.bIsItemAdd = bIsItemAdd;
	params.theItem = theItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyStructurePlacedNearby
// ()
// Parameters:
// class APrimalStructure**       NewStructure                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::BPNotifyStructurePlacedNearby(class APrimalStructure** NewStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyStructurePlacedNearby");

	ATekStrider_Character_BP_C_BPNotifyStructurePlacedNearby_Params params;
	params.NewStructure = NewStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.UserConstructionScript
// ()

void ATekStrider_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.UserConstructionScript");

	ATekStrider_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Timeline_0__FinishedFunc
// ()

void ATekStrider_Character_BP_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Timeline_0__FinishedFunc");

	ATekStrider_Character_BP_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Timeline_0__UpdateFunc
// ()

void ATekStrider_Character_BP_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Timeline_0__UpdateFunc");

	ATekStrider_Character_BP_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Boolean MulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::Charge_Variable_Event_Boolean_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Boolean MulticastInterface");

	ATekStrider_Character_BP_C_Charge_Variable_Event_Boolean_MulticastInterface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Float Multicast Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::Charge_Variable_Event_Float_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Float Multicast Interface");

	ATekStrider_Character_BP_C_Charge_Variable_Event_Float_Multicast_Interface_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Double MulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::Charge_Variable_Event_Double_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Double MulticastInterface");

	ATekStrider_Character_BP_C_Charge_Variable_Event_Double_MulticastInterface_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Boolean Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::Charge_Variable_Event_Boolean_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Boolean Interface");

	ATekStrider_Character_BP_C_Charge_Variable_Event_Boolean_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEventFloatInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::ChargeVariableEventFloatInterface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEventFloatInterface");

	ATekStrider_Character_BP_C_ChargeVariableEventFloatInterface_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEventDoubleInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::ChargeVariableEventDoubleInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEventDoubleInterface");

	ATekStrider_Character_BP_C_ChargeVariableEventDoubleInterface_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEventIntInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ivalue                         (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::ChargeVariableEventIntInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int ivalue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEventIntInterface");

	ATekStrider_Character_BP_C_ChargeVariableEventIntInterface_Params params;
	params.variableType = variableType;
	params.ivalue = ivalue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEventIntMulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ivalue                         (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::ChargeVariableEventIntMulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int ivalue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEventIntMulticastInterface");

	ATekStrider_Character_BP_C_ChargeVariableEventIntMulticastInterface_Params params;
	params.variableType = variableType;
	params.ivalue = ivalue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnAttachmentBuffAdded
// ()
// Parameters:
// class ABuff_TekStrider_Attachment_Base_C* Buff                           (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::OnAttachmentBuffAdded(class ABuff_TekStrider_Attachment_Base_C* Buff)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnAttachmentBuffAdded");

	ATekStrider_Character_BP_C_OnAttachmentBuffAdded_Params params;
	params.Buff = Buff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnAttachmentBuffRemoved
// ()
// Parameters:
// class ABuff_TekStrider_Attachment_Base_C* Buff                           (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::OnAttachmentBuffRemoved(class ABuff_TekStrider_Attachment_Base_C* Buff)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnAttachmentBuffRemoved");

	ATekStrider_Character_BP_C_OnAttachmentBuffRemoved_Params params;
	params.Buff = Buff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnJumpPressed
// ()

void ATekStrider_Character_BP_C::BP_OnJumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnJumpPressed");

	ATekStrider_Character_BP_C_BP_OnJumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.SetInventoryTributeStatus
// ()
// Parameters:
// bool                           IsTribute_                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::SetInventoryTributeStatus(bool IsTribute_)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.SetInventoryTributeStatus");

	ATekStrider_Character_BP_C_SetInventoryTributeStatus_Params params;
	params.IsTribute_ = IsTribute_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPUnstasis
// ()

void ATekStrider_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPUnstasis");

	ATekStrider_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ReceiveBeginPlay
// ()

void ATekStrider_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ReceiveBeginPlay");

	ATekStrider_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEvent
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::ChargeVariableEvent(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEvent");

	ATekStrider_Character_BP_C_ChargeVariableEvent_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEvent_Multicast
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::ChargeVariableEvent_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEvent_Multicast");

	ATekStrider_Character_BP_C_ChargeVariableEvent_Multicast_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.CheckForBatteriesAndUpdate_Multicast
// ()

void ATekStrider_Character_BP_C::CheckForBatteriesAndUpdate_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.CheckForBatteriesAndUpdate_Multicast");

	ATekStrider_Character_BP_C_CheckForBatteriesAndUpdate_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnDied_Event
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::OnDied_Event(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnDied_Event");

	ATekStrider_Character_BP_C_OnDied_Event_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.CreateChargeBuff_Multicast
// ()

void ATekStrider_Character_BP_C::CreateChargeBuff_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.CreateChargeBuff_Multicast");

	ATekStrider_Character_BP_C_CreateChargeBuff_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.DestroyChargeBuff_Multicast
// ()

void ATekStrider_Character_BP_C::DestroyChargeBuff_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.DestroyChargeBuff_Multicast");

	ATekStrider_Character_BP_C_DestroyChargeBuff_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ivalue                         (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::Charge_Variable_Event_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int ivalue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Interface");

	ATekStrider_Character_BP_C_Charge_Variable_Event_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.ivalue = ivalue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Trigger Multicast Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            iVariable                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::Charge_Variable_Event_Trigger_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iVariable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Trigger Multicast Interface");

	ATekStrider_Character_BP_C_Charge_Variable_Event_Trigger_Multicast_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.iVariable = iVariable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Interface Check for Batteries and Update Multicast
// ()

void ATekStrider_Character_BP_C::Interface_Check_for_Batteries_and_Update_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Interface Check for Batteries and Update Multicast");

	ATekStrider_Character_BP_C_Interface_Check_for_Batteries_and_Update_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Set Charge Variable Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicast                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           triggerEvent                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicastEvent                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ivalue                         (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::Set_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool multicast, float fValue, double dValue, bool bBValue, bool triggerEvent, bool multicastEvent, int ivalue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Set Charge Variable Interface");

	ATekStrider_Character_BP_C_Set_Charge_Variable_Interface_Params params;
	params.variableType = variableType;
	params.multicast = multicast;
	params.fValue = fValue;
	params.dValue = dValue;
	params.bBValue = bBValue;
	params.triggerEvent = triggerEvent;
	params.multicastEvent = multicastEvent;
	params.ivalue = ivalue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.RandomizeUntamedStart
// ()

void ATekStrider_Character_BP_C::RandomizeUntamedStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.RandomizeUntamedStart");

	ATekStrider_Character_BP_C_RandomizeUntamedStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.NetUpdateCharge
// ()

void ATekStrider_Character_BP_C::NetUpdateCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.NetUpdateCharge");

	ATekStrider_Character_BP_C_NetUpdateCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPDinoPostBeginPlay
// ()

void ATekStrider_Character_BP_C::BPDinoPostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPDinoPostBeginPlay");

	ATekStrider_Character_BP_C_BPDinoPostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.fade in platform
// ()

void ATekStrider_Character_BP_C::fade_in_platform()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.fade in platform");

	ATekStrider_Character_BP_C_fade_in_platform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Multicast Start Taming
// ()

void ATekStrider_Character_BP_C::Multicast_Start_Taming()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Multicast Start Taming");

	ATekStrider_Character_BP_C_Multicast_Start_Taming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast on hack hit success
// ()
// Parameters:
// struct FVector                 last_tame_location             (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::multicast_on_hack_hit_success(const struct FVector& last_tame_location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast on hack hit success");

	ATekStrider_Character_BP_C_multicast_on_hack_hit_success_Params params;
	params.last_tame_location = last_tame_location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast on hack hit fail
// ()

void ATekStrider_Character_BP_C::multicast_on_hack_hit_fail()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast on hack hit fail");

	ATekStrider_Character_BP_C_multicast_on_hack_hit_fail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast on hack complete
// ()
// Parameters:
// struct FVector                 last_hack_spot                 (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::multicast_on_hack_complete(const struct FVector& last_hack_spot)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast on hack complete");

	ATekStrider_Character_BP_C_multicast_on_hack_complete_Params params;
	params.last_hack_spot = last_hack_spot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast on complete tame
// ()

void ATekStrider_Character_BP_C::multicast_on_complete_tame()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast on complete tame");

	ATekStrider_Character_BP_C_multicast_on_complete_tame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.set strider ref for hacking vfx
// ()

void ATekStrider_Character_BP_C::set_strider_ref_for_hacking_vfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.set strider ref for hacking vfx");

	ATekStrider_Character_BP_C_set_strider_ref_for_hacking_vfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.immediately set platform visible
// ()
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::immediately_set_platform_visible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.immediately set platform visible");

	ATekStrider_Character_BP_C_immediately_set_platform_visible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.MultiOnStriderDestroyed
// ()

void ATekStrider_Character_BP_C::MultiOnStriderDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.MultiOnStriderDestroyed");

	ATekStrider_Character_BP_C_MultiOnStriderDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.EnableInputMulti
// ()
// Parameters:
// bool                           NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::EnableInputMulti(bool NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.EnableInputMulti");

	ATekStrider_Character_BP_C_EnableInputMulti_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetReadyToDieMulti
// ()

void ATekStrider_Character_BP_C::GetReadyToDieMulti()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetReadyToDieMulti");

	ATekStrider_Character_BP_C_GetReadyToDieMulti_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetReadyToDieSkip
// ()

void ATekStrider_Character_BP_C::GetReadyToDieSkip()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetReadyToDieSkip");

	ATekStrider_Character_BP_C_GetReadyToDieSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast play resource suck vfx on rocks
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::multicast_play_resource_suck_vfx_on_rocks(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast play resource suck vfx on rocks");

	ATekStrider_Character_BP_C_multicast_play_resource_suck_vfx_on_rocks_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast play resource suck vfx on trees
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::multicast_play_resource_suck_vfx_on_trees(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast play resource suck vfx on trees");

	ATekStrider_Character_BP_C_multicast_play_resource_suck_vfx_on_trees_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast update tame percent on body
// ()
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::multicast_update_tame_percent_on_body(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast update tame percent on body");

	ATekStrider_Character_BP_C_multicast_update_tame_percent_on_body_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast activate transmitter vfx
// ()
// Parameters:
// double                         time_activated                 (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::multicast_activate_transmitter_vfx(double time_activated)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast activate transmitter vfx");

	ATekStrider_Character_BP_C_multicast_activate_transmitter_vfx_Params params;
	params.time_activated = time_activated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast deactivate transmitter vfx
// ()

void ATekStrider_Character_BP_C::multicast_deactivate_transmitter_vfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast deactivate transmitter vfx");

	ATekStrider_Character_BP_C_multicast_deactivate_transmitter_vfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.SetupEventBindingsForDediStorage
// ()
// Parameters:
// class ABP_DedicatedStorage_C*  ForStorage                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBind                          (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::SetupEventBindingsForDediStorage(class ABP_DedicatedStorage_C* ForStorage, bool bBind)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.SetupEventBindingsForDediStorage");

	ATekStrider_Character_BP_C_SetupEventBindingsForDediStorage_Params params;
	params.ForStorage = ForStorage;
	params.bBind = bBind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnLinkedDediStorageDestroyed
// ()

void ATekStrider_Character_BP_C::OnLinkedDediStorageDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnLinkedDediStorageDestroyed");

	ATekStrider_Character_BP_C_OnLinkedDediStorageDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Multi_RefreshLinkedDediStorageRef
// ()
// Parameters:
// class ABP_DedicatedStorage_C*  LinkedStorage                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::Multi_RefreshLinkedDediStorageRef(class ABP_DedicatedStorage_C* LinkedStorage)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Multi_RefreshLinkedDediStorageRef");

	ATekStrider_Character_BP_C_Multi_RefreshLinkedDediStorageRef_Params params;
	params.LinkedStorage = LinkedStorage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.Server_RequestFixLinkedDediStorageRef
// ()

void ATekStrider_Character_BP_C::Server_RequestFixLinkedDediStorageRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.Server_RequestFixLinkedDediStorageRef");

	ATekStrider_Character_BP_C_Server_RequestFixLinkedDediStorageRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnActorCustomEvent_Event
// ()
// Parameters:
// struct FName                   EventCustomName                (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  EventCustomString              (Parm, ZeroConstructor)
// class AActor*                  InstigatorActor                (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::OnActorCustomEvent_Event(const struct FName& EventCustomName, const class FString& EventCustomString, class AActor* InstigatorActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnActorCustomEvent_Event");

	ATekStrider_Character_BP_C_OnActorCustomEvent_Event_Params params;
	params.EventCustomName = EventCustomName;
	params.EventCustomString = EventCustomString;
	params.InstigatorActor = InstigatorActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.ExecuteUbergraph_TekStrider_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::ExecuteUbergraph_TekStrider_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.ExecuteUbergraph_TekStrider_Character_BP");

	ATekStrider_Character_BP_C_ExecuteUbergraph_TekStrider_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnStructurePlacedOnSaddle__DelegateSignature
// ()
// Parameters:
// class APrimalStructure*        Structure                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekStrider_Character_BP_C::OnStructurePlacedOnSaddle__DelegateSignature(class APrimalStructure* Structure)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnStructurePlacedOnSaddle__DelegateSignature");

	ATekStrider_Character_BP_C_OnStructurePlacedOnSaddle__DelegateSignature_Params params;
	params.Structure = Structure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
