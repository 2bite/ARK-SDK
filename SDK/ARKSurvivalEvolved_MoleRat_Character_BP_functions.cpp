// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MoleRat_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.ChargeEndedAlterRotation
// (NetReliable, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)

void AMoleRat_Character_BP_C::ChargeEndedAlterRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.ChargeEndedAlterRotation");

	AMoleRat_Character_BP_C_ChargeEndedAlterRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMoleRat_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPAdjustDamage");

	AMoleRat_Character_BP_C_BPAdjustDamage_Params params;
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


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.ResetTaming
// ()

void AMoleRat_Character_BP_C::ResetTaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.ResetTaming");

	AMoleRat_Character_BP_C_ResetTaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMoleRat_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPHandleOnStopTargeting");

	AMoleRat_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.BP_InterceptMoveForward
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMoleRat_Character_BP_C::BP_InterceptMoveForward(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.BP_InterceptMoveForward");

	AMoleRat_Character_BP_C_BP_InterceptMoveForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.BP_InterceptMoveRight
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMoleRat_Character_BP_C::BP_InterceptMoveRight(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.BP_InterceptMoveRight");

	AMoleRat_Character_BP_C_BP_InterceptMoveRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPOnEndCharging
// ()

void AMoleRat_Character_BP_C::BPOnEndCharging()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPOnEndCharging");

	AMoleRat_Character_BP_C_BPOnEndCharging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.GiveAffinity
// ()
// Parameters:
// class APrimalCharacter*        tamer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           wasTamed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMoleRat_Character_BP_C::GiveAffinity(class APrimalCharacter* tamer, bool* wasTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.GiveAffinity");

	AMoleRat_Character_BP_C_GiveAffinity_Params params;
	params.tamer = tamer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (wasTamed != nullptr)
		*wasTamed = params.wasTamed;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.SlidingUpdate
// ()

void AMoleRat_Character_BP_C::SlidingUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.SlidingUpdate");

	AMoleRat_Character_BP_C_SlidingUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMoleRat_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.BlueprintCanRiderAttack");

	AMoleRat_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPNotifyDroppedItemPickedUp
// ()
// Parameters:
// class ADroppedItem**           itemPickedUp                   (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter**       PickedUpBy                     (Parm, ZeroConstructor, IsPlainOldData)

void AMoleRat_Character_BP_C::BPNotifyDroppedItemPickedUp(class ADroppedItem** itemPickedUp, class APrimalCharacter** PickedUpBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPNotifyDroppedItemPickedUp");

	AMoleRat_Character_BP_C_BPNotifyDroppedItemPickedUp_Params params;
	params.itemPickedUp = itemPickedUp;
	params.PickedUpBy = PickedUpBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.CanDamageActor
// ()
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TargetCanBeDamage              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMoleRat_Character_BP_C::CanDamageActor(class AActor* Target, bool* TargetCanBeDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.CanDamageActor");

	AMoleRat_Character_BP_C_CanDamageActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetCanBeDamage != nullptr)
		*TargetCanBeDamage = params.TargetCanBeDamage;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.Handle Hit Pawns
// (Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// TArray<struct FHitResult>      HitTargets                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMoleRat_Character_BP_C::Handle_Hit_Pawns(float DeltaTime, TArray<struct FHitResult>* HitTargets)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.Handle Hit Pawns");

	AMoleRat_Character_BP_C_Handle_Hit_Pawns_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitTargets != nullptr)
		*HitTargets = params.HitTargets;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.HandleHitStatic
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// TArray<struct FHitResult>      HitTargets                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMoleRat_Character_BP_C::STATIC_HandleHitStatic(float DeltaTime, TArray<struct FHitResult>* HitTargets)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.HandleHitStatic");

	AMoleRat_Character_BP_C_HandleHitStatic_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitTargets != nullptr)
		*HitTargets = params.HitTargets;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.HandleChargingCollisions
// ()

void AMoleRat_Character_BP_C::HandleChargingCollisions()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.HandleChargingCollisions");

	AMoleRat_Character_BP_C_HandleChargingCollisions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void AMoleRat_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPNotifyClearRider");

	AMoleRat_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPNotifyClearPassenger
// ()
// Parameters:
// class APrimalCharacter**       PassengerChar                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void AMoleRat_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPNotifyClearPassenger");

	AMoleRat_Character_BP_C_BPNotifyClearPassenger_Params params;
	params.PassengerChar = PassengerChar;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.NotifyPassengersIsCharging
// (NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// bool                           isCharging                     (Parm, ZeroConstructor, IsPlainOldData)

void AMoleRat_Character_BP_C::NotifyPassengersIsCharging(bool isCharging)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.NotifyPassengersIsCharging");

	AMoleRat_Character_BP_C_NotifyPassengersIsCharging_Params params;
	params.isCharging = isCharging;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.CanUseGemAttack
// ()
// Parameters:
// bool                           CanUseGemAttack                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMoleRat_Character_BP_C::CanUseGemAttack(bool* CanUseGemAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.CanUseGemAttack");

	AMoleRat_Character_BP_C_CanUseGemAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanUseGemAttack != nullptr)
		*CanUseGemAttack = params.CanUseGemAttack;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.GetChargeValueScaled
