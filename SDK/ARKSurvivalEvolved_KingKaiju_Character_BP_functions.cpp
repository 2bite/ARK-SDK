// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_KingKaiju_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.GetVar_DifficultyIndex
// ()
// Parameters:
// int                            Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::GetVar_DifficultyIndex(int* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.GetVar_DifficultyIndex");

	AKingKaiju_Character_BP_C_GetVar_DifficultyIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.GetKingKaijuCharStatusComponent
// ()
// Parameters:
// class UPrimalCharacterStatusComponent* Component                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::GetKingKaijuCharStatusComponent(class UPrimalCharacterStatusComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.GetKingKaijuCharStatusComponent");

	AKingKaiju_Character_BP_C_GetKingKaijuCharStatusComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.GetVar_InHordeMode
// ()
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::GetVar_InHordeMode(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.GetVar_InHordeMode");

	AKingKaiju_Character_BP_C_GetVar_InHordeMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.GetKaijuEnemyList
// ()
// Parameters:
// TArray<class APrimalCharacter*> EnemyList                      (Parm, OutParm, ZeroConstructor)

void AKingKaiju_Character_BP_C::GetKaijuEnemyList(TArray<class APrimalCharacter*>* EnemyList)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.GetKaijuEnemyList");

	AKingKaiju_Character_BP_C_GetKaijuEnemyList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnemyList != nullptr)
		*EnemyList = params.EnemyList;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.GetClosestEnemy
// ()
// Parameters:
// class AActor*                  Enemy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::GetClosestEnemy(class AActor** Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.GetClosestEnemy");

	AKingKaiju_Character_BP_C_GetClosestEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enemy != nullptr)
		*Enemy = params.Enemy;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPCanBaseOnCharacter
// ()
// Parameters:
// class APrimalCharacter**       BaseCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AKingKaiju_Character_BP_C::BPCanBaseOnCharacter(class APrimalCharacter** BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPCanBaseOnCharacter");

	AKingKaiju_Character_BP_C_BPCanBaseOnCharacter_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.DoStepDmg
// (NetReliable, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, NetClient, BlueprintEvent, NetValidate)
// Parameters:
// struct FName                   Socket                         (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::STATIC_DoStepDmg(const struct FName& Socket)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.DoStepDmg");

	AKingKaiju_Character_BP_C_DoStepDmg_Params params;
	params.Socket = Socket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Spawn Loot Crate on Ascension Platform
// (NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, NetClient, BlueprintEvent, NetValidate)

