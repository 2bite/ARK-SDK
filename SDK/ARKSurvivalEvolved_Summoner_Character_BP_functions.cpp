// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Summoner_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Summoner_Character_BP.Summoner_Character_BP_C.TimedClearForceSearchLightTargetPrevMovement
// ()

void ASummoner_Character_BP_C::TimedClearForceSearchLightTargetPrevMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.TimedClearForceSearchLightTargetPrevMovement");

	ASummoner_Character_BP_C_TimedClearForceSearchLightTargetPrevMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BPSetupTamed");

	ASummoner_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BPNotifySetRider");

	ASummoner_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BPNotifyClearRider");

	ASummoner_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASummoner_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BlueprintCanRiderAttack");

	ASummoner_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.BPTimerNonDedicated
// ()

void ASummoner_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BPTimerNonDedicated");

	ASummoner_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.TeleportToNearbySplinePointUnstasis
// ()

void ASummoner_Character_BP_C::TeleportToNearbySplinePointUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.TeleportToNearbySplinePointUnstasis");

	ASummoner_Character_BP_C_TeleportToNearbySplinePointUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.GetMissionMinionColorSet
// ()
// Parameters:
// class UClass*                  ColorSet                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::GetMissionMinionColorSet(class UClass** ColorSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.GetMissionMinionColorSet");

	ASummoner_Character_BP_C_GetMissionMinionColorSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ColorSet != nullptr)
		*ColorSet = params.ColorSet;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.UpdatePetalAnimStateType
// ()

void ASummoner_Character_BP_C::UpdatePetalAnimStateType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.UpdatePetalAnimStateType");

	ASummoner_Character_BP_C_UpdatePetalAnimStateType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.TeleportAlongCurrentSplinePoint
// ()

void ASummoner_Character_BP_C::TeleportAlongCurrentSplinePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.TeleportAlongCurrentSplinePoint");

	ASummoner_Character_BP_C_TeleportAlongCurrentSplinePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.BPUnstasis
// ()

void ASummoner_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BPUnstasis");

	ASummoner_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.ClearStartDodgeLoc
// ()

void ASummoner_Character_BP_C::ClearStartDodgeLoc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ClearStartDodgeLoc");

	ASummoner_Character_BP_C_ClearStartDodgeLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.ResetPerCombatVars
// ()

void ASummoner_Character_BP_C::ResetPerCombatVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ResetPerCombatVars");

	ASummoner_Character_BP_C_ResetPerCombatVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnMinionsInArea
// ()
// Parameters:
// struct FVector                 SourceLoc                      (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::SpawnMinionsInArea(const struct FVector& SourceLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnMinionsInArea");

	ASummoner_Character_BP_C_SpawnMinionsInArea_Params params;
	params.SourceLoc = SourceLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.BP_OnSetDeath
// ()

void ASummoner_Character_BP_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BP_OnSetDeath");

	ASummoner_Character_BP_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.TeleportToCurrentSplinePoint
// ()

void ASummoner_Character_BP_C::TeleportToCurrentSplinePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.TeleportToCurrentSplinePoint");

	ASummoner_Character_BP_C_TeleportToCurrentSplinePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.CheckIsBeingCarried
// ()
// Parameters:
// bool                           ActuallyDoEscape               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsBeingCarried                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::CheckIsBeingCarried(bool ActuallyDoEscape, bool* IsBeingCarried)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.CheckIsBeingCarried");

	ASummoner_Character_BP_C_CheckIsBeingCarried_Params params;
	params.ActuallyDoEscape = ActuallyDoEscape;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsBeingCarried != nullptr)
		*IsBeingCarried = params.IsBeingCarried;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.ManualSpawnHitVFX
// ()
// Parameters:
// struct FHitResult              HitInfo                        (Parm)
// bool                           Shielded                       (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::ManualSpawnHitVFX(const struct FHitResult& HitInfo, bool Shielded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ManualSpawnHitVFX");

	ASummoner_Character_BP_C_ManualSpawnHitVFX_Params params;
	params.HitInfo = HitInfo;
	params.Shielded = Shielded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.TogglePetalsOpen
