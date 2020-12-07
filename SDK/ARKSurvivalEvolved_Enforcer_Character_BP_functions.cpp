// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Enforcer_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsHostileTekShield
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsShield                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::IsHostileTekShield(class AActor* Actor, bool* IsShield)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsHostileTekShield");

	AEnforcer_Character_BP_C_IsHostileTekShield_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsShield != nullptr)
		*IsShield = params.IsShield;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ProjectileArcSweep
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// struct FProjectileArc          Arc                            (Parm)
// struct FRotator                CapsuleRotation                (Parm, ZeroConstructor, IsPlainOldData)
// float                          CapsuleRadius                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          CapsuleHalfHeight              (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxArcLength                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<ECollisionChannel> CollisionChannel               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDrawDebug                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DebugDrawDuration              (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm, OutParm)
// struct FVector                 EndLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          EndArcTime                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEnforcer_Character_BP_C::STATIC_ProjectileArcSweep(const struct FProjectileArc& Arc, const struct FRotator& CapsuleRotation, float CapsuleRadius, float CapsuleHalfHeight, float MaxArcLength, TEnumAsByte<ECollisionChannel> CollisionChannel, bool bDrawDebug, float DebugDrawDuration, TArray<class AActor*>* ActorsToIgnore, struct FHitResult* HitResult, struct FVector* EndLocation, float* EndArcTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ProjectileArcSweep");

	AEnforcer_Character_BP_C_ProjectileArcSweep_Params params;
	params.Arc = Arc;
	params.CapsuleRotation = CapsuleRotation;
	params.CapsuleRadius = CapsuleRadius;
	params.CapsuleHalfHeight = CapsuleHalfHeight;
	params.MaxArcLength = MaxArcLength;
	params.CollisionChannel = CollisionChannel;
	params.bDrawDebug = bDrawDebug;
	params.DebugDrawDuration = DebugDrawDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorsToIgnore != nullptr)
		*ActorsToIgnore = params.ActorsToIgnore;
	if (HitResult != nullptr)
		*HitResult = params.HitResult;
	if (EndLocation != nullptr)
		*EndLocation = params.EndLocation;
	if (EndArcTime != nullptr)
		*EndArcTime = params.EndArcTime;

	return params.ReturnValue;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.CanNonControlledClimberNotClimbingOverrideTransformInterpolation
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::CanNonControlledClimberNotClimbingOverrideTransformInterpolation(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.CanNonControlledClimberNotClimbingOverrideTransformInterpolation");

	AEnforcer_Character_BP_C_CanNonControlledClimberNotClimbingOverrideTransformInterpolation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOnRefreshColorization
// ()
// Parameters:
// TArray<struct FLinearColor>    Colors                         (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AEnforcer_Character_BP_C::BPOnRefreshColorization(TArray<struct FLinearColor>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOnRefreshColorization");

	AEnforcer_Character_BP_C_BPOnRefreshColorization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOnLethalDamage
// ()
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController**            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreventDeath                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::BPOnLethalDamage(float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent, bool* bPreventDeath)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOnLethalDamage");

	AEnforcer_Character_BP_C_BPOnLethalDamage_Params params;
	params.KillingDamage = KillingDamage;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
	if (bPreventDeath != nullptr)
		*bPreventDeath = params.bPreventDeath;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ReceiveAnyDamage");

	AEnforcer_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.OnRep_WildAlertEnabled
// ()

void AEnforcer_Character_BP_C::OnRep_WildAlertEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.OnRep_WildAlertEnabled");

	AEnforcer_Character_BP_C_OnRep_WildAlertEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetRiderVisibility
// ()
// Parameters:
// class AShooterCharacter*       Rider                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsVisible                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::GetRiderVisibility(class AShooterCharacter* Rider, bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetRiderVisibility");

	AEnforcer_Character_BP_C_GetRiderVisibility_Params params;
	params.Rider = Rider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsVisible != nullptr)
		*IsVisible = params.IsVisible;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.SetRiderVisibility
// ()
// Parameters:
// class AShooterCharacter*       Rider                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::SetRiderVisibility(class AShooterCharacter* Rider, bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.SetRiderVisibility");

	AEnforcer_Character_BP_C_SetRiderVisibility_Params params;
	params.Rider = Rider;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.SetupBlinkCooldowns
