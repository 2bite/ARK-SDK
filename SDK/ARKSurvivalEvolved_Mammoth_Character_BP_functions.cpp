// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Mammoth_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.IsInWater
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMammoth_Character_BP_C::IsInWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.IsInWater");

	AMammoth_Character_BP_C_IsInWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.WaterSprayCharacter
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)

void AMammoth_Character_BP_C::WaterSprayCharacter(class APrimalCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.WaterSprayCharacter");

	AMammoth_Character_BP_C_WaterSprayCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.RefillWaterStat
// ()
// Parameters:
// class UPrimalCharacterStatusComponent* StatusComp                     (Parm, ZeroConstructor, IsPlainOldData)

void AMammoth_Character_BP_C::RefillWaterStat(class UPrimalCharacterStatusComponent* StatusComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.RefillWaterStat");

	AMammoth_Character_BP_C_RefillWaterStat_Params params;
	params.StatusComp = StatusComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPCanTakePassenger
// ()
// Parameters:
// class APrimalCharacter**       Character                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           PassengerSeatIndex             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForcePassenger                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAllowFlyersAndWaterDinos      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMammoth_Character_BP_C::BPCanTakePassenger(class APrimalCharacter** Character, int* PassengerSeatIndex, bool* bForcePassenger, bool* bAllowFlyersAndWaterDinos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPCanTakePassenger");

	AMammoth_Character_BP_C_BPCanTakePassenger_Params params;
	params.Character = Character;
	params.PassengerSeatIndex = PassengerSeatIndex;
	params.bForcePassenger = bForcePassenger;
	params.bAllowFlyersAndWaterDinos = bAllowFlyersAndWaterDinos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.ThrottledTick
// ()

void AMammoth_Character_BP_C::ThrottledTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.ThrottledTick");

	AMammoth_Character_BP_C_ThrottledTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BlueprintAdjustOutputDamage
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMammoth_Character_BP_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BlueprintAdjustOutputDamage");

	AMammoth_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
	params.AttackIndex = AttackIndex;
	params.OriginalDamageAmount = OriginalDamageAmount;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDamageType != nullptr)
		*OutDamageType = params.OutDamageType;
	if (OutDamageImpulse != nullptr)
		*OutDamageImpulse = params.OutDamageImpulse;

	return params.ReturnValue;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.ShortestAngleDifference
// ()
// Parameters:
// float                          AngleCurrent                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Difference                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMammoth_Character_BP_C::ShortestAngleDifference(float AngleCurrent, float AngleTarget, float* Difference)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.ShortestAngleDifference");

	AMammoth_Character_BP_C_ShortestAngleDifference_Params params;
	params.AngleCurrent = AngleCurrent;
	params.AngleTarget = AngleTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Difference != nullptr)
		*Difference = params.Difference;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.GetClampedLookDir
// ()
// Parameters:
// bool                           LimitLowerPitch                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Dir                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMammoth_Character_BP_C::GetClampedLookDir(bool LimitLowerPitch, struct FVector* Dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.GetClampedLookDir");

	AMammoth_Character_BP_C_GetClampedLookDir_Params params;
	params.LimitLowerPitch = LimitLowerPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dir != nullptr)
		*Dir = params.Dir;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.ThrowTrace
// (NetReliable, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void AMammoth_Character_BP_C::STATIC_ThrowTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.ThrowTrace");

	AMammoth_Character_BP_C_ThrowTrace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.GetThrowVelocity
// (Net, NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APrimalCharacter*        ThrownCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AMammoth_Character_BP_C::GetThrowVelocity(class APrimalCharacter* ThrownCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.GetThrowVelocity");

	AMammoth_Character_BP_C_GetThrowVelocity_Params params;
	params.ThrownCharacter = ThrownCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPTimerServer
// ()

void AMammoth_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPTimerServer");

	AMammoth_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.canThrow
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMammoth_Character_BP_C::canThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.canThrow");

	AMammoth_Character_BP_C_canThrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPTimerNonDedicated
// ()

void AMammoth_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPTimerNonDedicated");

	AMammoth_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPDidSetCarriedCharacter
// ()
// Parameters:
// class APrimalCharacter**       PreviousCarriedCharacter       (Parm, ZeroConstructor, IsPlainOldData)

