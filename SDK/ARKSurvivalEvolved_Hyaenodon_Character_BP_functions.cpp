// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Hyaenodon_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPOnAnimPlayedNotify
// ()
// Parameters:
// class UAnimMontage**           AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  StartSectionName               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReplicate                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReplicateToOwner              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceTickPoseAndServerUpdateMesh (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceTickPoseOnServer         (Parm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::BPOnAnimPlayedNotify(class UAnimMontage** AnimMontage, float* InPlayRate, struct FName* StartSectionName, bool* bReplicate, bool* bReplicateToOwner, bool* bForceTickPoseAndServerUpdateMesh, bool* bForceTickPoseOnServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPOnAnimPlayedNotify");

	AHyaenodon_Character_BP_C_BPOnAnimPlayedNotify_Params params;
	params.AnimMontage = AnimMontage;
	params.InPlayRate = InPlayRate;
	params.StartSectionName = StartSectionName;
	params.bReplicate = bReplicate;
	params.bReplicateToOwner = bReplicateToOwner;
	params.bForceTickPoseAndServerUpdateMesh = bForceTickPoseAndServerUpdateMesh;
	params.bForceTickPoseOnServer = bForceTickPoseOnServer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Has Conflict with AI
// ()
// Parameters:
// bool                           NewParam1                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::Has_Conflict_with_AI(bool* NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Has Conflict with AI");

	AHyaenodon_Character_BP_C_Has_Conflict_with_AI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ShouldStandUp
// ()
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::ShouldStandUp(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ShouldStandUp");

	AHyaenodon_Character_BP_C_ShouldStandUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.CanStandUp
// ()
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::CanStandUp(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.CanStandUp");

	AHyaenodon_Character_BP_C_CanStandUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Can SitDown
// ()
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::Can_SitDown(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Can SitDown");

	AHyaenodon_Character_BP_C_Can_SitDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPNotifyBumpedPawn
// ()
// Parameters:
// class APrimalCharacter**       BumpedPawn                     (Parm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::BPNotifyBumpedPawn(class APrimalCharacter** BumpedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPNotifyBumpedPawn");

	AHyaenodon_Character_BP_C_BPNotifyBumpedPawn_Params params;
	params.BumpedPawn = BumpedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPOnMovementModeChangedNotify");

	AHyaenodon_Character_BP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnJumped
// ()

void AHyaenodon_Character_BP_C::OnJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnJumped");

	AHyaenodon_Character_BP_C_OnJumped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPShouldCancelDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHyaenodon_Character_BP_C::BPShouldCancelDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPShouldCancelDoAttack");

	AHyaenodon_Character_BP_C_BPShouldCancelDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnSaddleUnequipped
// ()

void AHyaenodon_Character_BP_C::OnSaddleUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnSaddleUnequipped");

	AHyaenodon_Character_BP_C_OnSaddleUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnSaddleEquipped
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintPure)

void AHyaenodon_Character_BP_C::STATIC_OnSaddleEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnSaddleEquipped");

	AHyaenodon_Character_BP_C_OnSaddleEquipped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Reset Taming
// ()
// Parameters:
// bool                           ForceReset                     (Parm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::Reset_Taming(bool ForceReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Reset Taming");

	AHyaenodon_Character_BP_C_Reset_Taming_Params params;
	params.ForceReset = ForceReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.AttemptToFleeFromActor
// ()
// Parameters:
// class AActor*                  ActorToCheck                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCurrentTargetDangerous       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DidFlee                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::AttemptToFleeFromActor(class AActor* ActorToCheck, bool IsCurrentTargetDangerous, bool* DidFlee)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.AttemptToFleeFromActor");

	AHyaenodon_Character_BP_C_AttemptToFleeFromActor_Params params;
	params.ActorToCheck = ActorToCheck;
	params.IsCurrentTargetDangerous = IsCurrentTargetDangerous;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DidFlee != nullptr)
		*DidFlee = params.DidFlee;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.IsActorLowOnResources
// ()
// Parameters:
// class AActor*                  ActorToCheck                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::IsActorLowOnResources(class AActor* ActorToCheck, bool* IsLow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.IsActorLowOnResources");

	AHyaenodon_Character_BP_C_IsActorLowOnResources_Params params;
	params.ActorToCheck = ActorToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLow != nullptr)
		*IsLow = params.IsLow;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.CanFleeFromTarget
