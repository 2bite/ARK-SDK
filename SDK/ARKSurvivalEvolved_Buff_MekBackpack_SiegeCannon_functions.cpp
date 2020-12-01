// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MekBackpack_SiegeCannon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPAdjustImpulseFromDamage
// ()
// Parameters:
// struct FVector*                DesiredImpulse                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class APawn**                  PawnInstigator                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_MekBackpack_SiegeCannon_C::BPAdjustImpulseFromDamage(struct FVector* DesiredImpulse, float* DamageTaken, struct FDamageEvent* TheDamageEvent, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPAdjustImpulseFromDamage");

	ABuff_MekBackpack_SiegeCannon_C_BPAdjustImpulseFromDamage_Params params;
	params.DesiredImpulse = DesiredImpulse;
	params.DamageTaken = DamageTaken;
	params.TheDamageEvent = TheDamageEvent;
	params.PawnInstigator = PawnInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BuffTickServer
// (Native, Static, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_SiegeCannon_C::STATIC_BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BuffTickServer");

	ABuff_MekBackpack_SiegeCannon_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPPreventInstigatorMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    newMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 newCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_MekBackpack_SiegeCannon_C::BPPreventInstigatorMovementMode(TEnumAsByte<EMovementMode>* newMovementMode, unsigned char* newCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPPreventInstigatorMovementMode");

	ABuff_MekBackpack_SiegeCannon_C_BPPreventInstigatorMovementMode_Params params;
	params.newMovementMode = newMovementMode;
	params.newCustomMode = newCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_MekBackpack_SiegeCannon_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BuffAdjustDamage");

	ABuff_MekBackpack_SiegeCannon_C_BuffAdjustDamage_Params params;
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


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.NotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      Rider                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_SiegeCannon_C::NotifySetRider(class AShooterCharacter** Rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.NotifySetRider");

	ABuff_MekBackpack_SiegeCannon_C_NotifySetRider_Params params;
	params.Rider = Rider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.GetFireAnim
// ()
// Parameters:
// struct FVector                 FireDirection                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MekForwardDirection            (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ResultAnim                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_SiegeCannon_C::GetFireAnim(const struct FVector& FireDirection, const struct FVector& MekForwardDirection, class UAnimMontage** ResultAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.GetFireAnim");

	ABuff_MekBackpack_SiegeCannon_C_GetFireAnim_Params params;
	params.FireDirection = FireDirection;
	params.MekForwardDirection = MekForwardDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultAnim != nullptr)
		*ResultAnim = params.ResultAnim;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPInstigatorPossessed
// ()
// Parameters:
// class AController**            ByController                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_SiegeCannon_C::BPInstigatorPossessed(class AController** ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPInstigatorPossessed");

	ABuff_MekBackpack_SiegeCannon_C_BPInstigatorPossessed_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.GetBackpackSaveData
// (Exec, Native, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// struct FMekBackpackData        Data                           (Parm, OutParm)

void ABuff_MekBackpack_SiegeCannon_C::STATIC_GetBackpackSaveData(struct FMekBackpackData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.GetBackpackSaveData");

	ABuff_MekBackpack_SiegeCannon_C_GetBackpackSaveData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.RestoreBackpackSaveData
// ()
// Parameters:
// struct FMekBackpackData*       SaveData                       (Parm)

void ABuff_MekBackpack_SiegeCannon_C::RestoreBackpackSaveData(struct FMekBackpackData* SaveData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.RestoreBackpackSaveData");

	ABuff_MekBackpack_SiegeCannon_C_RestoreBackpackSaveData_Params params;
	params.SaveData = SaveData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnRep_PreventSword
// ()

void ABuff_MekBackpack_SiegeCannon_C::OnRep_PreventSword()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnRep_PreventSword");

	ABuff_MekBackpack_SiegeCannon_C_OnRep_PreventSword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.NotifyInventoryChange
// ()
// Parameters:
// class UPrimalItem**            Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ItemAdded                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ItemEquipped                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_SiegeCannon_C::NotifyInventoryChange(class UPrimalItem** Item, bool* ItemAdded, bool* ItemEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.NotifyInventoryChange");

	ABuff_MekBackpack_SiegeCannon_C_NotifyInventoryChange_Params params;
	params.Item = Item;
	params.ItemAdded = ItemAdded;
	params.ItemEquipped = ItemEquipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_SiegeCannon_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPActivated");

	ABuff_MekBackpack_SiegeCannon_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnRep_SiegeCannonMalfunctioned
// (NetRequest, Event, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)

void ABuff_MekBackpack_SiegeCannon_C::OnRep_SiegeCannonMalfunctioned()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnRep_SiegeCannonMalfunctioned");

	ABuff_MekBackpack_SiegeCannon_C_OnRep_SiegeCannonMalfunctioned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.SubtractAmmo
// ()

void ABuff_MekBackpack_SiegeCannon_C::SubtractAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.SubtractAmmo");

	ABuff_MekBackpack_SiegeCannon_C_SubtractAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.GetCurrentAmmo
// ()
// Parameters:
// int                            AmmoAmount                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_SiegeCannon_C::GetCurrentAmmo(int* AmmoAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.GetCurrentAmmo");

	ABuff_MekBackpack_SiegeCannon_C_GetCurrentAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoAmount != nullptr)
		*AmmoAmount = params.AmmoAmount;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_MekBackpack_SiegeCannon_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPGetHUDElements");

	ABuff_MekBackpack_SiegeCannon_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OverrideTurnInPlaceSpeed
// ()
// Parameters:
// float*                         DefaultSpeed                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewSpeed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_SiegeCannon_C::OverrideTurnInPlaceSpeed(float* DefaultSpeed, float* NewSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OverrideTurnInPlaceSpeed");

	ABuff_MekBackpack_SiegeCannon_C_OverrideTurnInPlaceSpeed_Params params;
	params.DefaultSpeed = DefaultSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewSpeed != nullptr)
		*NewSpeed = params.NewSpeed;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowHurtAnim
// ()
// Parameters:
// bool                           Allow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_SiegeCannon_C::AllowHurtAnim(bool* Allow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowHurtAnim");

	ABuff_MekBackpack_SiegeCannon_C_AllowHurtAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allow != nullptr)
		*Allow = params.Allow;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.PreventJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_MekBackpack_SiegeCannon_C::PreventJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.PreventJump");

	ABuff_MekBackpack_SiegeCannon_C_PreventJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowTargeting
// ()
// Parameters:
// bool                           Allow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_SiegeCannon_C::AllowTargeting(bool* Allow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowTargeting");

	ABuff_MekBackpack_SiegeCannon_C_AllowTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allow != nullptr)
		*Allow = params.Allow;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPPreventFirstPerson
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_MekBackpack_SiegeCannon_C::BPPreventFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPPreventFirstPerson");

	ABuff_MekBackpack_SiegeCannon_C_BPPreventFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowMekHover
// ()
// Parameters:
// bool                           CanHover                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_SiegeCannon_C::AllowMekHover(bool* CanHover)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowMekHover");

	ABuff_MekBackpack_SiegeCannon_C_AllowMekHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanHover != nullptr)
		*CanHover = params.CanHover;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowMekSword
// ()
// Parameters:
// bool                           Allowed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_SiegeCannon_C::AllowMekSword(bool* Allowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowMekSword");

	ABuff_MekBackpack_SiegeCannon_C_AllowMekSword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allowed != nullptr)
		*Allowed = params.Allowed;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowMekPistol
// ()
// Parameters:
// bool                           Allowed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_SiegeCannon_C::AllowMekPistol(bool* Allowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowMekPistol");

	ABuff_MekBackpack_SiegeCannon_C_AllowMekPistol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allowed != nullptr)
		*Allowed = params.Allowed;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.GetLaunchParams
// (NetReliable, Native, Event, NetResponse, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// class AMek_Character_BP_C*     Mek                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_SiegeCannon_C::GetLaunchParams(class AMek_Character_BP_C* Mek, struct FVector* Location, struct FVector* Direction, float* Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.GetLaunchParams");

	ABuff_MekBackpack_SiegeCannon_C_GetLaunchParams_Params params;
	params.Mek = Mek;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Direction != nullptr)
		*Direction = params.Direction;
	if (Speed != nullptr)
		*Speed = params.Speed;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BuffTickClient
// (Net, NetReliable, Exec, Static, Protected, Delegate, HasOutParms, HasDefaults, NetClient, Const, NetValidate)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_SiegeCannon_C::STATIC_BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BuffTickClient");

	ABuff_MekBackpack_SiegeCannon_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnRep_InSiegeMode
// ()

void ABuff_MekBackpack_SiegeCannon_C::OnRep_InSiegeMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnRep_InSiegeMode");

	ABuff_MekBackpack_SiegeCannon_C_OnRep_InSiegeMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.CanDeactivateBackpack
// ()
// Parameters:
// bool                           CanDeactivate                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_SiegeCannon_C::CanDeactivateBackpack(bool* CanDeactivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.CanDeactivateBackpack");

	ABuff_MekBackpack_SiegeCannon_C_CanDeactivateBackpack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanDeactivate != nullptr)
		*CanDeactivate = params.CanDeactivate;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.CanActivateBackpack
// ()
// Parameters:
// bool                           CanActivate                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  FailureMessage                 (Parm, OutParm, ZeroConstructor)

void ABuff_MekBackpack_SiegeCannon_C::CanActivateBackpack(bool* CanActivate, class FString* FailureMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.CanActivateBackpack");

	ABuff_MekBackpack_SiegeCannon_C_CanActivateBackpack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanActivate != nullptr)
		*CanActivate = params.CanActivate;
	if (FailureMessage != nullptr)
		*FailureMessage = params.FailureMessage;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.IsBackpackActive