void AKingKaiju_Character_BP_C::STATIC_Spawn_Loot_Crate_on_Ascension_Platform()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Spawn Loot Crate on Ascension Platform");

	AKingKaiju_Character_BP_C_Spawn_Loot_Crate_on_Ascension_Platform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPOverrideDamageCauserHitMarker
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, NetClient, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterPlayerController** DamageCauserController         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHitFriendlyTarget             (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PreDamageHealth                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              PointDamageHitResult           (Parm, OutParm, ReferenceParm)
// struct FHitMarkerSettings      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHitMarkerSettings AKingKaiju_Character_BP_C::STATIC_BPOverrideDamageCauserHitMarker(class AShooterPlayerController** DamageCauserController, bool* bHitFriendlyTarget, float* PreDamageHealth, float* DamageAmount, bool* bIsPointDamage, struct FDamageEvent* DamageEvent, struct FHitResult* PointDamageHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPOverrideDamageCauserHitMarker");

	AKingKaiju_Character_BP_C_BPOverrideDamageCauserHitMarker_Params params;
	params.DamageCauserController = DamageCauserController;
	params.bHitFriendlyTarget = bHitFriendlyTarget;
	params.PreDamageHealth = PreDamageHealth;
	params.DamageAmount = DamageAmount;
	params.bIsPointDamage = bIsPointDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
	if (PointDamageHitResult != nullptr)
		*PointDamageHitResult = params.PointDamageHitResult;

	return params.ReturnValue;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPSentKilledNotification
// ()
// Parameters:
// class AShooterPlayerController** ToPC                           (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::BPSentKilledNotification(class AShooterPlayerController** ToPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPSentKilledNotification");

	AKingKaiju_Character_BP_C_BPSentKilledNotification_Params params;
	params.ToPC = ToPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.InterpSpawnInMICs
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::InterpSpawnInMICs(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.InterpSpawnInMICs");

	AKingKaiju_Character_BP_C_InterpSpawnInMICs_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.TraceLeftHandChargeCapsule
// (MulticastDelegate, Public, NetServer, HasOutParms, NetClient, BlueprintEvent, NetValidate)

void AKingKaiju_Character_BP_C::TraceLeftHandChargeCapsule()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.TraceLeftHandChargeCapsule");

	AKingKaiju_Character_BP_C_TraceLeftHandChargeCapsule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPTimerServer
// ()

void AKingKaiju_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPTimerServer");

	AKingKaiju_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.TraceRightHandChargeCapsule
// (NetReliable, Exec, Native, Event, NetResponse, MulticastDelegate, Public, NetServer, HasOutParms, NetClient, BlueprintEvent, NetValidate)

void AKingKaiju_Character_BP_C::TraceRightHandChargeCapsule()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.TraceRightHandChargeCapsule");

	AKingKaiju_Character_BP_C_TraceRightHandChargeCapsule_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.MaybeStunKaijusFromBasicAttacks
// ()
// Parameters:
// class AActor*                  HitActor                       (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::MaybeStunKaijusFromBasicAttacks(class AActor* HitActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.MaybeStunKaijusFromBasicAttacks");

	AKingKaiju_Character_BP_C_MaybeStunKaijusFromBasicAttacks_Params params;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.MaybeApplyHealthBarBuff
// ()
// Parameters:
// class AActor*                  DmgCauser                      (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::MaybeApplyHealthBarBuff(class AActor* DmgCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.MaybeApplyHealthBarBuff");

	AKingKaiju_Character_BP_C_MaybeApplyHealthBarBuff_Params params;
	params.DmgCauser = DmgCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BP_OnSetDeath
// ()

void AKingKaiju_Character_BP_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BP_OnSetDeath");

	AKingKaiju_Character_BP_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Wipeout Small Knockback
// ()

void AKingKaiju_Character_BP_C::Wipeout_Small_Knockback()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Wipeout Small Knockback");

	AKingKaiju_Character_BP_C_Wipeout_Small_Knockback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.TriggerWipeout
// ()

void AKingKaiju_Character_BP_C::TriggerWipeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.TriggerWipeout");

	AKingKaiju_Character_BP_C_TriggerWipeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.LerpDynamicMAT
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::LerpDynamicMAT(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.LerpDynamicMAT");

	AKingKaiju_Character_BP_C_LerpDynamicMAT_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPDinoPostBeginPlay
// ()

void AKingKaiju_Character_BP_C::BPDinoPostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPDinoPostBeginPlay");

	AKingKaiju_Character_BP_C_BPDinoPostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.SetDamageState
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            State                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AKingKaiju_Character_BP_C::SetDamageState(int index, int* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.SetDamageState");

	AKingKaiju_Character_BP_C_SetDamageState_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.UpdateDamageStateFX
// (Net, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, Const, NetValidate)
// Parameters:
// int                            InIndex                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InState                        (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::STATIC_UpdateDamageStateFX(int InIndex, int InState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.UpdateDamageStateFX");

	AKingKaiju_Character_BP_C_UpdateDamageStateFX_Params params;
	params.InIndex = InIndex;
	params.InState = InState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPOnAnimPlayedNotify
// ()
// Parameters:
// class UAnimMontage**           AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  StartSectionName               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReplicate                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReplicateToOwner              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceTickPoseAndServerUpdateMesh (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceTickPoseOnServer         (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::BPOnAnimPlayedNotify(class UAnimMontage** AnimMontage, float* InPlayRate, struct FName* StartSectionName, bool* bReplicate, bool* bReplicateToOwner, bool* bForceTickPoseAndServerUpdateMesh, bool* bForceTickPoseOnServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPOnAnimPlayedNotify");

	AKingKaiju_Character_BP_C_BPOnAnimPlayedNotify_Params params;
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


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.IsLocomotionBlocked
// ()
// Parameters:
// bool                           bLocked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::IsLocomotionBlocked(bool* bLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.IsLocomotionBlocked");

	AKingKaiju_Character_BP_C_IsLocomotionBlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLocked != nullptr)
		*bLocked = params.bLocked;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.GetMovementMontage
// ()
// Parameters:
// TEnumAsByte<ERootMotionMovementMode>* Mode                           (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::GetMovementMontage(TEnumAsByte<ERootMotionMovementMode>* Mode, class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.GetMovementMontage");

	AKingKaiju_Character_BP_C_GetMovementMontage_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Montage != nullptr)
		*Montage = params.Montage;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.SpawnCorruptionWave
// (Exec, Event, NetResponse, Static, Protected, NetServer, HasOutParms, NetClient, BlueprintEvent, NetValidate)
// Parameters:
// struct FVector                 Center                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::STATIC_SpawnCorruptionWave(const struct FVector& Center, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.SpawnCorruptionWave");

	AKingKaiju_Character_BP_C_SpawnCorruptionWave_Params params;
	params.Center = Center;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.StartHordeMode
// ()

void AKingKaiju_Character_BP_C::StartHordeMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.StartHordeMode");

	AKingKaiju_Character_BP_C_StartHordeMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.CheckForNextStage
// ()
// Parameters:
// bool                           StartHordeMode                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::CheckForNextStage(bool* StartHordeMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.CheckForNextStage");

	AKingKaiju_Character_BP_C_CheckForNextStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StartHordeMode != nullptr)
		*StartHordeMode = params.StartHordeMode;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.FindBodySectionNearestPoint
// (NetRequest, NetResponse, NetMulticast, Protected, NetServer, HasOutParms, NetClient, BlueprintEvent, NetValidate)
// Parameters:
// struct FVector                 DamagePoint                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Section                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::FindBodySectionNearestPoint(const struct FVector& DamagePoint, int* Section)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.FindBodySectionNearestPoint");

	AKingKaiju_Character_BP_C_FindBodySectionNearestPoint_Params params;
	params.DamagePoint = DamagePoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Section != nullptr)
		*Section = params.Section;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.FindBodySectionByBone