// ()
// Parameters:
// bool                           Open                           (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::TogglePetalsOpen(bool Open)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.TogglePetalsOpen");

	ASummoner_Character_BP_C_TogglePetalsOpen_Params params;
	params.Open = Open;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.ScreamCameraShakePlayers
// ()

void ASummoner_Character_BP_C::ScreamCameraShakePlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ScreamCameraShakePlayers");

	ASummoner_Character_BP_C_ScreamCameraShakePlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.BPOverrideHurtAnim
// ()
// Parameters:
// float*                         DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  PawnInstigator                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsLocalPath                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PointDamageLocation            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PointDamageHitNormal           (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* ASummoner_Character_BP_C::BPOverrideHurtAnim(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, bool* bIsPointDamage, struct FVector* PointDamageLocation, struct FVector* PointDamageHitNormal, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BPOverrideHurtAnim");

	ASummoner_Character_BP_C_BPOverrideHurtAnim_Params params;
	params.DamageTaken = DamageTaken;
	params.PawnInstigator = PawnInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsLocalPath = bIsLocalPath;
	params.bIsPointDamage = bIsPointDamage;
	params.PointDamageLocation = PointDamageLocation;
	params.PointDamageHitNormal = PointDamageHitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;

	return params.ReturnValue;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateSearchLightActive
// ()
// Parameters:
// bool                           ShouldSetActive                (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::UpdateSearchLightActive(bool ShouldSetActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateSearchLightActive");

	ASummoner_Character_BP_C_UpdateSearchLightActive_Params params;
	params.ShouldSetActive = ShouldSetActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.TumorAttackSetup
// ()

void ASummoner_Character_BP_C::TumorAttackSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.TumorAttackSetup");

	ASummoner_Character_BP_C_TumorAttackSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.RefreshMinionAggro
// ()

void ASummoner_Character_BP_C::RefreshMinionAggro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.RefreshMinionAggro");

	ASummoner_Character_BP_C_RefreshMinionAggro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.AttemptDodgeAttack
// (Event, NetMulticast, NetServer, NetClient, NetValidate)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::AttemptDodgeAttack(int index, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.AttemptDodgeAttack");

	ASummoner_Character_BP_C_AttemptDodgeAttack_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.ToggleCanScreamTeleport
// (NetRequest, Exec, Native, NetResponse, NetMulticast, NetServer, NetClient, NetValidate)
// Parameters:
// bool                           CanScreamTeleport              (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::ToggleCanScreamTeleport(bool CanScreamTeleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ToggleCanScreamTeleport");

	ASummoner_Character_BP_C_ToggleCanScreamTeleport_Params params;
	params.CanScreamTeleport = CanScreamTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BPDoAttack");

	ASummoner_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.ScreamTeleport
// (NetRequest, Exec, NetResponse, NetMulticast, NetServer, NetClient, NetValidate)
// Parameters:
// bool                           Return                         (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::ScreamTeleport(bool Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ScreamTeleport");

	ASummoner_Character_BP_C_ScreamTeleport_Params params;
	params.Return = Return;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.PlayFoundTargetAnim
// ()

void ASummoner_Character_BP_C::PlayFoundTargetAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.PlayFoundTargetAnim");

	ASummoner_Character_BP_C_PlayFoundTargetAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.ExShouldAggroToActor
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AddAggroIfTrue                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReqShooterChar                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::ExShouldAggroToActor(class AActor* Actor, bool AddAggroIfTrue, bool ReqShooterChar, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ExShouldAggroToActor");

	ASummoner_Character_BP_C_ExShouldAggroToActor_Params params;
	params.Actor = Actor;
	params.AddAggroIfTrue = AddAggroIfTrue;
	params.ReqShooterChar = ReqShooterChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.BPNotifyBumpedByPawn
// ()
// Parameters:
// class APrimalCharacter**       ByPawn                         (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::BPNotifyBumpedByPawn(class APrimalCharacter** ByPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BPNotifyBumpedByPawn");

	ASummoner_Character_BP_C_BPNotifyBumpedByPawn_Params params;
	params.ByPawn = ByPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.GetRandomMinionsToSpawn
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, NetServer, NetClient, NetValidate)
// Parameters:
// int                            amount                         (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::STATIC_GetRandomMinionsToSpawn(int amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.GetRandomMinionsToSpawn");

	ASummoner_Character_BP_C_GetRandomMinionsToSpawn_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ReceiveAnyDamage");

	ASummoner_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.ToggleHealthRegen