// ()
// Parameters:
// class AActor*                  TargetToFleeFrom               (Parm, ZeroConstructor, IsPlainOldData)
// float                          DangerousMultiplier            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CurrentTargetIsDangerous       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanFlee                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::CanFleeFromTarget(class AActor* TargetToFleeFrom, float DangerousMultiplier, bool CurrentTargetIsDangerous, bool* CanFlee)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.CanFleeFromTarget");

	AHyaenodon_Character_BP_C_CanFleeFromTarget_Params params;
	params.TargetToFleeFrom = TargetToFleeFrom;
	params.DangerousMultiplier = DangerousMultiplier;
	params.CurrentTargetIsDangerous = CurrentTargetIsDangerous;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanFlee != nullptr)
		*CanFlee = params.CanFlee;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPUnstasis
// ()

void AHyaenodon_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPUnstasis");

	AHyaenodon_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AHyaenodon_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPAdjustDamage");

	AHyaenodon_Character_BP_C_BPAdjustDamage_Params params;
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


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.GatherPack
// ()

void AHyaenodon_Character_BP_C::GatherPack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.GatherPack");

	AHyaenodon_Character_BP_C_GatherPack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPCanTargetCorpse
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHyaenodon_Character_BP_C::BPCanTargetCorpse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPCanTargetCorpse");

	AHyaenodon_Character_BP_C_BPCanTargetCorpse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Get Threat Multiplier for Target
// ()
// Parameters:
// class AActor*                  TargetToDetermine              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Multiplier                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::Get_Threat_Multiplier_for_Target(class AActor* TargetToDetermine, float* Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Get Threat Multiplier for Target");

	AHyaenodon_Character_BP_C_Get_Threat_Multiplier_for_Target_Params params;
	params.TargetToDetermine = TargetToDetermine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Multiplier != nullptr)
		*Multiplier = params.Multiplier;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.TimeSinceLastTookDamageFromPlayer
// ()
// Parameters:
// bool                           IsStillAggrod                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::TimeSinceLastTookDamageFromPlayer(bool* IsStillAggrod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.TimeSinceLastTookDamageFromPlayer");

	AHyaenodon_Character_BP_C_TimeSinceLastTookDamageFromPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsStillAggrod != nullptr)
		*IsStillAggrod = params.IsStillAggrod;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPSetupTamed");

	AHyaenodon_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ReceiveAnyDamage");

	AHyaenodon_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHyaenodon_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BlueprintCanAttack");

	AHyaenodon_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Is Actor Dangerous
// ()
// Parameters:
// class AActor*                  Actor_To_Check                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Skip_Ignore_Actor_List         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Is_Dangerous                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          DangerMultiplier               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::Is_Actor_Dangerous(class AActor* Actor_To_Check, bool Skip_Ignore_Actor_List, bool* Is_Dangerous, float* DangerMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Is Actor Dangerous");

	AHyaenodon_Character_BP_C_Is_Actor_Dangerous_Params params;
	params.Actor_To_Check = Actor_To_Check;
	params.Skip_Ignore_Actor_List = Skip_Ignore_Actor_List;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_Dangerous != nullptr)
		*Is_Dangerous = params.Is_Dangerous;
	if (DangerMultiplier != nullptr)
		*DangerMultiplier = params.DangerMultiplier;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPTimerServer
// ()

void AHyaenodon_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPTimerServer");

	AHyaenodon_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Pack Flee for Duration
// ()
// Parameters:
// float                          DurationOfFlee                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetToFleeFrom               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HavePackFlee                   (Parm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::Pack_Flee_for_Duration(float DurationOfFlee, class AActor* TargetToFleeFrom, bool HavePackFlee)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Pack Flee for Duration");

	AHyaenodon_Character_BP_C_Pack_Flee_for_Duration_Params params;
	params.DurationOfFlee = DurationOfFlee;
	params.TargetToFleeFrom = TargetToFleeFrom;
	params.HavePackFlee = HavePackFlee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Flee For Duration
// ()
// Parameters:
// float                          DurationOfFlee                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetToFleeFrom               (Parm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::Flee_For_Duration(float DurationOfFlee, class AActor* TargetToFleeFrom)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Flee For Duration");

	AHyaenodon_Character_BP_C_Flee_For_Duration_Params params;
	params.DurationOfFlee = DurationOfFlee;
	params.TargetToFleeFrom = TargetToFleeFrom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnWildPet
// ()
// Parameters:
// class APlayerController*       petterPC                       (Parm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::OnWildPet(class APlayerController* petterPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnWildPet");

	AHyaenodon_Character_BP_C_OnWildPet_Params params;
	params.petterPC = petterPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPShouldForceFlee
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHyaenodon_Character_BP_C::BPShouldForceFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPShouldForceFlee");

	AHyaenodon_Character_BP_C_BPShouldForceFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.IsInTamingFriendlyState