// (Exec, Native, NetResponse, NetMulticast, Protected, NetServer, HasOutParms, NetClient, BlueprintEvent, NetValidate)
// Parameters:
// struct FName                   Bone                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FoundSection                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Section                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::FindBodySectionByBone(const struct FName& Bone, const struct FVector& HitLocation, bool* FoundSection, int* Section)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.FindBodySectionByBone");

	AKingKaiju_Character_BP_C_FindBodySectionByBone_Params params;
	params.Bone = Bone;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundSection != nullptr)
		*FoundSection = params.FoundSection;
	if (Section != nullptr)
		*Section = params.Section;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.InitializeDamageStates
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Protected, NetServer, HasOutParms, NetClient, BlueprintEvent, NetValidate)

void AKingKaiju_Character_BP_C::InitializeDamageStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.InitializeDamageStates");

	AKingKaiju_Character_BP_C_InitializeDamageStates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.OnRep_DamageState
// ()

void AKingKaiju_Character_BP_C::OnRep_DamageState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.OnRep_DamageState");

	AKingKaiju_Character_BP_C_OnRep_DamageState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPModifyRootMotionDeltaRotation
// ()
// Parameters:
// struct FRotator                Delta                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator AKingKaiju_Character_BP_C::BPModifyRootMotionDeltaRotation(struct FRotator* Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPModifyRootMotionDeltaRotation");

	AKingKaiju_Character_BP_C_BPModifyRootMotionDeltaRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Delta != nullptr)
		*Delta = params.Delta;

	return params.ReturnValue;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.RegisterHitForSwipeCharge
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, Protected, NetServer, HasOutParms, NetClient, BlueprintEvent, NetValidate)
// Parameters:
// class AActor*                  HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm)

