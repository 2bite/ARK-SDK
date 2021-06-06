// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Crab_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Crab_Character_BP.Crab_Character_BP_C.BPCanCryo
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACrab_Character_BP_C::BPCanCryo(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPCanCryo");

	ACrab_Character_BP_C_BPCanCryo_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Crab_Character_BP.Crab_Character_BP_C.BPGetDragSocketDinoName
// ()
// Parameters:
// class APrimalDinoCharacter**   aGrabbedDino                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ACrab_Character_BP_C::BPGetDragSocketDinoName(class APrimalDinoCharacter** aGrabbedDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPGetDragSocketDinoName");

	ACrab_Character_BP_C_BPGetDragSocketDinoName_Params params;
	params.aGrabbedDino = aGrabbedDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Crab_Character_BP.Crab_Character_BP_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPOnMovementModeChangedNotify");

	ACrab_Character_BP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.Should Stop Jump Rotation
// ()
// Parameters:
// bool                           return_value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::Should_Stop_Jump_Rotation(bool* return_value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Should Stop Jump Rotation");

	ACrab_Character_BP_C_Should_Stop_Jump_Rotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (return_value != nullptr)
		*return_value = params.return_value;
}


// Function Crab_Character_BP.Crab_Character_BP_C.BPShouldCancelDoAttack
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACrab_Character_BP_C::BPShouldCancelDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPShouldCancelDoAttack");

	ACrab_Character_BP_C_BPShouldCancelDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Crab_Character_BP.Crab_Character_BP_C.BlueprintAdjustOutputDamage
// (NetRequest, Exec, Static, NetMulticast, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACrab_Character_BP_C::STATIC_BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BlueprintAdjustOutputDamage");

	ACrab_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
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


// Function Crab_Character_BP.Crab_Character_BP_C.ImpulseTowardTarget
// ()
// Parameters:
// bool                           IsApex                         (Parm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::ImpulseTowardTarget(bool IsApex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.ImpulseTowardTarget");

	ACrab_Character_BP_C_ImpulseTowardTarget_Params params;
	params.IsApex = IsApex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.Shortest Angle Distance
// ()
// Parameters:
// float                          AngleCurrent                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Difference                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::Shortest_Angle_Distance(float AngleCurrent, float AngleTarget, float* Difference)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Shortest Angle Distance");

	ACrab_Character_BP_C_Shortest_Angle_Distance_Params params;
	params.AngleCurrent = AngleCurrent;
	params.AngleTarget = AngleTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Difference != nullptr)
		*Difference = params.Difference;
}


// Function Crab_Character_BP.Crab_Character_BP_C.StopThrowOrReleaseGrab
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReleasedCharacter              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::StopThrowOrReleaseGrab(int index, bool* ReleasedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.StopThrowOrReleaseGrab");

	ACrab_Character_BP_C_StopThrowOrReleaseGrab_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReleasedCharacter != nullptr)
		*ReleasedCharacter = params.ReleasedCharacter;
}