// ()
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::ToggleHealthRegen(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ToggleHealthRegen");

	ASummoner_Character_BP_C_ToggleHealthRegen_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnParticlesAtAttackSockets
// (NetReliable, NetServer, NetClient, NetValidate)
// Parameters:
// int                            AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         particle                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpawnAttached                  (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::SpawnParticlesAtAttackSockets(int AttackIndex, class UParticleSystem* particle, const struct FVector& Scale, bool SpawnAttached)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnParticlesAtAttackSockets");

	ASummoner_Character_BP_C_SpawnParticlesAtAttackSockets_Params params;
	params.AttackIndex = AttackIndex;
	params.particle = particle;
	params.Scale = Scale;
	params.SpawnAttached = SpawnAttached;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.TimedClearPreventMovement
// ()

void ASummoner_Character_BP_C::TimedClearPreventMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.TimedClearPreventMovement");

	ASummoner_Character_BP_C_TimedClearPreventMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateSpline
// ()
// Parameters:
// bool                           ExcludeCurrent                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UpdateDirection                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SetNewSpline                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::UpdateSpline(bool ExcludeCurrent, bool UpdateDirection, bool* SetNewSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateSpline");

	ASummoner_Character_BP_C_UpdateSpline_Params params;
	params.ExcludeCurrent = ExcludeCurrent;
	params.UpdateDirection = UpdateDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SetNewSpline != nullptr)
		*SetNewSpline = params.SetNewSpline;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.GetClosestSpline
// ()
// Parameters:
// bool                           ExcludeCurrent                 (Parm, ZeroConstructor, IsPlainOldData)
// class ASplineActor*            Spline                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::GetClosestSpline(bool ExcludeCurrent, class ASplineActor** Spline)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.GetClosestSpline");

	ASummoner_Character_BP_C_GetClosestSpline_Params params;
	params.ExcludeCurrent = ExcludeCurrent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Spline != nullptr)
		*Spline = params.Spline;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateDodgeDurationByDistance
// ()
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::UpdateDodgeDurationByDistance(float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateDodgeDurationByDistance");

	ASummoner_Character_BP_C_UpdateDodgeDurationByDistance_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.GetDodgeDistanceForChar
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::GetDodgeDistanceForChar(class APrimalCharacter* Character, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.GetDodgeDistanceForChar");

	ASummoner_Character_BP_C_GetDodgeDistanceForChar_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateAnimBPUseTurning
// ()
// Parameters:
// bool                           UseTurning                     (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::UpdateAnimBPUseTurning(bool UseTurning)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateAnimBPUseTurning");

	ASummoner_Character_BP_C_UpdateAnimBPUseTurning_Params params;
	params.UseTurning = UseTurning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.InitSummoner
// ()

void ASummoner_Character_BP_C::InitSummoner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.InitSummoner");

	ASummoner_Character_BP_C_InitSummoner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.TimedClearIsDodging
// ()

void ASummoner_Character_BP_C::TimedClearIsDodging()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.TimedClearIsDodging");

	ASummoner_Character_BP_C_TimedClearIsDodging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.SetIsDodging
// ()
// Parameters:
// bool                           IsDodging                      (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::SetIsDodging(bool IsDodging)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.SetIsDodging");

	ASummoner_Character_BP_C_SetIsDodging_Params params;
	params.IsDodging = IsDodging;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.OnRep_bIsDodging
// ()

void ASummoner_Character_BP_C::OnRep_bIsDodging()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.OnRep_bIsDodging");

	ASummoner_Character_BP_C_OnRep_bIsDodging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.SummonerServerTick
// (Native, Static, NetServer, NetClient, NetValidate)

void ASummoner_Character_BP_C::STATIC_SummonerServerTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.SummonerServerTick");

	ASummoner_Character_BP_C_SummonerServerTick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.OnRep_bIsStunned
// ()

void ASummoner_Character_BP_C::OnRep_bIsStunned()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.OnRep_bIsStunned");

	ASummoner_Character_BP_C_OnRep_bIsStunned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.GetLocationLeastPlayerLookingAt
// (NetRequest, Native, Event, Static, NetServer, NetClient, NetValidate)
// Parameters:
// struct FVector                 retLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::STATIC_GetLocationLeastPlayerLookingAt(struct FVector* retLocation, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.GetLocationLeastPlayerLookingAt");

	ASummoner_Character_BP_C_GetLocationLeastPlayerLookingAt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retLocation != nullptr)
		*retLocation = params.retLocation;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.TickingShield
// ()

void ASummoner_Character_BP_C::TickingShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.TickingShield");

	ASummoner_Character_BP_C_TickingShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.BPAdjustDamage
// (NetRequest, Exec, Native, NetResponse, NetMulticast, NetServer, NetClient, NetValidate)
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASummoner_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BPAdjustDamage");

	ASummoner_Character_BP_C_BPAdjustDamage_Params params;
	params.IncomingDamage = IncomingDamage;
	params.TheDamageEvent = TheDamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.OnRep_bShieldOn
// (NetReliable, NetRequest, Static, NetMulticast, NetServer, NetClient, NetValidate)

void ASummoner_Character_BP_C::STATIC_OnRep_bShieldOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.OnRep_bShieldOn");

	ASummoner_Character_BP_C_OnRep_bShieldOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.ToggleShield
// ()

void ASummoner_Character_BP_C::ToggleShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ToggleShield");

	ASummoner_Character_BP_C_ToggleShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.OnRep_InSleepingState
// ()

void ASummoner_Character_BP_C::OnRep_InSleepingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.OnRep_InSleepingState");

	ASummoner_Character_BP_C_OnRep_InSleepingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.BPOnLethalDamage
// ()
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController**            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreventDeath                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::BPOnLethalDamage(float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent, bool* bPreventDeath)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BPOnLethalDamage");

	ASummoner_Character_BP_C_BPOnLethalDamage_Params params;
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


// Function Summoner_Character_BP.Summoner_Character_BP_C.IsBeingAimedAt
// ()
// Parameters:
// bool                           Aimed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::IsBeingAimedAt(bool* Aimed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.IsBeingAimedAt");

	ASummoner_Character_BP_C_IsBeingAimedAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Aimed != nullptr)
		*Aimed = params.Aimed;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.FireCircleTumor
