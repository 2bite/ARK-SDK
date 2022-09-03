// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Proj_Mjolnir_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_Mjolnir.Proj_Mjolnir_C.TimedExpandingAudio
// ()

void AProj_Mjolnir_C::TimedExpandingAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.TimedExpandingAudio");

	AProj_Mjolnir_C_TimedExpandingAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.MulticastSpawnHitEmitter
// ()
// Parameters:
// struct UObject_FTransform      SpawnTransform                 (Parm, IsPlainOldData)
// class APawn*                   Instigator                     (Parm, ZeroConstructor, IsPlainOldData)

void AProj_Mjolnir_C::MulticastSpawnHitEmitter(const struct UObject_FTransform& SpawnTransform, class APawn* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.MulticastSpawnHitEmitter");

	AProj_Mjolnir_C_MulticastSpawnHitEmitter_Params params;
	params.SpawnTransform = SpawnTransform;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.HasLosFromPosition
// ()
// Parameters:
// struct FVector                 FromPosition                   (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        ToActor                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasLOS                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProj_Mjolnir_C::HasLosFromPosition(const struct FVector& FromPosition, class APrimalCharacter* ToActor, bool* HasLOS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.HasLosFromPosition");

	AProj_Mjolnir_C_HasLosFromPosition_Params params;
	params.FromPosition = FromPosition;
	params.ToActor = ToActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasLOS != nullptr)
		*HasLOS = params.HasLOS;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.BP_IgnoreProjectileImpact
// ()
// Parameters:
// struct FHitResult*             ImpactHit                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AProj_Mjolnir_C::BP_IgnoreProjectileImpact(struct FHitResult* ImpactHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.BP_IgnoreProjectileImpact");

	AProj_Mjolnir_C_BP_IgnoreProjectileImpact_Params params;
	params.ImpactHit = ImpactHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.CheckForHit
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// struct FHitResult              HitInfo                        (Parm)

void AProj_Mjolnir_C::CheckForHit(const struct FHitResult& HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.CheckForHit");

	AProj_Mjolnir_C_CheckForHit_Params params;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.GetLosOffsetCheckPosition
// ()
// Parameters:
// struct FVector                 CheckPOS                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProj_Mjolnir_C::GetLosOffsetCheckPosition(struct FVector* CheckPOS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.GetLosOffsetCheckPosition");

	AProj_Mjolnir_C_GetLosOffsetCheckPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CheckPOS != nullptr)
		*CheckPOS = params.CheckPOS;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.SetColors
// ()

void AProj_Mjolnir_C::SetColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.SetColors");

	AProj_Mjolnir_C_SetColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.ClientSetLightningPulse
// ()
// Parameters:
// bool                           IsPulsing                      (Parm, ZeroConstructor, IsPlainOldData)