// ()
// Parameters:
// float                          CurrentValue                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          velocityAlpha                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          scaledValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMoleRat_Character_BP_C::GetChargeValueScaled(float CurrentValue, float MinValue, float MaxValue, float velocityAlpha, float* scaledValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.GetChargeValueScaled");

	AMoleRat_Character_BP_C_GetChargeValueScaled_Params params;
	params.CurrentValue = CurrentValue;
	params.MinValue = MinValue;
	params.MaxValue = MaxValue;
	params.velocityAlpha = velocityAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (scaledValue != nullptr)
		*scaledValue = params.scaledValue;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.BlueprintAnimNotifyCustomEvent
// (NetRequest, Native, Static, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AMoleRat_Character_BP_C::STATIC_BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	AMoleRat_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.OnJumped
// ()

void AMoleRat_Character_BP_C::OnJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.OnJumped");

	AMoleRat_Character_BP_C_OnJumped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.CanJumpInternal
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMoleRat_Character_BP_C::CanJumpInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.CanJumpInternal");

	AMoleRat_Character_BP_C_CanJumpInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.DebugFunction
// ()

void AMoleRat_Character_BP_C::DebugFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.DebugFunction");

	AMoleRat_Character_BP_C_DebugFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.SpeedGainFormula
// ()
// Parameters:
// float                          alphaInput                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          alphaOutput                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMoleRat_Character_BP_C::SpeedGainFormula(float alphaInput, float* alphaOutput)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.SpeedGainFormula");

	AMoleRat_Character_BP_C_SpeedGainFormula_Params params;
	params.alphaInput = alphaInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (alphaOutput != nullptr)
		*alphaOutput = params.alphaOutput;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.OnChargingTimer
// ()

void AMoleRat_Character_BP_C::OnChargingTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.OnChargingTimer");

	AMoleRat_Character_BP_C_OnChargingTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPTimerServer
// ()

void AMoleRat_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPTimerServer");

	AMoleRat_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPOnRepIsCharging
// ()

void AMoleRat_Character_BP_C::BPOnRepIsCharging()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPOnRepIsCharging");

	AMoleRat_Character_BP_C_BPOnRepIsCharging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.OnStopCharging
// ()

void AMoleRat_Character_BP_C::OnStopCharging()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.OnStopCharging");

	AMoleRat_Character_BP_C_OnStopCharging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.Scale All Charge Values
// ()

void AMoleRat_Character_BP_C::Scale_All_Charge_Values()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.Scale All Charge Values");

	AMoleRat_Character_BP_C_Scale_All_Charge_Values_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.On StartCharging
