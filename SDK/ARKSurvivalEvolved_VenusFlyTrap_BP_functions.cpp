// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_VenusFlyTrap_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.OnRep_bToggleUnstasis
// ()

void AVenusFlyTrap_BP_C::OnRep_bToggleUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.OnRep_bToggleUnstasis");

	AVenusFlyTrap_BP_C_OnRep_bToggleUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPPreventCharacterBasing
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    BasedOnComponent               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVenusFlyTrap_BP_C::BPPreventCharacterBasing(class AActor** OtherActor, class UPrimitiveComponent** BasedOnComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPPreventCharacterBasing");

	AVenusFlyTrap_BP_C_BPPreventCharacterBasing_Params params;
	params.OtherActor = OtherActor;
	params.BasedOnComponent = BasedOnComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ValidLOSTarget
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           retValid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::STATIC_ValidLOSTarget(class AActor* Target, bool* retValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ValidLOSTarget");

	AVenusFlyTrap_BP_C_ValidLOSTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retValid != nullptr)
		*retValid = params.retValid;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.get anim index
// ()
// Parameters:
// int                            AnimIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::get_anim_index(int* AnimIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.get anim index");

	AVenusFlyTrap_BP_C_get_anim_index_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimIndex != nullptr)
		*AnimIndex = params.AnimIndex;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Can Target WakeSelf
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValidTarget                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::Can_Target_WakeSelf(class APrimalCharacter* Character, bool* bValidTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Can Target WakeSelf");

	AVenusFlyTrap_BP_C_Can_Target_WakeSelf_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValidTarget != nullptr)
		*bValidTarget = params.bValidTarget;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPHitEffect
// ()
// Parameters:
// float*                         DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  PawnInstigator                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsLocalPath                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    HitComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                DamageLoc                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::BPHitEffect(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, class UPrimitiveComponent** HitComponent, struct FVector* DamageLoc, struct FRotator* HitNormal, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPHitEffect");

	AVenusFlyTrap_BP_C_BPHitEffect_Params params;
	params.DamageTaken = DamageTaken;
	params.PawnInstigator = PawnInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsLocalPath = bIsLocalPath;
	params.HitComponent = HitComponent;
	params.DamageLoc = DamageLoc;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.EffectiveRotation
// ()
// Parameters:
// struct FRotator                ActualRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::EffectiveRotation(struct FRotator* ActualRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.EffectiveRotation");

	AVenusFlyTrap_BP_C_EffectiveRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActualRotation != nullptr)
		*ActualRotation = params.ActualRotation;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.GetTargetAimAtLocation
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::GetTargetAimAtLocation(class APrimalCharacter* Target, struct FVector* TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.GetTargetAimAtLocation");

	AVenusFlyTrap_BP_C_GetTargetAimAtLocation_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.GetAimOffsets
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          YawSpeed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rot                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::GetAimOffsets(float DeltaTime, float* YawSpeed, struct FRotator* Rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.GetAimOffsets");

	AVenusFlyTrap_BP_C_GetAimOffsets_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (YawSpeed != nullptr)
		*YawSpeed = params.YawSpeed;
	if (Rot != nullptr)
		*Rot = params.Rot;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SetIsDead
// ()
// Parameters:
// bool                           bNewIsDead                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromDamage                    (Parm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::SetIsDead(bool bNewIsDead, bool bFromDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SetIsDead");

	AVenusFlyTrap_BP_C_SetIsDead_Params params;
	params.bNewIsDead = bNewIsDead;
	params.bFromDamage = bFromDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.CanRevive
// ()
// Parameters:
// bool                           bCanRevive                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::CanRevive(bool* bCanRevive)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.CanRevive");

	AVenusFlyTrap_BP_C_CanRevive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanRevive != nullptr)
		*bCanRevive = params.bCanRevive;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPUpdatedHealth
// ()
// Parameters:
// bool*                          bDoReplication                 (Parm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::BPUpdatedHealth(bool* bDoReplication)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPUpdatedHealth");

	AVenusFlyTrap_BP_C_BPUpdatedHealth_Params params;
	params.bDoReplication = bDoReplication;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AVenusFlyTrap_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPAdjustDamage");

	AVenusFlyTrap_BP_C_BPAdjustDamage_Params params;
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


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPImpactEffect
// ()
// Parameters:
// struct FHitResult              HitRes                         (Parm, OutParm, ReferenceParm)
// struct FVector                 ShootDirection                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVenusFlyTrap_BP_C::BPImpactEffect(struct FHitResult* HitRes, struct FVector* ShootDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPImpactEffect");

	AVenusFlyTrap_BP_C_BPImpactEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitRes != nullptr)
		*HitRes = params.HitRes;
	if (ShootDirection != nullptr)
		*ShootDirection = params.ShootDirection;

	return params.ReturnValue;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPReleasedPlayer
