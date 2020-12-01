// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GasBags_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GasBags_Character_BP.GasBags_Character_BP_C.ModifyInflationValue
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeltaIsPercent                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Subtract                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewInflationPercent            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::ModifyInflationValue(float Delta, bool DeltaIsPercent, bool Subtract, float* NewInflationPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ModifyInflationValue");

	AGasBags_Character_BP_C_ModifyInflationValue_Params params;
	params.Delta = Delta;
	params.DeltaIsPercent = DeltaIsPercent;
	params.Subtract = Subtract;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewInflationPercent != nullptr)
		*NewInflationPercent = params.NewInflationPercent;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.GetInflationValue
// ()
// Parameters:
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::GetInflationValue(float* Value, float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.GetInflationValue");

	AGasBags_Character_BP_C_GetInflationValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.BPCharacterUnsleeped
// ()

void AGasBags_Character_BP_C::BPCharacterUnsleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPCharacterUnsleeped");

	AGasBags_Character_BP_C_BPCharacterUnsleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.BP_ForceAllowMountedWeapon
// ()
// Parameters:
// class UClass**                 WeaponTemplate                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGasBags_Character_BP_C::BP_ForceAllowMountedWeapon(class UClass** WeaponTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BP_ForceAllowMountedWeapon");

	AGasBags_Character_BP_C_BP_ForceAllowMountedWeapon_Params params;
	params.WeaponTemplate = WeaponTemplate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.BPOnLethalDamage
// ()
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController**            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreventDeath                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::BPOnLethalDamage(float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent, bool* bPreventDeath)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPOnLethalDamage");

	AGasBags_Character_BP_C_BPOnLethalDamage_Params params;
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


// Function GasBags_Character_BP.GasBags_Character_BP_C.BPCharacterSleeped
// ()

void AGasBags_Character_BP_C::BPCharacterSleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPCharacterSleeped");

	AGasBags_Character_BP_C_BPCharacterSleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.GetCurrentFloatingForceDirection
// ()
// Parameters:
// struct FVector                 Dir                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::GetCurrentFloatingForceDirection(struct FVector* Dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.GetCurrentFloatingForceDirection");

	AGasBags_Character_BP_C_GetCurrentFloatingForceDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dir != nullptr)
		*Dir = params.Dir;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.IsInhaleSocketUnderwater
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGasBags_Character_BP_C::IsInhaleSocketUnderwater()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.IsInhaleSocketUnderwater");

	AGasBags_Character_BP_C_IsInhaleSocketUnderwater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.OnJumped
// ()

void AGasBags_Character_BP_C::OnJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.OnJumped");

	AGasBags_Character_BP_C_OnJumped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.BPOverrideGetAttackAnimationIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimMontage*>    AnimationArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AGasBags_Character_BP_C::BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPOverrideGetAttackAnimationIndex");

	AGasBags_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationArray != nullptr)
		*AnimationArray = params.AnimationArray;

	return params.ReturnValue;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.GetDmgDirectionHelper
// ()
// Parameters:
// class AActor*                  DmgCauser                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsPointDmg                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DamageDir                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Dir                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::GetDmgDirectionHelper(class AActor* DmgCauser, bool IsPointDmg, const struct FVector& DamageDir, struct FVector* Dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.GetDmgDirectionHelper");

	AGasBags_Character_BP_C_GetDmgDirectionHelper_Params params;
	params.DmgCauser = DmgCauser;
	params.IsPointDmg = IsPointDmg;
	params.DamageDir = DamageDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dir != nullptr)
		*Dir = params.Dir;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPNotifySetRider");

	AGasBags_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.BPOverrideHurtAnim
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