void AProj_Mjolnir_C::ClientSetLightningPulse(bool IsPulsing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.ClientSetLightningPulse");

	AProj_Mjolnir_C_ClientSetLightningPulse_Params params;
	params.IsPulsing = IsPulsing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.TickLightningPulse
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AProj_Mjolnir_C::TickLightningPulse(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.TickLightningPulse");

	AProj_Mjolnir_C_TickLightningPulse_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.DoLightningPulse
// ()

void AProj_Mjolnir_C::DoLightningPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.DoLightningPulse");

	AProj_Mjolnir_C_DoLightningPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.GetSquaredDistance
// ()
// Parameters:
// struct FVector                 A                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          SqDistance                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProj_Mjolnir_C::GetSquaredDistance(const struct FVector& A, const struct FVector& B, float* SqDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.GetSquaredDistance");

	AProj_Mjolnir_C_GetSquaredDistance_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SqDistance != nullptr)
		*SqDistance = params.SqDistance;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.PickedUp
// ()
// Parameters:
// class AShooterCharacter**      ByCharacter                    (Parm, ZeroConstructor, IsPlainOldData)

void AProj_Mjolnir_C::PickedUp(class AShooterCharacter** ByCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.PickedUp");

	AProj_Mjolnir_C_PickedUp_Params params;
	params.ByCharacter = ByCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.PickUpCheck
// ()

void AProj_Mjolnir_C::PickUpCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.PickUpCheck");

	AProj_Mjolnir_C_PickUpCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.Explode
// ()
// Parameters:
// struct FHitResult              Impact                         (Parm, OutParm, ReferenceParm)

void AProj_Mjolnir_C::Explode(struct FHitResult* Impact)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.Explode");

	AProj_Mjolnir_C_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Impact != nullptr)
		*Impact = params.Impact;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.OnImpact
// ()
// Parameters:
// struct FHitResult              HitResult                      (Parm, OutParm, ReferenceParm)
// bool*                          bFromReplication               (Parm, ZeroConstructor, IsPlainOldData)

void AProj_Mjolnir_C::OnImpact(bool* bFromReplication, struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.OnImpact");

	AProj_Mjolnir_C_OnImpact_Params params;
	params.bFromReplication = bFromReplication;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.ReturnToOwner
// ()

void AProj_Mjolnir_C::ReturnToOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.ReturnToOwner");

	AProj_Mjolnir_C_ReturnToOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.ReceiveBeginPlay
// ()

void AProj_Mjolnir_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.ReceiveBeginPlay");

	AProj_Mjolnir_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.Init_Projectile
// ()
// Parameters:
// class AShooterCharacter*       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterWeapon*          ForWeapon                      (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalBuff*             ForControllingBuff             (Parm, ZeroConstructor, IsPlainOldData)

void AProj_Mjolnir_C::Init_Projectile(class AShooterCharacter* forCharacter, class AShooterWeapon* ForWeapon, class APrimalBuff* ForControllingBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.Init_Projectile");

	AProj_Mjolnir_C_Init_Projectile_Params params;
	params.forCharacter = forCharacter;
	params.ForWeapon = ForWeapon;
	params.ForControllingBuff = ForControllingBuff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AProj_Mjolnir_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.ReceiveTick");

	AProj_Mjolnir_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.UserConstructionScript
// ()

void AProj_Mjolnir_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.UserConstructionScript");

	AProj_Mjolnir_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.BndEvt__CollisionComp_K2Node_ComponentBoundEvent_535_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void AProj_Mjolnir_C::BndEvt__CollisionComp_K2Node_ComponentBoundEvent_535_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.BndEvt__CollisionComp_K2Node_ComponentBoundEvent_535_ComponentBeginOverlapSignature__DelegateSignature");

	AProj_Mjolnir_C_BndEvt__CollisionComp_K2Node_ComponentBoundEvent_535_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Proj_Mjolnir.Proj_Mjolnir_C.ExecuteUbergraph_Proj_Mjolnir
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProj_Mjolnir_C::ExecuteUbergraph_Proj_Mjolnir(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.ExecuteUbergraph_Proj_Mjolnir");

	AProj_Mjolnir_C_ExecuteUbergraph_Proj_Mjolnir_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.OnHitForEmitter__DelegateSignature
// ()
// Parameters:
// struct UObject_FTransform      HitTransform                   (Parm, IsPlainOldData)

void AProj_Mjolnir_C::OnHitForEmitter__DelegateSignature(const struct UObject_FTransform& HitTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.OnHitForEmitter__DelegateSignature");

	AProj_Mjolnir_C_OnHitForEmitter__DelegateSignature_Params params;
	params.HitTransform = HitTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.OnRequestSyncProjectile__DelegateSignature
// ()

void AProj_Mjolnir_C::OnRequestSyncProjectile__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.OnRequestSyncProjectile__DelegateSignature");

	AProj_Mjolnir_C_OnRequestSyncProjectile__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.OnShieldReflected__DelegateSignature
// ()

void AProj_Mjolnir_C::OnShieldReflected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.OnShieldReflected__DelegateSignature");

	AProj_Mjolnir_C_OnShieldReflected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.OnStartReturnToPlayer__DelegateSignature
// ()

void AProj_Mjolnir_C::OnStartReturnToPlayer__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.OnStartReturnToPlayer__DelegateSignature");

	AProj_Mjolnir_C_OnStartReturnToPlayer__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.OnPulseEnded__DelegateSignature
// ()

void AProj_Mjolnir_C::OnPulseEnded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.OnPulseEnded__DelegateSignature");

	AProj_Mjolnir_C_OnPulseEnded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.OnClientMjolnirSpawned__DelegateSignature
// ()
// Parameters:
// class AProj_Mjolnir_C*         NewMjolnir                     (Parm, ZeroConstructor, IsPlainOldData)

void AProj_Mjolnir_C::OnClientMjolnirSpawned__DelegateSignature(class AProj_Mjolnir_C* NewMjolnir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.OnClientMjolnirSpawned__DelegateSignature");

	AProj_Mjolnir_C_OnClientMjolnirSpawned__DelegateSignature_Params params;
	params.NewMjolnir = NewMjolnir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Mjolnir.Proj_Mjolnir_C.OnReturnedToPlayer__DelegateSignature
// ()

void AProj_Mjolnir_C::OnReturnedToPlayer__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Mjolnir.Proj_Mjolnir_C.OnReturnedToPlayer__DelegateSignature");

	AProj_Mjolnir_C_OnReturnedToPlayer__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