void AKingKaiju_Character_BP_C::STATIC_RegisterHitForSwipeCharge(class AActor* HitActor, const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.RegisterHitForSwipeCharge");

	AKingKaiju_Character_BP_C_RegisterHitForSwipeCharge_Params params;
	params.HitActor = HitActor;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AKingKaiju_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPAdjustDamage");

	AKingKaiju_Character_BP_C_BPAdjustDamage_Params params;
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


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.SummonCorruptDinos
// ()

void AKingKaiju_Character_BP_C::SummonCorruptDinos()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.SummonCorruptDinos");

	AKingKaiju_Character_BP_C_SummonCorruptDinos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BlueprintAdjustOutputDamage
// (Exec, Static, Protected, NetServer, HasOutParms, NetClient, BlueprintEvent, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AKingKaiju_Character_BP_C::STATIC_BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BlueprintAdjustOutputDamage");

	AKingKaiju_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
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


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Stun KaijusFromCharge
// (Native, Static, Protected, NetServer, HasOutParms, NetClient, BlueprintEvent, NetValidate)
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           StunnedKaiju                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::STATIC_Stun_KaijusFromCharge(class APrimalCharacter* Target, bool* StunnedKaiju)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Stun KaijusFromCharge");

	AKingKaiju_Character_BP_C_Stun_KaijusFromCharge_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StunnedKaiju != nullptr)
		*StunnedKaiju = params.StunnedKaiju;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.MoveBlocked
// ()
// Parameters:
// bool                           bLocked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::MoveBlocked(bool* bLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.MoveBlocked");

	AKingKaiju_Character_BP_C_MoveBlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLocked != nullptr)
		*bLocked = params.bLocked;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.UpdateLocomotion
// ()

void AKingKaiju_Character_BP_C::UpdateLocomotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.UpdateLocomotion");

	AKingKaiju_Character_BP_C_UpdateLocomotion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.ReceiveTick");

	AKingKaiju_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPCanTargetCorpse
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AKingKaiju_Character_BP_C::BPCanTargetCorpse()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BPCanTargetCorpse");

	AKingKaiju_Character_BP_C_BPCanTargetCorpse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.UpdateArenaEnemies
// ()

void AKingKaiju_Character_BP_C::UpdateArenaEnemies()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.UpdateArenaEnemies");

	AKingKaiju_Character_BP_C_UpdateArenaEnemies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.GroundPoundBigKnockback
// ()

void AKingKaiju_Character_BP_C::GroundPoundBigKnockback()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.GroundPoundBigKnockback");

	AKingKaiju_Character_BP_C_GroundPoundBigKnockback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.UserConstructionScript
// ()

void AKingKaiju_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.UserConstructionScript");

	AKingKaiju_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.SetVar_KKArenaManager