class UAnimMontage* AGasBags_Character_BP_C::BPOverrideHurtAnim(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, bool* bIsPointDamage, struct FVector* PointDamageLocation, struct FVector* PointDamageHitNormal, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPOverrideHurtAnim");

	AGasBags_Character_BP_C_BPOverrideHurtAnim_Params params;
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


// Function GasBags_Character_BP.GasBags_Character_BP_C.AllowedToInflate
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGasBags_Character_BP_C::AllowedToInflate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.AllowedToInflate");

	AGasBags_Character_BP_C_AllowedToInflate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.TrySubtractStamina
// ()
// Parameters:
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FailIfNotEnough                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RemainingStamina               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::TrySubtractStamina(float amount, bool FailIfNotEnough, bool* Success, float* RemainingStamina)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.TrySubtractStamina");

	AGasBags_Character_BP_C_TrySubtractStamina_Params params;
	params.amount = amount;
	params.FailIfNotEnough = FailIfNotEnough;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (RemainingStamina != nullptr)
		*RemainingStamina = params.RemainingStamina;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.GetCurrentExhaleStaminaCost
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGasBags_Character_BP_C::GetCurrentExhaleStaminaCost()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.GetCurrentExhaleStaminaCost");

	AGasBags_Character_BP_C_GetCurrentExhaleStaminaCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.RawDamageToInflationDamage
// (NetReliable, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// float                          RawDamageAmount                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFallDamage                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          HealthDamage                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          InflationDamage                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::RawDamageToInflationDamage(float RawDamageAmount, bool IsFallDamage, float* HealthDamage, float* InflationDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.RawDamageToInflationDamage");

	AGasBags_Character_BP_C_RawDamageToInflationDamage_Params params;
	params.RawDamageAmount = RawDamageAmount;
	params.IsFallDamage = IsFallDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HealthDamage != nullptr)
		*HealthDamage = params.HealthDamage;
	if (InflationDamage != nullptr)
		*InflationDamage = params.InflationDamage;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.GetFloatingVFX
// ()
// Parameters:
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* Comp                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::GetFloatingVFX(const struct FName& SocketName, class UParticleSystemComponent** Comp)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.GetFloatingVFX");

	AGasBags_Character_BP_C_GetFloatingVFX_Params params;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Comp != nullptr)
		*Comp = params.Comp;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.NonDediTickFloatingVFX
// (Net, NetReliable, NetRequest, Exec, Event, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::STATIC_NonDediTickFloatingVFX(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.NonDediTickFloatingVFX");

	AGasBags_Character_BP_C_NonDediTickFloatingVFX_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.OnRep_IsFloating
// ()

void AGasBags_Character_BP_C::OnRep_IsFloating()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.OnRep_IsFloating");

	AGasBags_Character_BP_C_OnRep_IsFloating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.ServerTickRandomImpulses
// ()
// Parameters:
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Impulse                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::ServerTickRandomImpulses(bool* IsActive, struct FVector* Impulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ServerTickRandomImpulses");

	AGasBags_Character_BP_C_ServerTickRandomImpulses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsActive != nullptr)
		*IsActive = params.IsActive;
	if (Impulse != nullptr)
		*Impulse = params.Impulse;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.BPGrabDebugSnapshot
// (NetRequest, Event, Public, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// TArray<struct FBlueprintVisualLogEntry> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBlueprintVisualLogEntry> AGasBags_Character_BP_C::BPGrabDebugSnapshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPGrabDebugSnapshot");

	AGasBags_Character_BP_C_BPGrabDebugSnapshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.BPOnDinoCheat
// ()
// Parameters:
// struct FName*                  CheatName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSetValue                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPOnDinoCheat");

	AGasBags_Character_BP_C_BPOnDinoCheat_Params params;
	params.CheatName = CheatName;
	params.bSetValue = bSetValue;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.BPCheckJumpInput
// ()
// Parameters:
// bool                           bUseCustomErrorMessage         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  ErrorMessageToDisplay          (Parm, OutParm, ZeroConstructor)

void AGasBags_Character_BP_C::BPCheckJumpInput(bool* bUseCustomErrorMessage, class FString* ErrorMessageToDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPCheckJumpInput");

	AGasBags_Character_BP_C_BPCheckJumpInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUseCustomErrorMessage != nullptr)
		*bUseCustomErrorMessage = params.bUseCustomErrorMessage;
	if (ErrorMessageToDisplay != nullptr)
		*ErrorMessageToDisplay = params.ErrorMessageToDisplay;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.CanJumpInternal
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGasBags_Character_BP_C::CanJumpInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.CanJumpInternal");

	AGasBags_Character_BP_C_CanJumpInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.ClampFloatingVelocity
