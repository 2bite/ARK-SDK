// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Bigfoot_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.UpdateAttackAnimWeights
// (NetReliable, NetRequest, Native, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, NetClient)
// Parameters:
// int                            AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::UpdateAttackAnimWeights(int AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.UpdateAttackAnimWeights");

	ABigfoot_Character_BP_C_UpdateAttackAnimWeights_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPNotifySetRider");

	ABigfoot_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPNotifyAddPassenger
// ()
// Parameters:
// class APrimalCharacter**       PassengerChar                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::BPNotifyAddPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPNotifyAddPassenger");

	ABigfoot_Character_BP_C_BPNotifyAddPassenger_Params params;
	params.PassengerChar = PassengerChar;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPNotifyClearPassenger
// ()
// Parameters:
// class APrimalCharacter**       PassengerChar                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPNotifyClearPassenger");

	ABigfoot_Character_BP_C_BPNotifyClearPassenger_Params params;
	params.PassengerChar = PassengerChar;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.CanJumpInternal
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABigfoot_Character_BP_C::CanJumpInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.CanJumpInternal");

	ABigfoot_Character_BP_C_CanJumpInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.RemovePassengers
// ()

void ABigfoot_Character_BP_C::RemovePassengers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.RemovePassengers");

	ABigfoot_Character_BP_C_RemovePassengers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABigfoot_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BlueprintCanAttack");

	ABigfoot_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABigfoot_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BlueprintCanRiderAttack");

	ABigfoot_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABigfoot_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPTryMultiUse");

	ABigfoot_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPGetMultiUseEntries
// (Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, NetClient)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABigfoot_Character_BP_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPGetMultiUseEntries");

	ABigfoot_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Update Non Dedi Limits
// ()

void ABigfoot_Character_BP_C::Update_Non_Dedi_Limits()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Update Non Dedi Limits");

	ABigfoot_Character_BP_C_Update_Non_Dedi_Limits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.UpdateNonDediActive
// ()

void ABigfoot_Character_BP_C::UpdateNonDediActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.UpdateNonDediActive");

	ABigfoot_Character_BP_C_UpdateNonDediActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.UpdateCrosshair
// ()

void ABigfoot_Character_BP_C::UpdateCrosshair()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.UpdateCrosshair");

	ABigfoot_Character_BP_C_UpdateCrosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.DrawCrosshairIfNeeded
// ()

void ABigfoot_Character_BP_C::DrawCrosshairIfNeeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.DrawCrosshairIfNeeded");

	ABigfoot_Character_BP_C_DrawCrosshairIfNeeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Get Throw Anim
// ()
// Parameters:
// bool                           overheadThrow                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            StartThrowAnim                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::Get_Throw_Anim(bool overheadThrow, class UAnimMontage** StartThrowAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Get Throw Anim");

	ABigfoot_Character_BP_C_Get_Throw_Anim_Params params;
	params.overheadThrow = overheadThrow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StartThrowAnim != nullptr)
		*StartThrowAnim = params.StartThrowAnim;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.IsStartThrowAnimPlaying
// ()
// Parameters:
// bool                           IsPlaying                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::IsStartThrowAnimPlaying(bool* IsPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.IsStartThrowAnimPlaying");

	ABigfoot_Character_BP_C_IsStartThrowAnimPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlaying != nullptr)
		*IsPlaying = params.IsPlaying;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.GetStartThrowAnim
// ()
// Parameters:
// bool                           overheadThrow                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            StartThrowAnim                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::GetStartThrowAnim(bool overheadThrow, class UAnimMontage** StartThrowAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.GetStartThrowAnim");

	ABigfoot_Character_BP_C_GetStartThrowAnim_Params params;
	params.overheadThrow = overheadThrow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StartThrowAnim != nullptr)
		*StartThrowAnim = params.StartThrowAnim;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.isGrabbing
// ()
// Parameters:
// bool                           isGrabbing                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::isGrabbing(bool* isGrabbing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.isGrabbing");

	ABigfoot_Character_BP_C_isGrabbing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isGrabbing != nullptr)
		*isGrabbing = params.isGrabbing;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.On Throw Released
// ()
// Parameters:
// bool                           releasedOverhead               (Parm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::On_Throw_Released(bool releasedOverhead)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.On Throw Released");

	ABigfoot_Character_BP_C_On_Throw_Released_Params params;
	params.releasedOverhead = releasedOverhead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.On Throw Pressed