// Function Crab_Character_BP.Crab_Character_BP_C.BPHandleOnStopFire
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACrab_Character_BP_C::BPHandleOnStopFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPHandleOnStopFire");

	ACrab_Character_BP_C_BPHandleOnStopFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Crab_Character_BP.Crab_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACrab_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPHandleOnStopTargeting");

	ACrab_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Crab_Character_BP.Crab_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACrab_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPHandleControllerInitiatedAttack");

	ACrab_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Crab_Character_BP.Crab_Character_BP_C.BPAdjustAttackIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ACrab_Character_BP_C::BPAdjustAttackIndex(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPAdjustAttackIndex");

	ACrab_Character_BP_C_BPAdjustAttackIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Crab_Character_BP.Crab_Character_BP_C.ProcessThrow
// ()

void ACrab_Character_BP_C::ProcessThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.ProcessThrow");

	ACrab_Character_BP_C_ProcessThrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.ProcessJump
// ()

void ACrab_Character_BP_C::ProcessJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.ProcessJump");

	ACrab_Character_BP_C_ProcessJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.BP_InterceptMoveForward
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACrab_Character_BP_C::BP_InterceptMoveForward(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BP_InterceptMoveForward");

	ACrab_Character_BP_C_BP_InterceptMoveForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Crab_Character_BP.Crab_Character_BP_C.BP_InterceptMoveRight
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACrab_Character_BP_C::BP_InterceptMoveRight(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BP_InterceptMoveRight");

	ACrab_Character_BP_C_BP_InterceptMoveRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Crab_Character_BP.Crab_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPNotifySetRider");

	ACrab_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.Crab Adjust Attack Index
// ()
// Parameters:
// int                            InputPin                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            RetAttackIndex                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::Crab_Adjust_Attack_Index(int InputPin, int* RetAttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Crab Adjust Attack Index");

	ACrab_Character_BP_C_Crab_Adjust_Attack_Index_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetAttackIndex != nullptr)
		*RetAttackIndex = params.RetAttackIndex;
}


// Function Crab_Character_BP.Crab_Character_BP_C.HasSecondaryCarriedChar
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACrab_Character_BP_C::HasSecondaryCarriedChar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.HasSecondaryCarriedChar");

	ACrab_Character_BP_C_HasSecondaryCarriedChar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Crab_Character_BP.Crab_Character_BP_C.IsCarryingCharacterSecondary
// ()
// Parameters:
// bool                           OutputPin                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::IsCarryingCharacterSecondary(bool* OutputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.IsCarryingCharacterSecondary");

	ACrab_Character_BP_C_IsCarryingCharacterSecondary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputPin != nullptr)
		*OutputPin = params.OutputPin;
}


// Function Crab_Character_BP.Crab_Character_BP_C.GetCarriedCharacterSecondary
// ()
// Parameters:
// class APrimalCharacter*        OutputPin                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::GetCarriedCharacterSecondary(class APrimalCharacter** OutputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.GetCarriedCharacterSecondary");

	ACrab_Character_BP_C_GetCarriedCharacterSecondary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputPin != nullptr)
		*OutputPin = params.OutputPin;
}


// Function Crab_Character_BP.Crab_Character_BP_C.LaunchAtTracePoint
// ()

void ACrab_Character_BP_C::LaunchAtTracePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.LaunchAtTracePoint");

	ACrab_Character_BP_C_LaunchAtTracePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.GetClampedLookDir
// ()
// Parameters:
// bool                           LimitLowerPitch                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ACrab_Character_BP_C::GetClampedLookDir(bool LimitLowerPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.GetClampedLookDir");

	ACrab_Character_BP_C_GetClampedLookDir_Params params;
	params.LimitLowerPitch = LimitLowerPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Crab_Character_BP.Crab_Character_BP_C.ThrowTrace
// (Native, Static, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ACrab_Character_BP_C::STATIC_ThrowTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.ThrowTrace");

	ACrab_Character_BP_C_ThrowTrace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.BPAdjustDamage
// (Native, Event, NetResponse, Static, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACrab_Character_BP_C::STATIC_BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPAdjustDamage");

	ACrab_Character_BP_C_BPAdjustDamage_Params params;
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


// Function Crab_Character_BP.Crab_Character_BP_C.IsCrabSubmerged
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACrab_Character_BP_C::IsCrabSubmerged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.IsCrabSubmerged");

	ACrab_Character_BP_C_IsCrabSubmerged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Crab_Character_BP.Crab_Character_BP_C.SlamIfDoubleClicking
// ()
// Parameters:
// int                            CurrentAttackIndex             (Parm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::SlamIfDoubleClicking(int CurrentAttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.SlamIfDoubleClicking");

	ACrab_Character_BP_C_SlamIfDoubleClicking_Params params;
	params.CurrentAttackIndex = CurrentAttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.PlayGrabbedIdle
