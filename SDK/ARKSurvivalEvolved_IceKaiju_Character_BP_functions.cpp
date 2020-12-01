// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceKaiju_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOverrideHealthBarOffset
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AIceKaiju_Character_BP_C::BPOverrideHealthBarOffset(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOverrideHealthBarOffset");

	AIceKaiju_Character_BP_C_BPOverrideHealthBarOffset_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPDinoARKDownloadedBegin
// ()

void AIceKaiju_Character_BP_C::BPDinoARKDownloadedBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPDinoARKDownloadedBegin");

	AIceKaiju_Character_BP_C_BPDinoARKDownloadedBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetDebugInfoString
// ()
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AIceKaiju_Character_BP_C::BPGetDebugInfoString()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetDebugInfoString");

	AIceKaiju_Character_BP_C_BPGetDebugInfoString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPPreventRiding
// ()
// Parameters:
// class AShooterCharacter**      ByPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDontCheckDistance             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceKaiju_Character_BP_C::BPPreventRiding(class AShooterCharacter** ByPawn, bool* bDontCheckDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPPreventRiding");

	AIceKaiju_Character_BP_C_BPPreventRiding_Params params;
	params.ByPawn = ByPawn;
	params.bDontCheckDistance = bDontCheckDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOnDinoCheat
// ()
// Parameters:
// struct FName*                  CheatName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSetValue                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOnDinoCheat");

	AIceKaiju_Character_BP_C_BPOnDinoCheat_Params params;
	params.CheatName = CheatName;
	params.bSetValue = bSetValue;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPCanBaseOnCharacter
// ()
// Parameters:
// class APrimalCharacter**       BaseCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceKaiju_Character_BP_C::BPCanBaseOnCharacter(class APrimalCharacter** BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPCanBaseOnCharacter");

	AIceKaiju_Character_BP_C_BPCanBaseOnCharacter_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ActorIsKaiju
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsKaiju                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::ActorIsKaiju(class AActor* Actor, bool* IsKaiju)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ActorIsKaiju");

	AIceKaiju_Character_BP_C_ActorIsKaiju_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsKaiju != nullptr)
		*IsKaiju = params.IsKaiju;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPDinoARKDownloadedEnd
// ()

void AIceKaiju_Character_BP_C::BPDinoARKDownloadedEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPDinoARKDownloadedEnd");

	AIceKaiju_Character_BP_C_BPDinoARKDownloadedEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.OnRep_UseTamedPhysics
// ()

void AIceKaiju_Character_BP_C::OnRep_UseTamedPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.OnRep_UseTamedPhysics");

	AIceKaiju_Character_BP_C_OnRep_UseTamedPhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AIceKaiju_Character_BP_C::BPGetHUDOverrideBuffProgressBarPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent");

	AIceKaiju_Character_BP_C_BPGetHUDOverrideBuffProgressBarPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOverrideCharacterSound
// ()
// Parameters:
// class USoundBase**             SoundIn                        (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundBase* AIceKaiju_Character_BP_C::BPOverrideCharacterSound(class USoundBase** SoundIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOverrideCharacterSound");

	AIceKaiju_Character_BP_C_BPOverrideCharacterSound_Params params;
	params.SoundIn = SoundIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceKaiju_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BlueprintCanRiderAttack");

	AIceKaiju_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.HealNodesAndHealthFromLeashing
// ()

void AIceKaiju_Character_BP_C::HealNodesAndHealthFromLeashing()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.HealNodesAndHealthFromLeashing");

	AIceKaiju_Character_BP_C_HealNodesAndHealthFromLeashing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOverrideDamageCauserHitMarker
