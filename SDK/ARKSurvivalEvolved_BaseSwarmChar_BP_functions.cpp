// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BaseSwarmChar_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.GetFlockTickingInterval
// ()
// Parameters:
// float                          OutInterval                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABaseSwarmChar_BP_C::GetFlockTickingInterval(float* OutInterval)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.GetFlockTickingInterval");

	ABaseSwarmChar_BP_C_GetFlockTickingInterval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInterval != nullptr)
		*OutInterval = params.OutInterval;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SwarmLifetimeEnded
// (NetReliable, NetRequest, Native, Event, Static, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport)

void ABaseSwarmChar_BP_C::STATIC_SwarmLifetimeEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SwarmLifetimeEnded");

	ABaseSwarmChar_BP_C_SwarmLifetimeEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SetSwarmLifetime
// ()
// Parameters:
// float                          LifeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void ABaseSwarmChar_BP_C::SetSwarmLifetime(float LifeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SetSwarmLifetime");

	ABaseSwarmChar_BP_C_SetSwarmLifetime_Params params;
	params.LifeTime = LifeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.FinishedAttackingTarget
// ()

void ABaseSwarmChar_BP_C::FinishedAttackingTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.FinishedAttackingTarget");

	ABaseSwarmChar_BP_C_FinishedAttackingTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.StartAttackingTarget
// ()

void ABaseSwarmChar_BP_C::StartAttackingTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.StartAttackingTarget");

	ABaseSwarmChar_BP_C_StartAttackingTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SpottedTarget
// ()

void ABaseSwarmChar_BP_C::SpottedTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SpottedTarget");

	ABaseSwarmChar_BP_C_SpottedTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.CreateBoidSM
// (Exec, NetResponse, Static, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMeshComponent*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStaticMeshComponent* ABaseSwarmChar_BP_C::STATIC_CreateBoidSM(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.CreateBoidSM");

	ABaseSwarmChar_BP_C_CreateBoidSM_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.UpdateDeadBoids
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABaseSwarmChar_BP_C::UpdateDeadBoids(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.UpdateDeadBoids");

	ABaseSwarmChar_BP_C_UpdateDeadBoids_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPSetCharacterMeshesMaterialScalarParamValue
// (Exec, Native, Event, NetResponse, Static, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// struct FName*                  ParamName                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ABaseSwarmChar_BP_C::STATIC_BPSetCharacterMeshesMaterialScalarParamValue(struct FName* ParamName, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPSetCharacterMeshesMaterialScalarParamValue");

	ABaseSwarmChar_BP_C_BPSetCharacterMeshesMaterialScalarParamValue_Params params;
	params.ParamName = ParamName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SetMaterialScalarParameter
// ()
// Parameters:
// class UStaticMeshComponent*    SM                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Parameter                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ABaseSwarmChar_BP_C::SetMaterialScalarParameter(class UStaticMeshComponent* SM, const struct FName& Parameter, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SetMaterialScalarParameter");

	ABaseSwarmChar_BP_C_SetMaterialScalarParameter_Params params;
	params.SM = SM;
	params.Parameter = Parameter;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Kill Boid
// ()
// Parameters:
// class UStaticMeshComponent*    StaticMeshComp                 (Parm, ZeroConstructor, IsPlainOldData)

void ABaseSwarmChar_BP_C::Kill_Boid(class UStaticMeshComponent* StaticMeshComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Kill Boid");

	ABaseSwarmChar_BP_C_Kill_Boid_Params params;
	params.StaticMeshComp = StaticMeshComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPOnRefreshColorization
// ()
// Parameters:
// TArray<struct FLinearColor>    Colors                         (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABaseSwarmChar_BP_C::BPOnRefreshColorization(TArray<struct FLinearColor>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPOnRefreshColorization");

	ABaseSwarmChar_BP_C_BPOnRefreshColorization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Attack Target
// ()
// Parameters:
// bool                           StopAttacking_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABaseSwarmChar_BP_C::Attack_Target(bool* StopAttacking_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Attack Target");

	ABaseSwarmChar_BP_C_Attack_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StopAttacking_ != nullptr)
		*StopAttacking_ = params.StopAttacking_;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Get Current Attack Duration
// ()
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABaseSwarmChar_BP_C::Get_Current_Attack_Duration(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Get Current Attack Duration");

	ABaseSwarmChar_BP_C_Get_Current_Attack_Duration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.DestroyTarget
// ()

void ABaseSwarmChar_BP_C::DestroyTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.DestroyTarget");

	ABaseSwarmChar_BP_C_DestroyTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SetFlockBehavior
// (Exec, Native, NetResponse, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport)

void ABaseSwarmChar_BP_C::SetFlockBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SetFlockBehavior");

	ABaseSwarmChar_BP_C_SetFlockBehavior_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.OnRep_FlockShape
// ()

void ABaseSwarmChar_BP_C::OnRep_FlockShape()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.OnRep_FlockShape");

	ABaseSwarmChar_BP_C_OnRep_FlockShape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Get Damage Type Adjuster
// (Event, NetResponse, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// class UClass*                  Type                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Multiplier                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABaseSwarmChar_BP_C::Get_Damage_Type_Adjuster(class UClass* Type, float* Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Get Damage Type Adjuster");

	ABaseSwarmChar_BP_C_Get_Damage_Type_Adjuster_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Multiplier != nullptr)
		*Multiplier = params.Multiplier;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Kill Boids Based On Health
// ()

void ABaseSwarmChar_BP_C::Kill_Boids_Based_On_Health()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Kill Boids Based On Health");

	ABaseSwarmChar_BP_C_Kill_Boids_Based_On_Health_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.OnTargetChanged
// ()

void ABaseSwarmChar_BP_C::OnTargetChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.OnTargetChanged");

	ABaseSwarmChar_BP_C_OnTargetChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Can Damage Victim in Radius
// ()
// Parameters:
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanDamage                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABaseSwarmChar_BP_C::Can_Damage_Victim_in_Radius(class AActor* Victim, bool* CanDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Can Damage Victim in Radius");

	ABaseSwarmChar_BP_C_Can_Damage_Victim_in_Radius_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanDamage != nullptr)
		*CanDamage = params.CanDamage;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.CreateFlock
// (NetReliable, NetRequest, Exec, Static, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport)

void ABaseSwarmChar_BP_C::STATIC_CreateFlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.CreateFlock");

	ABaseSwarmChar_BP_C_CreateFlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.TickFlock
// (NetReliable, Event, Static, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABaseSwarmChar_BP_C::STATIC_TickFlock(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.TickFlock");

	ABaseSwarmChar_BP_C_TickFlock_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ArrayContainsParentDamageType
// ()
// Parameters:
// TArray<class UClass*>          DamageTypes                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UClass*                  DamageType                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABaseSwarmChar_BP_C::ArrayContainsParentDamageType(TArray<class UClass*>* DamageTypes, class UClass** DamageType, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ArrayContainsParentDamageType");

	ABaseSwarmChar_BP_C_ArrayContainsParentDamageType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageTypes != nullptr)
		*DamageTypes = params.DamageTypes;
	if (DamageType != nullptr)
		*DamageType = params.DamageType;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABaseSwarmChar_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPAdjustDamage");

	ABaseSwarmChar_BP_C_BPAdjustDamage_Params params;
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


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Damage Victim in Radius
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)

