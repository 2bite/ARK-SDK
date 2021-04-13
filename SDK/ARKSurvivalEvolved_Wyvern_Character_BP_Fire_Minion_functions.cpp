// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Wyvern_Character_BP_Fire_Minion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWyvern_Character_BP_Fire_Minion_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BlueprintCanRiderAttack");

	AWyvern_Character_BP_Fire_Minion_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void AWyvern_Character_BP_Fire_Minion_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPNotifySetRider");

	AWyvern_Character_BP_Fire_Minion_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BlueprintAdjustOutputDamage
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWyvern_Character_BP_Fire_Minion_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BlueprintAdjustOutputDamage");

	AWyvern_Character_BP_Fire_Minion_C_BlueprintAdjustOutputDamage_Params params;
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


// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BP_OnSetDeath
// ()

void AWyvern_Character_BP_Fire_Minion_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BP_OnSetDeath");

	AWyvern_Character_BP_Fire_Minion_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPTimerServer
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const, NetValidate)

void AWyvern_Character_BP_Fire_Minion_C::STATIC_BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPTimerServer");

	AWyvern_Character_BP_Fire_Minion_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWyvern_Character_BP_Fire_Minion_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPAdjustDamage");

	AWyvern_Character_BP_Fire_Minion_C_BPAdjustDamage_Params params;
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


// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPOnStaminaDrained
// ()

void AWyvern_Character_BP_Fire_Minion_C::BPOnStaminaDrained()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPOnStaminaDrained");

	AWyvern_Character_BP_Fire_Minion_C_BPOnStaminaDrained_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.OnLanded
// ()
// Parameters:
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void AWyvern_Character_BP_Fire_Minion_C::OnLanded(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.OnLanded");

	AWyvern_Character_BP_Fire_Minion_C_OnLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWyvern_Character_BP_Fire_Minion_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BlueprintCanAttack");

	AWyvern_Character_BP_Fire_Minion_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AWyvern_Character_BP_Fire_Minion_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.ReceiveTick");

	AWyvern_Character_BP_Fire_Minion_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void AWyvern_Character_BP_Fire_Minion_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPGetHUDElements");

	AWyvern_Character_BP_Fire_Minion_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AWyvern_Character_BP_Fire_Minion_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPDoAttack");

	AWyvern_Character_BP_Fire_Minion_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPAdjustAttackIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWyvern_Character_BP_Fire_Minion_C::BPAdjustAttackIndex(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPAdjustAttackIndex");

	AWyvern_Character_BP_Fire_Minion_C_BPAdjustAttackIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWyvern_Character_BP_Fire_Minion_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPTryMultiUse");

	AWyvern_Character_BP_Fire_Minion_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPGetMultiUseEntries
// (NetRequest, Exec, Native, Event, NetResponse, Static, Public, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AWyvern_Character_BP_Fire_Minion_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPGetMultiUseEntries");

	AWyvern_Character_BP_Fire_Minion_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.UserConstructionScript
// ()

void AWyvern_Character_BP_Fire_Minion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.UserConstructionScript");

	AWyvern_Character_BP_Fire_Minion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.Multi_ClearRider
// ()

void AWyvern_Character_BP_Fire_Minion_C::Multi_ClearRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.Multi_ClearRider");

	AWyvern_Character_BP_Fire_Minion_C_Multi_ClearRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.DelayedClearRider
// ()

void AWyvern_Character_BP_Fire_Minion_C::DelayedClearRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.DelayedClearRider");

	AWyvern_Character_BP_Fire_Minion_C_DelayedClearRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.ExecuteUbergraph_Wyvern_Character_BP_Fire_Minion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWyvern_Character_BP_Fire_Minion_C::ExecuteUbergraph_Wyvern_Character_BP_Fire_Minion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.ExecuteUbergraph_Wyvern_Character_BP_Fire_Minion");

	AWyvern_Character_BP_Fire_Minion_C_ExecuteUbergraph_Wyvern_Character_BP_Fire_Minion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
