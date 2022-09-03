// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekWyvern_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPUnsetupDinoTameable
// ()

void ATekWyvern_Character_BP_C::BPUnsetupDinoTameable()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPUnsetupDinoTameable");

	ATekWyvern_Character_BP_C_BPUnsetupDinoTameable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPGetRiderSocket
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ATekWyvern_Character_BP_C::BPGetRiderSocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPGetRiderSocket");

	ATekWyvern_Character_BP_C_BPGetRiderSocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPPreventRiding
// ()
// Parameters:
// class AShooterCharacter**      ByPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDontCheckDistance             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekWyvern_Character_BP_C::BPPreventRiding(class AShooterCharacter** ByPawn, bool* bDontCheckDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPPreventRiding");

	ATekWyvern_Character_BP_C_BPPreventRiding_Params params;
	params.ByPawn = ByPawn;
	params.bDontCheckDistance = bDontCheckDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.DoneRolling
// ()

void ATekWyvern_Character_BP_C::DoneRolling()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.DoneRolling");

	ATekWyvern_Character_BP_C_DoneRolling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.DoTamingRandomAttack
// ()

void ATekWyvern_Character_BP_C::DoTamingRandomAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.DoTamingRandomAttack");

	ATekWyvern_Character_BP_C_DoTamingRandomAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BlueprintAdjustOutputDamage
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, Public, Private, NetServer, NetClient, BlueprintEvent)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATekWyvern_Character_BP_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BlueprintAdjustOutputDamage");

	ATekWyvern_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
	params.AttackIndex = AttackIndex;
	params.OriginalDamageAmount = OriginalDamageAmount;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDamageType != nullptr)
		*OutDamageType = params.OutDamageType;
	if (OutDamageImpulse != nullptr)
		*OutDamageImpulse = params.OutDamageImpulse;

	return params.ReturnValue;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.IsInSpaceBiome
// ()
// Parameters:
// bool                           InSpaceBiome                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekWyvern_Character_BP_C::IsInSpaceBiome(bool* InSpaceBiome)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.IsInSpaceBiome");

	ATekWyvern_Character_BP_C_IsInSpaceBiome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InSpaceBiome != nullptr)
		*InSpaceBiome = params.InSpaceBiome;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.OnRep_DismountTimesDuringTaming
// ()

void ATekWyvern_Character_BP_C::OnRep_DismountTimesDuringTaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.OnRep_DismountTimesDuringTaming");

	ATekWyvern_Character_BP_C_OnRep_DismountTimesDuringTaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ClearLastTamingProcess
// ()

void ATekWyvern_Character_BP_C::ClearLastTamingProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ClearLastTamingProcess");

	ATekWyvern_Character_BP_C_ClearLastTamingProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Get Extra Taming EffectivenessModifier
// ()
// Parameters:
// float                          ExtraTameEffectivenessModifier (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekWyvern_Character_BP_C::Get_Extra_Taming_EffectivenessModifier(float* ExtraTameEffectivenessModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Get Extra Taming EffectivenessModifier");

	ATekWyvern_Character_BP_C_Get_Extra_Taming_EffectivenessModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraTameEffectivenessModifier != nullptr)
		*ExtraTameEffectivenessModifier = params.ExtraTameEffectivenessModifier;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ToggleAllowTameRiding
// ()

void ATekWyvern_Character_BP_C::ToggleAllowTameRiding()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ToggleAllowTameRiding");

	ATekWyvern_Character_BP_C_ToggleAllowTameRiding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BadTimingFeed
// ()

void ATekWyvern_Character_BP_C::BadTimingFeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BadTimingFeed");

	ATekWyvern_Character_BP_C_BadTimingFeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPOverrideGetAttackAnimationIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimMontage*>    AnimationArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATekWyvern_Character_BP_C::BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPOverrideGetAttackAnimationIndex");

	ATekWyvern_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationArray != nullptr)
		*AnimationArray = params.AnimationArray;

	return params.ReturnValue;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.CheckDoneRoar