// ()
// Parameters:
// bool                           overheadThrow                  (Parm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::On_Throw_Pressed(bool overheadThrow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.On Throw Pressed");

	ABigfoot_Character_BP_C_On_Throw_Pressed_Params params;
	params.overheadThrow = overheadThrow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.IsThrowing
// ()
// Parameters:
// bool                           retValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::IsThrowing(bool* retValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.IsThrowing");

	ABigfoot_Character_BP_C_IsThrowing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retValue != nullptr)
		*retValue = params.retValue;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.GetLaunchDirection
// ()
// Parameters:
// struct FVector                 NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::GetLaunchDirection(struct FVector* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.GetLaunchDirection");

	ABigfoot_Character_BP_C_GetLaunchDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.LaunchAtTracePoint
// ()

void ABigfoot_Character_BP_C::LaunchAtTracePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.LaunchAtTracePoint");

	ABigfoot_Character_BP_C_LaunchAtTracePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ThrowGrabbedCharacters
// ()

void ABigfoot_Character_BP_C::ThrowGrabbedCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ThrowGrabbedCharacters");

	ABigfoot_Character_BP_C_ThrowGrabbedCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPOnMovementModeChangedNotify");

	ABigfoot_Character_BP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPNotifyClearRider");

	ABigfoot_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPCharacterSleeped
// ()

void ABigfoot_Character_BP_C::BPCharacterSleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPCharacterSleeped");

	ABigfoot_Character_BP_C_BPCharacterSleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPDoAttack");

	ABigfoot_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ServerStopThrow
// ()

void ABigfoot_Character_BP_C::ServerStopThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ServerStopThrow");

	ABigfoot_Character_BP_C_ServerStopThrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPTimerNonDedicated
// ()

void ABigfoot_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPTimerNonDedicated");

	ABigfoot_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ProcessThrow
// ()

void ABigfoot_Character_BP_C::ProcessThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ProcessThrow");

	ABigfoot_Character_BP_C_ProcessThrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.IsBigfootSubmerged
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABigfoot_Character_BP_C::IsBigfootSubmerged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.IsBigfootSubmerged");

	ABigfoot_Character_BP_C_IsBigfootSubmerged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ShortestAngleDistance
// ()
// Parameters:
// float                          AngleCurrent                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Difference                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::ShortestAngleDistance(float AngleCurrent, float AngleTarget, float* Difference)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ShortestAngleDistance");

	ABigfoot_Character_BP_C_ShortestAngleDistance_Params params;
	params.AngleCurrent = AngleCurrent;
	params.AngleTarget = AngleTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Difference != nullptr)
		*Difference = params.Difference;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.GetClampedLookDir
// ()
// Parameters:
// bool                           LimitLowerPitch                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABigfoot_Character_BP_C::GetClampedLookDir(bool LimitLowerPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.GetClampedLookDir");

	ABigfoot_Character_BP_C_GetClampedLookDir_Params params;
	params.LimitLowerPitch = LimitLowerPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ThrowTrace
// (Native, Static, Public, Protected, Delegate, NetServer, NetClient)

void ABigfoot_Character_BP_C::STATIC_ThrowTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ThrowTrace");

	ABigfoot_Character_BP_C_ThrowTrace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.CarryDino
// ()
// Parameters:
// class APrimalCharacter*        dinoToCarry                    (Parm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::CarryDino(class APrimalCharacter* dinoToCarry)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.CarryDino");

	ABigfoot_Character_BP_C_CarryDino_Params params;
	params.dinoToCarry = dinoToCarry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BlueprintAdjustOutputDamage
// (NetRequest, NetResponse, Static, Public, Protected, Delegate, NetServer, NetClient)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABigfoot_Character_BP_C::STATIC_BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BlueprintAdjustOutputDamage");

	ABigfoot_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
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


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABigfoot_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPHandleOnStopTargeting");

	ABigfoot_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.CanThrowRidingDino
// ()
// Parameters:
// bool                           canThrow                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::CanThrowRidingDino(bool* canThrow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.CanThrowRidingDino");

	ABigfoot_Character_BP_C_CanThrowRidingDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canThrow != nullptr)
		*canThrow = params.canThrow;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABigfoot_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPHandleControllerInitiatedAttack");

	ABigfoot_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPModifyHarvestDamage
// ()
// Parameters:
// class UPrimalHarvestingComponent** harvestComponent               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         inDamage                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABigfoot_Character_BP_C::BPModifyHarvestDamage(class UPrimalHarvestingComponent** harvestComponent, float* inDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPModifyHarvestDamage");

	ABigfoot_Character_BP_C_BPModifyHarvestDamage_Params params;
	params.harvestComponent = harvestComponent;
	params.inDamage = inDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.UserConstructionScript