// (NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Delegate, NetClient, DLLImport, Const, NetValidate)
// Parameters:
// class AShooterPlayerController** DamageCauserController         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHitFriendlyTarget             (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PreDamageHealth                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              PointDamageHitResult           (Parm, OutParm, ReferenceParm)
// struct FHitMarkerSettings      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHitMarkerSettings AIceKaiju_Character_BP_C::BPOverrideDamageCauserHitMarker(class AShooterPlayerController** DamageCauserController, bool* bHitFriendlyTarget, float* PreDamageHealth, float* DamageAmount, bool* bIsPointDamage, struct FDamageEvent* DamageEvent, struct FHitResult* PointDamageHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOverrideDamageCauserHitMarker");

	AIceKaiju_Character_BP_C_BPOverrideDamageCauserHitMarker_Params params;
	params.DamageCauserController = DamageCauserController;
	params.bHitFriendlyTarget = bHitFriendlyTarget;
	params.PreDamageHealth = PreDamageHealth;
	params.DamageAmount = DamageAmount;
	params.bIsPointDamage = bIsPointDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
	if (PointDamageHitResult != nullptr)
		*PointDamageHitResult = params.PointDamageHitResult;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.K2_OnMovementModeChanged
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.K2_OnMovementModeChanged");

	AIceKaiju_Character_BP_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOverrideCharacterNewFallVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AIceKaiju_Character_BP_C::BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOverrideCharacterNewFallVelocity");

	AIceKaiju_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params params;
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


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.InterpSpawnInMICs
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::InterpSpawnInMICs(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.InterpSpawnInMICs");

	AIceKaiju_Character_BP_C_InterpSpawnInMICs_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetHealthBarColor
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AIceKaiju_Character_BP_C::BPGetHealthBarColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetHealthBarColor");

	AIceKaiju_Character_BP_C_BPGetHealthBarColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetRiderUnboardLocation
// ()
// Parameters:
// class APrimalCharacter**       RidingCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AIceKaiju_Character_BP_C::BPGetRiderUnboardLocation(class APrimalCharacter** RidingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetRiderUnboardLocation");

	AIceKaiju_Character_BP_C_BPGetRiderUnboardLocation_Params params;
	params.RidingCharacter = RidingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.IsLocomotionBlocked
// ()
// Parameters:
// bool                           bLocked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::IsLocomotionBlocked(bool* bLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.IsLocomotionBlocked");

	AIceKaiju_Character_BP_C_IsLocomotionBlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLocked != nullptr)
		*bLocked = params.bLocked;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetMovementMontage
// ()
// Parameters:
// TEnumAsByte<ERootMotionMovementMode>* Mode                           (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::GetMovementMontage(TEnumAsByte<ERootMotionMovementMode>* Mode, class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetMovementMontage");

	AIceKaiju_Character_BP_C_GetMovementMontage_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Montage != nullptr)
		*Montage = params.Montage;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.InterpNodeActiveStates
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::InterpNodeActiveStates(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.InterpNodeActiveStates");

	AIceKaiju_Character_BP_C_InterpNodeActiveStates_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ClientUpdateNodeStatus
// ()

void AIceKaiju_Character_BP_C::ClientUpdateNodeStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ClientUpdateNodeStatus");

	AIceKaiju_Character_BP_C_ClientUpdateNodeStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPHandleUseButtonPress
// ()
// Parameters:
// class AShooterPlayerController** RiderController                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceKaiju_Character_BP_C::BPHandleUseButtonPress(class AShooterPlayerController** RiderController)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPHandleUseButtonPress");

	AIceKaiju_Character_BP_C_BPHandleUseButtonPress_Params params;
	params.RiderController = RiderController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPNotifyClearRider");

	AIceKaiju_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOnAnimPlayedNotify
// ()
// Parameters:
// class UAnimMontage**           AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  StartSectionName               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReplicate                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReplicateToOwner              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceTickPoseAndServerUpdateMesh (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceTickPoseOnServer         (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::BPOnAnimPlayedNotify(class UAnimMontage** AnimMontage, float* InPlayRate, struct FName* StartSectionName, bool* bReplicate, bool* bReplicateToOwner, bool* bForceTickPoseAndServerUpdateMesh, bool* bForceTickPoseOnServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOnAnimPlayedNotify");

	AIceKaiju_Character_BP_C_BPOnAnimPlayedNotify_Params params;
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


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPSetupTamed");

	AIceKaiju_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPPreventFirstPerson
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceKaiju_Character_BP_C::BPPreventFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPPreventFirstPerson");

	AIceKaiju_Character_BP_C_BPPreventFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetCrosshairColor
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor AIceKaiju_Character_BP_C::BPGetCrosshairColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetCrosshairColor");

	AIceKaiju_Character_BP_C_BPGetCrosshairColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPPreventInputType
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceKaiju_Character_BP_C::BPPreventInputType(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPPreventInputType");

	AIceKaiju_Character_BP_C_BPPreventInputType_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetTPVCamOffset
// ()

void AIceKaiju_Character_BP_C::SetTPVCamOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetTPVCamOffset");

	AIceKaiju_Character_BP_C_SetTPVCamOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BlinkDamageNodeInterp
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::BlinkDamageNodeInterp(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BlinkDamageNodeInterp");

	AIceKaiju_Character_BP_C_BlinkDamageNodeInterp_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPModifyRootMotionDeltaRotation
// ()
// Parameters:
// struct FRotator                Delta                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator AIceKaiju_Character_BP_C::BPModifyRootMotionDeltaRotation(struct FRotator* Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPModifyRootMotionDeltaRotation");

	AIceKaiju_Character_BP_C_BPModifyRootMotionDeltaRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Delta != nullptr)
		*Delta = params.Delta;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPModifyRootMotionDeltaTranslation
// ()

void AIceKaiju_Character_BP_C::BPModifyRootMotionDeltaTranslation()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPModifyRootMotionDeltaTranslation");

	AIceKaiju_Character_BP_C_BPModifyRootMotionDeltaTranslation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetGravityZScale
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AIceKaiju_Character_BP_C::BPGetGravityZScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetGravityZScale");

	AIceKaiju_Character_BP_C_BPGetGravityZScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DealAOECollisionDamage
// (NetReliable, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetClient, DLLImport, Const, NetValidate)

void AIceKaiju_Character_BP_C::STATIC_DealAOECollisionDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DealAOECollisionDamage");

	AIceKaiju_Character_BP_C_DealAOECollisionDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Init Fur
// ()

void AIceKaiju_Character_BP_C::Init_Fur()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Init Fur");

	AIceKaiju_Character_BP_C_Init_Fur_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.InitFurRestDistance
// ()

void AIceKaiju_Character_BP_C::InitFurRestDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.InitFurRestDistance");

	AIceKaiju_Character_BP_C_InitFurRestDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetLastTransforms
// (Exec, Native, MulticastDelegate, Private, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void AIceKaiju_Character_BP_C::SetLastTransforms()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetLastTransforms");

	AIceKaiju_Character_BP_C_SetLastTransforms_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateFur
// (Native, Event, MulticastDelegate, Private, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void AIceKaiju_Character_BP_C::UpdateFur()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateFur");

	AIceKaiju_Character_BP_C_UpdateFur_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SimulateFur
// (NetRequest, Native, NetResponse, MulticastDelegate, Private, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// TArray<struct UObject_FTransform> InSocketTransforms             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct UObject_FTransform> InLastSubstepSocketTransforms  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AIceKaiju_Character_BP_C::SimulateFur(float DeltaTime, TArray<struct UObject_FTransform>* InSocketTransforms, TArray<struct UObject_FTransform>* InLastSubstepSocketTransforms)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SimulateFur");

	AIceKaiju_Character_BP_C_SimulateFur_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InSocketTransforms != nullptr)
		*InSocketTransforms = params.InSocketTransforms;
	if (InLastSubstepSocketTransforms != nullptr)
		*InLastSubstepSocketTransforms = params.InLastSubstepSocketTransforms;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetFurParams
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// TArray<struct UObject_FTransform> InSocketTransforms             (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AIceKaiju_Character_BP_C::SetFurParams(TArray<struct UObject_FTransform>* InSocketTransforms)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetFurParams");

	AIceKaiju_Character_BP_C_SetFurParams_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InSocketTransforms != nullptr)
		*InSocketTransforms = params.InSocketTransforms;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.CreateNodeDynamicMATs