// ()
// Parameters:
// bool                           IsMoving                       (Parm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::PlayGrabbedIdle(bool IsMoving)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.PlayGrabbedIdle");

	ACrab_Character_BP_C_PlayGrabbedIdle_Params params;
	params.IsMoving = IsMoving;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.BPTimerServer
// ()

void ACrab_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPTimerServer");

	ACrab_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.GrabFoundCharacter
// ()

void ACrab_Character_BP_C::GrabFoundCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.GrabFoundCharacter");

	ACrab_Character_BP_C_GrabFoundCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.Is Better Grab Target
// ()
// Parameters:
// class AActor*                  NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewTargHitLoc                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACrab_Character_BP_C::Is_Better_Grab_Target(class AActor* NewTarget, const struct FVector& NewTargHitLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Is Better Grab Target");

	ACrab_Character_BP_C_Is_Better_Grab_Target_Params params;
	params.NewTarget = NewTarget;
	params.NewTargHitLoc = NewTargHitLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Crab_Character_BP.Crab_Character_BP_C.Find Proper Grab Target
// ()
// Parameters:
// class APrimalCharacter*        TestChar                       (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        TargetChar                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::Find_Proper_Grab_Target(class APrimalCharacter* TestChar, class APrimalCharacter** TargetChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Find Proper Grab Target");

	ACrab_Character_BP_C_Find_Proper_Grab_Target_Params params;
	params.TestChar = TestChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetChar != nullptr)
		*TargetChar = params.TargetChar;
}


// Function Crab_Character_BP.Crab_Character_BP_C.Check Proper Can Carry
// ()
// Parameters:
// class APrimalCharacter*        TestActor                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanCarry                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::Check_Proper_Can_Carry(class APrimalCharacter* TestActor, bool* CanCarry)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Check Proper Can Carry");

	ACrab_Character_BP_C_Check_Proper_Can_Carry_Params params;
	params.TestActor = TestActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanCarry != nullptr)
		*CanCarry = params.CanCarry;
}


// Function Crab_Character_BP.Crab_Character_BP_C.Throw Grabbed Characters
// ()

void ACrab_Character_BP_C::Throw_Grabbed_Characters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Throw Grabbed Characters");

	ACrab_Character_BP_C_Throw_Grabbed_Characters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.Retrieve Any Grabbable Character
// (NetReliable, NetRequest, Native, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           FoundCharacter                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::Retrieve_Any_Grabbable_Character(bool* FoundCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Retrieve Any Grabbable Character");

	ACrab_Character_BP_C_Retrieve_Any_Grabbable_Character_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundCharacter != nullptr)
		*FoundCharacter = params.FoundCharacter;
}


// Function Crab_Character_BP.Crab_Character_BP_C.GetGrabClawLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ACrab_Character_BP_C::GetGrabClawLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.GetGrabClawLocation");

	ACrab_Character_BP_C_GetGrabClawLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Crab_Character_BP.Crab_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPNotifyClearRider");

	ACrab_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.BPCharacterSleeped
// ()

void ACrab_Character_BP_C::BPCharacterSleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPCharacterSleeped");

	ACrab_Character_BP_C_BPCharacterSleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.BPTimerNonDedicated
// ()

void ACrab_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPTimerNonDedicated");

	ACrab_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPDoAttack");

	ACrab_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.Server_StopThrow
// ()

void ACrab_Character_BP_C::Server_StopThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Server_StopThrow");

	ACrab_Character_BP_C_Server_StopThrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACrab_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BlueprintCanRiderAttack");

	ACrab_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Crab_Character_BP.Crab_Character_BP_C.SharedCanAttack
// ()
// Parameters:
// int                            AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanAttack                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::SharedCanAttack(int AttackIndex, bool* CanAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.SharedCanAttack");

	ACrab_Character_BP_C_SharedCanAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanAttack != nullptr)
		*CanAttack = params.CanAttack;
}