// ()

void AMoleRat_Character_BP_C::On_StartCharging()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.On StartCharging");

	AMoleRat_Character_BP_C_On_StartCharging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPChargingModifyInputAcceleration
// ()
// Parameters:
// struct FVector*                inputAcceleration              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AMoleRat_Character_BP_C::BPChargingModifyInputAcceleration(struct FVector* inputAcceleration)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPChargingModifyInputAcceleration");

	AMoleRat_Character_BP_C_BPChargingModifyInputAcceleration_Params params;
	params.inputAcceleration = inputAcceleration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.IsPassengerInFirstPersonMode
// ()

void AMoleRat_Character_BP_C::IsPassengerInFirstPersonMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.IsPassengerInFirstPersonMode");

	AMoleRat_Character_BP_C_IsPassengerInFirstPersonMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.ReceiveBeginPlay
// ()

void AMoleRat_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.ReceiveBeginPlay");

	AMoleRat_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.ResetFPVSocket
// ()

void AMoleRat_Character_BP_C::ResetFPVSocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.ResetFPVSocket");

	AMoleRat_Character_BP_C_ResetFPVSocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.UpdateFPVSocketOnCharge
// ()

void AMoleRat_Character_BP_C::UpdateFPVSocketOnCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.UpdateFPVSocketOnCharge");

	AMoleRat_Character_BP_C_UpdateFPVSocketOnCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.UserConstructionScript
// ()

void AMoleRat_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.UserConstructionScript");

	AMoleRat_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.EndChargeRotation__FinishedFunc
// ()

void AMoleRat_Character_BP_C::EndChargeRotation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.EndChargeRotation__FinishedFunc");

	AMoleRat_Character_BP_C_EndChargeRotation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.EndChargeRotation__UpdateFunc
// ()

void AMoleRat_Character_BP_C::EndChargeRotation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.EndChargeRotation__UpdateFunc");

	AMoleRat_Character_BP_C_EndChargeRotation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.SetTPVOffsetForRoll
// ()

void AMoleRat_Character_BP_C::SetTPVOffsetForRoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.SetTPVOffsetForRoll");

	AMoleRat_Character_BP_C_SetTPVOffsetForRoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.SetNormalTPVOffset
// ()

void AMoleRat_Character_BP_C::SetNormalTPVOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.SetNormalTPVOffset");

	AMoleRat_Character_BP_C_SetNormalTPVOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.StartCameraOffsetMovement
// ()
// Parameters:
// bool                           rollOffset                     (Parm, ZeroConstructor, IsPlainOldData)