// ()
// Parameters:
// struct FVector                 DesiredVelocity                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ClampedVelocity                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::ClampFloatingVelocity(const struct FVector& DesiredVelocity, struct FVector* ClampedVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ClampFloatingVelocity");

	AGasBags_Character_BP_C_ClampFloatingVelocity_Params params;
	params.DesiredVelocity = DesiredVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClampedVelocity != nullptr)
		*ClampedVelocity = params.ClampedVelocity;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.BPTimerServer
// ()

void AGasBags_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPTimerServer");

	AGasBags_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.GetEnvironmentData
// ()
// Parameters:
// float                          Temperature                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::GetEnvironmentData(float* Temperature)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.GetEnvironmentData");

	AGasBags_Character_BP_C_GetEnvironmentData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Temperature != nullptr)
		*Temperature = params.Temperature;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.BPPreventStasis
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGasBags_Character_BP_C::BPPreventStasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPPreventStasis");

	AGasBags_Character_BP_C_BPPreventStasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.GetExhaleCooldown
// ()
// Parameters:
// double                         Clock                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::GetExhaleCooldown(double* Clock, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.GetExhaleCooldown");

	AGasBags_Character_BP_C_GetExhaleCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Clock != nullptr)
		*Clock = params.Clock;
	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.BPPreventFallDamage
// (Net, NetReliable, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// struct FHitResult              HitResult                      (Parm, OutParm, ReferenceParm)
// float*                         FallDamageAmount               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGasBags_Character_BP_C::BPPreventFallDamage(float* FallDamageAmount, struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPPreventFallDamage");

	AGasBags_Character_BP_C_BPPreventFallDamage_Params params;
	params.FallDamageAmount = FallDamageAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;

	return params.ReturnValue;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGasBags_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BlueprintCanAttack");

	AGasBags_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.GetMaxInflation
// ()
// Parameters:
// bool                           GetBaseValue                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxInflationAmount             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::GetMaxInflation(bool GetBaseValue, float* MaxInflationAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.GetMaxInflation");

	AGasBags_Character_BP_C_GetMaxInflation_Params params;
	params.GetBaseValue = GetBaseValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxInflationAmount != nullptr)
		*MaxInflationAmount = params.MaxInflationAmount;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.BPGetOverrideCameraInterpSpeed
// ()
// Parameters:
// float*                         DefaultTPVCameraSpeedInterpolationMultiplier (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DefaultTPVOffsetInterpSpeed    (Parm, ZeroConstructor, IsPlainOldData)
// float                          TPVCameraSpeedInterpolationMultiplier (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TPVOffsetInterpSpeed           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::BPGetOverrideCameraInterpSpeed(float* DefaultTPVCameraSpeedInterpolationMultiplier, float* DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPGetOverrideCameraInterpSpeed");

	AGasBags_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params params;
	params.DefaultTPVCameraSpeedInterpolationMultiplier = DefaultTPVCameraSpeedInterpolationMultiplier;
	params.DefaultTPVOffsetInterpSpeed = DefaultTPVOffsetInterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TPVCameraSpeedInterpolationMultiplier != nullptr)
		*TPVCameraSpeedInterpolationMultiplier = params.TPVCameraSpeedInterpolationMultiplier;
	if (TPVOffsetInterpSpeed != nullptr)
		*TPVOffsetInterpSpeed = params.TPVOffsetInterpSpeed;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.GetFloatingForceDirection
// ()
// Parameters:
// struct FVector                 Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::GetFloatingForceDirection(struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.GetFloatingForceDirection");

	AGasBags_Character_BP_C_GetFloatingForceDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.ReceiveBeginPlay
// ()

void AGasBags_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ReceiveBeginPlay");

	AGasBags_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPOnMovementModeChangedNotify");

	AGasBags_Character_BP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.LaunchAbilityFinish