// ()
// Parameters:
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_SiegeCannon_C::IsBackpackActive(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.IsBackpackActive");

	ABuff_MekBackpack_SiegeCannon_C_IsBackpackActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsActive != nullptr)
		*IsActive = params.IsActive;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.UserConstructionScript
// ()

void ABuff_MekBackpack_SiegeCannon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.UserConstructionScript");

	ABuff_MekBackpack_SiegeCannon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnBackpackActivated
// ()

void ABuff_MekBackpack_SiegeCannon_C::OnBackpackActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnBackpackActivated");

	ABuff_MekBackpack_SiegeCannon_C_OnBackpackActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnBackpackDeactivated
// ()

void ABuff_MekBackpack_SiegeCannon_C::OnBackpackDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnBackpackDeactivated");

	ABuff_MekBackpack_SiegeCannon_C_OnBackpackDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiSiegeModeStateChanged
// ()
// Parameters:
// bool                           IsActive                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_SiegeCannon_C::MultiSiegeModeStateChanged(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiSiegeModeStateChanged");

	ABuff_MekBackpack_SiegeCannon_C_MultiSiegeModeStateChanged_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnAnimNotifyEvent
// ()
// Parameters:
// struct FName*                  EventName                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_SiegeCannon_C::OnAnimNotifyEvent(struct FName* EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnAnimNotifyEvent");

	ABuff_MekBackpack_SiegeCannon_C_OnAnimNotifyEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.ServerUpdateFireOrientation
// ()
// Parameters:
// struct FVector                 FireLoc                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 FireDir                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_SiegeCannon_C::ServerUpdateFireOrientation(const struct FVector& FireLoc, const struct FVector& FireDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.ServerUpdateFireOrientation");

	ABuff_MekBackpack_SiegeCannon_C_ServerUpdateFireOrientation_Params params;
	params.FireLoc = FireLoc;
	params.FireDir = FireDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.NotifyStopAttack
// ()

void ABuff_MekBackpack_SiegeCannon_C::NotifyStopAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.NotifyStopAttack");

	ABuff_MekBackpack_SiegeCannon_C_NotifyStopAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.ServerRequestStartChargingAttack
// ()

void ABuff_MekBackpack_SiegeCannon_C::ServerRequestStartChargingAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.ServerRequestStartChargingAttack");

	ABuff_MekBackpack_SiegeCannon_C_ServerRequestStartChargingAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.DoAttack
// ()

void ABuff_MekBackpack_SiegeCannon_C::DoAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.DoAttack");

	ABuff_MekBackpack_SiegeCannon_C_DoAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.ServerRequestStopChargingAttack
// ()

void ABuff_MekBackpack_SiegeCannon_C::ServerRequestStopChargingAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.ServerRequestStopChargingAttack");

	ABuff_MekBackpack_SiegeCannon_C_ServerRequestStopChargingAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiAttackComplete
// ()
// Parameters:
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_SiegeCannon_C::MultiAttackComplete(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiAttackComplete");

	ABuff_MekBackpack_SiegeCannon_C_MultiAttackComplete_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiStartChargingAttack
// ()

void ABuff_MekBackpack_SiegeCannon_C::MultiStartChargingAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiStartChargingAttack");

	ABuff_MekBackpack_SiegeCannon_C_MultiStartChargingAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiStopChargingAttack
// ()

void ABuff_MekBackpack_SiegeCannon_C::MultiStopChargingAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiStopChargingAttack");

	ABuff_MekBackpack_SiegeCannon_C_MultiStopChargingAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.NotifyStartAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_SiegeCannon_C::NotifyStartAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.NotifyStartAttack");

	ABuff_MekBackpack_SiegeCannon_C_NotifyStartAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.SetBackpackMalfunctioned
// ()
// Parameters:
// bool*                          IsBackpackDisabled             (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_SiegeCannon_C::SetBackpackMalfunctioned(bool* IsBackpackDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.SetBackpackMalfunctioned");

	ABuff_MekBackpack_SiegeCannon_C_SetBackpackMalfunctioned_Params params;
	params.IsBackpackDisabled = IsBackpackDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiUpdateAmmoQuantity
// ()
// Parameters:
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_SiegeCannon_C::MultiUpdateAmmoQuantity(int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiUpdateAmmoQuantity");

	ABuff_MekBackpack_SiegeCannon_C_MultiUpdateAmmoQuantity_Params params;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.SyncClientAmmo
// ()

void ABuff_MekBackpack_SiegeCannon_C::SyncClientAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.SyncClientAmmo");

	ABuff_MekBackpack_SiegeCannon_C_SyncClientAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.ExecuteUbergraph_Buff_MekBackpack_SiegeCannon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_SiegeCannon_C::ExecuteUbergraph_Buff_MekBackpack_SiegeCannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.ExecuteUbergraph_Buff_MekBackpack_SiegeCannon");

	ABuff_MekBackpack_SiegeCannon_C_ExecuteUbergraph_Buff_MekBackpack_SiegeCannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