// ()
// Parameters:
// int                            OverrideNumCooldowns           (Parm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::SetupBlinkCooldowns(int OverrideNumCooldowns)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.SetupBlinkCooldowns");

	AEnforcer_Character_BP_C_SetupBlinkCooldowns_Params params;
	params.OverrideNumCooldowns = OverrideNumCooldowns;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPNotifyLevelUp
// ()
// Parameters:
// int*                           ExtraCharacterLevel            (Parm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::BPNotifyLevelUp(int* ExtraCharacterLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPNotifyLevelUp");

	AEnforcer_Character_BP_C_BPNotifyLevelUp_Params params;
	params.ExtraCharacterLevel = ExtraCharacterLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.On ClimberAttached
// ()

void AEnforcer_Character_BP_C::On_ClimberAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.On ClimberAttached");

	AEnforcer_Character_BP_C_On_ClimberAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPUnstasis
// ()

void AEnforcer_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPUnstasis");

	AEnforcer_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BlueprintPlayDying
// ()
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::BlueprintPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BlueprintPlayDying");

	AEnforcer_Character_BP_C_BlueprintPlayDying_Params params;
	params.KillingDamage = KillingDamage;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPNotifySetRider");

	AEnforcer_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.StopClimbing
// ()
// Parameters:
// bool*                          resetRestoreToSeeking          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          skipDetach                     (Parm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::StopClimbing(bool* resetRestoreToSeeking, bool* skipDetach)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.StopClimbing");

	AEnforcer_Character_BP_C_StopClimbing_Params params;
	params.resetRestoreToSeeking = resetRestoreToSeeking;
	params.skipDetach = skipDetach;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPGetRiderUnboardLocation
// (NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APrimalCharacter**       RidingCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AEnforcer_Character_BP_C::STATIC_BPGetRiderUnboardLocation(class APrimalCharacter** RidingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPGetRiderUnboardLocation");

	AEnforcer_Character_BP_C_BPGetRiderUnboardLocation_Params params;
	params.RidingCharacter = RidingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BP_PreventMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEnforcer_Character_BP_C::BP_PreventMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BP_PreventMovementMode");

	AEnforcer_Character_BP_C_BP_PreventMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.HasEnoughStaminaToBlink
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEnforcer_Character_BP_C::HasEnoughStaminaToBlink()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.HasEnoughStaminaToBlink");

	AEnforcer_Character_BP_C_HasEnoughStaminaToBlink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.SweepTestBlinkClimbPoint
// (Exec, Native, Public, Private, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                TargetRot                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          DebugDrawTime                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::SweepTestBlinkClimbPoint(const struct FVector& Location, const struct FVector& Normal, const struct FRotator& TargetRot, float DebugDrawTime, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.SweepTestBlinkClimbPoint");

	AEnforcer_Character_BP_C_SweepTestBlinkClimbPoint_Params params;
	params.Location = Location;
	params.Normal = Normal;
	params.TargetRot = TargetRot;
	params.DebugDrawTime = DebugDrawTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsSurfaceNormalClimbable
// ()
// Parameters:
// struct FVector                 surfaceNormal                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldClimb                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::IsSurfaceNormalClimbable(const struct FVector& surfaceNormal, bool* ShouldClimb)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsSurfaceNormalClimbable");

	AEnforcer_Character_BP_C_IsSurfaceNormalClimbable_Params params;
	params.surfaceNormal = surfaceNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldClimb != nullptr)
		*ShouldClimb = params.ShouldClimb;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetCustomSurfaceTraceDistance
// ()
// Parameters:
// int*                           TraceIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          customDistance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::GetCustomSurfaceTraceDistance(int* TraceIndex, float* customDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetCustomSurfaceTraceDistance");

	AEnforcer_Character_BP_C_GetCustomSurfaceTraceDistance_Params params;
	params.TraceIndex = TraceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (customDistance != nullptr)
		*customDistance = params.customDistance;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsNormalClimbable
// ()
// Parameters:
// struct FVector*                Normal                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isAverageNormal                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::IsNormalClimbable(struct FVector* Normal, bool* isAverageNormal, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsNormalClimbable");

	AEnforcer_Character_BP_C_IsNormalClimbable_Params params;
	params.Normal = Normal;
	params.isAverageNormal = isAverageNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClimbingIK_SetNewBlendspaceAxes
// ()

void AEnforcer_Character_BP_C::ClimbingIK_SetNewBlendspaceAxes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClimbingIK_SetNewBlendspaceAxes");

	AEnforcer_Character_BP_C_ClimbingIK_SetNewBlendspaceAxes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetClimbingIK_BlendspaceAxes_Front
// ()
// Parameters:
// struct FVector2D               axes                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::GetClimbingIK_BlendspaceAxes_Front(struct FVector2D* axes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetClimbingIK_BlendspaceAxes_Front");

	AEnforcer_Character_BP_C_GetClimbingIK_BlendspaceAxes_Front_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (axes != nullptr)
		*axes = params.axes;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent
// (NetRequest, Exec, NetResponse, Public, Private, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEnforcer_Character_BP_C::BPGetHUDOverrideBuffProgressBarPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent");

	AEnforcer_Character_BP_C_BPGetHUDOverrideBuffProgressBarPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetDesiredMoveDirection
// ()
// Parameters:
// struct FVector                 Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::GetDesiredMoveDirection(struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetDesiredMoveDirection");

	AEnforcer_Character_BP_C_GetDesiredMoveDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BlinkCooldownToString
// (NetReliable, Native, Event, NetMulticast, MulticastDelegate, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// double                         LastUsedTime                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Cooldown                       (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReadyString                    (Parm, ZeroConstructor)
// class FString                  Return_Value                   (Parm, OutParm, ZeroConstructor)

void AEnforcer_Character_BP_C::BlinkCooldownToString(double LastUsedTime, float Cooldown, const class FString& ReadyString, class FString* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BlinkCooldownToString");

	AEnforcer_Character_BP_C_BlinkCooldownToString_Params params;
	params.LastUsedTime = LastUsedTime;
	params.Cooldown = Cooldown;
	params.ReadyString = ReadyString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPGrabDebugSnapshot
// (NetReliable, Event, NetResponse, Public, Private, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// TArray<struct FBlueprintVisualLogEntry> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBlueprintVisualLogEntry> AEnforcer_Character_BP_C::BPGrabDebugSnapshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPGrabDebugSnapshot");

	AEnforcer_Character_BP_C_BPGrabDebugSnapshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsBlinkOnCooldownNonPure
// ()
// Parameters:
// bool                           OnCooldown                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::IsBlinkOnCooldownNonPure(bool* OnCooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsBlinkOnCooldownNonPure");

	AEnforcer_Character_BP_C_IsBlinkOnCooldownNonPure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OnCooldown != nullptr)
		*OnCooldown = params.OnCooldown;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOnDinoCheat
// ()
// Parameters:
// struct FName*                  CheatName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSetValue                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOnDinoCheat");

	AEnforcer_Character_BP_C_BPOnDinoCheat_Params params;
	params.CheatName = CheatName;
	params.bSetValue = bSetValue;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.Get CurrentClimbingVelocityMax
// ()
// Parameters:
// float                          Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::Get_CurrentClimbingVelocityMax(float* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.Get CurrentClimbingVelocityMax");

	AEnforcer_Character_BP_C_Get_CurrentClimbingVelocityMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.UseBlinkCooldown
// ()
// Parameters:
// bool                           TestOnly                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::UseBlinkCooldown(bool TestOnly, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.UseBlinkCooldown");

	AEnforcer_Character_BP_C_UseBlinkCooldown_Params params;
	params.TestOnly = TestOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsBlinkOnCooldown
// ()
// Parameters:
// bool                           OnCooldown                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            FirstAvailableCooldown         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::IsBlinkOnCooldown(bool* OnCooldown, int* FirstAvailableCooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsBlinkOnCooldown");

	AEnforcer_Character_BP_C_IsBlinkOnCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OnCooldown != nullptr)
		*OnCooldown = params.OnCooldown;
	if (FirstAvailableCooldown != nullptr)
		*FirstAvailableCooldown = params.FirstAvailableCooldown;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPGetHUDElements
// (NetReliable, NetRequest, NetMulticast, Public, Private, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void AEnforcer_Character_BP_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPGetHUDElements");

	AEnforcer_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPNotifyClearRider");

	AEnforcer_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.Get Blink Ramp Delay Status
// ()
// Parameters:
// bool                           InDelay                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::Get_Blink_Ramp_Delay_Status(bool* InDelay, float* Time, float* Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.Get Blink Ramp Delay Status");

	AEnforcer_Character_BP_C_Get_Blink_Ramp_Delay_Status_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InDelay != nullptr)
		*InDelay = params.InDelay;
	if (Time != nullptr)
		*Time = params.Time;
	if (Alpha != nullptr)
		*Alpha = params.Alpha;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.Get Controller Latency
// ()
// Parameters:
// float                          Ping                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::Get_Controller_Latency(float* Ping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.Get Controller Latency");

	AEnforcer_Character_BP_C_Get_Controller_Latency_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ping != nullptr)
		*Ping = params.Ping;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientStartBlink
// ()

void AEnforcer_Character_BP_C::ClientStartBlink()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientStartBlink");

	AEnforcer_Character_BP_C_ClientStartBlink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPModifyFOV
// ()
// Parameters:
// float*                         FOVIn                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEnforcer_Character_BP_C::BPModifyFOV(float* FOVIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPModifyFOV");

	AEnforcer_Character_BP_C_BPModifyFOV_Params params;
	params.FOVIn = FOVIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.K2_OnMovementModeChanged
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.K2_OnMovementModeChanged");

	AEnforcer_Character_BP_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetClimbingMoveDirFromRotation
// ()
// Parameters:
// struct FRotator*               Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 moveDir                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::GetClimbingMoveDirFromRotation(struct FRotator* Rotation, struct FVector* moveDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetClimbingMoveDirFromRotation");

	AEnforcer_Character_BP_C_GetClimbingMoveDirFromRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (moveDir != nullptr)
		*moveDir = params.moveDir;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.Can Receive Climbing Input Strafe
// (NetReliable, NetRequest, Exec, MulticastDelegate, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::Can_Receive_Climbing_Input_Strafe(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.Can Receive Climbing Input Strafe");

	AEnforcer_Character_BP_C_Can_Receive_Climbing_Input_Strafe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ReceiveBeginPlay
// ()

void AEnforcer_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ReceiveBeginPlay");

	AEnforcer_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsBlinkInProgress
// ()
// Parameters:
// bool                           InBlinkDelay                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsBlinking                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::IsBlinkInProgress(bool* InBlinkDelay, bool* IsBlinking)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsBlinkInProgress");

	AEnforcer_Character_BP_C_IsBlinkInProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InBlinkDelay != nullptr)
		*InBlinkDelay = params.InBlinkDelay;
	if (IsBlinking != nullptr)
		*IsBlinking = params.IsBlinking;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.Check For Prevent Stop Climbing
// ()
// Parameters:
// TArray<bool>                   traceHitsArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int*                           numValidHits                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           numTraces                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AllowClimbing                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::Check_For_Prevent_Stop_Climbing(int* numValidHits, int* numTraces, TArray<bool>* traceHitsArray, bool* AllowClimbing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.Check For Prevent Stop Climbing");

	AEnforcer_Character_BP_C_Check_For_Prevent_Stop_Climbing_Params params;
	params.numValidHits = numValidHits;
	params.numTraces = numTraces;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (traceHitsArray != nullptr)
		*traceHitsArray = params.traceHitsArray;
	if (AllowClimbing != nullptr)
		*AllowClimbing = params.AllowClimbing;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetCurrentCameraLoc
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::GetCurrentCameraLoc(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetCurrentCameraLoc");

	AEnforcer_Character_BP_C_GetCurrentCameraLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loc != nullptr)
		*Loc = params.Loc;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOverrideCameraViewTarget
// ()
// Parameters:
// struct FName*                  CurrentCameraMode              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                DesiredCameraLocation          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               DesiredCameraRotation          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DesiredFOV                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraLocation        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CameraLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraRotation        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                CameraRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraFOV             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CameraFOV                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOverrideCameraViewTarget");

	AEnforcer_Character_BP_C_BPOverrideCameraViewTarget_Params params;
	params.CurrentCameraMode = CurrentCameraMode;
	params.DesiredCameraLocation = DesiredCameraLocation;
	params.DesiredCameraRotation = DesiredCameraRotation;
	params.DesiredFOV = DesiredFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOverrideCameraLocation != nullptr)
		*bOverrideCameraLocation = params.bOverrideCameraLocation;
	if (CameraLocation != nullptr)
		*CameraLocation = params.CameraLocation;
	if (bOverrideCameraRotation != nullptr)
		*bOverrideCameraRotation = params.bOverrideCameraRotation;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;
	if (bOverrideCameraFOV != nullptr)
		*bOverrideCameraFOV = params.bOverrideCameraFOV;
	if (CameraFOV != nullptr)
		*CameraFOV = params.CameraFOV;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientSetBlinkStatus
// (NetRequest, Exec, Native, Public, Private, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// bool                           BlinkInProgress                (Parm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::ClientSetBlinkStatus(bool BlinkInProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientSetBlinkStatus");

	AEnforcer_Character_BP_C_ClientSetBlinkStatus_Params params;
	params.BlinkInProgress = BlinkInProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.CalcBlinkTarget
// (NetReliable, NetRequest, Event, NetResponse, Public, Private, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// struct FProjectileArc          Arc                            (Parm)
// bool                           ForVFX                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DebugDrawDuration              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FoundValidTarget               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsAirTarget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsClimbTarget                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetNormal                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ArcTime                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm, OutParm)

void AEnforcer_Character_BP_C::CalcBlinkTarget(const struct FProjectileArc& Arc, bool ForVFX, float DebugDrawDuration, bool* FoundValidTarget, bool* IsAirTarget, bool* IsClimbTarget, struct FVector* Location, struct FRotator* Rotation, struct FVector* TargetNormal, float* ArcTime, struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.CalcBlinkTarget");

	AEnforcer_Character_BP_C_CalcBlinkTarget_Params params;
	params.Arc = Arc;
	params.ForVFX = ForVFX;
	params.DebugDrawDuration = DebugDrawDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundValidTarget != nullptr)
		*FoundValidTarget = params.FoundValidTarget;
	if (IsAirTarget != nullptr)
		*IsAirTarget = params.IsAirTarget;
	if (IsClimbTarget != nullptr)
		*IsClimbTarget = params.IsClimbTarget;
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


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.Update Blink Target VFX Location
// ()
// Parameters:
// bool                           IsVisible                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInvalid                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                WorldRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm)
// struct FVector                 surfaceNormal                  (Parm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::Update_Blink_Target_VFX_Location(bool IsVisible, bool IsInvalid, const struct FVector& WorldLocation, const struct FRotator& WorldRotation, const struct FHitResult& HitResult, const struct FVector& surfaceNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.Update Blink Target VFX Location");

	AEnforcer_Character_BP_C_Update_Blink_Target_VFX_Location_Params params;
	params.IsVisible = IsVisible;
	params.IsInvalid = IsInvalid;
	params.WorldLocation = WorldLocation;
	params.WorldRotation = WorldRotation;
	params.HitResult = HitResult;
	params.surfaceNormal = surfaceNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEnforcer_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPHandleControllerInitiatedAttack");

	AEnforcer_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEnforcer_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPHandleOnStopTargeting");

	AEnforcer_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.Get Vertical View Angle