// (NetReliable, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class AShooterCharacter**      ReleasedChar                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           AtSeatNumber                   (Parm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::STATIC_BPReleasedPlayer(class AShooterCharacter** ReleasedChar, int* AtSeatNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPReleasedPlayer");

	AVenusFlyTrap_BP_C_BPReleasedPlayer_Params params;
	params.ReleasedChar = ReleasedChar;
	params.AtSeatNumber = AtSeatNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPPreventReleaseSeatingStructure
// ()
// Parameters:
// class AShooterCharacter**      ForSitter                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVenusFlyTrap_BP_C::BPPreventReleaseSeatingStructure(class AShooterCharacter** ForSitter)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPPreventReleaseSeatingStructure");

	AVenusFlyTrap_BP_C_BPPreventReleaseSeatingStructure_Params params;
	params.ForSitter = ForSitter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPSeatedPlayer
// ()
// Parameters:
// class AShooterCharacter**      SeatedChar                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           AtSeatNumber                   (Parm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::BPSeatedPlayer(class AShooterCharacter** SeatedChar, int* AtSeatNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPSeatedPlayer");

	AVenusFlyTrap_BP_C_BPSeatedPlayer_Params params;
	params.SeatedChar = SeatedChar;
	params.AtSeatNumber = AtSeatNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.CanAttack
// (Exec, Native, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           bCanAttack                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::CanAttack(bool* bCanAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.CanAttack");

	AVenusFlyTrap_BP_C_CanAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanAttack != nullptr)
		*bCanAttack = params.bCanAttack;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.CanRotate
// ()
// Parameters:
// bool                           bCanRotate                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::CanRotate(bool* bCanRotate)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.CanRotate");

	AVenusFlyTrap_BP_C_CanRotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanRotate != nullptr)
		*bCanRotate = params.bCanRotate;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BlueprintAnimNotifyCustomEvent");

	AVenusFlyTrap_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.IsActorValidTarget
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsValid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::IsActorValidTarget(class APrimalCharacter* Target, bool* bIsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.IsActorValidTarget");

	AVenusFlyTrap_BP_C_IsActorValidTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsValid != nullptr)
		*bIsValid = params.bIsValid;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.FindBestTarget
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::FindBestTarget(class APrimalCharacter** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.FindBestTarget");

	AVenusFlyTrap_BP_C_FindBestTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPTriggerStasisEvent
// ()

void AVenusFlyTrap_BP_C::BPTriggerStasisEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPTriggerStasisEvent");

	AVenusFlyTrap_BP_C_BPTriggerStasisEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.OnSleep
// ()
// Parameters:
// bool                           bIsSleeping                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromBeginPlay                 (Parm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::OnSleep(bool bIsSleeping, bool bFromBeginPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.OnSleep");

	AVenusFlyTrap_BP_C_OnSleep_Params params;
	params.bIsSleeping = bIsSleeping;
	params.bFromBeginPlay = bFromBeginPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SetSleeping
// ()
// Parameters:
// bool                           bIsSleeping                    (Parm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::SetSleeping(bool bIsSleeping)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SetSleeping");

	AVenusFlyTrap_BP_C_SetSleeping_Params params;
	params.bIsSleeping = bIsSleeping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPUnstasis
// ()

void AVenusFlyTrap_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPUnstasis");

	AVenusFlyTrap_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPHandleStructureEnabled
// ()
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::BPHandleStructureEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPHandleStructureEnabled");

	AVenusFlyTrap_BP_C_BPHandleStructureEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.UserConstructionScript
// ()

void AVenusFlyTrap_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.UserConstructionScript");

	AVenusFlyTrap_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Timeline_Dissolve__FinishedFunc
// ()

void AVenusFlyTrap_BP_C::Timeline_Dissolve__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Timeline_Dissolve__FinishedFunc");

	AVenusFlyTrap_BP_C_Timeline_Dissolve__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Timeline_Dissolve__UpdateFunc
// ()

void AVenusFlyTrap_BP_C::Timeline_Dissolve__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Timeline_Dissolve__UpdateFunc");

	AVenusFlyTrap_BP_C_Timeline_Dissolve__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ReceiveBeginPlay
// ()

void AVenusFlyTrap_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ReceiveBeginPlay");

	AVenusFlyTrap_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_324_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void AVenusFlyTrap_BP_C::BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_324_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_324_ComponentBeginOverlapSignature__DelegateSignature");

	AVenusFlyTrap_BP_C_BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_324_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepResult != nullptr)
		*SweepResult = params.SweepResult;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Multi_SetSleeping