// ()

void AGasBags_Character_BP_C::LaunchAbilityFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.LaunchAbilityFinish");

	AGasBags_Character_BP_C_LaunchAbilityFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.DoLaunchAbility
// ()
// Parameters:
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::DoLaunchAbility(const struct FVector& Direction, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.DoLaunchAbility");

	AGasBags_Character_BP_C_DoLaunchAbility_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.BPGetGravityZScale
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGasBags_Character_BP_C::BPGetGravityZScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPGetGravityZScale");

	AGasBags_Character_BP_C_BPGetGravityZScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.ExhaleAttackFinish
// ()

void AGasBags_Character_BP_C::ExhaleAttackFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ExhaleAttackFinish");

	AGasBags_Character_BP_C_ExhaleAttackFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.Get Current Aim Direction
// ()
// Parameters:
// float                          VerticalAngleOffset            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AimDirection                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::Get_Current_Aim_Direction(float VerticalAngleOffset, struct FVector* AimDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.Get Current Aim Direction");

	AGasBags_Character_BP_C_Get_Current_Aim_Direction_Params params;
	params.VerticalAngleOffset = VerticalAngleOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AimDirection != nullptr)
		*AimDirection = params.AimDirection;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.DoExhaleAttack
// ()
// Parameters:
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::DoExhaleAttack(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.DoExhaleAttack");

	AGasBags_Character_BP_C_DoExhaleAttack_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.BPHandleControllerInitiatedAttack
// (Native, Event, NetResponse, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGasBags_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPHandleControllerInitiatedAttack");

	AGasBags_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGasBags_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPHandleOnStopTargeting");

	AGasBags_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.StopInflating
// ()

void AGasBags_Character_BP_C::StopInflating()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.StopInflating");

	AGasBags_Character_BP_C_StopInflating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.StartInflating
// ()

void AGasBags_Character_BP_C::StartInflating()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.StartInflating");

	AGasBags_Character_BP_C_StartInflating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.OnRep_IsInflating
// ()

void AGasBags_Character_BP_C::OnRep_IsInflating()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.OnRep_IsInflating");

	AGasBags_Character_BP_C_OnRep_IsInflating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGasBags_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BlueprintCanRiderAttack");

	AGasBags_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void AGasBags_Character_BP_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPGetHUDElements");

	AGasBags_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.BPAdjustDamage
// (Net, Exec, Native, NetResponse, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGasBags_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPAdjustDamage");

	AGasBags_Character_BP_C_BPAdjustDamage_Params params;
	params.IncomingDamage = IncomingDamage;
	params.TheDamageEvent = TheDamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.Get Inflation
// ()
// Parameters:
// bool                           SmoothedValues                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::Get_Inflation(bool SmoothedValues, float* Value, float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.Get Inflation");

	AGasBags_Character_BP_C_Get_Inflation_Params params;
	params.SmoothedValues = SmoothedValues;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ReceiveTick");

	AGasBags_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.UserConstructionScript
// ()

void AGasBags_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.UserConstructionScript");

	AGasBags_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.ServerRequestStopInflating
// ()

void AGasBags_Character_BP_C::ServerRequestStopInflating()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ServerRequestStopInflating");

	AGasBags_Character_BP_C_ServerRequestStopInflating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.ServerRequestStartInflating
// ()

void AGasBags_Character_BP_C::ServerRequestStartInflating()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ServerRequestStartInflating");

	AGasBags_Character_BP_C_ServerRequestStartInflating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.ServerUpdateFloatDirection
// ()
// Parameters:
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::ServerUpdateFloatDirection(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ServerUpdateFloatDirection");

	AGasBags_Character_BP_C_ServerUpdateFloatDirection_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.MultiUpdateFloatingDirection
// ()
// Parameters:
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::MultiUpdateFloatingDirection(const struct FVector& Direction, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.MultiUpdateFloatingDirection");

	AGasBags_Character_BP_C_MultiUpdateFloatingDirection_Params params;
	params.Direction = Direction;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.MultiUpdateVelocity
// ()
// Parameters:
// struct FVector                 Vel                            (Parm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::MultiUpdateVelocity(const struct FVector& Vel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.MultiUpdateVelocity");

	AGasBags_Character_BP_C_MultiUpdateVelocity_Params params;
	params.Vel = Vel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.ServerRequestAttachment
// ()

void AGasBags_Character_BP_C::ServerRequestAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ServerRequestAttachment");

	AGasBags_Character_BP_C_ServerRequestAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.MultiUpdateAttachState
// ()
// Parameters:
// bool                           Attached                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::MultiUpdateAttachState(bool Attached, const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.MultiUpdateAttachState");

	AGasBags_Character_BP_C_MultiUpdateAttachState_Params params;
	params.Attached = Attached;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.ServerRequestDetach
// ()

void AGasBags_Character_BP_C::ServerRequestDetach()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ServerRequestDetach");

	AGasBags_Character_BP_C_ServerRequestDetach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.ClientUpdateFloatingAirControlValue
// ()
// Parameters:
// float                          val                            (Parm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::ClientUpdateFloatingAirControlValue(float val)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ClientUpdateFloatingAirControlValue");

	AGasBags_Character_BP_C_ClientUpdateFloatingAirControlValue_Params params;
	params.val = val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.ClientUpdateInflationMultiplier
// ()
// Parameters:
// float                          val                            (Parm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::ClientUpdateInflationMultiplier(float val)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ClientUpdateInflationMultiplier");

	AGasBags_Character_BP_C_ClientUpdateInflationMultiplier_Params params;
	params.val = val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.MultiOnHardLanding
// ()
// Parameters:
// float                          LandingForcePercent            (Parm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::MultiOnHardLanding(float LandingForcePercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.MultiOnHardLanding");

	AGasBags_Character_BP_C_MultiOnHardLanding_Params params;
	params.LandingForcePercent = LandingForcePercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.ClientShowErrorMessage
// ()
// Parameters:
// unsigned char                  MessageType                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          DisplayTime                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSingleton                    (Parm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::ClientShowErrorMessage(unsigned char MessageType, float DisplayTime, bool IsSingleton)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ClientShowErrorMessage");

	AGasBags_Character_BP_C_ClientShowErrorMessage_Params params;
	params.MessageType = MessageType;
	params.DisplayTime = DisplayTime;
	params.IsSingleton = IsSingleton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.MultiNotifyRandomImpulse
// ()
// Parameters:
// struct FVector                 RandomImpulse                  (Parm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::MultiNotifyRandomImpulse(const struct FVector& RandomImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.MultiNotifyRandomImpulse");

	AGasBags_Character_BP_C_MultiNotifyRandomImpulse_Params params;
	params.RandomImpulse = RandomImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.MultiOnLaunched
// ()

void AGasBags_Character_BP_C::MultiOnLaunched()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.MultiOnLaunched");

	AGasBags_Character_BP_C_MultiOnLaunched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.MultiExhaleImpulse
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::MultiExhaleImpulse(const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.MultiExhaleImpulse");

	AGasBags_Character_BP_C_MultiExhaleImpulse_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.MultiNotifyInflationDamage
// ()
// Parameters:
// float                          InflationDamage                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsPointDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PointDamageNormal              (Parm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::MultiNotifyInflationDamage(float InflationDamage, class AActor* DamageCauser, bool IsPointDamage, const struct FVector& PointDamageNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.MultiNotifyInflationDamage");

	AGasBags_Character_BP_C_MultiNotifyInflationDamage_Params params;
	params.InflationDamage = InflationDamage;
	params.DamageCauser = DamageCauser;
	params.IsPointDamage = IsPointDamage;
	params.PointDamageNormal = PointDamageNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP.GasBags_Character_BP_C.ExecuteUbergraph_GasBags_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_C::ExecuteUbergraph_GasBags_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ExecuteUbergraph_GasBags_Character_BP");

	AGasBags_Character_BP_C_ExecuteUbergraph_GasBags_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
