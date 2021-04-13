// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ForestKaiju_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetVar_IsProtecting
// ()
// Parameters:
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::GetVar_IsProtecting(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetVar_IsProtecting");

	AForestKaiju_Character_BP_C_GetVar_IsProtecting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOverrideHealthBarOffset
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AForestKaiju_Character_BP_C::BPOverrideHealthBarOffset(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOverrideHealthBarOffset");

	AForestKaiju_Character_BP_C_BPOverrideHealthBarOffset_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPPreventRiding
// ()
// Parameters:
// class AShooterCharacter**      ByPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDontCheckDistance             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AForestKaiju_Character_BP_C::BPPreventRiding(class AShooterCharacter** ByPawn, bool* bDontCheckDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPPreventRiding");

	AForestKaiju_Character_BP_C_BPPreventRiding_Params params;
	params.ByPawn = ByPawn;
	params.bDontCheckDistance = bDontCheckDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPDinoARKDownloadedBegin
// ()

void AForestKaiju_Character_BP_C::BPDinoARKDownloadedBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPDinoARKDownloadedBegin");

	AForestKaiju_Character_BP_C_BPDinoARKDownloadedBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetDebugInfoString
// ()
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AForestKaiju_Character_BP_C::BPGetDebugInfoString()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetDebugInfoString");

	AForestKaiju_Character_BP_C_BPGetDebugInfoString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPCanBaseOnCharacter
// ()
// Parameters:
// class APrimalCharacter**       BaseCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AForestKaiju_Character_BP_C::BPCanBaseOnCharacter(class APrimalCharacter** BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPCanBaseOnCharacter");

	AForestKaiju_Character_BP_C_BPCanBaseOnCharacter_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ActorIsKaiju
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsKaiju                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::ActorIsKaiju(class AActor* Actor, bool* IsKaiju)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ActorIsKaiju");

	AForestKaiju_Character_BP_C_ActorIsKaiju_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsKaiju != nullptr)
		*IsKaiju = params.IsKaiju;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPDinoARKDownloadedEnd
// ()

void AForestKaiju_Character_BP_C::BPDinoARKDownloadedEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPDinoARKDownloadedEnd");

	AForestKaiju_Character_BP_C_BPDinoARKDownloadedEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.OnRep_UseTamedPhysics
// ()

void AForestKaiju_Character_BP_C::OnRep_UseTamedPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.OnRep_UseTamedPhysics");

	AForestKaiju_Character_BP_C_OnRep_UseTamedPhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOverrideCharacterSound
// ()
// Parameters:
// class USoundBase**             SoundIn                        (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundBase* AForestKaiju_Character_BP_C::BPOverrideCharacterSound(class USoundBase** SoundIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOverrideCharacterSound");

	AForestKaiju_Character_BP_C_BPOverrideCharacterSound_Params params;
	params.SoundIn = SoundIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.HealNodesAndHealthFromLeashing
// ()

void AForestKaiju_Character_BP_C::HealNodesAndHealthFromLeashing()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.HealNodesAndHealthFromLeashing");

	AForestKaiju_Character_BP_C_HealNodesAndHealthFromLeashing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOverrideDamageCauserHitMarker
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class AShooterPlayerController** DamageCauserController         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHitFriendlyTarget             (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PreDamageHealth                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              PointDamageHitResult           (Parm, OutParm, ReferenceParm)
// struct FHitMarkerSettings      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHitMarkerSettings AForestKaiju_Character_BP_C::BPOverrideDamageCauserHitMarker(class AShooterPlayerController** DamageCauserController, bool* bHitFriendlyTarget, float* PreDamageHealth, float* DamageAmount, bool* bIsPointDamage, struct FDamageEvent* DamageEvent, struct FHitResult* PointDamageHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOverrideDamageCauserHitMarker");

	AForestKaiju_Character_BP_C_BPOverrideDamageCauserHitMarker_Params params;
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


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOnDinoCheat
// (Net, NetRequest, Event, NetResponse, NetMulticast, Public, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName*                  CheatName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSetValue                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOnDinoCheat");

	AForestKaiju_Character_BP_C_BPOnDinoCheat_Params params;
	params.CheatName = CheatName;
	params.bSetValue = bSetValue;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.HasCantRootBuff
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AForestKaiju_Character_BP_C::HasCantRootBuff(class APrimalCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.HasCantRootBuff");

	AForestKaiju_Character_BP_C_HasCantRootBuff_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RidingTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::RidingTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RidingTick");

	AForestKaiju_Character_BP_C_RidingTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.K2_OnMovementModeChanged
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.K2_OnMovementModeChanged");

	AForestKaiju_Character_BP_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOverrideCharacterNewFallVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AForestKaiju_Character_BP_C::BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOverrideCharacterNewFallVelocity");

	AForestKaiju_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params params;
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


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetRiderUnboardLocation
// ()
// Parameters:
// class APrimalCharacter**       RidingCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AForestKaiju_Character_BP_C::BPGetRiderUnboardLocation(class APrimalCharacter** RidingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetRiderUnboardLocation");

	AForestKaiju_Character_BP_C_BPGetRiderUnboardLocation_Params params;
	params.RidingCharacter = RidingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InterpSpawnInMesh
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::InterpSpawnInMesh(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InterpSpawnInMesh");

	AForestKaiju_Character_BP_C_InterpSpawnInMesh_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CanFit
// (MulticastDelegate, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          VerticalOffset                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          HorizontalOffset               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          HalfHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  IgnoreActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Can                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::CanFit(const struct FVector& Location, float VerticalOffset, float Angle, float HorizontalOffset, float Radius, float HalfHeight, class AActor* IgnoreActor, bool* Can, struct FVector* NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CanFit");

	AForestKaiju_Character_BP_C_CanFit_Params params;
	params.Location = Location;
	params.VerticalOffset = VerticalOffset;
	params.Angle = Angle;
	params.HorizontalOffset = HorizontalOffset;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;
	params.IgnoreActor = IgnoreActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can != nullptr)
		*Can = params.Can;
	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.LerpDyingMaterials
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::LerpDyingMaterials(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.LerpDyingMaterials");

	AForestKaiju_Character_BP_C_LerpDyingMaterials_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BlueprintAdjustOutputDamage
// (Exec, Event, MulticastDelegate, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AForestKaiju_Character_BP_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BlueprintAdjustOutputDamage");

	AForestKaiju_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
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


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MaybeShowRootRadiusRing
// ()

void AForestKaiju_Character_BP_C::MaybeShowRootRadiusRing()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MaybeShowRootRadiusRing");

	AForestKaiju_Character_BP_C_MaybeShowRootRadiusRing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ShowRootRadiusRing
// ()
// Parameters:
// bool                           ShowRing                       (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::ShowRootRadiusRing(bool ShowRing)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ShowRootRadiusRing");

	AForestKaiju_Character_BP_C_ShowRootRadiusRing_Params params;
	params.ShowRing = ShowRing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_InterceptMoveForward
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AForestKaiju_Character_BP_C::BP_InterceptMoveForward(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_InterceptMoveForward");

	AForestKaiju_Character_BP_C_BP_InterceptMoveForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Get Grab Attack Vine AttachTargetsSocket Name
// ()
// Parameters:
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::Get_Grab_Attack_Vine_AttachTargetsSocket_Name(struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Get Grab Attack Vine AttachTargetsSocket Name");

	AForestKaiju_Character_BP_C_Get_Grab_Attack_Vine_AttachTargetsSocket_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DissolveArm
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::DissolveArm(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DissolveArm");

	AForestKaiju_Character_BP_C_DissolveArm_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Is Location Valid Vine Attack Range
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::Is_Location_Valid_Vine_Attack_Range(const struct FVector& Loc, bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Is Location Valid Vine Attack Range");

	AForestKaiju_Character_BP_C_Is_Location_Valid_Vine_Attack_Range_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MaybeLoseArmWhileProtecting
// ()
// Parameters:
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::MaybeLoseArmWhileProtecting(class AActor* DamageCauser, float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MaybeLoseArmWhileProtecting");

	AForestKaiju_Character_BP_C_MaybeLoseArmWhileProtecting_Params params;
	params.DamageCauser = DamageCauser;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DestroyAllNearbyPoisonTrees
// ()

void AForestKaiju_Character_BP_C::DestroyAllNearbyPoisonTrees()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DestroyAllNearbyPoisonTrees");

	AForestKaiju_Character_BP_C_DestroyAllNearbyPoisonTrees_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPSetupTamed");

	AForestKaiju_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetMovementMontageSection
// ()

void AForestKaiju_Character_BP_C::GetMovementMontageSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetMovementMontageSection");

	AForestKaiju_Character_BP_C_GetMovementMontageSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InterpProtectShieldStatus
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::InterpProtectShieldStatus(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InterpProtectShieldStatus");

	AForestKaiju_Character_BP_C_InterpProtectShieldStatus_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InterpNodeStates
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::InterpNodeStates(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InterpNodeStates");

	AForestKaiju_Character_BP_C_InterpNodeStates_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CreateDynamicMats
// ()

void AForestKaiju_Character_BP_C::CreateDynamicMats()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CreateDynamicMats");

	AForestKaiju_Character_BP_C_CreateDynamicMats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOnAnimPlayedNotify
// ()
// Parameters:
// class UAnimMontage**           AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  StartSectionName               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReplicate                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReplicateToOwner              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceTickPoseAndServerUpdateMesh (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceTickPoseOnServer         (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::BPOnAnimPlayedNotify(class UAnimMontage** AnimMontage, float* InPlayRate, struct FName* StartSectionName, bool* bReplicate, bool* bReplicateToOwner, bool* bForceTickPoseAndServerUpdateMesh, bool* bForceTickPoseOnServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOnAnimPlayedNotify");

	AForestKaiju_Character_BP_C_BPOnAnimPlayedNotify_Params params;
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


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPModifyRootMotionDeltaRotation
// ()
// Parameters:
// struct FRotator                Delta                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator AForestKaiju_Character_BP_C::BPModifyRootMotionDeltaRotation(struct FRotator* Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPModifyRootMotionDeltaRotation");

	AForestKaiju_Character_BP_C_BPModifyRootMotionDeltaRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Delta != nullptr)
		*Delta = params.Delta;

	return params.ReturnValue;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.WantsLocomotionTransition
// ()
// Parameters:
// bool                           WantsTransition                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::WantsLocomotionTransition(bool* WantsTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.WantsLocomotionTransition");

	AForestKaiju_Character_BP_C_WantsLocomotionTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WantsTransition != nullptr)
		*WantsTransition = params.WantsTransition;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.IsLocomotionBlocked
// ()
// Parameters:
// bool                           bLocked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::IsLocomotionBlocked(bool* bLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.IsLocomotionBlocked");

	AForestKaiju_Character_BP_C_IsLocomotionBlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLocked != nullptr)
		*bLocked = params.bLocked;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetMovementMontage
// ()
// Parameters:
// TEnumAsByte<ERootMotionMovementMode>* Mode                           (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::GetMovementMontage(TEnumAsByte<ERootMotionMovementMode>* Mode, class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetMovementMontage");

	AForestKaiju_Character_BP_C_GetMovementMontage_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Montage != nullptr)
		*Montage = params.Montage;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.PlayAIProtectSelfBriefly
// ()

void AForestKaiju_Character_BP_C::PlayAIProtectSelfBriefly()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.PlayAIProtectSelfBriefly");

	AForestKaiju_Character_BP_C_PlayAIProtectSelfBriefly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.OnRep_CurrentAttackIndexReplicated
// ()

void AForestKaiju_Character_BP_C::OnRep_CurrentAttackIndexReplicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.OnRep_CurrentAttackIndexReplicated");

	AForestKaiju_Character_BP_C_OnRep_CurrentAttackIndexReplicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnMaxVinesThisFrame
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void AForestKaiju_Character_BP_C::STATIC_SpawnMaxVinesThisFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnMaxVinesThisFrame");

	AForestKaiju_Character_BP_C_SpawnMaxVinesThisFrame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnVineInternal
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::STATIC_SpawnVineInternal(const struct FVector& Start, const struct FVector& End)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnVineInternal");

	AForestKaiju_Character_BP_C_SpawnVineInternal_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AForestKaiju_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BlueprintCanRiderAttack");

	AForestKaiju_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AForestKaiju_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BlueprintCanAttack");

	AForestKaiju_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPNotifyClearRider");

	AForestKaiju_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_OnSetDeath
// ()

void AForestKaiju_Character_BP_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_OnSetDeath");

	AForestKaiju_Character_BP_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BlinkDamageNodeInterp
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::BlinkDamageNodeInterp(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BlinkDamageNodeInterp");

	AForestKaiju_Character_BP_C_BlinkDamageNodeInterp_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnPoisonTreeSeeds
// (NetReliable, NetRequest, Exec, Event, NetResponse, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          TreeCount                      (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::SpawnPoisonTreeSeeds(float TreeCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnPoisonTreeSeeds");

	AForestKaiju_Character_BP_C_SpawnPoisonTreeSeeds_Params params;
	params.TreeCount = TreeCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SetLastPlayerGrabAttackTargetLocation
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::SetLastPlayerGrabAttackTargetLocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SetLastPlayerGrabAttackTargetLocation");

	AForestKaiju_Character_BP_C_SetLastPlayerGrabAttackTargetLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.OnRep_FollowControlRotation
// ()

void AForestKaiju_Character_BP_C::OnRep_FollowControlRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.OnRep_FollowControlRotation");

	AForestKaiju_Character_BP_C_OnRep_FollowControlRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.OnRep_GrabAttacking
// ()

void AForestKaiju_Character_BP_C::OnRep_GrabAttacking()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.OnRep_GrabAttacking");

	AForestKaiju_Character_BP_C_OnRep_GrabAttacking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.TurnOffAttackBBKeys
// ()

void AForestKaiju_Character_BP_C::TurnOffAttackBBKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.TurnOffAttackBBKeys");

	AForestKaiju_Character_BP_C_TurnOffAttackBBKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPCanBeBaseForCharacter
// ()
// Parameters:
// class APawn**                  Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AForestKaiju_Character_BP_C::BPCanBeBaseForCharacter(class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPCanBeBaseForCharacter");

	AForestKaiju_Character_BP_C_BPCanBeBaseForCharacter_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.IsRightArmGrabAttack
// ()
// Parameters:
// bool                           RightArmGrabAttack             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::IsRightArmGrabAttack(bool* RightArmGrabAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.IsRightArmGrabAttack");

	AForestKaiju_Character_BP_C_IsRightArmGrabAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RightArmGrabAttack != nullptr)
		*RightArmGrabAttack = params.RightArmGrabAttack;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CanPlayerGrabAttack
// (Net, Event, Static, MulticastDelegate, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           GrabAttack                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Hit                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::STATIC_CanPlayerGrabAttack(bool* GrabAttack, bool* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CanPlayerGrabAttack");

	AForestKaiju_Character_BP_C_CanPlayerGrabAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GrabAttack != nullptr)
		*GrabAttack = params.GrabAttack;
	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetCrosshairColor
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor AForestKaiju_Character_BP_C::BPGetCrosshairColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetCrosshairColor");

	AForestKaiju_Character_BP_C_BPGetCrosshairColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetGrabAttackVineSocketName
// ()
// Parameters:
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::GetGrabAttackVineSocketName(struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetGrabAttackVineSocketName");

	AForestKaiju_Character_BP_C_GetGrabAttackVineSocketName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnVine
// (NetReliable, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::SpawnVine(const struct FVector& Start, const struct FVector& End)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnVine");

	AForestKaiju_Character_BP_C_SpawnVine_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Get GrabAttackVineStartLocation
// ()
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::Get_GrabAttackVineStartLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Get GrabAttackVineStartLocation");

	AForestKaiju_Character_BP_C_Get_GrabAttackVineStartLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InitVars
// ()

void AForestKaiju_Character_BP_C::InitVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InitVars");

	AForestKaiju_Character_BP_C_InitVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.VineGrabHit
// ()

void AForestKaiju_Character_BP_C::VineGrabHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.VineGrabHit");

	AForestKaiju_Character_BP_C_VineGrabHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.VineGrabMissed
// ()

void AForestKaiju_Character_BP_C::VineGrabMissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.VineGrabMissed");

	AForestKaiju_Character_BP_C_VineGrabMissed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetMultiUseEntries
// (Net, Exec, Native, NetResponse, Static, MulticastDelegate, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AForestKaiju_Character_BP_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetMultiUseEntries");

	AForestKaiju_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AForestKaiju_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPTryMultiUse");

	AForestKaiju_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowRightComplete
// ()

void AForestKaiju_Character_BP_C::RegrowRightComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowRightComplete");

	AForestKaiju_Character_BP_C_RegrowRightComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowLeftComplete
// ()

void AForestKaiju_Character_BP_C::RegrowLeftComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowLeftComplete");

	AForestKaiju_Character_BP_C_RegrowLeftComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowTick
// ()
// Parameters:
// class USkeletalMeshComponent*  Appendage                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 currentScale                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutScale                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Complete                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::RegrowTick(class USkeletalMeshComponent* Appendage, const struct FVector& currentScale, struct FVector* OutScale, bool* Complete)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowTick");

	AForestKaiju_Character_BP_C_RegrowTick_Params params;
	params.Appendage = Appendage;
	params.currentScale = currentScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutScale != nullptr)
		*OutScale = params.OutScale;
	if (Complete != nullptr)
		*Complete = params.Complete;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Regrow
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           LeftArm                        (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::STATIC_Regrow(bool LeftArm)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Regrow");

	AForestKaiju_Character_BP_C_Regrow_Params params;
	params.LeftArm = LeftArm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Dismember
// (Exec, Native, Event, NetResponse, Static, NetMulticast, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  Appendage                      (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::STATIC_Dismember(class USkeletalMeshComponent* Appendage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Dismember");

	AForestKaiju_Character_BP_C_Dismember_Params params;
	params.Appendage = Appendage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Is Root Attacking
// ()
// Parameters:
// bool                           IsAttacking                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::Is_Root_Attacking(bool* IsAttacking)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Is Root Attacking");

	AForestKaiju_Character_BP_C_Is_Root_Attacking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAttacking != nullptr)
		*IsAttacking = params.IsAttacking;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetRootAttackChargeLEvel
// ()
// Parameters:
// bool                           SmoothedValues                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::GetRootAttackChargeLEvel(bool SmoothedValues, float* Value, float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetRootAttackChargeLEvel");

	AForestKaiju_Character_BP_C_GetRootAttackChargeLEvel_Params params;
	params.SmoothedValues = SmoothedValues;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void AForestKaiju_Character_BP_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetHUDElements");

	AForestKaiju_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPPreventInputType
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AForestKaiju_Character_BP_C::BPPreventInputType(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPPreventInputType");

	AForestKaiju_Character_BP_C_BPPreventInputType_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.PreventLocomotion
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AForestKaiju_Character_BP_C::PreventLocomotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.PreventLocomotion");

	AForestKaiju_Character_BP_C_PreventLocomotion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MaybeExposeNode
// ()
// Parameters:
// class AActor*                  DmgCauser                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDesertKaiju_ControlNodes> Node                           (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::MaybeExposeNode(class AActor* DmgCauser, TEnumAsByte<EDesertKaiju_ControlNodes> Node)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MaybeExposeNode");

	AForestKaiju_Character_BP_C_MaybeExposeNode_Params params;
	params.DmgCauser = DmgCauser;
	params.Node = Node;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.StartTorpid
// ()

void AForestKaiju_Character_BP_C::StartTorpid()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.StartTorpid");

	AForestKaiju_Character_BP_C_StartTorpid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnPoisonTree
// (Native, NetResponse, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  SpawnOnEnemy                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::SpawnPoisonTree(class AActor* SpawnOnEnemy, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnPoisonTree");

	AForestKaiju_Character_BP_C_SpawnPoisonTree_Params params;
	params.SpawnOnEnemy = SpawnOnEnemy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPTimerServer
// ()

void AForestKaiju_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPTimerServer");

	AForestKaiju_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AForestKaiju_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPHandleOnStopTargeting");

	AForestKaiju_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ShortestAngleDistance
// ()
// Parameters:
// float                          AngleCurrent                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Difference                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::ShortestAngleDistance(float AngleCurrent, float AngleTarget, float* Difference)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ShortestAngleDistance");

	AForestKaiju_Character_BP_C_ShortestAngleDistance_Params params;
	params.AngleCurrent = AngleCurrent;
	params.AngleTarget = AngleTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Difference != nullptr)
		*Difference = params.Difference;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetClampedLookDir
// ()
// Parameters:
// bool                           LimitLowerPitch                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::GetClampedLookDir(bool LimitLowerPitch, struct FVector* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetClampedLookDir");

	AForestKaiju_Character_BP_C_GetClampedLookDir_Params params;
	params.LimitLowerPitch = LimitLowerPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AForestKaiju_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPHandleControllerInitiatedAttack");

	AForestKaiju_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GrabTrace
// (NetRequest, NetResponse, NetMulticast, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void AForestKaiju_Character_BP_C::GrabTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GrabTrace");

	AForestKaiju_Character_BP_C_GrabTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPAdjustAttackIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AForestKaiju_Character_BP_C::BPAdjustAttackIndex(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPAdjustAttackIndex");

	AForestKaiju_Character_BP_C_BPAdjustAttackIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetOverrideCameraInterpSpeed
// ()
// Parameters:
// float*                         DefaultTPVCameraSpeedInterpolationMultiplier (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DefaultTPVOffsetInterpSpeed    (Parm, ZeroConstructor, IsPlainOldData)
// float                          TPVCameraSpeedInterpolationMultiplier (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TPVOffsetInterpSpeed           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::BPGetOverrideCameraInterpSpeed(float* DefaultTPVCameraSpeedInterpolationMultiplier, float* DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetOverrideCameraInterpSpeed");

	AForestKaiju_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params params;
	params.DefaultTPVCameraSpeedInterpolationMultiplier = DefaultTPVCameraSpeedInterpolationMultiplier;
	params.DefaultTPVOffsetInterpSpeed = DefaultTPVOffsetInterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TPVCameraSpeedInterpolationMultiplier != nullptr)
		*TPVCameraSpeedInterpolationMultiplier = params.TPVCameraSpeedInterpolationMultiplier;
	if (TPVOffsetInterpSpeed != nullptr)
		*TPVOffsetInterpSpeed = params.TPVOffsetInterpSpeed;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_InterceptMoveRight
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AForestKaiju_Character_BP_C::BP_InterceptMoveRight(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_InterceptMoveRight");

	AForestKaiju_Character_BP_C_BP_InterceptMoveRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SwitchTPVCamView
// ()

void AForestKaiju_Character_BP_C::SwitchTPVCamView()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SwitchTPVCamView");

	AForestKaiju_Character_BP_C_SwitchTPVCamView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.IsFirstPersonView
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::IsFirstPersonView(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.IsFirstPersonView");

	AForestKaiju_Character_BP_C_IsFirstPersonView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPTimerNonDedicated
// ()

void AForestKaiju_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPTimerNonDedicated");

	AForestKaiju_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DestroyCenterNode
// ()

void AForestKaiju_Character_BP_C::DestroyCenterNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DestroyCenterNode");

	AForestKaiju_Character_BP_C_DestroyCenterNode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DamageCenterNode
// ()
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::DamageCenterNode(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DamageCenterNode");

	AForestKaiju_Character_BP_C_DamageCenterNode_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DestroyRightNode
// ()

void AForestKaiju_Character_BP_C::DestroyRightNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DestroyRightNode");

	AForestKaiju_Character_BP_C_DestroyRightNode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DamageRightNode
// ()
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::DamageRightNode(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DamageRightNode");

	AForestKaiju_Character_BP_C_DamageRightNode_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ExposeNode
// ()
// Parameters:
// bool                           Hide                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Right                          (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::ExposeNode(bool Hide, bool Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ExposeNode");

	AForestKaiju_Character_BP_C_ExposeNode_Params params;
	params.Hide = Hide;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DestroyLeftNode
// ()

void AForestKaiju_Character_BP_C::DestroyLeftNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DestroyLeftNode");

	AForestKaiju_Character_BP_C_DestroyLeftNode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DamageLeftNode
// ()
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::DamageLeftNode(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DamageLeftNode");

	AForestKaiju_Character_BP_C_DamageLeftNode_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AForestKaiju_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPAdjustDamage");

	AForestKaiju_Character_BP_C_BPAdjustDamage_Params params;
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


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPCanTargetCorpse
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AForestKaiju_Character_BP_C::BPCanTargetCorpse()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPCanTargetCorpse");

	AForestKaiju_Character_BP_C_BPCanTargetCorpse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.UserConstructionScript
// ()

void AForestKaiju_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.UserConstructionScript");

	AForestKaiju_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_162
// ()

void AForestKaiju_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_162()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_162");

	AForestKaiju_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_162_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_161
// ()

void AForestKaiju_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_161()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_161");

	AForestKaiju_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_161_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_160
// ()

void AForestKaiju_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_160()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_160");

	AForestKaiju_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_160_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_159
// ()

void AForestKaiju_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_159()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_159");

	AForestKaiju_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_159_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CallFunc_StunKaiju
// ()

void AForestKaiju_Character_BP_C::CallFunc_StunKaiju()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CallFunc_StunKaiju");

	AForestKaiju_Character_BP_C_CallFunc_StunKaiju_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SetVar_FKArenaManager
// ()
// Parameters:
// class AActor*                  ArenaManager                   (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::SetVar_FKArenaManager(class AActor* ArenaManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SetVar_FKArenaManager");

	AForestKaiju_Character_BP_C_SetVar_FKArenaManager_Params params;
	params.ArenaManager = ArenaManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReceiveTick");

	AForestKaiju_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReceiveBeginPlay
// ()

void AForestKaiju_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReceiveBeginPlay");

	AForestKaiju_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_SetNodeColor
// ()
// Parameters:
// int                            Node                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Activated                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DamageNode                     (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::Multi_SetNodeColor(int Node, float Alpha, bool Activated, bool DamageNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_SetNodeColor");

	AForestKaiju_Character_BP_C_Multi_SetNodeColor_Params params;
	params.Node = Node;
	params.Alpha = Alpha;
	params.Activated = Activated;
	params.DamageNode = DamageNode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Rep_ExposeLeftRightNodes
// ()
// Parameters:
// bool                           Hide                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Right                          (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::Rep_ExposeLeftRightNodes(bool Hide, bool Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Rep_ExposeLeftRightNodes");

	AForestKaiju_Character_BP_C_Rep_ExposeLeftRightNodes_Params params;
	params.Hide = Hide;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReplicateCameraDataTPVToServer
// ()
// Parameters:
// bool                           IsFirstPerson                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CameraLocation                 (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::ReplicateCameraDataTPVToServer(bool IsFirstPerson, const struct FVector& CameraLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReplicateCameraDataTPVToServer");

	AForestKaiju_Character_BP_C_ReplicateCameraDataTPVToServer_Params params;
	params.IsFirstPerson = IsFirstPerson;
	params.CameraLocation = CameraLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ServerExecuteGrab
// ()

void AForestKaiju_Character_BP_C::ServerExecuteGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ServerExecuteGrab");

	AForestKaiju_Character_BP_C_ServerExecuteGrab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Server_GrabTraceTargetDir
// ()
// Parameters:
// struct FVector                 AimLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AimHit                         (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::Server_GrabTraceTargetDir(const struct FVector& AimLoc, bool AimHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Server_GrabTraceTargetDir");

	AForestKaiju_Character_BP_C_Server_GrabTraceTargetDir_Params params;
	params.AimLoc = AimLoc;
	params.AimHit = AimHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_ExposeNodes
// ()
// Parameters:
// TEnumAsByte<EDesertKaiju_ControlNodes> Node                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Expose                         (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::Multi_ExposeNodes(TEnumAsByte<EDesertKaiju_ControlNodes> Node, bool Expose)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_ExposeNodes");

	AForestKaiju_Character_BP_C_Multi_ExposeNodes_Params params;
	params.Node = Node;
	params.Expose = Expose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ActivateNode
// ()
// Parameters:
// TEnumAsByte<EDesertKaiju_ControlNodes> Node                           (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::ActivateNode(TEnumAsByte<EDesertKaiju_ControlNodes> Node)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ActivateNode");

	AForestKaiju_Character_BP_C_ActivateNode_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Deactivate_LeftNode
// ()

void AForestKaiju_Character_BP_C::Deactivate_LeftNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Deactivate_LeftNode");

	AForestKaiju_Character_BP_C_Deactivate_LeftNode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Deactivate_RightNode
// ()

void AForestKaiju_Character_BP_C::Deactivate_RightNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Deactivate_RightNode");

	AForestKaiju_Character_BP_C_Deactivate_RightNode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Deactivate_CenterNode
// ()

void AForestKaiju_Character_BP_C::Deactivate_CenterNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Deactivate_CenterNode");

	AForestKaiju_Character_BP_C_Deactivate_CenterNode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CtS_StartAttackRoot
// ()

void AForestKaiju_Character_BP_C::CtS_StartAttackRoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CtS_StartAttackRoot");

	AForestKaiju_Character_BP_C_CtS_StartAttackRoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CtS_ExecuteAttackRoot
// ()

void AForestKaiju_Character_BP_C::CtS_ExecuteAttackRoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CtS_ExecuteAttackRoot");

	AForestKaiju_Character_BP_C_CtS_ExecuteAttackRoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_EndRootAttack
// ()

void AForestKaiju_Character_BP_C::AnimNotify_EndRootAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_EndRootAttack");

	AForestKaiju_Character_BP_C_AnimNotify_EndRootAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_PreventInput
// ()
// Parameters:
// bool                           prevent                        (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::Multi_PreventInput(bool prevent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_PreventInput");

	AForestKaiju_Character_BP_C_Multi_PreventInput_Params params;
	params.prevent = prevent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ExecuteAttackRoot
// ()

void AForestKaiju_Character_BP_C::ExecuteAttackRoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ExecuteAttackRoot");

	AForestKaiju_Character_BP_C_ExecuteAttackRoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_RootTargets
// ()

void AForestKaiju_Character_BP_C::AnimNotify_RootTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_RootTargets");

	AForestKaiju_Character_BP_C_AnimNotify_RootTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AI_StartAttackRoot
// ()

void AForestKaiju_Character_BP_C::AI_StartAttackRoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AI_StartAttackRoot");

	AForestKaiju_Character_BP_C_AI_StartAttackRoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AI_EndAttackRoot
// ()

void AForestKaiju_Character_BP_C::AI_EndAttackRoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AI_EndAttackRoot");

	AForestKaiju_Character_BP_C_AI_EndAttackRoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowRightArmTick
// ()

void AForestKaiju_Character_BP_C::RegrowRightArmTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowRightArmTick");

	AForestKaiju_Character_BP_C_RegrowRightArmTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowLeftArmTick
// ()

void AForestKaiju_Character_BP_C::RegrowLeftArmTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowLeftArmTick");

	AForestKaiju_Character_BP_C_RegrowLeftArmTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_Dismember
// ()
// Parameters:
// bool                           LeftArm                        (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::Multi_Dismember(bool LeftArm)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_Dismember");

	AForestKaiju_Character_BP_C_Multi_Dismember_Params params;
	params.LeftArm = LeftArm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowLeft
// ()

void AForestKaiju_Character_BP_C::RegrowLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowLeft");

	AForestKaiju_Character_BP_C_RegrowLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowRight
// ()

void AForestKaiju_Character_BP_C::RegrowRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowRight");

	AForestKaiju_Character_BP_C_RegrowRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.EndGrabAIState
// ()

void AForestKaiju_Character_BP_C::EndGrabAIState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.EndGrabAIState");

	AForestKaiju_Character_BP_C_EndGrabAIState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_GrabAttackSmash
// ()

void AForestKaiju_Character_BP_C::AnimNotify_GrabAttackSmash()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_GrabAttackSmash");

	AForestKaiju_Character_BP_C_AnimNotify_GrabAttackSmash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_DebugDrawLine
// ()
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationSeconds                (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::MULTI_DebugDrawLine(const struct FVector& Start, const struct FVector& End, const struct FLinearColor& Color, float DurationSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_DebugDrawLine");

	AForestKaiju_Character_BP_C_MULTI_DebugDrawLine_Params params;
	params.Start = Start;
	params.End = End;
	params.Color = Color;
	params.DurationSeconds = DurationSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DebugDrawLine
// ()
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationSeconds                (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::DebugDrawLine(const struct FVector& Start, const struct FVector& End, const struct FLinearColor& Color, float DurationSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DebugDrawLine");

	AForestKaiju_Character_BP_C_DebugDrawLine_Params params;
	params.Start = Start;
	params.End = End;
	params.Color = Color;
	params.DurationSeconds = DurationSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReplicateRiderTPVRight
// ()
// Parameters:
// bool                           TPVRight                       (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::ReplicateRiderTPVRight(bool TPVRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReplicateRiderTPVRight");

	AForestKaiju_Character_BP_C_ReplicateRiderTPVRight_Params params;
	params.TPVRight = TPVRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_GrabAttackStateStart
// ()

void AForestKaiju_Character_BP_C::MULTI_GrabAttackStateStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_GrabAttackStateStart");

	AForestKaiju_Character_BP_C_MULTI_GrabAttackStateStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_GrabAttackStateEnd
// ()

void AForestKaiju_Character_BP_C::MULTI_GrabAttackStateEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_GrabAttackStateEnd");

	AForestKaiju_Character_BP_C_MULTI_GrabAttackStateEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReplicatePlayerGrabAttackTargetLocation
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::ReplicatePlayerGrabAttackTargetLocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReplicatePlayerGrabAttackTargetLocation");

	AForestKaiju_Character_BP_C_ReplicatePlayerGrabAttackTargetLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnPoisonSeeds
// ()
// Parameters:
// float                          Count                          (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::SpawnPoisonSeeds(float Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnPoisonSeeds");

	AForestKaiju_Character_BP_C_SpawnPoisonSeeds_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_PlaySeedSpawnVFX
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::Multi_PlaySeedSpawnVFX(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_PlaySeedSpawnVFX");

	AForestKaiju_Character_BP_C_Multi_PlaySeedSpawnVFX_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DamageNodeBlink
// ()
// Parameters:
// TEnumAsByte<EDesertKaiju_ControlNodes> Node                           (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::DamageNodeBlink(TEnumAsByte<EDesertKaiju_ControlNodes> Node)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DamageNodeBlink");

	AForestKaiju_Character_BP_C_DamageNodeBlink_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_InterpLeftNode
// ()
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::Multi_InterpLeftNode(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_InterpLeftNode");

	AForestKaiju_Character_BP_C_Multi_InterpLeftNode_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_InterpRightNode
// ()
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::Multi_InterpRightNode(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_InterpRightNode");

	AForestKaiju_Character_BP_C_Multi_InterpRightNode_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_InterpCenterNode
// ()
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::Multi_InterpCenterNode(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_InterpCenterNode");

	AForestKaiju_Character_BP_C_Multi_InterpCenterNode_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_OnJumpPressed
// ()

void AForestKaiju_Character_BP_C::BP_OnJumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_OnJumpPressed");

	AForestKaiju_Character_BP_C_BP_OnJumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_OnJumpReleased
// ()

void AForestKaiju_Character_BP_C::BP_OnJumpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_OnJumpReleased");

	AForestKaiju_Character_BP_C_BP_OnJumpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Server_SetProtecting
// ()
// Parameters:
// bool                           Protecting                     (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::Server_SetProtecting(bool Protecting)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Server_SetProtecting");

	AForestKaiju_Character_BP_C_Server_SetProtecting_Params params;
	params.Protecting = Protecting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Client_SetDoingRootAttack
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::Client_SetDoingRootAttack(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Client_SetDoingRootAttack");

	AForestKaiju_Character_BP_C_Client_SetDoingRootAttack_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_StartGrabAttackAnim
// ()
// Parameters:
// bool                           RightArm                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          LeftRight                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          UpDown                         (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::MULTI_StartGrabAttackAnim(bool RightArm, float LeftRight, float UpDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_StartGrabAttackAnim");

	AForestKaiju_Character_BP_C_MULTI_StartGrabAttackAnim_Params params;
	params.RightArm = RightArm;
	params.LeftRight = LeftRight;
	params.UpDown = UpDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GrabAttackDetachActors
// ()
// Parameters:
// TArray<class APrimalCharacter*> Targets                        (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AForestKaiju_Character_BP_C::GrabAttackDetachActors(TArray<class APrimalCharacter*>* Targets)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GrabAttackDetachActors");

	AForestKaiju_Character_BP_C_GrabAttackDetachActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Targets != nullptr)
		*Targets = params.Targets;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GrabAttackTick
// ()

void AForestKaiju_Character_BP_C::GrabAttackTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GrabAttackTick");

	AForestKaiju_Character_BP_C_GrabAttackTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.StunForestKaiju
// ()

void AForestKaiju_Character_BP_C::StunForestKaiju()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.StunForestKaiju");

	AForestKaiju_Character_BP_C_StunForestKaiju_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_GrabAttackPanCamera
// ()

void AForestKaiju_Character_BP_C::AnimNotify_GrabAttackPanCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_GrabAttackPanCamera");

	AForestKaiju_Character_BP_C_AnimNotify_GrabAttackPanCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_EndShieldFX
// ()

void AForestKaiju_Character_BP_C::AnimNotify_EndShieldFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_EndShieldFX");

	AForestKaiju_Character_BP_C_AnimNotify_EndShieldFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_SetProtecting
// ()
// Parameters:
// bool                           Protecting                     (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::Multi_SetProtecting(bool Protecting)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_SetProtecting");

	AForestKaiju_Character_BP_C_Multi_SetProtecting_Params params;
	params.Protecting = Protecting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_InterpNodeDamage
// ()
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::Multi_InterpNodeDamage(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_InterpNodeDamage");

	AForestKaiju_Character_BP_C_Multi_InterpNodeDamage_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_OnSetRunning
// ()
// Parameters:
// bool*                          bNewIsRunning                  (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::BP_OnSetRunning(bool* bNewIsRunning)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_OnSetRunning");

	AForestKaiju_Character_BP_C_BP_OnSetRunning_Params params;
	params.bNewIsRunning = bNewIsRunning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_DelayedCorruptionDestroy
// ()

void AForestKaiju_Character_BP_C::Multi_DelayedCorruptionDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_DelayedCorruptionDestroy");

	AForestKaiju_Character_BP_C_Multi_DelayedCorruptionDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.UpdateGrabAttackTPVOffset
// ()

void AForestKaiju_Character_BP_C::UpdateGrabAttackTPVOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.UpdateGrabAttackTPVOffset");

	AForestKaiju_Character_BP_C_UpdateGrabAttackTPVOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GrabAttackAttachActors
// ()
// Parameters:
// TArray<struct FVineTargetData> Targets                        (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AForestKaiju_Character_BP_C::GrabAttackAttachActors(TArray<struct FVineTargetData>* Targets)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GrabAttackAttachActors");

	AForestKaiju_Character_BP_C_GrabAttackAttachActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Targets != nullptr)
		*Targets = params.Targets;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CtS_SetDoingRootAttack
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::CtS_SetDoingRootAttack(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CtS_SetDoingRootAttack");

	AForestKaiju_Character_BP_C_CtS_SetDoingRootAttack_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DissolveLeft
// ()

void AForestKaiju_Character_BP_C::DissolveLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DissolveLeft");

	AForestKaiju_Character_BP_C_DissolveLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_CreateDissolvingArmDynamicMATs
// ()
// Parameters:
// bool                           LeftArm                        (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::Multi_CreateDissolvingArmDynamicMATs(bool LeftArm)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_CreateDissolvingArmDynamicMATs");

	AForestKaiju_Character_BP_C_Multi_CreateDissolvingArmDynamicMATs_Params params;
	params.LeftArm = LeftArm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_ShowRootRadius
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::Multi_ShowRootRadius(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_ShowRootRadius");

	AForestKaiju_Character_BP_C_Multi_ShowRootRadius_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_SetRootchargeAmount
// ()

void AForestKaiju_Character_BP_C::Multi_SetRootchargeAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_SetRootchargeAmount");

	AForestKaiju_Character_BP_C_Multi_SetRootchargeAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.StC_SetLastTimeRootAttack
// ()

void AForestKaiju_Character_BP_C::StC_SetLastTimeRootAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.StC_SetLastTimeRootAttack");

	AForestKaiju_Character_BP_C_StC_SetLastTimeRootAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_PlayNodeDestroyFX
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::Multi_PlayNodeDestroyFX(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_PlayNodeDestroyFX");

	AForestKaiju_Character_BP_C_Multi_PlayNodeDestroyFX_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_BeginDying
// ()

void AForestKaiju_Character_BP_C::AnimNotify_BeginDying()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_BeginDying");

	AForestKaiju_Character_BP_C_AnimNotify_BeginDying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_ApplyFallingDownForce
// ()

void AForestKaiju_Character_BP_C::Multi_ApplyFallingDownForce()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_ApplyFallingDownForce");

	AForestKaiju_Character_BP_C_Multi_ApplyFallingDownForce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.EquipSaddle
// ()

void AForestKaiju_Character_BP_C::EquipSaddle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.EquipSaddle");

	AForestKaiju_Character_BP_C_EquipSaddle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_GrabAttackSpawnVines
// ()

void AForestKaiju_Character_BP_C::AnimNotify_GrabAttackSpawnVines()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_GrabAttackSpawnVines");

	AForestKaiju_Character_BP_C_AnimNotify_GrabAttackSpawnVines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_SetDoingRootAttack
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::Multi_SetDoingRootAttack(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_SetDoingRootAttack");

	AForestKaiju_Character_BP_C_Multi_SetDoingRootAttack_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.StaggeredRootTargets
// ()

void AForestKaiju_Character_BP_C::StaggeredRootTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.StaggeredRootTargets");

	AForestKaiju_Character_BP_C_StaggeredRootTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SERVER_GrabAttackSpawnVines
// ()

void AForestKaiju_Character_BP_C::SERVER_GrabAttackSpawnVines()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SERVER_GrabAttackSpawnVines");

	AForestKaiju_Character_BP_C_SERVER_GrabAttackSpawnVines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_CheckForProtect
// ()

void AForestKaiju_Character_BP_C::AnimNotify_CheckForProtect()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_CheckForProtect");

	AForestKaiju_Character_BP_C_AnimNotify_CheckForProtect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_280_ComponentHitSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void AForestKaiju_Character_BP_C::BndEvt__Mesh_K2Node_ComponentBoundEvent_280_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_280_ComponentHitSignature__DelegateSignature");

	AForestKaiju_Character_BP_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_280_ComponentHitSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_283_ComponentHitSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void AForestKaiju_Character_BP_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_283_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_283_ComponentHitSignature__DelegateSignature");

	AForestKaiju_Character_BP_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_283_ComponentHitSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.UpdateSaddlePhysics
// ()

void AForestKaiju_Character_BP_C::UpdateSaddlePhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.UpdateSaddlePhysics");

	AForestKaiju_Character_BP_C_UpdateSaddlePhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_DelayedTurnOffHealthRegen
// ()

void AForestKaiju_Character_BP_C::Multi_DelayedTurnOffHealthRegen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_DelayedTurnOffHealthRegen");

	AForestKaiju_Character_BP_C_Multi_DelayedTurnOffHealthRegen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_CleanArms
// ()

void AForestKaiju_Character_BP_C::Multi_CleanArms()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_CleanArms");

	AForestKaiju_Character_BP_C_Multi_CleanArms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ExecuteUbergraph_ForestKaiju_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaiju_Character_BP_C::ExecuteUbergraph_ForestKaiju_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ExecuteUbergraph_ForestKaiju_Character_BP");

	AForestKaiju_Character_BP_C_ExecuteUbergraph_ForestKaiju_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
