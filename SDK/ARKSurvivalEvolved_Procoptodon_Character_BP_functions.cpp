// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Procoptodon_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyBabyAgeIncrement
// ()
// Parameters:
// float*                         PreviousAge                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewAge                         (Parm, ZeroConstructor, IsPlainOldData)

void AProcoptodon_Character_BP_C::BPNotifyBabyAgeIncrement(float* PreviousAge, float* NewAge)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyBabyAgeIncrement");

	AProcoptodon_Character_BP_C_BPNotifyBabyAgeIncrement_Params params;
	params.PreviousAge = PreviousAge;
	params.NewAge = NewAge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPTimerServer
// ()

void AProcoptodon_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPTimerServer");

	AProcoptodon_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.UpdateNursingBuff
// ()
// Parameters:
// bool                           ShouldAdd                      (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        TargetToNurse                  (Parm, ZeroConstructor, IsPlainOldData)

void AProcoptodon_Character_BP_C::UpdateNursingBuff(bool ShouldAdd, class APrimalCharacter* TargetToNurse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.UpdateNursingBuff");

	AProcoptodon_Character_BP_C_UpdateNursingBuff_Params params;
	params.ShouldAdd = ShouldAdd;
	params.TargetToNurse = TargetToNurse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyMateBoostChanged
// ()

void AProcoptodon_Character_BP_C::BPNotifyMateBoostChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyMateBoostChanged");

	AProcoptodon_Character_BP_C_BPNotifyMateBoostChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPTimerNonDedicated
// ()

void AProcoptodon_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPTimerNonDedicated");

	AProcoptodon_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void AProcoptodon_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifySetRider");

	AProcoptodon_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPCharacterSleeped
// ()

void AProcoptodon_Character_BP_C::BPCharacterSleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPCharacterSleeped");

	AProcoptodon_Character_BP_C_BPCharacterSleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void AProcoptodon_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyClearRider");

	AProcoptodon_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ServerStopJump
// ()

void AProcoptodon_Character_BP_C::ServerStopJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ServerStopJump");

	AProcoptodon_Character_BP_C_ServerStopJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPOnMovementModeChangedNotify
// (NetRequest, Exec, Native, NetResponse, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, BlueprintCallable, NetValidate)
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void AProcoptodon_Character_BP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPOnMovementModeChangedNotify");

	AProcoptodon_Character_BP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.GetLaunchDirection
// ()
// Parameters:
// class AActor*                  CalcActor                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AProcoptodon_Character_BP_C::GetLaunchDirection(class AActor* CalcActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.GetLaunchDirection");

	AProcoptodon_Character_BP_C_GetLaunchDirection_Params params;
	params.CalcActor = CalcActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.LaunchAtTracePoint
// ()

void AProcoptodon_Character_BP_C::LaunchAtTracePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.LaunchAtTracePoint");

	AProcoptodon_Character_BP_C_LaunchAtTracePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ExecuteJump
// ()

void AProcoptodon_Character_BP_C::ExecuteJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ExecuteJump");

	AProcoptodon_Character_BP_C_ExecuteJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Prep Jump
// ()

void AProcoptodon_Character_BP_C::Prep_Jump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Prep Jump");

	AProcoptodon_Character_BP_C_Prep_Jump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ShouldStopJumpRotation
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AProcoptodon_Character_BP_C::ShouldStopJumpRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ShouldStopJumpRotation");

	AProcoptodon_Character_BP_C_ShouldStopJumpRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.GetClampedLookDir
// ()
// Parameters:
// bool                           LimitLowerPitch                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AProcoptodon_Character_BP_C::GetClampedLookDir(bool LimitLowerPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.GetClampedLookDir");

	AProcoptodon_Character_BP_C_GetClampedLookDir_Params params;
	params.LimitLowerPitch = LimitLowerPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.JumpingTrace
// (Native, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, BlueprintCallable, NetValidate)

void AProcoptodon_Character_BP_C::JumpingTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.JumpingTrace");

	AProcoptodon_Character_BP_C_JumpingTrace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ShortestAngleDistance
// ()
// Parameters:
// float                          AngleCurrent                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Difference                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProcoptodon_Character_BP_C::ShortestAngleDistance(float AngleCurrent, float AngleTarget, float* Difference)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ShortestAngleDistance");

	AProcoptodon_Character_BP_C_ShortestAngleDistance_Params params;
	params.AngleCurrent = AngleCurrent;
	params.AngleTarget = AngleTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Difference != nullptr)
		*Difference = params.Difference;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyCarriedDinoBabyAgeIncrement
// ()
// Parameters:
// class APrimalDinoCharacter**   AgingCarriedDino               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PreviousAge                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewAge                         (Parm, ZeroConstructor, IsPlainOldData)

void AProcoptodon_Character_BP_C::BPNotifyCarriedDinoBabyAgeIncrement(class APrimalDinoCharacter** AgingCarriedDino, float* PreviousAge, float* NewAge)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyCarriedDinoBabyAgeIncrement");

	AProcoptodon_Character_BP_C_BPNotifyCarriedDinoBabyAgeIncrement_Params params;
	params.AgingCarriedDino = AgingCarriedDino;
	params.PreviousAge = PreviousAge;
	params.NewAge = NewAge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Find Leap Dir
// (NetRequest, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, BlueprintCallable, NetValidate)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AProcoptodon_Character_BP_C::Find_Leap_Dir()
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Find Leap Dir");

	AProcoptodon_Character_BP_C_Find_Leap_Dir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyClearPassenger
// ()
// Parameters:
// class APrimalCharacter**       PassengerChar                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void AProcoptodon_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyClearPassenger");

	AProcoptodon_Character_BP_C_BPNotifyClearPassenger_Params params;
	params.PassengerChar = PassengerChar;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AProcoptodon_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BlueprintCanRiderAttack");

	AProcoptodon_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyAddPassenger
// ()
// Parameters:
// class APrimalCharacter**       PassengerChar                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void AProcoptodon_Character_BP_C::BPNotifyAddPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyAddPassenger");

	AProcoptodon_Character_BP_C_BPNotifyAddPassenger_Params params;
	params.PassengerChar = PassengerChar;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BlueprintAdjustOutputDamage
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AProcoptodon_Character_BP_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BlueprintAdjustOutputDamage");

	AProcoptodon_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
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


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Can Pouch Carry
// (Net, NetRequest, Static, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, NetValidate)
// Parameters:
// class AActor*                  GrabTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SkipCarryCheck                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AProcoptodon_Character_BP_C::STATIC_Can_Pouch_Carry(class AActor* GrabTarget, bool SkipCarryCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Can Pouch Carry");

	AProcoptodon_Character_BP_C_Can_Pouch_Carry_Params params;
	params.GrabTarget = GrabTarget;
	params.SkipCarryCheck = SkipCarryCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AProcoptodon_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPServerHandleNetExecCommand");

	AProcoptodon_Character_BP_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.CreatePouchGrabbableEntry
// (Native, Event, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, BlueprintCallable, NetValidate)
// Parameters:
// class APrimalCharacter*        CharToAdd                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Name                           (Parm, ZeroConstructor)
// struct FMultiUseEntry          MultiUseEntry                  (Parm, OutParm)

void AProcoptodon_Character_BP_C::CreatePouchGrabbableEntry(class APrimalCharacter* CharToAdd, const class FString& Name, struct FMultiUseEntry* MultiUseEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.CreatePouchGrabbableEntry");

	AProcoptodon_Character_BP_C_CreatePouchGrabbableEntry_Params params;
	params.CharToAdd = CharToAdd;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntry != nullptr)
		*MultiUseEntry = params.MultiUseEntry;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AProcoptodon_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPTryMultiUse");

	AProcoptodon_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPClientDoMultiUse
// (Exec, NetResponse, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, BlueprintCallable, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AProcoptodon_Character_BP_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPClientDoMultiUse");

	AProcoptodon_Character_BP_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AProcoptodon_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPDoAttack");

	AProcoptodon_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, BlueprintCallable, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AProcoptodon_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPGetMultiUseEntries");

	AProcoptodon_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.UserConstructionScript
// ()

void AProcoptodon_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.UserConstructionScript");

	AProcoptodon_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.TryPouchGrab
// ()
// Parameters:
// class APrimalCharacter*        TargetCharacter                (Parm, ZeroConstructor, IsPlainOldData)