void ABaseSwarmChar_BP_C::STATIC_Damage_Victim_in_Radius(class AActor* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Damage Victim in Radius");

	ABaseSwarmChar_BP_C_Damage_Victim_in_Radius_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Damage Victims In Radius
// ()

void ABaseSwarmChar_BP_C::Damage_Victims_In_Radius()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Damage Victims In Radius");

	ABaseSwarmChar_BP_C_Damage_Victims_In_Radius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPCanCryo
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABaseSwarmChar_BP_C::BPCanCryo(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPCanCryo");

	ABaseSwarmChar_BP_C_BPCanCryo_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPOnLethalDamage
// ()
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController**            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreventDeath                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABaseSwarmChar_BP_C::BPOnLethalDamage(float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent, bool* bPreventDeath)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPOnLethalDamage");

	ABaseSwarmChar_BP_C_BPOnLethalDamage_Params params;
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


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPDinoPostBeginPlay
// ()

void ABaseSwarmChar_BP_C::BPDinoPostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPDinoPostBeginPlay");

	ABaseSwarmChar_BP_C_BPDinoPostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABaseSwarmChar_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ReceiveTick");

	ABaseSwarmChar_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BlueprintAdjustOutputDamage
// (NetReliable, Exec, Event, MulticastDelegate, Private, Protected, NetServer, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABaseSwarmChar_BP_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BlueprintAdjustOutputDamage");

	ABaseSwarmChar_BP_C_BlueprintAdjustOutputDamage_Params params;
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


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.UserConstructionScript
// ()

void ABaseSwarmChar_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.UserConstructionScript");

	ABaseSwarmChar_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ReceiveBeginPlay
// ()

void ABaseSwarmChar_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ReceiveBeginPlay");

	ABaseSwarmChar_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.CleanupBoids
// ()

void ABaseSwarmChar_BP_C::CleanupBoids()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.CleanupBoids");

	ABaseSwarmChar_BP_C_CleanupBoids_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.MultiOnLethalDamage
// ()

void ABaseSwarmChar_BP_C::MultiOnLethalDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.MultiOnLethalDamage");

	ABaseSwarmChar_BP_C_MultiOnLethalDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.OnDied_Event
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void ABaseSwarmChar_BP_C::OnDied_Event(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.OnDied_Event");

	ABaseSwarmChar_BP_C_OnDied_Event_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Server_SpottedTargetEvent
// ()

void ABaseSwarmChar_BP_C::Server_SpottedTargetEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Server_SpottedTargetEvent");

	ABaseSwarmChar_BP_C_Server_SpottedTargetEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Multicast_SpottedTargetEvent
// ()

void ABaseSwarmChar_BP_C::Multicast_SpottedTargetEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Multicast_SpottedTargetEvent");

	ABaseSwarmChar_BP_C_Multicast_SpottedTargetEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Server_StartAttackingTarget
// ()

void ABaseSwarmChar_BP_C::Server_StartAttackingTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Server_StartAttackingTarget");

	ABaseSwarmChar_BP_C_Server_StartAttackingTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Multicast_StartAttackingTarget
// ()

void ABaseSwarmChar_BP_C::Multicast_StartAttackingTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Multicast_StartAttackingTarget");

	ABaseSwarmChar_BP_C_Multicast_StartAttackingTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Server_FinishedAttackingTarget
// ()

void ABaseSwarmChar_BP_C::Server_FinishedAttackingTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Server_FinishedAttackingTarget");

	ABaseSwarmChar_BP_C_Server_FinishedAttackingTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Multicast_FinishedAttackingTarget
// ()

void ABaseSwarmChar_BP_C::Multicast_FinishedAttackingTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Multicast_FinishedAttackingTarget");

	ABaseSwarmChar_BP_C_Multicast_FinishedAttackingTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ExecuteUbergraph_BaseSwarmChar_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABaseSwarmChar_BP_C::ExecuteUbergraph_BaseSwarmChar_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ExecuteUbergraph_BaseSwarmChar_BP");

	ABaseSwarmChar_BP_C_ExecuteUbergraph_BaseSwarmChar_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
