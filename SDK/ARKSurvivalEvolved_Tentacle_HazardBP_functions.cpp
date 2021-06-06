// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Tentacle_HazardBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_AdjustedAnimRate
// ()

void ATentacle_HazardBP_C::OnRep_AdjustedAnimRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_AdjustedAnimRate");

	ATentacle_HazardBP_C_OnRep_AdjustedAnimRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.SpawnDeathVFX
// ()

void ATentacle_HazardBP_C::SpawnDeathVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.SpawnDeathVFX");

	ATentacle_HazardBP_C_SpawnDeathVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnAttackTentacleSpawned
// ()

void ATentacle_HazardBP_C::OnAttackTentacleSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnAttackTentacleSpawned");

	ATentacle_HazardBP_C_OnAttackTentacleSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetIsHurtAnimPlaying
// ()
// Parameters:
// bool                           AnimIsPlaying                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::GetIsHurtAnimPlaying(bool* AnimIsPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetIsHurtAnimPlaying");

	ATentacle_HazardBP_C_GetIsHurtAnimPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimIsPlaying != nullptr)
		*AnimIsPlaying = params.AnimIsPlaying;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetCharToGrabFromTarget
// ()
// Parameters:
// class APrimalCharacter*        Char                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::GetCharToGrabFromTarget(class APrimalCharacter** Char)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetCharToGrabFromTarget");

	ATentacle_HazardBP_C_GetCharToGrabFromTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Char != nullptr)
		*Char = params.Char;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_AnimTypeIndex
// ()

void ATentacle_HazardBP_C::OnRep_AnimTypeIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_AnimTypeIndex");

	ATentacle_HazardBP_C_OnRep_AnimTypeIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.UpdateTentaclesAnims
// ()

void ATentacle_HazardBP_C::UpdateTentaclesAnims()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.UpdateTentaclesAnims");

	ATentacle_HazardBP_C_UpdateTentaclesAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.UpdateRetraction
// ()
// Parameters:
// bool                           NewIsRetracted                 (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::UpdateRetraction(bool NewIsRetracted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.UpdateRetraction");

	ATentacle_HazardBP_C_UpdateRetraction_Params params;
	params.NewIsRetracted = NewIsRetracted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.ForceTargetChar
// ()
// Parameters:
// class APrimalCharacter*        Char                           (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::ForceTargetChar(class APrimalCharacter* Char)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.ForceTargetChar");

	ATentacle_HazardBP_C_ForceTargetChar_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_bIsHalfRetracted
// ()

void ATentacle_HazardBP_C::OnRep_bIsHalfRetracted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_bIsHalfRetracted");

	ATentacle_HazardBP_C_OnRep_bIsHalfRetracted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.UpdateRetractedCollision
// ()
// Parameters:
// bool                           IsRetracted                    (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::UpdateRetractedCollision(bool IsRetracted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.UpdateRetractedCollision");

	ATentacle_HazardBP_C_UpdateRetractedCollision_Params params;
	params.IsRetracted = IsRetracted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.ReleaseGrabbedChar
// ()

void ATentacle_HazardBP_C::ReleaseGrabbedChar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.ReleaseGrabbedChar");

	ATentacle_HazardBP_C_ReleaseGrabbedChar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.CanTargetValidActor
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsValid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::CanTargetValidActor(class APrimalCharacter* Target, bool* bIsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.CanTargetValidActor");

	ATentacle_HazardBP_C_CanTargetValidActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsValid != nullptr)
		*bIsValid = params.bIsValid;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPDied
// ()
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController**            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::BPDied(float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPDied");

	ATentacle_HazardBP_C_BPDied_Params params;
	params.KillingDamage = KillingDamage;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.SpawnTentacleFromAttack
// (NetRequest, Event, NetMulticast, MulticastDelegate, Public, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::SpawnTentacleFromAttack(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.SpawnTentacleFromAttack");

	ATentacle_HazardBP_C_SpawnTentacleFromAttack_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.SpawnedTentacleTimedDeath
// ()

void ATentacle_HazardBP_C::SpawnedTentacleTimedDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.SpawnedTentacleTimedDeath");

	ATentacle_HazardBP_C_SpawnedTentacleTimedDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetIsInOutAnimPlaying
// ()
// Parameters:
// bool                           AnimIsPlaying                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::GetIsInOutAnimPlaying(bool* AnimIsPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetIsInOutAnimPlaying");

	ATentacle_HazardBP_C_GetIsInOutAnimPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimIsPlaying != nullptr)
		*AnimIsPlaying = params.AnimIsPlaying;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_bIsUnderground
