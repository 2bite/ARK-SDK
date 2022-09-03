// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceJumper_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOnTamedProcessOrder
// ()
// Parameters:
// class APrimalCharacter**       FromCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDinoTamedOrder>*  OrderType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 enemyTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          orderNotExecuted               (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::BPOnTamedProcessOrder(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOnTamedProcessOrder");

	AIceJumper_Character_BP_C_BPOnTamedProcessOrder_Params params;
	params.FromCharacter = FromCharacter;
	params.OrderType = OrderType;
	params.bForce = bForce;
	params.enemyTarget = enemyTarget;
	params.orderNotExecuted = orderNotExecuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.IsLowServerFPS
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::IsLowServerFPS(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.IsLowServerFPS");

	AIceJumper_Character_BP_C_IsLowServerFPS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetPositionErrorTolerance
// ()
// Parameters:
// float                          Tolerance                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          FlyingTolerance                (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::SetPositionErrorTolerance(float Tolerance, float FlyingTolerance)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetPositionErrorTolerance");

	AIceJumper_Character_BP_C_SetPositionErrorTolerance_Params params;
	params.Tolerance = Tolerance;
	params.FlyingTolerance = FlyingTolerance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.Queue Random Boredom
// (Net, NetReliable, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           IncludePossibleInstantBoredom  (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::Queue_Random_Boredom(bool IncludePossibleInstantBoredom)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.Queue Random Boredom");

	AIceJumper_Character_BP_C_Queue_Random_Boredom_Params params;
	params.IncludePossibleInstantBoredom = IncludePossibleInstantBoredom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetIsBored
// ()
// Parameters:
// bool                           IsBored                        (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::SetIsBored(bool IsBored)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetIsBored");

	AIceJumper_Character_BP_C_SetIsBored_Params params;
	params.IsBored = IsBored;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceJumper_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPTryMultiUse");

	AIceJumper_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPGetMultiUseEntries
// (Net, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AIceJumper_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPGetMultiUseEntries");

	AIceJumper_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPUnstasis
// ()

void AIceJumper_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPUnstasis");

	AIceJumper_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPGetDebugInfoString
// (Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AIceJumper_Character_BP_C::STATIC_BPGetDebugInfoString()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPGetDebugInfoString");

	AIceJumper_Character_BP_C_BPGetDebugInfoString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPTriggerStasisEvent
// ()

void AIceJumper_Character_BP_C::BPTriggerStasisEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPTriggerStasisEvent");

	AIceJumper_Character_BP_C_BPTriggerStasisEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPModifyFOV
// ()
// Parameters:
// float*                         FOVIn                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AIceJumper_Character_BP_C::BPModifyFOV(float* FOVIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPModifyFOV");

	AIceJumper_Character_BP_C_BPModifyFOV_Params params;
	params.FOVIn = FOVIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPModifyFOVInterpSpeed
// ()
// Parameters:
// float*                         FOVInterpSpeedIn               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AIceJumper_Character_BP_C::BPModifyFOVInterpSpeed(float* FOVInterpSpeedIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPModifyFOVInterpSpeed");

	AIceJumper_Character_BP_C_BPModifyFOVInterpSpeed_Params params;
	params.FOVInterpSpeedIn = FOVInterpSpeedIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.PlayTiredAnim
// ()

void AIceJumper_Character_BP_C::PlayTiredAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.PlayTiredAnim");

	AIceJumper_Character_BP_C_PlayTiredAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPModifyAimOffsetNoTarget
// ()
// Parameters:
// struct FRotator                Aim                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator AIceJumper_Character_BP_C::BPModifyAimOffsetNoTarget(struct FRotator* Aim)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPModifyAimOffsetNoTarget");

	AIceJumper_Character_BP_C_BPModifyAimOffsetNoTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Aim != nullptr)
		*Aim = params.Aim;

	return params.ReturnValue;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_PreventMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceJumper_Character_BP_C::BP_PreventMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_PreventMovementMode");

	AIceJumper_Character_BP_C_BP_PreventMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.Spawn Ice Breath
// ()