void AProcoptodon_Character_BP_C::TryPouchGrab(class APrimalCharacter* TargetCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.TryPouchGrab");

	AProcoptodon_Character_BP_C_TryPouchGrab_Params params;
	params.TargetCharacter = TargetCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.AnimNotify_KickHop
// ()

void AProcoptodon_Character_BP_C::AnimNotify_KickHop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.AnimNotify_KickHop");

	AProcoptodon_Character_BP_C_AnimNotify_KickHop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BP_OnJumpPressed
// ()

void AProcoptodon_Character_BP_C::BP_OnJumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BP_OnJumpPressed");

	AProcoptodon_Character_BP_C_BP_OnJumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BP_OnJumpReleased
// ()

void AProcoptodon_Character_BP_C::BP_OnJumpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BP_OnJumpReleased");

	AProcoptodon_Character_BP_C_BP_OnJumpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.DelayedPress
// ()

void AProcoptodon_Character_BP_C::DelayedPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.DelayedPress");

	AProcoptodon_Character_BP_C_DelayedPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Request Jump Response
// ()
// Parameters:
// bool                           isHoldingJump                  (Parm, ZeroConstructor, IsPlainOldData)

void AProcoptodon_Character_BP_C::Request_Jump_Response(bool isHoldingJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Request Jump Response");

	AProcoptodon_Character_BP_C_Request_Jump_Response_Params params;
	params.isHoldingJump = isHoldingJump;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Multi_SetPreventMovement
// ()
// Parameters:
// bool                           NewPreventMovement             (Parm, ZeroConstructor, IsPlainOldData)

void AProcoptodon_Character_BP_C::Multi_SetPreventMovement(bool NewPreventMovement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Multi_SetPreventMovement");

	AProcoptodon_Character_BP_C_Multi_SetPreventMovement_Params params;
	params.NewPreventMovement = NewPreventMovement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.DelayedClearJumping
// ()

void AProcoptodon_Character_BP_C::DelayedClearJumping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.DelayedClearJumping");

	AProcoptodon_Character_BP_C_DelayedClearJumping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Server_TraceTargetDir
// ()
// Parameters:
// struct FVector                 AimLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AimHit                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           JumpInstant                    (Parm, ZeroConstructor, IsPlainOldData)

void AProcoptodon_Character_BP_C::Server_TraceTargetDir(const struct FVector& AimLoc, bool AimHit, bool JumpInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Server_TraceTargetDir");

	AProcoptodon_Character_BP_C_Server_TraceTargetDir_Params params;
	params.AimLoc = AimLoc;
	params.AimHit = AimHit;
	params.JumpInstant = JumpInstant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.StartJumpIdle
// ()

void AProcoptodon_Character_BP_C::StartJumpIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.StartJumpIdle");

	AProcoptodon_Character_BP_C_StartJumpIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ClearJump
// ()
// Parameters:
// bool                           ForceImmediateClear            (Parm, ZeroConstructor, IsPlainOldData)

void AProcoptodon_Character_BP_C::ClearJump(bool ForceImmediateClear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ClearJump");

	AProcoptodon_Character_BP_C_ClearJump_Params params;
	params.ForceImmediateClear = ForceImmediateClear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Multi_TraceTargetDir
// ()
// Parameters:
// struct FVector                 AimLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AimHit                         (Parm, ZeroConstructor, IsPlainOldData)

void AProcoptodon_Character_BP_C::Multi_TraceTargetDir(const struct FVector& AimLoc, bool AimHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Multi_TraceTargetDir");

	AProcoptodon_Character_BP_C_Multi_TraceTargetDir_Params params;
	params.AimLoc = AimLoc;
	params.AimHit = AimHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.UpdateAllJumpRotation
// ()

void AProcoptodon_Character_BP_C::UpdateAllJumpRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.UpdateAllJumpRotation");

	AProcoptodon_Character_BP_C_UpdateAllJumpRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.UpdateJumpRotation
// ()

void AProcoptodon_Character_BP_C::UpdateJumpRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.UpdateJumpRotation");

	AProcoptodon_Character_BP_C_UpdateJumpRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.AnimNotify_JumpStart
// ()

void AProcoptodon_Character_BP_C::AnimNotify_JumpStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.AnimNotify_JumpStart");

	AProcoptodon_Character_BP_C_AnimNotify_JumpStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.RequestJumpReady
// ()

void AProcoptodon_Character_BP_C::RequestJumpReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.RequestJumpReady");

	AProcoptodon_Character_BP_C_RequestJumpReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ServerArrestMovement
// ()

void AProcoptodon_Character_BP_C::ServerArrestMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ServerArrestMovement");

	AProcoptodon_Character_BP_C_ServerArrestMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ResetArrestMovement
// ()

void AProcoptodon_Character_BP_C::ResetArrestMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ResetArrestMovement");

	AProcoptodon_Character_BP_C_ResetArrestMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.DelayedCarryingResponseBehavior
// ()

void AProcoptodon_Character_BP_C::DelayedCarryingResponseBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.DelayedCarryingResponseBehavior");

	AProcoptodon_Character_BP_C_DelayedCarryingResponseBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ExecuteUbergraph_Procoptodon_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProcoptodon_Character_BP_C::ExecuteUbergraph_Procoptodon_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ExecuteUbergraph_Procoptodon_Character_BP");

	AProcoptodon_Character_BP_C_ExecuteUbergraph_Procoptodon_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