// ()
// Parameters:
// bool                           tamingCanOccur                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           leaderIsNearby                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::IsInTamingFriendlyState(bool* tamingCanOccur, bool* leaderIsNearby)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.IsInTamingFriendlyState");

	AHyaenodon_Character_BP_C_IsInTamingFriendlyState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (tamingCanOccur != nullptr)
		*tamingCanOccur = params.tamingCanOccur;
	if (leaderIsNearby != nullptr)
		*leaderIsNearby = params.leaderIsNearby;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPGetMultiUseEntries
// (NetReliable, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AHyaenodon_Character_BP_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPGetMultiUseEntries");

	AHyaenodon_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHyaenodon_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPTryMultiUse");

	AHyaenodon_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnEatFood
// (NetReliable, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimalItem*             foodItem                       (Parm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::OnEatFood(class UPrimalItem* foodItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnEatFood");

	AHyaenodon_Character_BP_C_OnEatFood_Params params;
	params.foodItem = foodItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPTamedConsumeFoodItem
// ()
// Parameters:
// class UPrimalItem**            foodItem                       (Parm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::BPTamedConsumeFoodItem(class UPrimalItem** foodItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPTamedConsumeFoodItem");

	AHyaenodon_Character_BP_C_BPTamedConsumeFoodItem_Params params;
	params.foodItem = foodItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPUntamedConsumeFoodItem
// ()
// Parameters:
// class UPrimalItem**            foodItem                       (Parm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::BPUntamedConsumeFoodItem(class UPrimalItem** foodItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPUntamedConsumeFoodItem");

	AHyaenodon_Character_BP_C_BPUntamedConsumeFoodItem_Params params;
	params.foodItem = foodItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.UserConstructionScript
// ()

void AHyaenodon_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.UserConstructionScript");

	AHyaenodon_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ReceiveBeginPlay
// ()

void AHyaenodon_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ReceiveBeginPlay");

	AHyaenodon_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnDied_Event
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::OnDied_Event(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnDied_Event");

	AHyaenodon_Character_BP_C_OnDied_Event_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.IncreaseWeight_Multicast
// ()
// Parameters:
// float                          newWeight                      (Parm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::IncreaseWeight_Multicast(float newWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.IncreaseWeight_Multicast");

	AHyaenodon_Character_BP_C_IncreaseWeight_Multicast_Params params;
	params.newWeight = newWeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ResetWeight_Multicast
// ()
// Parameters:
// float                          newWeight                      (Parm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::ResetWeight_Multicast(float newWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ResetWeight_Multicast");

	AHyaenodon_Character_BP_C_ResetWeight_Multicast_Params params;
	params.newWeight = newWeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.RestoreStartledAfterDelay
// ()

void AHyaenodon_Character_BP_C::RestoreStartledAfterDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.RestoreStartledAfterDelay");

	AHyaenodon_Character_BP_C_RestoreStartledAfterDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.DropAfterDelay
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::DropAfterDelay(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.DropAfterDelay");

	AHyaenodon_Character_BP_C_DropAfterDelay_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.SetIsJumpingAfterDelay
// ()

void AHyaenodon_Character_BP_C::SetIsJumpingAfterDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.SetIsJumpingAfterDelay");

	AHyaenodon_Character_BP_C_SetIsJumpingAfterDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.SitDown
// ()
// Parameters:
// bool                           PlayAnim                       (Parm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::SitDown(bool PlayAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.SitDown");

	AHyaenodon_Character_BP_C_SitDown_Params params;
	params.PlayAnim = PlayAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.TryStandUp
// ()

void AHyaenodon_Character_BP_C::TryStandUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.TryStandUp");

	AHyaenodon_Character_BP_C_TryStandUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.TrySitDown
// ()

void AHyaenodon_Character_BP_C::TrySitDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.TrySitDown");

	AHyaenodon_Character_BP_C_TrySitDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.StandUp
// ()

void AHyaenodon_Character_BP_C::StandUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.StandUp");

	AHyaenodon_Character_BP_C_StandUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.QuickSitDown
// ()

void AHyaenodon_Character_BP_C::QuickSitDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.QuickSitDown");

	AHyaenodon_Character_BP_C_QuickSitDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ExecuteUbergraph_Hyaenodon_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_Character_BP_C::ExecuteUbergraph_Hyaenodon_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ExecuteUbergraph_Hyaenodon_Character_BP");

	AHyaenodon_Character_BP_C_ExecuteUbergraph_Hyaenodon_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