// ()

void ATekWyvern_Character_BP_C::CheckDoneRoar()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.CheckDoneRoar");

	ATekWyvern_Character_BP_C_CheckDoneRoar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.TickStaminaCost
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBreath                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekWyvern_Character_BP_C::TickStaminaCost(float DeltaSeconds, bool* CanBreath)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.TickStaminaCost");

	ATekWyvern_Character_BP_C_TickStaminaCost_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanBreath != nullptr)
		*CanBreath = params.CanBreath;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.TickLowHealthStopMoving
// ()

void ATekWyvern_Character_BP_C::TickLowHealthStopMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.TickLowHealthStopMoving");

	ATekWyvern_Character_BP_C_TickLowHealthStopMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.OverrideFinalWanderLocation
// ()
// Parameters:
// struct FVector                 outVec                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekWyvern_Character_BP_C::OverrideFinalWanderLocation(struct FVector* outVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.OverrideFinalWanderLocation");

	ATekWyvern_Character_BP_C_OverrideFinalWanderLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outVec != nullptr)
		*outVec = params.outVec;

	return params.ReturnValue;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPGetMultiUseEntries
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, NetServer, NetClient, BlueprintEvent)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ATekWyvern_Character_BP_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPGetMultiUseEntries");

	ATekWyvern_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.UpdateTamingTextOverlay
// (NetReliable, Event, MulticastDelegate, Public, NetServer, NetClient, BlueprintEvent)

void ATekWyvern_Character_BP_C::UpdateTamingTextOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.UpdateTamingTextOverlay");

	ATekWyvern_Character_BP_C_UpdateTamingTextOverlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekWyvern_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPNotifyClearRider");

	ATekWyvern_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.TryAddAffinityAfter Rolling
// ()

void ATekWyvern_Character_BP_C::TryAddAffinityAfter_Rolling()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.TryAddAffinityAfter Rolling");

	ATekWyvern_Character_BP_C_TryAddAffinityAfter_Rolling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.TickBeam
// (NetRequest, Exec, NetResponse, MulticastDelegate, Public, NetServer, NetClient, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekWyvern_Character_BP_C::TickBeam(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.TickBeam");

	ATekWyvern_Character_BP_C_TickBeam_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.OnRep_bBeamActivated
// ()

void ATekWyvern_Character_BP_C::OnRep_bBeamActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.OnRep_bBeamActivated");

	ATekWyvern_Character_BP_C_OnRep_bBeamActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekWyvern_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BlueprintCanAttack");

	ATekWyvern_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekWyvern_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPHandleOnStopTargeting");

	ATekWyvern_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekWyvern_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPHandleControllerInitiatedAttack");

	ATekWyvern_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekWyvern_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPSetupTamed");

	ATekWyvern_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Check Random Destination
// ()

void ATekWyvern_Character_BP_C::Check_Random_Destination()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Check Random Destination");

	ATekWyvern_Character_BP_C_Check_Random_Destination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Increase Taming Affinity
// ()

void ATekWyvern_Character_BP_C::Increase_Taming_Affinity()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Increase Taming Affinity");

	ATekWyvern_Character_BP_C_Increase_Taming_Affinity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Consume FoodItem
// ()
// Parameters:
// bool                           DidConsumeFood                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          EffectivenessMultiplier        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekWyvern_Character_BP_C::Consume_FoodItem(bool* DidConsumeFood, float* EffectivenessMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Consume FoodItem");

	ATekWyvern_Character_BP_C_Consume_FoodItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DidConsumeFood != nullptr)
		*DidConsumeFood = params.DidConsumeFood;
	if (EffectivenessMultiplier != nullptr)
		*EffectivenessMultiplier = params.EffectivenessMultiplier;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ATekWyvern_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPDoAttack");

	ATekWyvern_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.CheckDoneLanding