// ()
// Parameters:
// bool                           bNewSleepingState              (Parm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::Multi_SetSleeping(bool bNewSleepingState)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Multi_SetSleeping");

	AVenusFlyTrap_BP_C_Multi_SetSleeping_Params params;
	params.bNewSleepingState = bNewSleepingState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ClientTick
// ()

void AVenusFlyTrap_BP_C::ClientTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ClientTick");

	AVenusFlyTrap_BP_C_ClientTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ServerTick
// ()

void AVenusFlyTrap_BP_C::ServerTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ServerTick");

	AVenusFlyTrap_BP_C_ServerTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.StartTimers
// ()

void AVenusFlyTrap_BP_C::StartTimers()
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.StartTimers");

	AVenusFlyTrap_BP_C_StartTimers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Multi_DoAttack
// ()
// Parameters:
// int                            AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::Multi_DoAttack(int AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Multi_DoAttack");

	AVenusFlyTrap_BP_C_Multi_DoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.DoAttack
// ()
// Parameters:
// int                            AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::DoAttack(int AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.DoAttack");

	AVenusFlyTrap_BP_C_DoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.PlayAnimMontage
// ()
// Parameters:
// class UAnimMontage*            MontageToPlay                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Play_Rate                      (Parm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::PlayAnimMontage(class UAnimMontage* MontageToPlay, float Play_Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.PlayAnimMontage");

	AVenusFlyTrap_BP_C_PlayAnimMontage_Params params;
	params.MontageToPlay = MontageToPlay;
	params.Play_Rate = Play_Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SwallowDino
// ()
// Parameters:
// class APrimalDinoCharacter*    PrimalDino                     (Parm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::SwallowDino(class APrimalDinoCharacter* PrimalDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SwallowDino");

	AVenusFlyTrap_BP_C_SwallowDino_Params params;
	params.PrimalDino = PrimalDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.PlayFlinch
// ()

void AVenusFlyTrap_BP_C::PlayFlinch()
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.PlayFlinch");

	AVenusFlyTrap_BP_C_PlayFlinch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.PlayAnimMontage_Multi
// ()
// Parameters:
// class UAnimMontage*            MontageToPlay                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Play_Rate                      (Parm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::PlayAnimMontage_Multi(class UAnimMontage* MontageToPlay, float Play_Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.PlayAnimMontage_Multi");

	AVenusFlyTrap_BP_C_PlayAnimMontage_Multi_Params params;
	params.MontageToPlay = MontageToPlay;
	params.Play_Rate = Play_Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Server_StartDying
// ()

void AVenusFlyTrap_BP_C::Server_StartDying()
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Server_StartDying");

	AVenusFlyTrap_BP_C_Server_StartDying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Multi_StartDying
// ()

void AVenusFlyTrap_BP_C::Multi_StartDying()
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Multi_StartDying");

	AVenusFlyTrap_BP_C_Multi_StartDying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.EventNextTick
// ()

void AVenusFlyTrap_BP_C::EventNextTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.EventNextTick");

	AVenusFlyTrap_BP_C_EventNextTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SleepCheckTick
// ()

void AVenusFlyTrap_BP_C::SleepCheckTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SleepCheckTick");

	AVenusFlyTrap_BP_C_SleepCheckTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.PlayFailedGrab
// ()

void AVenusFlyTrap_BP_C::PlayFailedGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.PlayFailedGrab");

	AVenusFlyTrap_BP_C_PlayFailedGrab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SeatCharacter
// ()

void AVenusFlyTrap_BP_C::SeatCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SeatCharacter");

	AVenusFlyTrap_BP_C_SeatCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SeatNextTick
// ()

void AVenusFlyTrap_BP_C::SeatNextTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SeatNextTick");

	AVenusFlyTrap_BP_C_SeatNextTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Multi_SwallowParticle
// ()

void AVenusFlyTrap_BP_C::Multi_SwallowParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Multi_SwallowParticle");

	AVenusFlyTrap_BP_C_Multi_SwallowParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ExecuteUbergraph_VenusFlyTrap_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVenusFlyTrap_BP_C::ExecuteUbergraph_VenusFlyTrap_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ExecuteUbergraph_VenusFlyTrap_BP");

	AVenusFlyTrap_BP_C_ExecuteUbergraph_VenusFlyTrap_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