// Function Crab_Character_BP.Crab_Character_BP_C.BlueprintCanAttack
// (NetRequest, Exec, Native, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACrab_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BlueprintCanAttack");

	ACrab_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Crab_Character_BP.Crab_Character_BP_C.GetLaunchDirection
// ()
// Parameters:
// class AActor*                  CalcActor                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ACrab_Character_BP_C::GetLaunchDirection(class AActor* CalcActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.GetLaunchDirection");

	ACrab_Character_BP_C_GetLaunchDirection_Params params;
	params.CalcActor = CalcActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Crab_Character_BP.Crab_Character_BP_C.BPDidClearCarriedCharacter
// ()
// Parameters:
// class APrimalCharacter**       PreviousCarriedCharacter       (Parm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::BPDidClearCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPDidClearCarriedCharacter");

	ACrab_Character_BP_C_BPDidClearCarriedCharacter_Params params;
	params.PreviousCarriedCharacter = PreviousCarriedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.BPDidSetCarriedCharacter
// ()
// Parameters:
// class APrimalCharacter**       PreviousCarriedCharacter       (Parm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::BPDidSetCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPDidSetCarriedCharacter");

	ACrab_Character_BP_C_BPDidSetCarriedCharacter_Params params;
	params.PreviousCarriedCharacter = PreviousCarriedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.UserConstructionScript
// ()

void ACrab_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.UserConstructionScript");

	ACrab_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_156
// ()

void ACrab_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_156()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_156");

	ACrab_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_156_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_155
// ()

void ACrab_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_155()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_155");

	ACrab_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_155_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_154
// ()

void ACrab_Character_BP_C::InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_154()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_154");

	ACrab_Character_BP_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_154_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_153
// ()

void ACrab_Character_BP_C::InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_153()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_153");

	ACrab_Character_BP_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_153_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.Request Tertiary Pressed
// ()
// Parameters:
// bool                           IsHolding                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ToggleAction                   (Parm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::Request_Tertiary_Pressed(bool IsHolding, bool ToggleAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Request Tertiary Pressed");

	ACrab_Character_BP_C_Request_Tertiary_Pressed_Params params;
	params.IsHolding = IsHolding;
	params.ToggleAction = ToggleAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.Request Jump Response
// ()
// Parameters:
// bool                           isHoldingJump                  (Parm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::Request_Jump_Response(bool isHoldingJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Request Jump Response");

	ACrab_Character_BP_C_Request_Jump_Response_Params params;
	params.isHoldingJump = isHoldingJump;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_StartGrabLeftTracing
// ()

void ACrab_Character_BP_C::AnimNotify_StartGrabLeftTracing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_StartGrabLeftTracing");

	ACrab_Character_BP_C_AnimNotify_StartGrabLeftTracing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_EndGrabTracing
// ()

void ACrab_Character_BP_C::AnimNotify_EndGrabTracing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_EndGrabTracing");

	ACrab_Character_BP_C_AnimNotify_EndGrabTracing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.TraceGrab
// ()

void ACrab_Character_BP_C::TraceGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.TraceGrab");

	ACrab_Character_BP_C_TraceGrab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_StartGrabRightTracing
// ()

void ACrab_Character_BP_C::AnimNotify_StartGrabRightTracing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_StartGrabRightTracing");

	ACrab_Character_BP_C_AnimNotify_StartGrabRightTracing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_ReleaseGrabbedCharacters
// ()

void ACrab_Character_BP_C::AnimNotify_ReleaseGrabbedCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_ReleaseGrabbedCharacters");

	ACrab_Character_BP_C_AnimNotify_ReleaseGrabbedCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.Multi_SwimUp
// ()

void ACrab_Character_BP_C::Multi_SwimUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Multi_SwimUp");

	ACrab_Character_BP_C_Multi_SwimUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.SwimUp