// ()
// Parameters:
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::Get_Vertical_View_Angle(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.Get Vertical View Angle");

	AEnforcer_Character_BP_C_Get_Vertical_View_Angle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ReceiveTick
// (NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ReceiveTick");

	AEnforcer_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.Do Blink
// ()
// Parameters:
// struct FVector                 BlinkLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                BlinkRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           StartClimbing                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OrigLocation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OrigRotation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::Do_Blink(const struct FVector& BlinkLocation, const struct FRotator& BlinkRotation, bool StartClimbing, bool* Success, struct FVector* OrigLocation, struct FRotator* OrigRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.Do Blink");

	AEnforcer_Character_BP_C_Do_Blink_Params params;
	params.BlinkLocation = BlinkLocation;
	params.BlinkRotation = BlinkRotation;
	params.StartClimbing = StartClimbing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (OrigLocation != nullptr)
		*OrigLocation = params.OrigLocation;
	if (OrigRotation != nullptr)
		*OrigRotation = params.OrigRotation;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEnforcer_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BlueprintCanRiderAttack");

	AEnforcer_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.UserConstructionScript
// ()

void AEnforcer_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.UserConstructionScript");

	AEnforcer_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ServerRequestBlink
// ()
// Parameters:
// struct FVector                 BlinkStartLocation             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BlinkDirection                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RequestedDestination           (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                RequestedRotation              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ClientVerticalViewAngle        (Parm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::ServerRequestBlink(const struct FVector& BlinkStartLocation, const struct FVector& BlinkDirection, const struct FVector& RequestedDestination, const struct FRotator& RequestedRotation, float ClientVerticalViewAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ServerRequestBlink");

	AEnforcer_Character_BP_C_ServerRequestBlink_Params params;
	params.BlinkStartLocation = BlinkStartLocation;
	params.BlinkDirection = BlinkDirection;
	params.RequestedDestination = RequestedDestination;
	params.RequestedRotation = RequestedRotation;
	params.ClientVerticalViewAngle = ClientVerticalViewAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.MulticastOnBlinkCompleted
// ()
// Parameters:
// struct FVector                 OrigLocation                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OrigRotation                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BlinkLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                BlinkRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           StartedClimbing                (Parm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::MulticastOnBlinkCompleted(const struct FVector& OrigLocation, const struct FRotator& OrigRotation, const struct FVector& BlinkLocation, const struct FRotator& BlinkRotation, bool StartedClimbing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.MulticastOnBlinkCompleted");

	AEnforcer_Character_BP_C_MulticastOnBlinkCompleted_Params params;
	params.OrigLocation = OrigLocation;
	params.OrigRotation = OrigRotation;
	params.BlinkLocation = BlinkLocation;
	params.BlinkRotation = BlinkRotation;
	params.StartedClimbing = StartedClimbing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.MulticastBlinkAcknowledged
// ()

void AEnforcer_Character_BP_C::MulticastBlinkAcknowledged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.MulticastBlinkAcknowledged");

	AEnforcer_Character_BP_C_MulticastBlinkAcknowledged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BP_OnJumpPressed
// ()

void AEnforcer_Character_BP_C::BP_OnJumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BP_OnJumpPressed");

	AEnforcer_Character_BP_C_BP_OnJumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BP_OnJumpReleased
// ()

void AEnforcer_Character_BP_C::BP_OnJumpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BP_OnJumpReleased");

	AEnforcer_Character_BP_C_BP_OnJumpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ServerUpdateMoveDir
// ()
// Parameters:
// float                          Forward                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Right                          (Parm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::ServerUpdateMoveDir(float Forward, float Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ServerUpdateMoveDir");

	AEnforcer_Character_BP_C_ServerUpdateMoveDir_Params params;
	params.Forward = Forward;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.UpdateMoveDir
// ()

void AEnforcer_Character_BP_C::UpdateMoveDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.UpdateMoveDir");

	AEnforcer_Character_BP_C_UpdateMoveDir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.DrawDebugDirection
// ()
// Parameters:
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ArrowSize                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::DrawDebugDirection(const struct FVector& Direction, float ArrowSize, const struct FLinearColor& Color, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.DrawDebugDirection");

	AEnforcer_Character_BP_C_DrawDebugDirection_Params params;
	params.Direction = Direction;
	params.ArrowSize = ArrowSize;
	params.Color = Color;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientDrawDebugDirection
// ()
// Parameters:
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ArrowSize                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::ClientDrawDebugDirection(const struct FVector& Direction, float ArrowSize, const struct FLinearColor& Color, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientDrawDebugDirection");

	AEnforcer_Character_BP_C_ClientDrawDebugDirection_Params params;
	params.Direction = Direction;
	params.ArrowSize = ArrowSize;
	params.Color = Color;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.MultiBlinkFailed
// ()

void AEnforcer_Character_BP_C::MultiBlinkFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.MultiBlinkFailed");

	AEnforcer_Character_BP_C_MultiBlinkFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.MultiOnClimbDetach
// ()

void AEnforcer_Character_BP_C::MultiOnClimbDetach()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.MultiOnClimbDetach");

	AEnforcer_Character_BP_C_MultiOnClimbDetach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.MulticastUpdateDesiredMoveDirection
// ()
// Parameters:
// struct FVector                 Dir                            (Parm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::MulticastUpdateDesiredMoveDirection(const struct FVector& Dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.MulticastUpdateDesiredMoveDirection");

	AEnforcer_Character_BP_C_MulticastUpdateDesiredMoveDirection_Params params;
	params.Dir = Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.OnBlastAttack
// ()

void AEnforcer_Character_BP_C::OnBlastAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.OnBlastAttack");

	AEnforcer_Character_BP_C_OnBlastAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientOnBlastAttack
// ()

void AEnforcer_Character_BP_C::ClientOnBlastAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientOnBlastAttack");

	AEnforcer_Character_BP_C_ClientOnBlastAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ServerRequestClimbDetatchWithJump
// ()

void AEnforcer_Character_BP_C::ServerRequestClimbDetatchWithJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ServerRequestClimbDetatchWithJump");

	AEnforcer_Character_BP_C_ServerRequestClimbDetatchWithJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.OnWalkableGroundFoundWhileClimbing
// ()

void AEnforcer_Character_BP_C::OnWalkableGroundFoundWhileClimbing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.OnWalkableGroundFoundWhileClimbing");

	AEnforcer_Character_BP_C_OnWalkableGroundFoundWhileClimbing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.FixBlinkMaterials
// ()

void AEnforcer_Character_BP_C::FixBlinkMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.FixBlinkMaterials");

	AEnforcer_Character_BP_C_FixBlinkMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.MultiSetBlinkValue
// ()
// Parameters:
// bool                           Forwards                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCheatOverride                (Parm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::MultiSetBlinkValue(bool Forwards, float Alpha, bool IsCheatOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.MultiSetBlinkValue");

	AEnforcer_Character_BP_C_MultiSetBlinkValue_Params params;
	params.Forwards = Forwards;
	params.Alpha = Alpha;
	params.IsCheatOverride = IsCheatOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.MultiOnClimberAttached
// ()

void AEnforcer_Character_BP_C::MultiOnClimberAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.MultiOnClimberAttached");

	AEnforcer_Character_BP_C_MultiOnClimberAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientUpdateBlinkCooldownTimes
// ()
// Parameters:
// TArray<double>                 CooldownTimes                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AEnforcer_Character_BP_C::ClientUpdateBlinkCooldownTimes(TArray<double>* CooldownTimes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientUpdateBlinkCooldownTimes");

	AEnforcer_Character_BP_C_ClientUpdateBlinkCooldownTimes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CooldownTimes != nullptr)
		*CooldownTimes = params.CooldownTimes;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.SetupBlinkCooldowns_Initial
// ()

void AEnforcer_Character_BP_C::SetupBlinkCooldowns_Initial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.SetupBlinkCooldowns_Initial");

	AEnforcer_Character_BP_C_SetupBlinkCooldowns_Initial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOnDinoStartled
// ()
// Parameters:
// class UAnimMontage**           StartledAnimPlayed             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromAIController              (Parm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::BPOnDinoStartled(class UAnimMontage** StartledAnimPlayed, bool* bFromAIController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOnDinoStartled");

	AEnforcer_Character_BP_C_BPOnDinoStartled_Params params;
	params.StartledAnimPlayed = StartledAnimPlayed;
	params.bFromAIController = bFromAIController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ExecuteUbergraph_Enforcer_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEnforcer_Character_BP_C::ExecuteUbergraph_Enforcer_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ExecuteUbergraph_Enforcer_Character_BP");

	AEnforcer_Character_BP_C_ExecuteUbergraph_Enforcer_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