// ()

void ATekWyvern_Character_BP_C::CheckDoneLanding()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.CheckDoneLanding");

	ATekWyvern_Character_BP_C_CheckDoneLanding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.StartTame
// ()
// Parameters:
// class AShooterCharacter*       TamerPlayer                    (Parm, ZeroConstructor, IsPlainOldData)

void ATekWyvern_Character_BP_C::StartTame(class AShooterCharacter* TamerPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.StartTame");

	ATekWyvern_Character_BP_C_StartTame_Params params;
	params.TamerPlayer = TamerPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATekWyvern_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPAdjustDamage");

	ATekWyvern_Character_BP_C_BPAdjustDamage_Params params;
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


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPPreventInputType
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekWyvern_Character_BP_C::BPPreventInputType(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPPreventInputType");

	ATekWyvern_Character_BP_C_BPPreventInputType_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPUntamedConsumeFoodItem
// ()
// Parameters:
// class UPrimalItem**            foodItem                       (Parm, ZeroConstructor, IsPlainOldData)

void ATekWyvern_Character_BP_C::BPUntamedConsumeFoodItem(class UPrimalItem** foodItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPUntamedConsumeFoodItem");

	ATekWyvern_Character_BP_C_BPUntamedConsumeFoodItem_Params params;
	params.foodItem = foodItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekWyvern_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPNotifySetRider");

	ATekWyvern_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BlueprintAnimNotifyCustomEvent
// (NetMulticast, MulticastDelegate, Public, NetServer, NetClient, BlueprintEvent)
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ATekWyvern_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	ATekWyvern_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.UserConstructionScript
// ()

void ATekWyvern_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.UserConstructionScript");

	ATekWyvern_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Rolling__FinishedFunc
// ()

void ATekWyvern_Character_BP_C::Rolling__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Rolling__FinishedFunc");

	ATekWyvern_Character_BP_C_Rolling__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Rolling__UpdateFunc
// ()

void ATekWyvern_Character_BP_C::Rolling__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Rolling__UpdateFunc");

	ATekWyvern_Character_BP_C_Rolling__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ReceiveBeginPlay
// ()

void ATekWyvern_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ReceiveBeginPlay");

	ATekWyvern_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.RidingTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekWyvern_Character_BP_C::RidingTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.RidingTick");

	ATekWyvern_Character_BP_C_RidingTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.SetAllowRiding
// ()
// Parameters:
// bool                           Allow                          (Parm, ZeroConstructor, IsPlainOldData)

void ATekWyvern_Character_BP_C::SetAllowRiding(bool Allow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.SetAllowRiding");

	ATekWyvern_Character_BP_C_SetAllowRiding_Params params;
	params.Allow = Allow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.StartRolling
// ()

void ATekWyvern_Character_BP_C::StartRolling()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.StartRolling");

	ATekWyvern_Character_BP_C_StartRolling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Multi_TryStartBreathAttack
// ()

void ATekWyvern_Character_BP_C::Multi_TryStartBreathAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Multi_TryStartBreathAttack");

	ATekWyvern_Character_BP_C_Multi_TryStartBreathAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Server_StopBreathAttack
// ()

void ATekWyvern_Character_BP_C::Server_StopBreathAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Server_StopBreathAttack");

	ATekWyvern_Character_BP_C_Server_StopBreathAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Multi_StopBreathAttack
// ()

void ATekWyvern_Character_BP_C::Multi_StopBreathAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Multi_StopBreathAttack");

	ATekWyvern_Character_BP_C_Multi_StopBreathAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekWyvern_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ReceiveTick");

	ATekWyvern_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ExecuteUbergraph_TekWyvern_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekWyvern_Character_BP_C::ExecuteUbergraph_TekWyvern_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ExecuteUbergraph_TekWyvern_Character_BP");

	ATekWyvern_Character_BP_C_ExecuteUbergraph_TekWyvern_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