// ()

void AIceKaiju_Character_BP_C::CreateNodeDynamicMATs()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.CreateNodeDynamicMATs");

	AIceKaiju_Character_BP_C_CreateNodeDynamicMATs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Get Launch DirectionForWildLeap
// ()
// Parameters:
// class AActor*                  CalcActor                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::Get_Launch_DirectionForWildLeap(class AActor* CalcActor, struct FVector* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Get Launch DirectionForWildLeap");

	AIceKaiju_Character_BP_C_Get_Launch_DirectionForWildLeap_Params params;
	params.CalcActor = CalcActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPHandleOnStopFire
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceKaiju_Character_BP_C::BPHandleOnStopFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPHandleOnStopFire");

	AIceKaiju_Character_BP_C_BPHandleOnStopFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BP_OnSetDeath
// ()

void AIceKaiju_Character_BP_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BP_OnSetDeath");

	AIceKaiju_Character_BP_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.TraceForLeapCollisionDamage
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void AIceKaiju_Character_BP_C::STATIC_TraceForLeapCollisionDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.TraceForLeapCollisionDamage");

	AIceKaiju_Character_BP_C_TraceForLeapCollisionDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AngryAOEDmg
// (NetReliable, Exec, NetResponse, MulticastDelegate, Private, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void AIceKaiju_Character_BP_C::AngryAOEDmg()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AngryAOEDmg");

	AIceKaiju_Character_BP_C_AngryAOEDmg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ShouldStopJumpRotation
// ()
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::ShouldStopJumpRotation(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ShouldStopJumpRotation");

	AIceKaiju_Character_BP_C_ShouldStopJumpRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LaunchLiquidBomb
// (NetReliable, Exec, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void AIceKaiju_Character_BP_C::LaunchLiquidBomb()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LaunchLiquidBomb");

	AIceKaiju_Character_BP_C_LaunchLiquidBomb_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LiquidBombTrace
// (Native, Static, MulticastDelegate, Private, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void AIceKaiju_Character_BP_C::STATIC_LiquidBombTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LiquidBombTrace");

	AIceKaiju_Character_BP_C_LiquidBombTrace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.FinishLeapTamed
// ()

void AIceKaiju_Character_BP_C::FinishLeapTamed()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.FinishLeapTamed");

	AIceKaiju_Character_BP_C_FinishLeapTamed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetLaunchDirection
// ()
// Parameters:
// class AActor*                  CalcActor                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::GetLaunchDirection(class AActor* CalcActor, struct FVector* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetLaunchDirection");

	AIceKaiju_Character_BP_C_GetLaunchDirection_Params params;
	params.CalcActor = CalcActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LaunchAtTracePoint
// ()

void AIceKaiju_Character_BP_C::LaunchAtTracePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LaunchAtTracePoint");

	AIceKaiju_Character_BP_C_LaunchAtTracePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ShortestAngleDistance
// ()
// Parameters:
// float                          AngleCurrent                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Difference                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::ShortestAngleDistance(float AngleCurrent, float AngleTarget, float* Difference)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ShortestAngleDistance");

	AIceKaiju_Character_BP_C_ShortestAngleDistance_Params params;
	params.AngleCurrent = AngleCurrent;
	params.AngleTarget = AngleTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Difference != nullptr)
		*Difference = params.Difference;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetClampedLookDir
// ()
// Parameters:
// bool                           LimitLowerPitch                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::GetClampedLookDir(bool LimitLowerPitch, struct FVector* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetClampedLookDir");

	AIceKaiju_Character_BP_C_GetClampedLookDir_Params params;
	params.LimitLowerPitch = LimitLowerPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LeapingTrace
// (NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void AIceKaiju_Character_BP_C::LeapingTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LeapingTrace");

	AIceKaiju_Character_BP_C_LeapingTrace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ExecuteTamedLEap
// ()

void AIceKaiju_Character_BP_C::ExecuteTamedLEap()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ExecuteTamedLEap");

	AIceKaiju_Character_BP_C_ExecuteTamedLEap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceKaiju_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPHandleOnStopTargeting");

	AIceKaiju_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateLeapTargetVFXLocation
// ()
// Parameters:
// bool                           IsVisible                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldLoc                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                WorldRot                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm)
// struct FVector                 SurfaceNormal                  (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::UpdateLeapTargetVFXLocation(bool IsVisible, const struct FVector& WorldLoc, const struct FRotator& WorldRot, const struct FHitResult& HitResult, const struct FVector& SurfaceNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateLeapTargetVFXLocation");

	AIceKaiju_Character_BP_C_UpdateLeapTargetVFXLocation_Params params;
	params.IsVisible = IsVisible;
	params.WorldLoc = WorldLoc;
	params.WorldRot = WorldRot;
	params.HitResult = HitResult;
	params.SurfaceNormal = SurfaceNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Calc Leap TargetTamed
// (NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FProjectileArc          Arc                            (Parm)
// float                          DebugDrawDuration              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FoundValidTarget               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsAirTarget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetNormal                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ArcTime                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm, OutParm)

void AIceKaiju_Character_BP_C::STATIC_Calc_Leap_TargetTamed(const struct FProjectileArc& Arc, float DebugDrawDuration, bool* FoundValidTarget, bool* IsAirTarget, struct FVector* Location, struct FRotator* Rotation, struct FVector* TargetNormal, float* ArcTime, struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Calc Leap TargetTamed");

	AIceKaiju_Character_BP_C_Calc_Leap_TargetTamed_Params params;
	params.Arc = Arc;
	params.DebugDrawDuration = DebugDrawDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundValidTarget != nullptr)
		*FoundValidTarget = params.FoundValidTarget;
	if (IsAirTarget != nullptr)
		*IsAirTarget = params.IsAirTarget;
	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
	if (TargetNormal != nullptr)
		*TargetNormal = params.TargetNormal;
	if (ArcTime != nullptr)
		*ArcTime = params.ArcTime;
	if (HitResult != nullptr)
		*HitResult = params.HitResult;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetVerticalViewAngle
// ()
// Parameters:
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::GetVerticalViewAngle(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetVerticalViewAngle");

	AIceKaiju_Character_BP_C_GetVerticalViewAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceKaiju_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPHandleControllerInitiatedAttack");

	AIceKaiju_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.MoveBlocked
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceKaiju_Character_BP_C::MoveBlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.MoveBlocked");

	AIceKaiju_Character_BP_C_MoveBlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BSetupDinoTameable
// ()

void AIceKaiju_Character_BP_C::BSetupDinoTameable()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BSetupDinoTameable");

	AIceKaiju_Character_BP_C_BSetupDinoTameable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPClientDoMultiUse");

	AIceKaiju_Character_BP_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetMultiUseEntries
// (Event, NetResponse, Public, NetServer, NetClient, DLLImport, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AIceKaiju_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetMultiUseEntries");

	AIceKaiju_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceKaiju_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPTryMultiUse");

	AIceKaiju_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.CreateIceSpearTargetArray
// ()
// Parameters:
// TArray<class AActor*>          NewParam                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          NewParam1                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AIceKaiju_Character_BP_C::CreateIceSpearTargetArray(TArray<class AActor*>* NewParam, TArray<class AActor*>* NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.CreateIceSpearTargetArray");

	AIceKaiju_Character_BP_C_CreateIceSpearTargetArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetImmuneToDamage
// ()
// Parameters:
// bool                           Immune                         (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::SetImmuneToDamage(bool Immune)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetImmuneToDamage");

	AIceKaiju_Character_BP_C_SetImmuneToDamage_Params params;
	params.Immune = Immune;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.StartTorpid
// ()

void AIceKaiju_Character_BP_C::StartTorpid()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.StartTorpid");

	AIceKaiju_Character_BP_C_StartTorpid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DestroyChestNode
// ()

void AIceKaiju_Character_BP_C::DestroyChestNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DestroyChestNode");

	AIceKaiju_Character_BP_C_DestroyChestNode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DamageChestNode
// ()
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::DamageChestNode(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DamageChestNode");

	AIceKaiju_Character_BP_C_DamageChestNode_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPCanTargetCorpse
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceKaiju_Character_BP_C::BPCanTargetCorpse()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPCanTargetCorpse");

	AIceKaiju_Character_BP_C_BPCanTargetCorpse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ExposeChestNode
// ()
// Parameters:
// bool                           Hide                           (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::ExposeChestNode(bool Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ExposeChestNode");

	AIceKaiju_Character_BP_C_ExposeChestNode_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DestroyRightShoulderNode
// ()

void AIceKaiju_Character_BP_C::DestroyRightShoulderNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DestroyRightShoulderNode");

	AIceKaiju_Character_BP_C_DestroyRightShoulderNode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.RightLegNode Destroyed
// ()

void AIceKaiju_Character_BP_C::RightLegNode_Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.RightLegNode Destroyed");

	AIceKaiju_Character_BP_C_RightLegNode_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.HideLegNodes
// ()

void AIceKaiju_Character_BP_C::HideLegNodes()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.HideLegNodes");

	AIceKaiju_Character_BP_C_HideLegNodes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ExposeLegNodes
// ()
// Parameters:
// bool                           Hide                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RightLeg                       (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::ExposeLegNodes(bool Hide, bool RightLeg)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ExposeLegNodes");

	AIceKaiju_Character_BP_C_ExposeLegNodes_Params params;
	params.Hide = Hide;
	params.RightLeg = RightLeg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPDoAttack");

	AIceKaiju_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DamageRightShoulderNode
// ()
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::DamageRightShoulderNode(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DamageRightShoulderNode");

	AIceKaiju_Character_BP_C_DamageRightShoulderNode_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DamageRightLegNode
// ()
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::DamageRightLegNode(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DamageRightLegNode");

	AIceKaiju_Character_BP_C_DamageRightLegNode_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AIceKaiju_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPAdjustDamage");

	AIceKaiju_Character_BP_C_BPAdjustDamage_Params params;
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


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BlueprintAdjustOutputDamage
// (NetReliable, Exec, Native, Event, NetResponse, NetMulticast, Private, Protected, Delegate, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AIceKaiju_Character_BP_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BlueprintAdjustOutputDamage");

	AIceKaiju_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
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


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ClearLeapTarget
// ()

void AIceKaiju_Character_BP_C::ClearLeapTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ClearLeapTarget");

	AIceKaiju_Character_BP_C_ClearLeapTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPShouldLimitForwardDirection
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceKaiju_Character_BP_C::BPShouldLimitForwardDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPShouldLimitForwardDirection");

	AIceKaiju_Character_BP_C_BPShouldLimitForwardDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPTimerNonDedicated
// ()

void AIceKaiju_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPTimerNonDedicated");

	AIceKaiju_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.CheckLeapAttackEnd
// ()

void AIceKaiju_Character_BP_C::CheckLeapAttackEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.CheckLeapAttackEnd");

	AIceKaiju_Character_BP_C_CheckLeapAttackEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPTimerServer
// (NetResponse, Private, Protected, Delegate, BlueprintCallable, BlueprintPure, NetValidate)

void AIceKaiju_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPTimerServer");

	AIceKaiju_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.FinishLeap
// ()

void AIceKaiju_Character_BP_C::FinishLeap()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.FinishLeap");

	AIceKaiju_Character_BP_C_FinishLeap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.OnRep_bDoingLeap
// ()

void AIceKaiju_Character_BP_C::OnRep_bDoingLeap()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.OnRep_bDoingLeap");

	AIceKaiju_Character_BP_C_OnRep_bDoingLeap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.StartLeap
// (NetReliable, NetRequest, Event, Static, Private, Protected, Delegate, BlueprintCallable, BlueprintPure, NetValidate)

void AIceKaiju_Character_BP_C::STATIC_StartLeap()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.StartLeap");

	AIceKaiju_Character_BP_C_StartLeap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.IceKaijuShakePlayersOff
// ()
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::IceKaijuShakePlayersOff(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.IceKaijuShakePlayersOff");

	AIceKaiju_Character_BP_C_IceKaijuShakePlayersOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPCanBeBaseForCharacter
// ()
// Parameters:
// class APawn**                  Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceKaiju_Character_BP_C::BPCanBeBaseForCharacter(class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPCanBeBaseForCharacter");

	AIceKaiju_Character_BP_C_BPCanBeBaseForCharacter_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPAdjustAttackIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AIceKaiju_Character_BP_C::BPAdjustAttackIndex(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPAdjustAttackIndex");

	AIceKaiju_Character_BP_C_BPAdjustAttackIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Ice Kaiju Perform Attack
// (Exec, Native, NetMulticast, Private, Protected, Delegate, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// TEnumAsByte<EIceKaijuAttackList> Attack                         (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::Ice_Kaiju_Perform_Attack(TEnumAsByte<EIceKaijuAttackList> Attack)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Ice Kaiju Perform Attack");

	AIceKaiju_Character_BP_C_Ice_Kaiju_Perform_Attack_Params params;
	params.Attack = Attack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceKaiju_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BlueprintCanAttack");

	AIceKaiju_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UserConstructionScript
// ()

void AIceKaiju_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UserConstructionScript");

	AIceKaiju_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.CallFunc_StunKaiju
// ()

void AIceKaiju_Character_BP_C::CallFunc_StunKaiju()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.CallFunc_StunKaiju");

	AIceKaiju_Character_BP_C_CallFunc_StunKaiju_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetVar_IKArenaManager
// ()
// Parameters:
// class AActor*                  ArenaManager                   (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::SetVar_IKArenaManager(class AActor* ArenaManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetVar_IKArenaManager");

	AIceKaiju_Character_BP_C_SetVar_IKArenaManager_Params params;
	params.ArenaManager = ArenaManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ReceiveTick");

	AIceKaiju_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetAngry
// ()
// Parameters:
// bool                           IsAngry                        (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::SetAngry(bool IsAngry)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetAngry");

	AIceKaiju_Character_BP_C_SetAngry_Params params;
	params.IsAngry = IsAngry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.MulticastApplyLeapDownForce
// ()

void AIceKaiju_Character_BP_C::MulticastApplyLeapDownForce()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.MulticastApplyLeapDownForce");

	AIceKaiju_Character_BP_C_MulticastApplyLeapDownForce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BndEvt__AttackCheckSphere_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void AIceKaiju_Character_BP_C::BndEvt__AttackCheckSphere_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BndEvt__AttackCheckSphere_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature");

	AIceKaiju_Character_BP_C_BndEvt__AttackCheckSphere_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.PlayLeapAttackHitFX
// ()

void AIceKaiju_Character_BP_C::PlayLeapAttackHitFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.PlayLeapAttackHitFX");

	AIceKaiju_Character_BP_C_PlayLeapAttackHitFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ReceiveBeginPlay
// ()

void AIceKaiju_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ReceiveBeginPlay");

	AIceKaiju_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Rep_ExposeLegNodesWithDelay
// ()
// Parameters:
// bool                           Hide                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RightLeg                       (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::Rep_ExposeLegNodesWithDelay(bool Hide, float Delay, bool RightLeg)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Rep_ExposeLegNodesWithDelay");

	AIceKaiju_Character_BP_C_Rep_ExposeLegNodesWithDelay_Params params;
	params.Hide = Hide;
	params.Delay = Delay;
	params.RightLeg = RightLeg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Rep_ExposeLegNodes
// ()
// Parameters:
// bool                           Hide                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RightLeg                       (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::Rep_ExposeLegNodes(bool Hide, bool RightLeg)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Rep_ExposeLegNodes");

	AIceKaiju_Character_BP_C_Rep_ExposeLegNodes_Params params;
	params.Hide = Hide;
	params.RightLeg = RightLeg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_TurnForAttack
// ()

void AIceKaiju_Character_BP_C::AnimNotify_TurnForAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_TurnForAttack");

	AIceKaiju_Character_BP_C_AnimNotify_TurnForAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.RotateAttack
// ()

void AIceKaiju_Character_BP_C::RotateAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.RotateAttack");

	AIceKaiju_Character_BP_C_RotateAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_AttackTurnFinished
// ()

void AIceKaiju_Character_BP_C::AnimNotify_AttackTurnFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_AttackTurnFinished");

	AIceKaiju_Character_BP_C_AnimNotify_AttackTurnFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Rep_ExposeChestNodeWithDelay
// ()
// Parameters:
// bool                           Hide                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::Rep_ExposeChestNodeWithDelay(bool Hide, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Rep_ExposeChestNodeWithDelay");

	AIceKaiju_Character_BP_C_Rep_ExposeChestNodeWithDelay_Params params;
	params.Hide = Hide;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Rep_ExposeChestNode
// ()
// Parameters:
// bool                           Hide                           (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::Rep_ExposeChestNode(bool Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Rep_ExposeChestNode");

	AIceKaiju_Character_BP_C_Rep_ExposeChestNode_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_LeapAttackBegin
// ()

void AIceKaiju_Character_BP_C::AnimNotify_LeapAttackBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_LeapAttackBegin");

	AIceKaiju_Character_BP_C_AnimNotify_LeapAttackBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LaunchIceSpears
// ()

void AIceKaiju_Character_BP_C::LaunchIceSpears()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LaunchIceSpears");

	AIceKaiju_Character_BP_C_LaunchIceSpears_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.FreezeAOE
// ()
// Parameters:
// bool                           On                             (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::FreezeAOE(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.FreezeAOE");

	AIceKaiju_Character_BP_C_FreezeAOE_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DelayedPress
// ()

void AIceKaiju_Character_BP_C::DelayedPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DelayedPress");

	AIceKaiju_Character_BP_C_DelayedPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Server_TraceTargetDir
// ()
// Parameters:
// struct FVector                 AimLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AimHit                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           LeapInstant                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MaxDistLeapTraceGroundLoc      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FailedtoFindMaxDistLeapTraceGroundLoc (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::Server_TraceTargetDir(const struct FVector& AimLoc, bool AimHit, bool LeapInstant, const struct FVector& MaxDistLeapTraceGroundLoc, bool FailedtoFindMaxDistLeapTraceGroundLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Server_TraceTargetDir");

	AIceKaiju_Character_BP_C_Server_TraceTargetDir_Params params;
	params.AimLoc = AimLoc;
	params.AimHit = AimHit;
	params.LeapInstant = LeapInstant;
	params.MaxDistLeapTraceGroundLoc = MaxDistLeapTraceGroundLoc;
	params.FailedtoFindMaxDistLeapTraceGroundLoc = FailedtoFindMaxDistLeapTraceGroundLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_TraceTargetDir
// ()
// Parameters:
// struct FVector                 AimLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AimHit                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MaxDistLeapTraceGroundLoc      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FailedtoFindMaxDistLeapTraceGroundLoc (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::Multi_TraceTargetDir(const struct FVector& AimLoc, bool AimHit, const struct FVector& MaxDistLeapTraceGroundLoc, bool FailedtoFindMaxDistLeapTraceGroundLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_TraceTargetDir");

	AIceKaiju_Character_BP_C_Multi_TraceTargetDir_Params params;
	params.AimLoc = AimLoc;
	params.AimHit = AimHit;
	params.MaxDistLeapTraceGroundLoc = MaxDistLeapTraceGroundLoc;
	params.FailedtoFindMaxDistLeapTraceGroundLoc = FailedtoFindMaxDistLeapTraceGroundLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.RequestLeapResponse
// ()
// Parameters:
// bool                           IsHoldingLeap                  (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::RequestLeapResponse(bool IsHoldingLeap)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.RequestLeapResponse");

	AIceKaiju_Character_BP_C_RequestLeapResponse_Params params;
	params.IsHoldingLeap = IsHoldingLeap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BP_OnJumpReleased
// ()

void AIceKaiju_Character_BP_C::BP_OnJumpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BP_OnJumpReleased");

	AIceKaiju_Character_BP_C_BP_OnJumpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BP_OnJumpPressed
// ()

void AIceKaiju_Character_BP_C::BP_OnJumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BP_OnJumpPressed");

	AIceKaiju_Character_BP_C_BP_OnJumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multicast_SetInput
// ()
// Parameters:
// bool                           PreventInput                   (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::Multicast_SetInput(bool PreventInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multicast_SetInput");

	AIceKaiju_Character_BP_C_Multicast_SetInput_Params params;
	params.PreventInput = PreventInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ServerDoAttack
// ()
// Parameters:
// int                            AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::ServerDoAttack(int AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ServerDoAttack");

	AIceKaiju_Character_BP_C_ServerDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_LaunchBomb
// ()

void AIceKaiju_Character_BP_C::AnimNotify_LaunchBomb()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_LaunchBomb");

	AIceKaiju_Character_BP_C_AnimNotify_LaunchBomb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DelayedClearLeap
// ()

void AIceKaiju_Character_BP_C::DelayedClearLeap()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DelayedClearLeap");

	AIceKaiju_Character_BP_C_DelayedClearLeap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ClearLeap
// ()

void AIceKaiju_Character_BP_C::ClearLeap()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ClearLeap");

	AIceKaiju_Character_BP_C_ClearLeap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateAllJumpRotation
// ()

void AIceKaiju_Character_BP_C::UpdateAllJumpRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateAllJumpRotation");

	AIceKaiju_Character_BP_C_UpdateAllJumpRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateJumpRotation
// ()

void AIceKaiju_Character_BP_C::UpdateJumpRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateJumpRotation");

	AIceKaiju_Character_BP_C_UpdateJumpRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.MultiRestoreInput
// ()

void AIceKaiju_Character_BP_C::MultiRestoreInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.MultiRestoreInput");

	AIceKaiju_Character_BP_C_MultiRestoreInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_TamedLeapDamage
// ()

void AIceKaiju_Character_BP_C::AnimNotify_TamedLeapDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_TamedLeapDamage");

	AIceKaiju_Character_BP_C_AnimNotify_TamedLeapDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_ApplyFreezeFromIceAura
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::Multi_ApplyFreezeFromIceAura(class APrimalCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_ApplyFreezeFromIceAura");

	AIceKaiju_Character_BP_C_Multi_ApplyFreezeFromIceAura_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.IceAuraCheck
// ()

void AIceKaiju_Character_BP_C::IceAuraCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.IceAuraCheck");

	AIceKaiju_Character_BP_C_IceAuraCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BndEvt__LeapCheckSphere_K2Node_ComponentBoundEvent_215_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void AIceKaiju_Character_BP_C::BndEvt__LeapCheckSphere_K2Node_ComponentBoundEvent_215_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BndEvt__LeapCheckSphere_K2Node_ComponentBoundEvent_215_ComponentBeginOverlapSignature__DelegateSignature");

	AIceKaiju_Character_BP_C_BndEvt__LeapCheckSphere_K2Node_ComponentBoundEvent_215_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.MultiToggleIceAuraVFX
// ()
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::MultiToggleIceAuraVFX(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.MultiToggleIceAuraVFX");

	AIceKaiju_Character_BP_C_MultiToggleIceAuraVFX_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_EnableIK
// ()

void AIceKaiju_Character_BP_C::AnimNotify_EnableIK()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_EnableIK");

	AIceKaiju_Character_BP_C_AnimNotify_EnableIK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.IsDoneAttacking
// ()

void AIceKaiju_Character_BP_C::IsDoneAttacking()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.IsDoneAttacking");

	AIceKaiju_Character_BP_C_IsDoneAttacking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_SetNodeColor
// ()
// Parameters:
// int                            Node                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::Multi_SetNodeColor(int Node, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_SetNodeColor");

	AIceKaiju_Character_BP_C_Multi_SetNodeColor_Params params;
	params.Node = Node;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multicast_IceKaijuDebugInfo
// ()

void AIceKaiju_Character_BP_C::Multicast_IceKaijuDebugInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multicast_IceKaijuDebugInfo");

	AIceKaiju_Character_BP_C_Multicast_IceKaijuDebugInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multicast_DrawDebugSphere
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LineColor                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::Multicast_DrawDebugSphere(const struct FVector& Loc, const struct FLinearColor& LineColor, float Duration, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multicast_DrawDebugSphere");

	AIceKaiju_Character_BP_C_Multicast_DrawDebugSphere_Params params;
	params.Loc = Loc;
	params.LineColor = LineColor;
	params.Duration = Duration;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_InterpRightLegNode
// ()
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::Multi_InterpRightLegNode(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_InterpRightLegNode");

	AIceKaiju_Character_BP_C_Multi_InterpRightLegNode_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_InterpRightShoulderNode
// ()
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::Multi_InterpRightShoulderNode(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_InterpRightShoulderNode");

	AIceKaiju_Character_BP_C_Multi_InterpRightShoulderNode_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Server_SetHoldLeftClick
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::Server_SetHoldLeftClick(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Server_SetHoldLeftClick");

	AIceKaiju_Character_BP_C_Server_SetHoldLeftClick_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.StunKaiju
// ()

void AIceKaiju_Character_BP_C::StunKaiju()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.StunKaiju");

	AIceKaiju_Character_BP_C_StunKaiju_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.EquipSaddle
// ()

void AIceKaiju_Character_BP_C::EquipSaddle()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.EquipSaddle");

	AIceKaiju_Character_BP_C_EquipSaddle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_PlayNodeDestroyFX
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::Multi_PlayNodeDestroyFX(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_PlayNodeDestroyFX");

	AIceKaiju_Character_BP_C_Multi_PlayNodeDestroyFX_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateSaddlePhysics
// ()

void AIceKaiju_Character_BP_C::UpdateSaddlePhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateSaddlePhysics");

	AIceKaiju_Character_BP_C_UpdateSaddlePhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_DelayedTurnOffHealthRegen
// ()

void AIceKaiju_Character_BP_C::Multi_DelayedTurnOffHealthRegen()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_DelayedTurnOffHealthRegen");

	AIceKaiju_Character_BP_C_Multi_DelayedTurnOffHealthRegen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ExecuteUbergraph_IceKaiju_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_Character_BP_C::ExecuteUbergraph_IceKaiju_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ExecuteUbergraph_IceKaiju_Character_BP");

	AIceKaiju_Character_BP_C_ExecuteUbergraph_IceKaiju_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