// ()

void ACrab_Character_BP_C::SwimUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.SwimUp");

	ACrab_Character_BP_C_SwimUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.SwimJump
// ()

void ACrab_Character_BP_C::SwimJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.SwimJump");

	ACrab_Character_BP_C_SwimJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_MidGrabTrace
// ()

void ACrab_Character_BP_C::AnimNotify_MidGrabTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_MidGrabTrace");

	ACrab_Character_BP_C_AnimNotify_MidGrabTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_GroundPoundLeft
// ()

void ACrab_Character_BP_C::AnimNotify_GroundPoundLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_GroundPoundLeft");

	ACrab_Character_BP_C_AnimNotify_GroundPoundLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.PlayTracedVFX
// ()
// Parameters:
// class UParticleSystem*         ParticleSystem                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartLoc                       (Parm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::PlayTracedVFX(class UParticleSystem* ParticleSystem, const struct FVector& StartLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.PlayTracedVFX");

	ACrab_Character_BP_C_PlayTracedVFX_Params params;
	params.ParticleSystem = ParticleSystem;
	params.StartLoc = StartLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_GroundPoundRight
// ()

void ACrab_Character_BP_C::AnimNotify_GroundPoundRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_GroundPoundRight");

	ACrab_Character_BP_C_AnimNotify_GroundPoundRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.Server_DropCharacters
// ()

void ACrab_Character_BP_C::Server_DropCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Server_DropCharacters");

	ACrab_Character_BP_C_Server_DropCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.Multi_SetPreventMovement
// ()
// Parameters:
// bool                           NewPreventMovement             (Parm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::Multi_SetPreventMovement(bool NewPreventMovement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Multi_SetPreventMovement");

	ACrab_Character_BP_C_Multi_SetPreventMovement_Params params;
	params.NewPreventMovement = NewPreventMovement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.DelayedClearThrowing
// ()

void ACrab_Character_BP_C::DelayedClearThrowing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.DelayedClearThrowing");

	ACrab_Character_BP_C_DelayedClearThrowing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.Server_TraceTargetDir
// ()
// Parameters:
// struct FVector                 AimLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AimHit                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           JumpInstant                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ThrowInstant                   (Parm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::Server_TraceTargetDir(const struct FVector& AimLoc, bool AimHit, bool JumpInstant, bool ThrowInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Server_TraceTargetDir");

	ACrab_Character_BP_C_Server_TraceTargetDir_Params params;
	params.AimLoc = AimLoc;
	params.AimHit = AimHit;
	params.JumpInstant = JumpInstant;
	params.ThrowInstant = ThrowInstant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.StartThrowIdle
// ()

void ACrab_Character_BP_C::StartThrowIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.StartThrowIdle");

	ACrab_Character_BP_C_StartThrowIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.ClearThrow
// ()
// Parameters:
// bool                           ForceImmediateClear            (Parm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::ClearThrow(bool ForceImmediateClear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.ClearThrow");

	ACrab_Character_BP_C_ClearThrow_Params params;
	params.ForceImmediateClear = ForceImmediateClear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.Multi_TraceTargetDir
// ()
// Parameters:
// struct FVector                 AimLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AimHit                         (Parm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::Multi_TraceTargetDir(const struct FVector& AimLoc, bool AimHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Multi_TraceTargetDir");

	ACrab_Character_BP_C_Multi_TraceTargetDir_Params params;
	params.AimLoc = AimLoc;
	params.AimHit = AimHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.BP_OnJumpPressed
// ()

void ACrab_Character_BP_C::BP_OnJumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BP_OnJumpPressed");

	ACrab_Character_BP_C_BP_OnJumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.BP_OnJumpReleased
// ()

void ACrab_Character_BP_C::BP_OnJumpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BP_OnJumpReleased");

	ACrab_Character_BP_C_BP_OnJumpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.DelayedPress
// ()