void AMoleRat_Character_BP_C::StartCameraOffsetMovement(bool rollOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.StartCameraOffsetMovement");

	AMoleRat_Character_BP_C_StartCameraOffsetMovement_Params params;
	params.rollOffset = rollOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.DebugSphere
// ()
// Parameters:
// struct FVector                 NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void AMoleRat_Character_BP_C::DebugSphere(const struct FVector& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.DebugSphere");

	AMoleRat_Character_BP_C_DebugSphere_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.SwitchToRollingAnims
// ()

void AMoleRat_Character_BP_C::SwitchToRollingAnims()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.SwitchToRollingAnims");

	AMoleRat_Character_BP_C_SwitchToRollingAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.UpdateForwardValue_Server
// ()
// Parameters:
// float                          newForwardValue                (Parm, ZeroConstructor, IsPlainOldData)

void AMoleRat_Character_BP_C::UpdateForwardValue_Server(float newForwardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.UpdateForwardValue_Server");

	AMoleRat_Character_BP_C_UpdateForwardValue_Server_Params params;
	params.newForwardValue = newForwardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.ChargeActions
// ()

void AMoleRat_Character_BP_C::ChargeActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.ChargeActions");

	AMoleRat_Character_BP_C_ChargeActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.RequestStopCharging_Server
// ()

void AMoleRat_Character_BP_C::RequestStopCharging_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.RequestStopCharging_Server");

	AMoleRat_Character_BP_C_RequestStopCharging_Server_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.AnimNotify_SpawnDebris
// ()

void AMoleRat_Character_BP_C::AnimNotify_SpawnDebris()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.AnimNotify_SpawnDebris");

	AMoleRat_Character_BP_C_AnimNotify_SpawnDebris_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.AnimNotify_TrySpawnGem
// ()

void AMoleRat_Character_BP_C::AnimNotify_TrySpawnGem()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.AnimNotify_TrySpawnGem");

	AMoleRat_Character_BP_C_AnimNotify_TrySpawnGem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.EnableIKAfterDelay
// ()

void AMoleRat_Character_BP_C::EnableIKAfterDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.EnableIKAfterDelay");

	AMoleRat_Character_BP_C_EnableIKAfterDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.MulticastResetPassengerPos
// ()
// Parameters:
// class APrimalCharacter*        Passenger                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)

void AMoleRat_Character_BP_C::MulticastResetPassengerPos(class APrimalCharacter* Passenger, const struct FName& SocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.MulticastResetPassengerPos");

	AMoleRat_Character_BP_C_MulticastResetPassengerPos_Params params;
	params.Passenger = Passenger;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.MulticastSetPassengerInsideCenter
// ()
// Parameters:
// class APrimalCharacter*        Passenger                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)

void AMoleRat_Character_BP_C::MulticastSetPassengerInsideCenter(class APrimalCharacter* Passenger, const struct FName& SocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.MulticastSetPassengerInsideCenter");

	AMoleRat_Character_BP_C_MulticastSetPassengerInsideCenter_Params params;
	params.Passenger = Passenger;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.MultiSpawnHoneyConsumedParticle
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)

void AMoleRat_Character_BP_C::MultiSpawnHoneyConsumedParticle(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.MultiSpawnHoneyConsumedParticle");

	AMoleRat_Character_BP_C_MultiSpawnHoneyConsumedParticle_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.AnimNotify_LookForTameDrops
// ()

void AMoleRat_Character_BP_C::AnimNotify_LookForTameDrops()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.AnimNotify_LookForTameDrops");

	AMoleRat_Character_BP_C_AnimNotify_LookForTameDrops_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.MultiSimulateVelocitySliding
// ()
// Parameters:
// struct FVector                 VelocityToMaintain             (Parm, ZeroConstructor, IsPlainOldData)

void AMoleRat_Character_BP_C::MultiSimulateVelocitySliding(const struct FVector& VelocityToMaintain)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.MultiSimulateVelocitySliding");

	AMoleRat_Character_BP_C_MultiSimulateVelocitySliding_Params params;
	params.VelocityToMaintain = VelocityToMaintain;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.RequestServer_EndCharging
// ()

void AMoleRat_Character_BP_C::RequestServer_EndCharging()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.RequestServer_EndCharging");

	AMoleRat_Character_BP_C_RequestServer_EndCharging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.MultiRotateTo
// ()
// Parameters:
// struct FRotator                TargetRotation                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          RotationTime                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                StartingRotation               (Parm, ZeroConstructor, IsPlainOldData)

void AMoleRat_Character_BP_C::MultiRotateTo(const struct FRotator& TargetRotation, float RotationTime, const struct FRotator& StartingRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.MultiRotateTo");

	AMoleRat_Character_BP_C_MultiRotateTo_Params params;
	params.TargetRotation = TargetRotation;
	params.RotationTime = RotationTime;
	params.StartingRotation = StartingRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_Character_BP.MoleRat_Character_BP_C.ExecuteUbergraph_MoleRat_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMoleRat_Character_BP_C::ExecuteUbergraph_MoleRat_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.ExecuteUbergraph_MoleRat_Character_BP");

	AMoleRat_Character_BP_C_ExecuteUbergraph_MoleRat_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