// ()

void ATentacle_HazardBP_C::OnRep_bIsUnderground()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_bIsUnderground");

	ATentacle_HazardBP_C_OnRep_bIsUnderground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetEffectiveRot
// ()

void ATentacle_HazardBP_C::SetEffectiveRot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetEffectiveRot");

	ATentacle_HazardBP_C_SetEffectiveRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetServerTargetRot
// ()

void ATentacle_HazardBP_C::SetServerTargetRot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetServerTargetRot");

	ATentacle_HazardBP_C_SetServerTargetRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.RandomizeAnimVars
// ()

void ATentacle_HazardBP_C::RandomizeAnimVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.RandomizeAnimVars");

	ATentacle_HazardBP_C_RandomizeAnimVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetCanGrabTarget
// ()
// Parameters:
// class APrimalCharacter*        Char                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanGrab                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::GetCanGrabTarget(class APrimalCharacter* Char, bool* CanGrab)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetCanGrabTarget");

	ATentacle_HazardBP_C_GetCanGrabTarget_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanGrab != nullptr)
		*CanGrab = params.CanGrab;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.ShouldApplyKBToChar
// ()
// Parameters:
// class APrimalCharacter*        Char                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldApply                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::ShouldApplyKBToChar(class APrimalCharacter* Char, bool* ShouldApply)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.ShouldApplyKBToChar");

	ATentacle_HazardBP_C_ShouldApplyKBToChar_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldApply != nullptr)
		*ShouldApply = params.ShouldApply;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetAttackCDVariance
// ()

void ATentacle_HazardBP_C::SetAttackCDVariance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetAttackCDVariance");

	ATentacle_HazardBP_C_SetAttackCDVariance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetIsAttackAnimPlaying
// ()
// Parameters:
// bool                           AnimIsPlaying                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::GetIsAttackAnimPlaying(bool* AnimIsPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetIsAttackAnimPlaying");

	ATentacle_HazardBP_C_GetIsAttackAnimPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimIsPlaying != nullptr)
		*AnimIsPlaying = params.AnimIsPlaying;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.RandomizeTentacleScale
// ()

void ATentacle_HazardBP_C::RandomizeTentacleScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.RandomizeTentacleScale");

	ATentacle_HazardBP_C_RandomizeTentacleScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_AdjustedServerScale
// ()

void ATentacle_HazardBP_C::OnRep_AdjustedServerScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_AdjustedServerScale");

	ATentacle_HazardBP_C_OnRep_AdjustedServerScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.ResizeTentacle
// ()

void ATentacle_HazardBP_C::ResizeTentacle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.ResizeTentacle");

	ATentacle_HazardBP_C_ResizeTentacle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.ManualOverlapCheck
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           FoundTarget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::STATIC_ManualOverlapCheck(bool* FoundTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.ManualOverlapCheck");

	ATentacle_HazardBP_C_ManualOverlapCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundTarget != nullptr)
		*FoundTarget = params.FoundTarget;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.find or create dynamic materials
// ()
// Parameters:
// TArray<class UMaterialInstanceDynamic*> dynamic_materials              (Parm, OutParm, ZeroConstructor)

void ATentacle_HazardBP_C::find_or_create_dynamic_materials(TArray<class UMaterialInstanceDynamic*>* dynamic_materials)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.find or create dynamic materials");

	ATentacle_HazardBP_C_find_or_create_dynamic_materials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dynamic_materials != nullptr)
		*dynamic_materials = params.dynamic_materials;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.Find Valid Spawn Location
// (NetRequest, Exec, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         OutLocations                   (Parm, OutParm, ZeroConstructor)

void ATentacle_HazardBP_C::Find_Valid_Spawn_Location(class AActor* Target, TArray<struct FVector>* OutLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.Find Valid Spawn Location");

	ATentacle_HazardBP_C_Find_Valid_Spawn_Location_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocations != nullptr)
		*OutLocations = params.OutLocations;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.Ranged Attack target
// (NetRequest, NetResponse, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::Ranged_Attack_target(class APrimalCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.Ranged Attack target");

	ATentacle_HazardBP_C_Ranged_Attack_target_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPGetAggroDinoOnDamageSettings
// ()
// Parameters:
// TArray<struct FName>           AggroDinoClassesCustomTags     (Parm, OutParm, ZeroConstructor)
// float                          AggroDinoClassesRange          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::BPGetAggroDinoOnDamageSettings(TArray<struct FName>* AggroDinoClassesCustomTags, float* AggroDinoClassesRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPGetAggroDinoOnDamageSettings");

	ATentacle_HazardBP_C_BPGetAggroDinoOnDamageSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AggroDinoClassesCustomTags != nullptr)
		*AggroDinoClassesCustomTags = params.AggroDinoClassesCustomTags;
	if (AggroDinoClassesRange != nullptr)
		*AggroDinoClassesRange = params.AggroDinoClassesRange;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.attackTarget
// ()
// Parameters:
// class APrimalCharacter*        attackTarget                   (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::attackTarget(class APrimalCharacter* attackTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.attackTarget");

	ATentacle_HazardBP_C_attackTarget_Params params;
	params.attackTarget = attackTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.EffectiveRotation
// ()
// Parameters:
// struct FRotator                ActualRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::EffectiveRotation(struct FRotator* ActualRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.EffectiveRotation");

	ATentacle_HazardBP_C_EffectiveRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActualRotation != nullptr)
		*ActualRotation = params.ActualRotation;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetTargetAimAtLocation
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::GetTargetAimAtLocation(class APrimalCharacter* Target, struct FVector* TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetTargetAimAtLocation");

	ATentacle_HazardBP_C_GetTargetAimAtLocation_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetIsDead
// ()
// Parameters:
// bool                           bNewIsDead                     (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::SetIsDead(bool bNewIsDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetIsDead");

	ATentacle_HazardBP_C_SetIsDead_Params params;
	params.bNewIsDead = bNewIsDead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.CanRevive
// ()
// Parameters:
// bool                           bCanRevive                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::CanRevive(bool* bCanRevive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.CanRevive");

	ATentacle_HazardBP_C_CanRevive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanRevive != nullptr)
		*bCanRevive = params.bCanRevive;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPUpdatedHealth
// ()
// Parameters:
// bool*                          bDoReplication                 (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::BPUpdatedHealth(bool* bDoReplication)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPUpdatedHealth");

	ATentacle_HazardBP_C_BPUpdatedHealth_Params params;
	params.bDoReplication = bDoReplication;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATentacle_HazardBP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPAdjustDamage");

	ATentacle_HazardBP_C_BPAdjustDamage_Params params;
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


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPImpactEffect
// ()
// Parameters:
// struct FHitResult              HitRes                         (Parm, OutParm, ReferenceParm)
// struct FVector                 ShootDirection                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATentacle_HazardBP_C::BPImpactEffect(struct FHitResult* HitRes, struct FVector* ShootDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPImpactEffect");

	ATentacle_HazardBP_C_BPImpactEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitRes != nullptr)
		*HitRes = params.HitRes;
	if (ShootDirection != nullptr)
		*ShootDirection = params.ShootDirection;

	return params.ReturnValue;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPReleasedPlayer
// (NetReliable, Event, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AShooterCharacter**      ReleasedChar                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           AtSeatNumber                   (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::BPReleasedPlayer(class AShooterCharacter** ReleasedChar, int* AtSeatNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPReleasedPlayer");

	ATentacle_HazardBP_C_BPReleasedPlayer_Params params;
	params.ReleasedChar = ReleasedChar;
	params.AtSeatNumber = AtSeatNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPPreventReleaseSeatingStructure
// ()
// Parameters:
// class AShooterCharacter**      ForSitter                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATentacle_HazardBP_C::BPPreventReleaseSeatingStructure(class AShooterCharacter** ForSitter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPPreventReleaseSeatingStructure");

	ATentacle_HazardBP_C_BPPreventReleaseSeatingStructure_Params params;
	params.ForSitter = ForSitter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPSeatedPlayer
// ()
// Parameters:
// class AShooterCharacter**      SeatedChar                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           AtSeatNumber                   (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::BPSeatedPlayer(class AShooterCharacter** SeatedChar, int* AtSeatNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPSeatedPlayer");

	ATentacle_HazardBP_C_BPSeatedPlayer_Params params;
	params.SeatedChar = SeatedChar;
	params.AtSeatNumber = AtSeatNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.CanAttack
// ()
// Parameters:
// bool                           bCanAttack                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::CanAttack(bool* bCanAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.CanAttack");

	ATentacle_HazardBP_C_CanAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanAttack != nullptr)
		*bCanAttack = params.bCanAttack;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.BlueprintAnimNotifyCustomEvent