void ACrab_Character_BP_C::DelayedPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.DelayedPress");

	ACrab_Character_BP_C_DelayedPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.UpdateAllJumpRotation
// ()

void ACrab_Character_BP_C::UpdateAllJumpRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.UpdateAllJumpRotation");

	ACrab_Character_BP_C_UpdateAllJumpRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.UpdateJumpRotation
// ()

void ACrab_Character_BP_C::UpdateJumpRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.UpdateJumpRotation");

	ACrab_Character_BP_C_UpdateJumpRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_CrabLand
// ()

void ACrab_Character_BP_C::AnimNotify_CrabLand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_CrabLand");

	ACrab_Character_BP_C_AnimNotify_CrabLand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.ServerRequestRightAttack
// ()
// Parameters:
// bool                           ButtonHeld                     (Parm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::ServerRequestRightAttack(bool ButtonHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.ServerRequestRightAttack");

	ACrab_Character_BP_C_ServerRequestRightAttack_Params params;
	params.ButtonHeld = ButtonHeld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.ServerRequestLeftAttack
// ()
// Parameters:
// bool                           ButtonHeld                     (Parm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::ServerRequestLeftAttack(bool ButtonHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.ServerRequestLeftAttack");

	ACrab_Character_BP_C_ServerRequestLeftAttack_Params params;
	params.ButtonHeld = ButtonHeld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.DelayedRightAttack
// ()

void ACrab_Character_BP_C::DelayedRightAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.DelayedRightAttack");

	ACrab_Character_BP_C_DelayedRightAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.DelayedLeftAttack
// ()

void ACrab_Character_BP_C::DelayedLeftAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.DelayedLeftAttack");

	ACrab_Character_BP_C_DelayedLeftAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.Server_DropRight
// ()

void ACrab_Character_BP_C::Server_DropRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Server_DropRight");

	ACrab_Character_BP_C_Server_DropRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.Server_DropLeft
// ()

void ACrab_Character_BP_C::Server_DropLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Server_DropLeft");

	ACrab_Character_BP_C_Server_DropLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.ServerRequestDoubleSmash
// ()

void ACrab_Character_BP_C::ServerRequestDoubleSmash()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.ServerRequestDoubleSmash");

	ACrab_Character_BP_C_ServerRequestDoubleSmash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.DelayedThrowPress
// ()

void ACrab_Character_BP_C::DelayedThrowPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.DelayedThrowPress");

	ACrab_Character_BP_C_DelayedThrowPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.AIWaterJump
// ()

void ACrab_Character_BP_C::AIWaterJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.AIWaterJump");

	ACrab_Character_BP_C_AIWaterJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.Multi_HurtResponse
// ()
// Parameters:
// bool                           WasBullet                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::Multi_HurtResponse(bool WasBullet, const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Multi_HurtResponse");

	ACrab_Character_BP_C_Multi_HurtResponse_Params params;
	params.WasBullet = WasBullet;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.ClearTorporHit
// ()

void ACrab_Character_BP_C::ClearTorporHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.ClearTorporHit");

	ACrab_Character_BP_C_ClearTorporHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.TorporHit
// ()

void ACrab_Character_BP_C::TorporHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.TorporHit");

	ACrab_Character_BP_C_TorporHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.ServerArrestMovement
// ()

void ACrab_Character_BP_C::ServerArrestMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.ServerArrestMovement");

	ACrab_Character_BP_C_ServerArrestMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.ResetArrestMovement
// ()

void ACrab_Character_BP_C::ResetArrestMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.ResetArrestMovement");

	ACrab_Character_BP_C_ResetArrestMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Character_BP.Crab_Character_BP_C.ExecuteUbergraph_Crab_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACrab_Character_BP_C::ExecuteUbergraph_Crab_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.ExecuteUbergraph_Crab_Character_BP");

	ACrab_Character_BP_C_ExecuteUbergraph_Crab_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