// ()

void ABigfoot_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.UserConstructionScript");

	ABigfoot_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_198
// ()

void ABigfoot_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_198()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_198");

	ABigfoot_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_198_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_197
// ()

void ABigfoot_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_197()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_197");

	ABigfoot_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_197_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_196
// ()

void ABigfoot_Character_BP_C::InpActEvt_Prone_K2Node_InputActionEvent_196()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_196");

	ABigfoot_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_196_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_195
// ()

void ABigfoot_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_195()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_195");

	ABigfoot_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_195_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_194
// ()

void ABigfoot_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_194()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_194");

	ABigfoot_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_194_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ServerRequestGrab
// ()
// Parameters:
// bool                           ButtonHeld                     (Parm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::ServerRequestGrab(bool ButtonHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ServerRequestGrab");

	ABigfoot_Character_BP_C_ServerRequestGrab_Params params;
	params.ButtonHeld = ButtonHeld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ServerRequestThrow
// ()
// Parameters:
// bool                           ButtonHeld                     (Parm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::ServerRequestThrow(bool ButtonHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ServerRequestThrow");

	ABigfoot_Character_BP_C_ServerRequestThrow_Params params;
	params.ButtonHeld = ButtonHeld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.DelayedGrab
// ()

void ABigfoot_Character_BP_C::DelayedGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.DelayedGrab");

	ABigfoot_Character_BP_C_DelayedGrab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Server_TraceTargetDir
// ()
// Parameters:
// struct FVector                 AimLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AimHit                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ThrowInstant                   (Parm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::Server_TraceTargetDir(const struct FVector& AimLoc, bool AimHit, bool ThrowInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Server_TraceTargetDir");

	ABigfoot_Character_BP_C_Server_TraceTargetDir_Params params;
	params.AimLoc = AimLoc;
	params.AimHit = AimHit;
	params.ThrowInstant = ThrowInstant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Multi_TraceTargetDir
// ()
// Parameters:
// struct FVector                 AimLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AimHit                         (Parm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::Multi_TraceTargetDir(const struct FVector& AimLoc, bool AimHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Multi_TraceTargetDir");

	ABigfoot_Character_BP_C_Multi_TraceTargetDir_Params params;
	params.AimLoc = AimLoc;
	params.AimHit = AimHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Request Throw
// ()
// Parameters:
// bool                           IsHolding                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ToggleAction                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           overheadThrow                  (Parm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::Request_Throw(bool IsHolding, bool ToggleAction, bool overheadThrow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Request Throw");

	ABigfoot_Character_BP_C_Request_Throw_Params params;
	params.IsHolding = IsHolding;
	params.ToggleAction = ToggleAction;
	params.overheadThrow = overheadThrow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.StartThrowIdle
// ()
// Parameters:
// bool                           overheadThrow                  (Parm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::StartThrowIdle(bool overheadThrow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.StartThrowIdle");

	ABigfoot_Character_BP_C_StartThrowIdle_Params params;
	params.overheadThrow = overheadThrow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Multi_SetPreventMovement
// ()
// Parameters:
// bool                           NewPreventMovement             (Parm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::Multi_SetPreventMovement(bool NewPreventMovement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Multi_SetPreventMovement");

	ABigfoot_Character_BP_C_Multi_SetPreventMovement_Params params;
	params.NewPreventMovement = NewPreventMovement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ClearThrow
// ()

void ABigfoot_Character_BP_C::ClearThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ClearThrow");

	ABigfoot_Character_BP_C_ClearThrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.DelayedThrowPress
// ()

void ABigfoot_Character_BP_C::DelayedThrowPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.DelayedThrowPress");

	ABigfoot_Character_BP_C_DelayedThrowPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.DelayedClearThrowing
// ()

void ABigfoot_Character_BP_C::DelayedClearThrowing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.DelayedClearThrowing");

	ABigfoot_Character_BP_C_DelayedClearThrowing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	ABigfoot_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.RemovePassengers_Server
// ()

void ABigfoot_Character_BP_C::RemovePassengers_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.RemovePassengers_Server");

	ABigfoot_Character_BP_C_RemovePassengers_Server_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ExecuteUbergraph_Bigfoot_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_C::ExecuteUbergraph_Bigfoot_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ExecuteUbergraph_Bigfoot_Character_BP");

	ABigfoot_Character_BP_C_ExecuteUbergraph_Bigfoot_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