// (NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::STATIC_BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.BlueprintAnimNotifyCustomEvent");

	ATentacle_HazardBP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.IsActorValidTarget
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCanTarget                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::IsActorValidTarget(class APrimalCharacter* Target, bool* bCanTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.IsActorValidTarget");

	ATentacle_HazardBP_C_IsActorValidTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanTarget != nullptr)
		*bCanTarget = params.bCanTarget;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.FindBestTarget
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::FindBestTarget(class APrimalCharacter** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.FindBestTarget");

	ATentacle_HazardBP_C_FindBestTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPTriggerStasisEvent
// ()

void ATentacle_HazardBP_C::BPTriggerStasisEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPTriggerStasisEvent");

	ATentacle_HazardBP_C_BPTriggerStasisEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.UpdateDediMesh
// ()

void ATentacle_HazardBP_C::UpdateDediMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.UpdateDediMesh");

	ATentacle_HazardBP_C_UpdateDediMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetSleeping
// ()
// Parameters:
// bool                           IsSleeping                     (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::SetSleeping(bool IsSleeping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetSleeping");

	ATentacle_HazardBP_C_SetSleeping_Params params;
	params.IsSleeping = IsSleeping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPUnstasis
// ()

void ATentacle_HazardBP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPUnstasis");

	ATentacle_HazardBP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.UserConstructionScript
// ()

void ATentacle_HazardBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.UserConstructionScript");

	ATentacle_HazardBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.Timeline_Dissolve__FinishedFunc
// ()

void ATentacle_HazardBP_C::Timeline_Dissolve__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.Timeline_Dissolve__FinishedFunc");

	ATentacle_HazardBP_C_Timeline_Dissolve__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.Timeline_Dissolve__UpdateFunc
// ()

void ATentacle_HazardBP_C::Timeline_Dissolve__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.Timeline_Dissolve__UpdateFunc");

	ATentacle_HazardBP_C_Timeline_Dissolve__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.ReceiveBeginPlay
// ()

void ATentacle_HazardBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.ReceiveBeginPlay");

	ATentacle_HazardBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_324_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void ATentacle_HazardBP_C::BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_324_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_324_ComponentBeginOverlapSignature__DelegateSignature");

	ATentacle_HazardBP_C_BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_324_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.ServerTick
// ()

void ATentacle_HazardBP_C::ServerTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.ServerTick");

	ATentacle_HazardBP_C_ServerTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.StartTimers
// ()

void ATentacle_HazardBP_C::StartTimers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.StartTimers");

	ATentacle_HazardBP_C_StartTimers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_DoAttack
// ()
// Parameters:
// class UAnimMontage*            SelectedAttack                 (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::Multi_DoAttack(class UAnimMontage* SelectedAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_DoAttack");

	ATentacle_HazardBP_C_Multi_DoAttack_Params params;
	params.SelectedAttack = SelectedAttack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.DoAttack
// ()
// Parameters:
// class UAnimMontage*            SelectedAttack                 (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::DoAttack(class UAnimMontage* SelectedAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.DoAttack");

	ATentacle_HazardBP_C_DoAttack_Params params;
	params.SelectedAttack = SelectedAttack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.PlayAnimMontage
// ()
// Parameters:
// class UAnimMontage*            MontageToPlay                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Play_Rate                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendIn                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendOut                       (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::PlayAnimMontage(class UAnimMontage* MontageToPlay, float Play_Rate, float BlendIn, float BlendOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.PlayAnimMontage");

	ATentacle_HazardBP_C_PlayAnimMontage_Params params;
	params.MontageToPlay = MontageToPlay;
	params.Play_Rate = Play_Rate;
	params.BlendIn = BlendIn;
	params.BlendOut = BlendOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.PlayAnimMontage_Multi
// ()
// Parameters:
// class UAnimMontage*            MontageToPlay                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Play_Rate                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendIn                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendOut                       (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::PlayAnimMontage_Multi(class UAnimMontage* MontageToPlay, float Play_Rate, float BlendIn, float BlendOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.PlayAnimMontage_Multi");

	ATentacle_HazardBP_C_PlayAnimMontage_Multi_Params params;
	params.MontageToPlay = MontageToPlay;
	params.Play_Rate = Play_Rate;
	params.BlendIn = BlendIn;
	params.BlendOut = BlendOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.Server_StartDying
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::Server_StartDying(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.Server_StartDying");

	ATentacle_HazardBP_C_Server_StartDying_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_StartDying
// ()

void ATentacle_HazardBP_C::Multi_StartDying()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_StartDying");

	ATentacle_HazardBP_C_Multi_StartDying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.EventNextTick
// ()

void ATentacle_HazardBP_C::EventNextTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.EventNextTick");

	ATentacle_HazardBP_C_EventNextTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.CheckRevive
// ()

void ATentacle_HazardBP_C::CheckRevive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.CheckRevive");

	ATentacle_HazardBP_C_CheckRevive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_Revive
// ()

void ATentacle_HazardBP_C::Multi_Revive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_Revive");

	ATentacle_HazardBP_C_Multi_Revive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_96_ComponentEndOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_96_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_96_ComponentEndOverlapSignature__DelegateSignature");

	ATentacle_HazardBP_C_BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_96_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.DoRangedAttack
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::DoRangedAttack(class APrimalCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.DoRangedAttack");

	ATentacle_HazardBP_C_DoRangedAttack_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_RangedAttack
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::Multi_RangedAttack(class APrimalCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_RangedAttack");

	ATentacle_HazardBP_C_Multi_RangedAttack_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_DeleteActor
// ()

void ATentacle_HazardBP_C::Multi_DeleteActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_DeleteActor");

	ATentacle_HazardBP_C_Multi_DeleteActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.SpawnTentacleAttack
// ()

void ATentacle_HazardBP_C::SpawnTentacleAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.SpawnTentacleAttack");

	ATentacle_HazardBP_C_SpawnTentacleAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_RangeAttackMuzzleFXEmitter
// ()

void ATentacle_HazardBP_C::Multi_RangeAttackMuzzleFXEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_RangeAttackMuzzleFXEmitter");

	ATentacle_HazardBP_C_Multi_RangeAttackMuzzleFXEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.MultiMaterialChange
// ()
// Parameters:
// class UPrimitiveComponent*     MaterialToChange               (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::MultiMaterialChange(class UPrimitiveComponent* MaterialToChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.MultiMaterialChange");

	ATentacle_HazardBP_C_MultiMaterialChange_Params params;
	params.MaterialToChange = MaterialToChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.StopDissolve
// ()

void ATentacle_HazardBP_C::StopDissolve()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.StopDissolve");

	ATentacle_HazardBP_C_StopDissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.ClearDissolve
// ()

void ATentacle_HazardBP_C::ClearDissolve()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.ClearDissolve");

	ATentacle_HazardBP_C_ClearDissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.FullDissolve
// ()

void ATentacle_HazardBP_C::FullDissolve()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.FullDissolve");

	ATentacle_HazardBP_C_FullDissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.StopMontage_Multi
// ()
// Parameters:
// class UAnimMontage*            MontageToStop                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendOutTime                   (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::StopMontage_Multi(class UAnimMontage* MontageToStop, float BlendOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.StopMontage_Multi");

	ATentacle_HazardBP_C_StopMontage_Multi_Params params;
	params.MontageToStop = MontageToStop;
	params.BlendOutTime = BlendOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.DelayForceTargetChar
// ()
// Parameters:
// class APrimalCharacter*        Char                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::DelayForceTargetChar(class APrimalCharacter* Char, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.DelayForceTargetChar");

	ATentacle_HazardBP_C_DelayForceTargetChar_Params params;
	params.Char = Char;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetRetractionWithDelay
// ()
// Parameters:
// bool                           NewIsRetracted                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::SetRetractionWithDelay(bool NewIsRetracted, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetRetractionWithDelay");

	ATentacle_HazardBP_C_SetRetractionWithDelay_Params params;
	params.NewIsRetracted = NewIsRetracted;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.ExecuteUbergraph_Tentacle_HazardBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::ExecuteUbergraph_Tentacle_HazardBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.ExecuteUbergraph_Tentacle_HazardBP");

	ATentacle_HazardBP_C_ExecuteUbergraph_Tentacle_HazardBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnTentacleDied__DelegateSignature
// ()
// Parameters:
// class APrimalStructure*        ForTentacle                    (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_C::OnTentacleDied__DelegateSignature(class APrimalStructure* ForTentacle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnTentacleDied__DelegateSignature");

	ATentacle_HazardBP_C_OnTentacleDied__DelegateSignature_Params params;
	params.ForTentacle = ForTentacle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