void AMammoth_Character_BP_C::BPDidSetCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPDidSetCarriedCharacter");

	AMammoth_Character_BP_C_BPDidSetCarriedCharacter_Params params;
	params.PreviousCarriedCharacter = PreviousCarriedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPNotifyToggleHUD
// ()
// Parameters:
// bool*                          bHudHidden                     (Parm, ZeroConstructor, IsPlainOldData)

void AMammoth_Character_BP_C::BPNotifyToggleHUD(bool* bHudHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPNotifyToggleHUD");

	AMammoth_Character_BP_C_BPNotifyToggleHUD_Params params;
	params.bHudHidden = bHudHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMammoth_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPTryMultiUse");

	AMammoth_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPGetMultiUseEntries
// (Native, NetResponse, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AMammoth_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPGetMultiUseEntries");

	AMammoth_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.ClearThrow
// ()

void AMammoth_Character_BP_C::ClearThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.ClearThrow");

	AMammoth_Character_BP_C_ClearThrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.LaunchGrabbedCharacter
// ()

void AMammoth_Character_BP_C::LaunchGrabbedCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.LaunchGrabbedCharacter");

	AMammoth_Character_BP_C_LaunchGrabbedCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPDidClearCarriedCharacter
// ()
// Parameters:
// class APrimalCharacter**       PreviousCarriedCharacter       (Parm, ZeroConstructor, IsPlainOldData)

void AMammoth_Character_BP_C::BPDidClearCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPDidClearCarriedCharacter");

	AMammoth_Character_BP_C_BPDidClearCarriedCharacter_Params params;
	params.PreviousCarriedCharacter = PreviousCarriedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.GrabFoundCharacter
// ()

void AMammoth_Character_BP_C::GrabFoundCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.GrabFoundCharacter");

	AMammoth_Character_BP_C_GrabFoundCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.FindProperGrabTarget
// ()
// Parameters:
// class APrimalCharacter*        TestChar                       (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        TargetChar                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMammoth_Character_BP_C::FindProperGrabTarget(class APrimalCharacter* TestChar, class APrimalCharacter** TargetChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.FindProperGrabTarget");

	AMammoth_Character_BP_C_FindProperGrabTarget_Params params;
	params.TestChar = TestChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetChar != nullptr)
		*TargetChar = params.TargetChar;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.CheckProperCanCarry
// ()
// Parameters:
// class APrimalCharacter*        TestActor                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanCarry                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMammoth_Character_BP_C::CheckProperCanCarry(class APrimalCharacter* TestActor, bool* CanCarry)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.CheckProperCanCarry");

	AMammoth_Character_BP_C_CheckProperCanCarry_Params params;
	params.TestActor = TestActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanCarry != nullptr)
		*CanCarry = params.CanCarry;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.IsBetterGrabTarget
// ()
// Parameters:
// class AActor*                  NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMammoth_Character_BP_C::IsBetterGrabTarget(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.IsBetterGrabTarget");

	AMammoth_Character_BP_C_IsBetterGrabTarget_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.GetGrabLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AMammoth_Character_BP_C::GetGrabLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.GetGrabLocation");

	AMammoth_Character_BP_C_GetGrabLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.RetrieveAnyGrabbableCharacter
// (NetReliable, NetRequest, NetResponse, Static, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           FoundCharacter                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMammoth_Character_BP_C::STATIC_RetrieveAnyGrabbableCharacter(bool* FoundCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.RetrieveAnyGrabbableCharacter");

	AMammoth_Character_BP_C_RetrieveAnyGrabbableCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundCharacter != nullptr)
		*FoundCharacter = params.FoundCharacter;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPOverrideGetAttackAnimationIndex
// (NetMulticast, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimMontage*>    AnimationArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AMammoth_Character_BP_C::BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPOverrideGetAttackAnimationIndex");

	AMammoth_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationArray != nullptr)
		*AnimationArray = params.AnimationArray;

	return params.ReturnValue;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPOnStartJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMammoth_Character_BP_C::BPOnStartJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPOnStartJump");

	AMammoth_Character_BP_C_BPOnStartJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.OnPassengerWeaponChanged
// ()
// Parameters:
// class AShooterWeapon*          newWeapon                      (Parm, ZeroConstructor, IsPlainOldData)