void AIceJumper_Character_BP_C::Spawn_Ice_Breath()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.Spawn Ice Breath");

	AIceJumper_Character_BP_C_Spawn_Ice_Breath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPHandlePoop
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceJumper_Character_BP_C::BPHandlePoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPHandlePoop");

	AIceJumper_Character_BP_C_BPHandlePoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetForwardDashMaxDistance2D
// ()
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::GetForwardDashMaxDistance2D(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetForwardDashMaxDistance2D");

	AIceJumper_Character_BP_C_GetForwardDashMaxDistance2D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_ClientLocationInterpSpeedReplicated
// ()

void AIceJumper_Character_BP_C::OnRep_ClientLocationInterpSpeedReplicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_ClientLocationInterpSpeedReplicated");

	AIceJumper_Character_BP_C_OnRep_ClientLocationInterpSpeedReplicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.IceBreathStateIsActive
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::IceBreathStateIsActive(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.IceBreathStateIsActive");

	AIceJumper_Character_BP_C_IceBreathStateIsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetIceBreathInputPressed
// ()
// Parameters:
// bool                           Pressed                        (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::SetIceBreathInputPressed(bool Pressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetIceBreathInputPressed");

	AIceJumper_Character_BP_C_SetIceBreathInputPressed_Params params;
	params.Pressed = Pressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceJumper_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPHandleControllerInitiatedAttack");

	AIceJumper_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_OnSetDeath
// ()

void AIceJumper_Character_BP_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_OnSetDeath");

	AIceJumper_Character_BP_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPNotifySetRider");

	AIceJumper_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPNotifyClearRider");

	AIceJumper_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReceiveAnyDamage");

	AIceJumper_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.Get AbilityStamina Cost
// ()
// Parameters:
// float                          Base                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::Get_AbilityStamina_Cost(float Base, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.Get AbilityStamina Cost");

	AIceJumper_Character_BP_C_Get_AbilityStamina_Cost_Params params;
	params.Base = Base;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.Is AIControlled
// ()
// Parameters:
// bool                           AIControlled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::Is_AIControlled(bool* AIControlled)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.Is AIControlled");

	AIceJumper_Character_BP_C_Is_AIControlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AIControlled != nullptr)
		*AIControlled = params.AIControlled;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOverrideGetAttackAnimationIndex
// (NetReliable, NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimMontage*>    AnimationArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AIceJumper_Character_BP_C::STATIC_BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOverrideGetAttackAnimationIndex");

	AIceJumper_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationArray != nullptr)
		*AnimationArray = params.AnimationArray;

	return params.ReturnValue;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.Set AITargetLocation
// ()
// Parameters:
// struct FVector                 TargetLoc                      (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::Set_AITargetLocation(const struct FVector& TargetLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.Set AITargetLocation");

	AIceJumper_Character_BP_C_Set_AITargetLocation_Params params;
	params.TargetLoc = TargetLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.InAirStateIsResultOfJump
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::InAirStateIsResultOfJump(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.InAirStateIsResultOfJump");

	AIceJumper_Character_BP_C_InAirStateIsResultOfJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.K2_OnMovementModeChanged
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.K2_OnMovementModeChanged");

	AIceJumper_Character_BP_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.IsOutOfStamina
// ()
// Parameters:
// bool                           OutOfStamina                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::IsOutOfStamina(bool* OutOfStamina)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.IsOutOfStamina");

	AIceJumper_Character_BP_C_IsOutOfStamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOfStamina != nullptr)
		*OutOfStamina = params.OutOfStamina;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetIceBreathRange
// (Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// float                          Range                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::STATIC_GetIceBreathRange(float* Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetIceBreathRange");

	AIceJumper_Character_BP_C_GetIceBreathRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Range != nullptr)
		*Range = params.Range;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetForwardDashDamage
// (NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::STATIC_GetForwardDashDamage(class APrimalCharacter* Target, float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetForwardDashDamage");

	AIceJumper_Character_BP_C_GetForwardDashDamage_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetThawSpeed
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          FrozenThawAmountPerRate        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::STATIC_GetThawSpeed(class AActor* Target, float* FrozenThawAmountPerRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetThawSpeed");

	AIceJumper_Character_BP_C_GetThawSpeed_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FrozenThawAmountPerRate != nullptr)
		*FrozenThawAmountPerRate = params.FrozenThawAmountPerRate;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.IsLowStamina
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::IsLowStamina(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.IsLowStamina");

	AIceJumper_Character_BP_C_IsLowStamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPAdjustAttackIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AIceJumper_Character_BP_C::BPAdjustAttackIndex(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPAdjustAttackIndex");

	AIceJumper_Character_BP_C_BPAdjustAttackIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_PreviousAbilityReplicated
// ()

void AIceJumper_Character_BP_C::OnRep_PreviousAbilityReplicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_PreviousAbilityReplicated");

	AIceJumper_Character_BP_C_OnRep_PreviousAbilityReplicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_InterceptMoveForward
// (NetReliable, NetRequest, Native, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceJumper_Character_BP_C::BP_InterceptMoveForward(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_InterceptMoveForward");

	AIceJumper_Character_BP_C_BP_InterceptMoveForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.Is DecendingRapidly
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::Is_DecendingRapidly(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.Is DecendingRapidly");

	AIceJumper_Character_BP_C_Is_DecendingRapidly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ActivateWingTrails
// ()
// Parameters:
// bool                           Deactivate                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RightWing                      (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::ActivateWingTrails(bool Deactivate, bool RightWing)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ActivateWingTrails");

	AIceJumper_Character_BP_C_ActivateWingTrails_Params params;
	params.Deactivate = Deactivate;
	params.RightWing = RightWing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReceiveTick");

	AIceJumper_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOnDinoCheat
// ()
// Parameters:
// struct FName*                  CheatName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSetValue                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOnDinoCheat");

	AIceJumper_Character_BP_C_BPOnDinoCheat_Params params;
	params.CheatName = CheatName;
	params.bSetValue = bSetValue;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOnStaminaDrained
// ()

void AIceJumper_Character_BP_C::BPOnStaminaDrained()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOnStaminaDrained");

	AIceJumper_Character_BP_C_BPOnStaminaDrained_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_bOverrideNewFallVelocityReplicated
// ()

void AIceJumper_Character_BP_C::OnRep_bOverrideNewFallVelocityReplicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_bOverrideNewFallVelocityReplicated");

	AIceJumper_Character_BP_C_OnRep_bOverrideNewFallVelocityReplicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOverrideCharacterNewFallVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AIceJumper_Character_BP_C::BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOverrideCharacterNewFallVelocity");

	AIceJumper_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitialVelocity != nullptr)
		*InitialVelocity = params.InitialVelocity;
	if (Gravity != nullptr)
		*Gravity = params.Gravity;

	return params.ReturnValue;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetActiveAbility
// ()
// Parameters:
// TEnumAsByte<EIceJumperAbilities_Enum> Ability                        (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::SetActiveAbility(TEnumAsByte<EIceJumperAbilities_Enum> Ability)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetActiveAbility");

	AIceJumper_Character_BP_C_SetActiveAbility_Params params;
	params.Ability = Ability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_ActiveAbilityByte
// ()

void AIceJumper_Character_BP_C::OnRep_ActiveAbilityByte()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_ActiveAbilityByte");

	AIceJumper_Character_BP_C_OnRep_ActiveAbilityByte_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.IsAscending
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::IsAscending(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.IsAscending");

	AIceJumper_Character_BP_C_IsAscending_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPDoAttack");

	AIceJumper_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetDinoCollisionState
// ()
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::SetDinoCollisionState(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetDinoCollisionState");

	AIceJumper_Character_BP_C_SetDinoCollisionState_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_UseControlRotation
// ()

void AIceJumper_Character_BP_C::OnRep_UseControlRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_UseControlRotation");

	AIceJumper_Character_BP_C_OnRep_UseControlRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_TargetYaw
// ()

void AIceJumper_Character_BP_C::OnRep_TargetYaw()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_TargetYaw");

	AIceJumper_Character_BP_C_OnRep_TargetYaw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void AIceJumper_Character_BP_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPGetHUDElements");

	AIceJumper_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceJumper_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BlueprintCanAttack");

	AIceJumper_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.DeductStamina
// (NetRequest, Exec, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float                          Stamina                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::STATIC_DeductStamina(float Stamina, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.DeductStamina");

	AIceJumper_Character_BP_C_DeductStamina_Params params;
	params.Stamina = Stamina;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetIceBreathProjectile
// ()
// Parameters:
// class AIceJumperProjIceBreath_C* Projectile                     (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::SetIceBreathProjectile(class AIceJumperProjIceBreath_C* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetIceBreathProjectile");

	AIceJumper_Character_BP_C_SetIceBreathProjectile_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.UpdateDashCollider
// (NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          damageMult                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HitTarget                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::UpdateDashCollider(float Radius, float damageMult, bool* HitTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.UpdateDashCollider");

	AIceJumper_Character_BP_C_UpdateDashCollider_Params params;
	params.Radius = Radius;
	params.damageMult = damageMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitTarget != nullptr)
		*HitTarget = params.HitTarget;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetStartTimeForMovementAbility
// ()
// Parameters:
// TEnumAsByte<EIceJumperAbilities_Enum> Ability                        (Parm, ZeroConstructor, IsPlainOldData)
// double                         StartTime                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::GetStartTimeForMovementAbility(TEnumAsByte<EIceJumperAbilities_Enum> Ability, double* StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetStartTimeForMovementAbility");

	AIceJumper_Character_BP_C_GetStartTimeForMovementAbility_Params params;
	params.Ability = Ability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StartTime != nullptr)
		*StartTime = params.StartTime;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPGetCrosshairColor
// (Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor AIceJumper_Character_BP_C::STATIC_BPGetCrosshairColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPGetCrosshairColor");

	AIceJumper_Character_BP_C_BPGetCrosshairColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceJumper_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPHandleOnStopTargeting");

	AIceJumper_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.Clear Any Active Ability State
// ()
// Parameters:
// TEnumAsByte<EIceJumperAbilities_Enum> TriggeredAbility               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ClearVelocity                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIceJumperAbilities_Enum> ExcludingAbility               (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::Clear_Any_Active_Ability_State(TEnumAsByte<EIceJumperAbilities_Enum> TriggeredAbility, bool ClearVelocity, TEnumAsByte<EIceJumperAbilities_Enum> ExcludingAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.Clear Any Active Ability State");

	AIceJumper_Character_BP_C_Clear_Any_Active_Ability_State_Params params;
	params.TriggeredAbility = TriggeredAbility;
	params.ClearVelocity = ClearVelocity;
	params.ExcludingAbility = ExcludingAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.RidingTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::RidingTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.RidingTick");

	AIceJumper_Character_BP_C_RidingTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_InterceptMoveRight
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceJumper_Character_BP_C::BP_InterceptMoveRight(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_InterceptMoveRight");

	AIceJumper_Character_BP_C_BP_InterceptMoveRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReceiveBeginPlay
// ()

void AIceJumper_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReceiveBeginPlay");

	AIceJumper_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnLanded
// ()
// Parameters:
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void AIceJumper_Character_BP_C::OnLanded(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnLanded");

	AIceJumper_Character_BP_C_OnLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.UserConstructionScript
// ()

void AIceJumper_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.UserConstructionScript");

	AIceJumper_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_OnLanded
// ()

void AIceJumper_Character_BP_C::MULTI_OnLanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_OnLanded");

	AIceJumper_Character_BP_C_MULTI_OnLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_OnLandedValidated
// ()
// Parameters:
// struct FVector                 GroundImpactLoc                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 GroundImpactNormal             (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::MULTI_OnLandedValidated(const struct FVector& GroundImpactLoc, const struct FVector& GroundImpactNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_OnLandedValidated");

	AIceJumper_Character_BP_C_MULTI_OnLandedValidated_Params params;
	params.GroundImpactLoc = GroundImpactLoc;
	params.GroundImpactNormal = GroundImpactNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_OnJumpReleased
// ()

void AIceJumper_Character_BP_C::BP_OnJumpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_OnJumpReleased");

	AIceJumper_Character_BP_C_BP_OnJumpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnIceBreathBegin
// ()

void AIceJumper_Character_BP_C::OnIceBreathBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnIceBreathBegin");

	AIceJumper_Character_BP_C_OnIceBreathBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MultiOnIceBreathBegin
// ()

void AIceJumper_Character_BP_C::MultiOnIceBreathBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MultiOnIceBreathBegin");

	AIceJumper_Character_BP_C_MultiOnIceBreathBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.SERVER_SetIceBreathInputPressed
// ()
// Parameters:
// bool                           Pressed                        (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::SERVER_SetIceBreathInputPressed(bool Pressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.SERVER_SetIceBreathInputPressed");

	AIceJumper_Character_BP_C_SERVER_SetIceBreathInputPressed_Params params;
	params.Pressed = Pressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ForwardDashTick
// ()

void AIceJumper_Character_BP_C::ForwardDashTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ForwardDashTick");

	AIceJumper_Character_BP_C_ForwardDashTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_ForwardDashEnd
// ()

void AIceJumper_Character_BP_C::MULTI_ForwardDashEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_ForwardDashEnd");

	AIceJumper_Character_BP_C_MULTI_ForwardDashEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.TickThrusterVFX
// ()

void AIceJumper_Character_BP_C::TickThrusterVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.TickThrusterVFX");

	AIceJumper_Character_BP_C_TickThrusterVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.FailsafeEndForestDash
// ()

void AIceJumper_Character_BP_C::FailsafeEndForestDash()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.FailsafeEndForestDash");

	AIceJumper_Character_BP_C_FailsafeEndForestDash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.UpdatePositionErrorTolerance
// ()

void AIceJumper_Character_BP_C::UpdatePositionErrorTolerance()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.UpdatePositionErrorTolerance");

	AIceJumper_Character_BP_C_UpdatePositionErrorTolerance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.EndJump
// ()

void AIceJumper_Character_BP_C::EndJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.EndJump");

	AIceJumper_Character_BP_C_EndJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerInputActionJump
// ()

void AIceJumper_Character_BP_C::ServerInputActionJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerInputActionJump");

	AIceJumper_Character_BP_C_ServerInputActionJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.RotateToTargetYawTick
// ()

void AIceJumper_Character_BP_C::RotateToTargetYawTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.RotateToTargetYawTick");

	AIceJumper_Character_BP_C_RotateToTargetYawTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartThrusterVFX
// ()

void AIceJumper_Character_BP_C::StartThrusterVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartThrusterVFX");

	AIceJumper_Character_BP_C_StartThrusterVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartForwardDash
// ()
// Parameters:
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::StartForwardDash(const struct FVector& Direction, float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartForwardDash");

	AIceJumper_Character_BP_C_StartForwardDash_Params params;
	params.Direction = Direction;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetAndReplicateGravityScale
// ()
// Parameters:
// float                          GravityScale                   (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::SetAndReplicateGravityScale(float GravityScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetAndReplicateGravityScale");

	AIceJumper_Character_BP_C_SetAndReplicateGravityScale_Params params;
	params.GravityScale = GravityScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetVelocity
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::SetVelocity(const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetVelocity");

	AIceJumper_Character_BP_C_SetVelocity_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetAndReplicateMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>     Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::SetAndReplicateMovementMode(TEnumAsByte<EMovementMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetAndReplicateMovementMode");

	AIceJumper_Character_BP_C_SetAndReplicateMovementMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetAndReplicateControlRotation
// ()
// Parameters:
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::SetAndReplicateControlRotation(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetAndReplicateControlRotation");

	AIceJumper_Character_BP_C_SetAndReplicateControlRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartSideDash
// ()
// Parameters:
// unsigned char                  Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::StartSideDash(unsigned char Type, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartSideDash");

	AIceJumper_Character_BP_C_StartSideDash_Params params;
	params.Type = Type;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.CameraControlDashTick
// ()

void AIceJumper_Character_BP_C::CameraControlDashTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.CameraControlDashTick");

	AIceJumper_Character_BP_C_CameraControlDashTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerInterceptMoveRight
// ()

void AIceJumper_Character_BP_C::ServerInterceptMoveRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerInterceptMoveRight");

	AIceJumper_Character_BP_C_ServerInterceptMoveRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.StopMovementFreeze
// ()

void AIceJumper_Character_BP_C::StopMovementFreeze()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.StopMovementFreeze");

	AIceJumper_Character_BP_C_StopMovementFreeze_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartMovementFreeze
// ()

void AIceJumper_Character_BP_C::StartMovementFreeze()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartMovementFreeze");

	AIceJumper_Character_BP_C_StartMovementFreeze_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ClientStopMovementFreeze
// ()

void AIceJumper_Character_BP_C::ClientStopMovementFreeze()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ClientStopMovementFreeze");

	AIceJumper_Character_BP_C_ClientStopMovementFreeze_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReplicateClientControlForward
// ()
// Parameters:
// struct FVector                 ClientControlForward           (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::ReplicateClientControlForward(const struct FVector& ClientControlForward)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReplicateClientControlForward");

	AIceJumper_Character_BP_C_ReplicateClientControlForward_Params params;
	params.ClientControlForward = ClientControlForward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerInterceptMoveForward
// ()

void AIceJumper_Character_BP_C::ServerInterceptMoveForward()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerInterceptMoveForward");

	AIceJumper_Character_BP_C_ServerInterceptMoveForward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerHandleStopTargeting
// ()

void AIceJumper_Character_BP_C::ServerHandleStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerHandleStopTargeting");

	AIceJumper_Character_BP_C_ServerHandleStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ClientSetPitch
// ()
// Parameters:
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::ClientSetPitch(float Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ClientSetPitch");

	AIceJumper_Character_BP_C_ClientSetPitch_Params params;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerSetIsCrosshairOverGround
// ()
// Parameters:
// bool                           IsCrosshairOverGround          (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::ServerSetIsCrosshairOverGround(bool IsCrosshairOverGround)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerSetIsCrosshairOverGround");

	AIceJumper_Character_BP_C_ServerSetIsCrosshairOverGround_Params params;
	params.IsCrosshairOverGround = IsCrosshairOverGround;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ClientMovementAbilityInterrupted
// ()

void AIceJumper_Character_BP_C::ClientMovementAbilityInterrupted()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ClientMovementAbilityInterrupted");

	AIceJumper_Character_BP_C_ClientMovementAbilityInterrupted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ClientDamagedTarget
// ()
// Parameters:
// struct FVector                 HitLoc                         (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::ClientDamagedTarget(const struct FVector& HitLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ClientDamagedTarget");

	AIceJumper_Character_BP_C_ClientDamagedTarget_Params params;
	params.HitLoc = HitLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.DeactivateLeftDamageFX
// ()

void AIceJumper_Character_BP_C::DeactivateLeftDamageFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.DeactivateLeftDamageFX");

	AIceJumper_Character_BP_C_DeactivateLeftDamageFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.DeactivateRightDamageFX
// ()

void AIceJumper_Character_BP_C::DeactivateRightDamageFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.DeactivateRightDamageFX");

	AIceJumper_Character_BP_C_DeactivateRightDamageFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.SERVER_EndIceBreathAttack
// ()

void AIceJumper_Character_BP_C::SERVER_EndIceBreathAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.SERVER_EndIceBreathAttack");

	AIceJumper_Character_BP_C_SERVER_EndIceBreathAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnIceBreathEnd
// ()

void AIceJumper_Character_BP_C::OnIceBreathEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnIceBreathEnd");

	AIceJumper_Character_BP_C_OnIceBreathEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MultiOnIceBreathEnd
// ()

void AIceJumper_Character_BP_C::MultiOnIceBreathEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MultiOnIceBreathEnd");

	AIceJumper_Character_BP_C_MultiOnIceBreathEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.IceBreathTick
// ()

void AIceJumper_Character_BP_C::IceBreathTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.IceBreathTick");

	AIceJumper_Character_BP_C_IceBreathTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReplicateCameraLocationToServer
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::ReplicateCameraLocationToServer(const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReplicateCameraLocationToServer");

	AIceJumper_Character_BP_C_ReplicateCameraLocationToServer_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_StartForwardDash
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::MULTI_StartForwardDash(const struct FVector& Velocity, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_StartForwardDash");

	AIceJumper_Character_BP_C_MULTI_StartForwardDash_Params params;
	params.Velocity = Velocity;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SetCollision
// ()
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::MULTI_SetCollision(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SetCollision");

	AIceJumper_Character_BP_C_MULTI_SetCollision_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReplicateCrosshairTargetToServer
// ()
// Parameters:
// class APrimalCharacter*        CrosshairTarget                (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::ReplicateCrosshairTargetToServer(class APrimalCharacter* CrosshairTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReplicateCrosshairTargetToServer");

	AIceJumper_Character_BP_C_ReplicateCrosshairTargetToServer_Params params;
	params.CrosshairTarget = CrosshairTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.AnimNotify_IceBallProj
// ()

void AIceJumper_Character_BP_C::AnimNotify_IceBallProj()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.AnimNotify_IceBallProj");

	AIceJumper_Character_BP_C_AnimNotify_IceBallProj_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.AnimNotify_IceBreathHover
// ()

void AIceJumper_Character_BP_C::AnimNotify_IceBreathHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.AnimNotify_IceBreathHover");

	AIceJumper_Character_BP_C_AnimNotify_IceBreathHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.AnimNotify_CheckStamina
// ()

void AIceJumper_Character_BP_C::AnimNotify_CheckStamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.AnimNotify_CheckStamina");

	AIceJumper_Character_BP_C_AnimNotify_CheckStamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_StartSideDash
// ()

void AIceJumper_Character_BP_C::MULTI_StartSideDash()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_StartSideDash");

	AIceJumper_Character_BP_C_MULTI_StartSideDash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SideDashInterrupted
// ()

void AIceJumper_Character_BP_C::MULTI_SideDashInterrupted()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SideDashInterrupted");

	AIceJumper_Character_BP_C_MULTI_SideDashInterrupted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SideDashEnd
// ()

void AIceJumper_Character_BP_C::MULTI_SideDashEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SideDashEnd");

	AIceJumper_Character_BP_C_MULTI_SideDashEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_StartJump
// ()

void AIceJumper_Character_BP_C::MULTI_StartJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_StartJump");

	AIceJumper_Character_BP_C_MULTI_StartJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SetBreathFX
// ()
// Parameters:
// float                          TimeDilation                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::MULTI_SetBreathFX(float TimeDilation, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SetBreathFX");

	AIceJumper_Character_BP_C_MULTI_SetBreathFX_Params params;
	params.TimeDilation = TimeDilation;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.TickSideThrusterVFX
// ()

void AIceJumper_Character_BP_C::TickSideThrusterVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.TickSideThrusterVFX");

	AIceJumper_Character_BP_C_TickSideThrusterVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ExtraJumpTick
// ()

void AIceJumper_Character_BP_C::ExtraJumpTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ExtraJumpTick");

	AIceJumper_Character_BP_C_ExtraJumpTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ResetShortDashType
// ()

void AIceJumper_Character_BP_C::ResetShortDashType()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ResetShortDashType");

	AIceJumper_Character_BP_C_ResetShortDashType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_TargetFrozen
// ()
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::MULTI_TargetFrozen(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_TargetFrozen");

	AIceJumper_Character_BP_C_MULTI_TargetFrozen_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SetVelocity
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::MULTI_SetVelocity(const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SetVelocity");

	AIceJumper_Character_BP_C_MULTI_SetVelocity_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.AnimNotify_IceBreathGround
// ()

void AIceJumper_Character_BP_C::AnimNotify_IceBreathGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.AnimNotify_IceBreathGround");

	AIceJumper_Character_BP_C_AnimNotify_IceBreathGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartBoredom
// ()

void AIceJumper_Character_BP_C::StartBoredom()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartBoredom");

	AIceJumper_Character_BP_C_StartBoredom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.FinishBoredom
// ()

void AIceJumper_Character_BP_C::FinishBoredom()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.FinishBoredom");

	AIceJumper_Character_BP_C_FinishBoredom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ExecuteUbergraph_IceJumper_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_Character_BP_C::ExecuteUbergraph_IceJumper_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ExecuteUbergraph_IceJumper_Character_BP");

	AIceJumper_Character_BP_C_ExecuteUbergraph_IceJumper_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
