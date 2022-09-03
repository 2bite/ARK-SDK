// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ExosuitRider_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ExosuitRider.Buff_ExosuitRider_C.GetHudData
// ()
// Parameters:
// bool                           bUsesChestBeam                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bCanUseChestBeam               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ChestBeamEnergyPercent         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ChestBeamState                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UPrimalInventoryComponent* InventoryComponent             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  FuelItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          EnergyPercent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            CurrentMode                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPreparingJump               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ExosuitRider_C::GetHudData(bool* bUsesChestBeam, bool* bCanUseChestBeam, float* ChestBeamEnergyPercent, int* ChestBeamState, class UPrimalInventoryComponent** InventoryComponent, class UClass** FuelItem, float* EnergyPercent, int* CurrentMode, bool* bIsPreparingJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExosuitRider.Buff_ExosuitRider_C.GetHudData");

	ABuff_ExosuitRider_C_GetHudData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUsesChestBeam != nullptr)
		*bUsesChestBeam = params.bUsesChestBeam;
	if (bCanUseChestBeam != nullptr)
		*bCanUseChestBeam = params.bCanUseChestBeam;
	if (ChestBeamEnergyPercent != nullptr)
		*ChestBeamEnergyPercent = params.ChestBeamEnergyPercent;
	if (ChestBeamState != nullptr)
		*ChestBeamState = params.ChestBeamState;
	if (InventoryComponent != nullptr)
		*InventoryComponent = params.InventoryComponent;
	if (FuelItem != nullptr)
		*FuelItem = params.FuelItem;
	if (EnergyPercent != nullptr)
		*EnergyPercent = params.EnergyPercent;
	if (CurrentMode != nullptr)
		*CurrentMode = params.CurrentMode;
	if (bIsPreparingJump != nullptr)
		*bIsPreparingJump = params.bIsPreparingJump;
}


// Function Buff_ExosuitRider.Buff_ExosuitRider_C.BPAdjustStatusValueModification
// ()
// Parameters:
// class UPrimalCharacterStatusComponent** ForComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPrimalCharacterStatusValue>* ValueType                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InAmount                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageTypeClass                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bManualModification            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_ExosuitRider_C::BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent** ForComponent, TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* InAmount, class UClass** DamageTypeClass, bool* bManualModification)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExosuitRider.Buff_ExosuitRider_C.BPAdjustStatusValueModification");

	ABuff_ExosuitRider_C_BPAdjustStatusValueModification_Params params;
	params.ForComponent = ForComponent;
	params.ValueType = ValueType;
	params.InAmount = InAmount;
	params.DamageTypeClass = DamageTypeClass;
	params.bManualModification = bManualModification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_ExosuitRider.Buff_ExosuitRider_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ExosuitRider_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExosuitRider.Buff_ExosuitRider_C.BPDeactivated");

	ABuff_ExosuitRider_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ExosuitRider.Buff_ExosuitRider_C.BPPreventAddingOtherBuff
// ()
// Parameters:
// class UClass**                 anotherBuffClass               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_ExosuitRider_C::BPPreventAddingOtherBuff(class UClass** anotherBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExosuitRider.Buff_ExosuitRider_C.BPPreventAddingOtherBuff");

	ABuff_ExosuitRider_C_BPPreventAddingOtherBuff_Params params;
	params.anotherBuffClass = anotherBuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_ExosuitRider.Buff_ExosuitRider_C.BPGetHUDElements
// (Net, NetReliable, Exec, Native, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_ExosuitRider_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExosuitRider.Buff_ExosuitRider_C.BPGetHUDElements");

	ABuff_ExosuitRider_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_ExosuitRider.Buff_ExosuitRider_C.ThrottledTick
// ()

void ABuff_ExosuitRider_C::ThrottledTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExosuitRider.Buff_ExosuitRider_C.ThrottledTick");

	ABuff_ExosuitRider_C_ThrottledTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ExosuitRider.Buff_ExosuitRider_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_ExosuitRider_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExosuitRider.Buff_ExosuitRider_C.BuffAdjustDamage");

	ABuff_ExosuitRider_C_BuffAdjustDamage_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.TheDamgeType = TheDamgeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;

	return params.ReturnValue;
}


// Function Buff_ExosuitRider.Buff_ExosuitRider_C.UserConstructionScript
// ()

void ABuff_ExosuitRider_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExosuitRider.Buff_ExosuitRider_C.UserConstructionScript");

	ABuff_ExosuitRider_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ExosuitRider.Buff_ExosuitRider_C.ExecuteUbergraph_Buff_ExosuitRider
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ExosuitRider_C::ExecuteUbergraph_Buff_ExosuitRider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExosuitRider.Buff_ExosuitRider_C.ExecuteUbergraph_Buff_ExosuitRider");

	ABuff_ExosuitRider_C_ExecuteUbergraph_Buff_ExosuitRider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