void AMammoth_Character_BP_C::OnPassengerWeaponChanged(class AShooterWeapon* newWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.OnPassengerWeaponChanged");

	AMammoth_Character_BP_C_OnPassengerWeaponChanged_Params params;
	params.newWeapon = newWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPNotifyAddPassenger
// ()
// Parameters:
// class APrimalCharacter**       PassengerChar                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void AMammoth_Character_BP_C::BPNotifyAddPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPNotifyAddPassenger");

	AMammoth_Character_BP_C_BPNotifyAddPassenger_Params params;
	params.PassengerChar = PassengerChar;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPNotifyClearPassenger
// ()
// Parameters:
// class APrimalCharacter**       PassengerChar                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void AMammoth_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPNotifyClearPassenger");

	AMammoth_Character_BP_C_BPNotifyClearPassenger_Params params;
	params.PassengerChar = PassengerChar;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.AllowTrumpetDebuff
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMammoth_Character_BP_C::AllowTrumpetDebuff(class APrimalCharacter* Target, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.AllowTrumpetDebuff");

	AMammoth_Character_BP_C_AllowTrumpetDebuff_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.DoTrumpetAttack
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void AMammoth_Character_BP_C::DoTrumpetAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.DoTrumpetAttack");

	AMammoth_Character_BP_C_DoTrumpetAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AMammoth_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPDoAttack");

	AMammoth_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMammoth_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BlueprintCanAttack");

	AMammoth_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMammoth_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BlueprintCanRiderAttack");

	AMammoth_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.UserConstructionScript
// ()

void AMammoth_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.UserConstructionScript");

	AMammoth_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_EndGrab
// ()

void AMammoth_Character_BP_C::AnimNotify_EndGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_EndGrab");

	AMammoth_Character_BP_C_AnimNotify_EndGrab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.TraceGrab
// ()

void AMammoth_Character_BP_C::TraceGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.TraceGrab");

	AMammoth_Character_BP_C_TraceGrab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_StartGrab
// ()

void AMammoth_Character_BP_C::AnimNotify_StartGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_StartGrab");

	AMammoth_Character_BP_C_AnimNotify_StartGrab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_MidGrab
// ()

void AMammoth_Character_BP_C::AnimNotify_MidGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_MidGrab");

	AMammoth_Character_BP_C_AnimNotify_MidGrab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_EndGrabAttack
// ()

void AMammoth_Character_BP_C::AnimNotify_EndGrabAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_EndGrabAttack");

	AMammoth_Character_BP_C_AnimNotify_EndGrabAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_ReleaseGrab
// ()

void AMammoth_Character_BP_C::AnimNotify_ReleaseGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_ReleaseGrab");

	AMammoth_Character_BP_C_AnimNotify_ReleaseGrab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.ClientGrabNotify
// ()

void AMammoth_Character_BP_C::ClientGrabNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.ClientGrabNotify");

	AMammoth_Character_BP_C_ClientGrabNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.ClientThrowNotify
// ()

void AMammoth_Character_BP_C::ClientThrowNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.ClientThrowNotify");

	AMammoth_Character_BP_C_ClientThrowNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.ServerTraceHit
// ()
// Parameters:
// struct FVector                 TraceLoc                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TraceHit                       (Parm, ZeroConstructor, IsPlainOldData)

void AMammoth_Character_BP_C::ServerTraceHit(const struct FVector& TraceLoc, bool TraceHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.ServerTraceHit");

	AMammoth_Character_BP_C_ServerTraceHit_Params params;
	params.TraceLoc = TraceLoc;
	params.TraceHit = TraceHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_TrumpetVFX
// ()

void AMammoth_Character_BP_C::AnimNotify_TrumpetVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_TrumpetVFX");

	AMammoth_Character_BP_C_AnimNotify_TrumpetVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_StopTrumpetVFX
// ()

void AMammoth_Character_BP_C::AnimNotify_StopTrumpetVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_StopTrumpetVFX");

	AMammoth_Character_BP_C_AnimNotify_StopTrumpetVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_TrunkSplash
// ()

void AMammoth_Character_BP_C::AnimNotify_TrunkSplash()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_TrunkSplash");

	AMammoth_Character_BP_C_AnimNotify_TrunkSplash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_Character_BP.Mammoth_Character_BP_C.ExecuteUbergraph_Mammoth_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMammoth_Character_BP_C::ExecuteUbergraph_Mammoth_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.ExecuteUbergraph_Mammoth_Character_BP");

	AMammoth_Character_BP_C_ExecuteUbergraph_Mammoth_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