// ()
// Parameters:
// class AActor*                  ArenaManager                   (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::SetVar_KKArenaManager(class AActor* ArenaManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.SetVar_KKArenaManager");

	AKingKaiju_Character_BP_C_SetVar_KKArenaManager_Params params;
	params.ArenaManager = ArenaManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.SetVar_FinishCurrentHordeMode
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::SetVar_FinishCurrentHordeMode(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.SetVar_FinishCurrentHordeMode");

	AKingKaiju_Character_BP_C_SetVar_FinishCurrentHordeMode_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.SetVar_PlayersLostHordeMode
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::SetVar_PlayersLostHordeMode(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.SetVar_PlayersLostHordeMode");

	AKingKaiju_Character_BP_C_SetVar_PlayersLostHordeMode_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.ReceiveBeginPlay
// ()

void AKingKaiju_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.ReceiveBeginPlay");

	AKingKaiju_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BndEvt__ChargeOverlapComponent_K2Node_ComponentBoundEvent_198_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void AKingKaiju_Character_BP_C::BndEvt__ChargeOverlapComponent_K2Node_ComponentBoundEvent_198_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BndEvt__ChargeOverlapComponent_K2Node_ComponentBoundEvent_198_ComponentBeginOverlapSignature__DelegateSignature");

	AKingKaiju_Character_BP_C_BndEvt__ChargeOverlapComponent_K2Node_ComponentBoundEvent_198_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_StartCharging
// ()

void AKingKaiju_Character_BP_C::AnimNotify_StartCharging()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_StartCharging");

	AKingKaiju_Character_BP_C_AnimNotify_StartCharging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_SummonDinos
// ()

void AKingKaiju_Character_BP_C::AnimNotify_SummonDinos()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_SummonDinos");

	AKingKaiju_Character_BP_C_AnimNotify_SummonDinos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_SpawnFXAtLocation
// ()
// Parameters:
// class UParticleSystem*         FX                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::Multi_SpawnFXAtLocation(class UParticleSystem* FX, const struct FVector& Location, const struct FVector& Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_SpawnFXAtLocation");

	AKingKaiju_Character_BP_C_Multi_SpawnFXAtLocation_Params params;
	params.FX = FX;
	params.Location = Location;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_RoarKnockback
// ()

void AKingKaiju_Character_BP_C::AnimNotify_RoarKnockback()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_RoarKnockback");

	AKingKaiju_Character_BP_C_AnimNotify_RoarKnockback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BndEvt__LeftArmPusher_K2Node_ComponentBoundEvent_352_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void AKingKaiju_Character_BP_C::BndEvt__LeftArmPusher_K2Node_ComponentBoundEvent_352_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BndEvt__LeftArmPusher_K2Node_ComponentBoundEvent_352_ComponentBeginOverlapSignature__DelegateSignature");

	AKingKaiju_Character_BP_C_BndEvt__LeftArmPusher_K2Node_ComponentBoundEvent_352_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BndEvt__RightArmPusher_K2Node_ComponentBoundEvent_431_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void AKingKaiju_Character_BP_C::BndEvt__RightArmPusher_K2Node_ComponentBoundEvent_431_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.BndEvt__RightArmPusher_K2Node_ComponentBoundEvent_431_ComponentBeginOverlapSignature__DelegateSignature");

	AKingKaiju_Character_BP_C_BndEvt__RightArmPusher_K2Node_ComponentBoundEvent_431_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_RightHandOn
// ()

void AKingKaiju_Character_BP_C::AnimNotify_RightHandOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_RightHandOn");

	AKingKaiju_Character_BP_C_AnimNotify_RightHandOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_RightHandOff
// ()

void AKingKaiju_Character_BP_C::AnimNotify_RightHandOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_RightHandOff");

	AKingKaiju_Character_BP_C_AnimNotify_RightHandOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_LeftHandOn
// ()

void AKingKaiju_Character_BP_C::AnimNotify_LeftHandOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_LeftHandOn");

	AKingKaiju_Character_BP_C_AnimNotify_LeftHandOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_LeftHandOff
// ()

void AKingKaiju_Character_BP_C::AnimNotify_LeftHandOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_LeftHandOff");

	AKingKaiju_Character_BP_C_AnimNotify_LeftHandOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_StopActiveState
// ()

void AKingKaiju_Character_BP_C::AnimNotify_StopActiveState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_StopActiveState");

	AKingKaiju_Character_BP_C_AnimNotify_StopActiveState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_SpawnCorruptWave
// ()

void AKingKaiju_Character_BP_C::AnimNotify_SpawnCorruptWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_SpawnCorruptWave");

	AKingKaiju_Character_BP_C_AnimNotify_SpawnCorruptWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_PlayArmorBreakReact
// ()
// Parameters:
// int                            ArmorIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::Multi_PlayArmorBreakReact(int ArmorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_PlayArmorBreakReact");

	AKingKaiju_Character_BP_C_Multi_PlayArmorBreakReact_Params params;
	params.ArmorIndex = ArmorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_DisableMeks
// ()

void AKingKaiju_Character_BP_C::AnimNotify_DisableMeks()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_DisableMeks");

	AKingKaiju_Character_BP_C_AnimNotify_DisableMeks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_SetVulnerable
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::Multi_SetVulnerable(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_SetVulnerable");

	AKingKaiju_Character_BP_C_Multi_SetVulnerable_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_SetInvulnerable
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::Multi_SetInvulnerable(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_SetInvulnerable");

	AKingKaiju_Character_BP_C_Multi_SetInvulnerable_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.LaunchMeteor
// ()
// Parameters:
// struct UObject_FTransform      Transform                      (Parm, IsPlainOldData)
// bool                           CreateWarning                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WarningLoc                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                WarningRot                     (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::LaunchMeteor(const struct UObject_FTransform& Transform, bool CreateWarning, const struct FVector& WarningLoc, const struct FRotator& WarningRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.LaunchMeteor");

	AKingKaiju_Character_BP_C_LaunchMeteor_Params params;
	params.Transform = Transform;
	params.CreateWarning = CreateWarning;
	params.WarningLoc = WarningLoc;
	params.WarningRot = WarningRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_KillCorruptDinos
// ()

void AKingKaiju_Character_BP_C::AnimNotify_KillCorruptDinos()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_KillCorruptDinos");

	AKingKaiju_Character_BP_C_AnimNotify_KillCorruptDinos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_ExecuteArenaWipeout
// ()

void AKingKaiju_Character_BP_C::AnimNotify_ExecuteArenaWipeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_ExecuteArenaWipeout");

	AKingKaiju_Character_BP_C_AnimNotify_ExecuteArenaWipeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_PlayWipeoutLightningFX
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::Multi_PlayWipeoutLightningFX(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_PlayWipeoutLightningFX");

	AKingKaiju_Character_BP_C_Multi_PlayWipeoutLightningFX_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_FinishedArenaWipeout
// ()

void AKingKaiju_Character_BP_C::AnimNotify_FinishedArenaWipeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_FinishedArenaWipeout");

	AKingKaiju_Character_BP_C_AnimNotify_FinishedArenaWipeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_WipeoutSmallKnockback
// ()

void AKingKaiju_Character_BP_C::AnimNotify_WipeoutSmallKnockback()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_WipeoutSmallKnockback");

	AKingKaiju_Character_BP_C_AnimNotify_WipeoutSmallKnockback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_ToggleWipeoutChargeFX
// ()

void AKingKaiju_Character_BP_C::Multi_ToggleWipeoutChargeFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_ToggleWipeoutChargeFX");

	AKingKaiju_Character_BP_C_Multi_ToggleWipeoutChargeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_SpawnESLightning
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::Multi_SpawnESLightning(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_SpawnESLightning");

	AKingKaiju_Character_BP_C_Multi_SpawnESLightning_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_TurnOffInvulnerable
// ()

void AKingKaiju_Character_BP_C::AnimNotify_TurnOffInvulnerable()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_TurnOffInvulnerable");

	AKingKaiju_Character_BP_C_AnimNotify_TurnOffInvulnerable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_SpawnMeteorLandLocationFX
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rot                            (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::Multi_SpawnMeteorLandLocationFX(const struct FVector& Loc, const struct FRotator& Rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_SpawnMeteorLandLocationFX");

	AKingKaiju_Character_BP_C_Multi_SpawnMeteorLandLocationFX_Params params;
	params.Loc = Loc;
	params.Rot = Rot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_PlayLoopingWipeoutFX
// ()

void AKingKaiju_Character_BP_C::AnimNotify_PlayLoopingWipeoutFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_PlayLoopingWipeoutFX");

	AKingKaiju_Character_BP_C_AnimNotify_PlayLoopingWipeoutFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_SpawnLoopingWipeoutFX
// ()
// Parameters:
// bool                           TurnOn                         (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::Multi_SpawnLoopingWipeoutFX(bool TurnOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.Multi_SpawnLoopingWipeoutFX");

	AKingKaiju_Character_BP_C_Multi_SpawnLoopingWipeoutFX_Params params;
	params.TurnOn = TurnOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.DebugCapsuleSweep
// ()
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rot                            (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::DebugCapsuleSweep(const struct FVector& Start, const struct FVector& End, const struct FRotator& Rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.DebugCapsuleSweep");

	AKingKaiju_Character_BP_C_DebugCapsuleSweep_Params params;
	params.Start = Start;
	params.End = End;
	params.Rot = Rot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.EnableMeks
// ()

void AKingKaiju_Character_BP_C::EnableMeks()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.EnableMeks");

	AKingKaiju_Character_BP_C_EnableMeks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_RightFootStepDmg
// ()

void AKingKaiju_Character_BP_C::AnimNotify_RightFootStepDmg()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_RightFootStepDmg");

	AKingKaiju_Character_BP_C_AnimNotify_RightFootStepDmg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_LeftFootStepDmg
// ()

void AKingKaiju_Character_BP_C::AnimNotify_LeftFootStepDmg()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.AnimNotify_LeftFootStepDmg");

	AKingKaiju_Character_BP_C_AnimNotify_LeftFootStepDmg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.ExecuteUbergraph_KingKaiju_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_C::ExecuteUbergraph_KingKaiju_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP.KingKaiju_Character_BP_C.ExecuteUbergraph_KingKaiju_Character_BP");

	AKingKaiju_Character_BP_C_ExecuteUbergraph_KingKaiju_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