// (NetRequest, NetResponse, Static, NetMulticast, NetServer, NetClient, NetValidate)
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DinoClass                      (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::STATIC_FireCircleTumor(const struct FVector& Loc, int index, class UClass* DinoClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.FireCircleTumor");

	ASummoner_Character_BP_C_FireCircleTumor_Params params;
	params.Loc = Loc;
	params.index = index;
	params.DinoClass = DinoClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.FireLineTumor
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, NetServer, NetClient, NetValidate)
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DinoClass                      (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::STATIC_FireLineTumor(const struct FVector& Loc, int index, class UClass* DinoClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.FireLineTumor");

	ASummoner_Character_BP_C_FireLineTumor_Params params;
	params.Loc = Loc;
	params.index = index;
	params.DinoClass = DinoClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.DodgeMove
// ()

void ASummoner_Character_BP_C::DodgeMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.DodgeMove");

	ASummoner_Character_BP_C_DodgeMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.CanDodge
// ()
// Parameters:
// bool                           IsRandomDodge                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanDodge                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::CanDodge(bool IsRandomDodge, bool* CanDodge)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.CanDodge");

	ASummoner_Character_BP_C_CanDodge_Params params;
	params.IsRandomDodge = IsRandomDodge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanDodge != nullptr)
		*CanDodge = params.CanDodge;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.BPModifyDesiredRotation
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                InDesiredRotation              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                OutDesiredRotation             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASummoner_Character_BP_C::BPModifyDesiredRotation(float* DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BPModifyDesiredRotation");

	ASummoner_Character_BP_C_BPModifyDesiredRotation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InDesiredRotation != nullptr)
		*InDesiredRotation = params.InDesiredRotation;
	if (OutDesiredRotation != nullptr)
		*OutDesiredRotation = params.OutDesiredRotation;

	return params.ReturnValue;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.PushBack
// ()

void ASummoner_Character_BP_C::PushBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.PushBack");

	ASummoner_Character_BP_C_PushBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.Update Chasing Target
// ()

void ASummoner_Character_BP_C::Update_Chasing_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.Update Chasing Target");

	ASummoner_Character_BP_C_Update_Chasing_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.ToggleSleepingState
// ()

void ASummoner_Character_BP_C::ToggleSleepingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ToggleSleepingState");

	ASummoner_Character_BP_C_ToggleSleepingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.TickSleepingState
// ()

void ASummoner_Character_BP_C::TickSleepingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.TickSleepingState");

	ASummoner_Character_BP_C_TickSleepingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateSleep State
// ()

void ASummoner_Character_BP_C::UpdateSleep_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateSleep State");

	ASummoner_Character_BP_C_UpdateSleep_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.Get Closest PointIndex on Spline
// ()
// Parameters:
// int                            index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::Get_Closest_PointIndex_on_Spline(int* index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.Get Closest PointIndex on Spline");

	ASummoner_Character_BP_C_Get_Closest_PointIndex_on_Spline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (index != nullptr)
		*index = params.index;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.TickSearchLight
// (NetReliable, Native, Event, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetClient, NetValidate)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::TickSearchLight(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.TickSearchLight");

	ASummoner_Character_BP_C_TickSearchLight_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.ReceiveDestroyed
// ()

void ASummoner_Character_BP_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ReceiveDestroyed");

	ASummoner_Character_BP_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.StopWander
// ()

void ASummoner_Character_BP_C::StopWander()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.StopWander");

	ASummoner_Character_BP_C_StopWander_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.StartWanderForDuration
// ()
// Parameters:
// float                          WanderDuration                 (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::StartWanderForDuration(float WanderDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.StartWanderForDuration");

	ASummoner_Character_BP_C_StartWanderForDuration_Params params;
	params.WanderDuration = WanderDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.CleanMinionsArray
// ()

void ASummoner_Character_BP_C::CleanMinionsArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.CleanMinionsArray");

	ASummoner_Character_BP_C_CleanMinionsArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.DespawnMinions
// ()

void ASummoner_Character_BP_C::DespawnMinions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.DespawnMinions");

	ASummoner_Character_BP_C_DespawnMinions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.DebugSpline
// ()

void ASummoner_Character_BP_C::DebugSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.DebugSpline");

	ASummoner_Character_BP_C_DebugSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.OverrideRandomWanderLocation
// ()
// Parameters:
// struct FVector                 originalDestination            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 inVec                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.OverrideRandomWanderLocation");

	ASummoner_Character_BP_C_OverrideRandomWanderLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (originalDestination != nullptr)
		*originalDestination = params.originalDestination;
	if (inVec != nullptr)
		*inVec = params.inVec;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnTumor
// (NetReliable, NetRequest, Event, Public, Private, Protected, Delegate, NetClient, NetValidate)

void ASummoner_Character_BP_C::SpawnTumor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnTumor");

	ASummoner_Character_BP_C_SpawnTumor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnAMinionAtLocation
// (Static, Public, Private, Protected, Delegate, NetClient, NetValidate)
// Parameters:
// struct FVector                 SpawnLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DinoClass                      (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoCharacter*    SpawnedMinion                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::STATIC_SpawnAMinionAtLocation(const struct FVector& SpawnLocation, class UClass* DinoClass, class APrimalDinoCharacter** SpawnedMinion)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnAMinionAtLocation");

	ASummoner_Character_BP_C_SpawnAMinionAtLocation_Params params;
	params.SpawnLocation = SpawnLocation;
	params.DinoClass = DinoClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedMinion != nullptr)
		*SpawnedMinion = params.SpawnedMinion;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnProjectiles
// (Exec, NetResponse, Static, Public, Private, Protected, Delegate, NetClient, NetValidate)

void ASummoner_Character_BP_C::STATIC_SpawnProjectiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnProjectiles");

	ASummoner_Character_BP_C_SpawnProjectiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASummoner_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BlueprintCanAttack");

	ASummoner_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.UserConstructionScript
// ()

void ASummoner_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.UserConstructionScript");

	ASummoner_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_SpotLightAlert__FinishedFunc
// ()

void ASummoner_Character_BP_C::Timeline_SpotLightAlert__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_SpotLightAlert__FinishedFunc");

	ASummoner_Character_BP_C_Timeline_SpotLightAlert__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_SpotLightAlert__UpdateFunc
// ()

void ASummoner_Character_BP_C::Timeline_SpotLightAlert__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_SpotLightAlert__UpdateFunc");

	ASummoner_Character_BP_C_Timeline_SpotLightAlert__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_UpdateShieldMats__FinishedFunc
// ()

void ASummoner_Character_BP_C::Timeline_UpdateShieldMats__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_UpdateShieldMats__FinishedFunc");

	ASummoner_Character_BP_C_Timeline_UpdateShieldMats__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_UpdateShieldMats__UpdateFunc
// ()

void ASummoner_Character_BP_C::Timeline_UpdateShieldMats__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_UpdateShieldMats__UpdateFunc");

	ASummoner_Character_BP_C_Timeline_UpdateShieldMats__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_DoTeleportDissolve__FinishedFunc
// ()

void ASummoner_Character_BP_C::Timeline_DoTeleportDissolve__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_DoTeleportDissolve__FinishedFunc");

	ASummoner_Character_BP_C_Timeline_DoTeleportDissolve__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_DoTeleportDissolve__UpdateFunc
// ()

void ASummoner_Character_BP_C::Timeline_DoTeleportDissolve__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_DoTeleportDissolve__UpdateFunc");

	ASummoner_Character_BP_C_Timeline_DoTeleportDissolve__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.BPTimerServer
// ()

void ASummoner_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BPTimerServer");

	ASummoner_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.ReceiveBeginPlay
// ()

void ASummoner_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ReceiveBeginPlay");

	ASummoner_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	ASummoner_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.Multi_SpawnParticleAtAttackSockets
// ()
// Parameters:
// int                            AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         particle                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpawnAttached                  (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::Multi_SpawnParticleAtAttackSockets(int AttackIndex, class UParticleSystem* particle, const struct FVector& Scale, bool SpawnAttached)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.Multi_SpawnParticleAtAttackSockets");

	ASummoner_Character_BP_C_Multi_SpawnParticleAtAttackSockets_Params params;
	params.AttackIndex = AttackIndex;
	params.particle = particle;
	params.Scale = Scale;
	params.SpawnAttached = SpawnAttached;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.Multi_ManualSpawnHitVFX
// ()
// Parameters:
// struct FHitResult              HitInfo                        (Parm)
// bool                           Shielded                       (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::Multi_ManualSpawnHitVFX(const struct FHitResult& HitInfo, bool Shielded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.Multi_ManualSpawnHitVFX");

	ASummoner_Character_BP_C_Multi_ManualSpawnHitVFX_Params params;
	params.HitInfo = HitInfo;
	params.Shielded = Shielded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.Multi_SpotLightAlert
// ()

void ASummoner_Character_BP_C::Multi_SpotLightAlert()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.Multi_SpotLightAlert");

	ASummoner_Character_BP_C_Multi_SpotLightAlert_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.Multi_MinionSpawnFX
// ()
// Parameters:
// struct UObject_FTransform      Transform                      (Parm, IsPlainOldData)

void ASummoner_Character_BP_C::Multi_MinionSpawnFX(const struct UObject_FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.Multi_MinionSpawnFX");

	ASummoner_Character_BP_C_Multi_MinionSpawnFX_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateShieldMats
// ()

void ASummoner_Character_BP_C::UpdateShieldMats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateShieldMats");

	ASummoner_Character_BP_C_UpdateShieldMats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.DoTeleportDissolve
// ()

void ASummoner_Character_BP_C::DoTeleportDissolve()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.DoTeleportDissolve");

	ASummoner_Character_BP_C_DoTeleportDissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_Character_BP.Summoner_Character_BP_C.ExecuteUbergraph_Summoner_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_Character_BP_C::ExecuteUbergraph_Summoner_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_Character_BP.Summoner_Character_BP_C.ExecuteUbergraph_Summoner_Character_BP");

	ASummoner_Character_BP_C_ExecuteUbergraph_Summoner_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
