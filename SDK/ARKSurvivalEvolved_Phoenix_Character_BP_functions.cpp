// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Phoenix_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.ReceiveHit
// ()
// Parameters:
// class UPrimitiveComponent**    MyComp                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSelfMoved                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void APhoenix_Character_BP_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.ReceiveHit");

	APhoenix_Character_BP_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPPlayDying
// ()
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::BPPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPPlayDying");

	APhoenix_Character_BP_C_BPPlayDying_Params params;
	params.KillingDamage = KillingDamage;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.CanStartSuperCharge
// ()
// Parameters:
// bool                           canStart                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::CanStartSuperCharge(bool* canStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.CanStartSuperCharge");

	APhoenix_Character_BP_C_CanStartSuperCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canStart != nullptr)
		*canStart = params.canStart;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPSetupTamed");

	APhoenix_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.CanUseSuperCharge
// ()
// Parameters:
// bool                           canSupercharge                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::CanUseSuperCharge(bool* canSupercharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.CanUseSuperCharge");

	APhoenix_Character_BP_C_CanUseSuperCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canSupercharge != nullptr)
		*canSupercharge = params.canSupercharge;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.UpdateTimerServer
// ()
// Parameters:
// bool                           fast                           (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::UpdateTimerServer(bool fast)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.UpdateTimerServer");

	APhoenix_Character_BP_C_UpdateTimerServer_Params params;
	params.fast = fast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnRep_isCharging
// ()

void APhoenix_Character_BP_C::OnRep_isCharging()
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnRep_isCharging");

	APhoenix_Character_BP_C_OnRep_isCharging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.ApplyFireToNearbyCreatures
// ()
// Parameters:
// float                          fireRadius                     (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::ApplyFireToNearbyCreatures(float fireRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.ApplyFireToNearbyCreatures");

	APhoenix_Character_BP_C_ApplyFireToNearbyCreatures_Params params;
	params.fireRadius = fireRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APhoenix_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.BlueprintCanRiderAttack");

	APhoenix_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.SetAnimsWeightForAttack
// (NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, NetClient, BlueprintEvent)
// Parameters:
// int                            AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::STATIC_SetAnimsWeightForAttack(int AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.SetAnimsWeightForAttack");

	APhoenix_Character_BP_C_SetAnimsWeightForAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.GetMode
// ()
// Parameters:
// bool                           Regular                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Blaze                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::GetMode(bool* Regular, bool* Blaze)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.GetMode");

	APhoenix_Character_BP_C_GetMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Regular != nullptr)
		*Regular = params.Regular;
	if (Blaze != nullptr)
		*Blaze = params.Blaze;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.BlueprintDrawFloatingHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.BlueprintDrawFloatingHUD");

	APhoenix_Character_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, NetClient, BlueprintEvent)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> APhoenix_Character_BP_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPGetMultiUseEntries");

	APhoenix_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APhoenix_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPTryMultiUse");

	APhoenix_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.On StateChanged Client
// ()
// Parameters:
// bool                           hasRisen                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           fast                           (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::On_StateChanged_Client(bool hasRisen, bool fast)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.On StateChanged Client");

	APhoenix_Character_BP_C_On_StateChanged_Client_Params params;
	params.hasRisen = hasRisen;
	params.fast = fast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.Is In Water
// ()
// Parameters:
// bool                           currentlyOnWater               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::Is_In_Water(bool* currentlyOnWater)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.Is In Water");

	APhoenix_Character_BP_C_Is_In_Water_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (currentlyOnWater != nullptr)
		*currentlyOnWater = params.currentlyOnWater;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.CanAshStayOnLocation
// (NetReliable, Event, Public, NetServer, NetClient, BlueprintEvent)
// Parameters:
// bool                           canAshStay                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::CanAshStayOnLocation(bool* canAshStay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.CanAshStayOnLocation");

	APhoenix_Character_BP_C_CanAshStayOnLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canAshStay != nullptr)
		*canAshStay = params.canAshStay;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.Calculate BuryMeshTransform
// (NetReliable, Exec, NetResponse, Public, NetServer, NetClient, BlueprintEvent)
// Parameters:
// bool                           rise                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              buryMeshTransform              (Parm, OutParm, IsPlainOldData)

void APhoenix_Character_BP_C::Calculate_BuryMeshTransform(bool rise, struct FTransform* buryMeshTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.Calculate BuryMeshTransform");

	APhoenix_Character_BP_C_Calculate_BuryMeshTransform_Params params;
	params.rise = rise;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (buryMeshTransform != nullptr)
		*buryMeshTransform = params.buryMeshTransform;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.GetSuperheatState
// ()
// Parameters:
// bool                           isSuperheat                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::GetSuperheatState(bool* isSuperheat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.GetSuperheatState");

	APhoenix_Character_BP_C_GetSuperheatState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isSuperheat != nullptr)
		*isSuperheat = params.isSuperheat;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APhoenix_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.BlueprintCanAttack");

	APhoenix_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.UpdateMoundVisibilityAndCollision
// ()
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           skipVisibility                 (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::UpdateMoundVisibilityAndCollision(bool Visible, bool skipVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.UpdateMoundVisibilityAndCollision");

	APhoenix_Character_BP_C_UpdateMoundVisibilityAndCollision_Params params;
	params.Visible = Visible;
	params.skipVisibility = skipVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.Update MeshVisibility and Collision
// ()
// Parameters:
// bool                           Visibility                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           skipVisibility                 (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::Update_MeshVisibility_and_Collision(bool Visibility, bool skipVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.Update MeshVisibility and Collision");

	APhoenix_Character_BP_C_Update_MeshVisibility_and_Collision_Params params;
	params.Visibility = Visibility;
	params.skipVisibility = skipVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPTimerServer
// ()

void APhoenix_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPTimerServer");

	APhoenix_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APhoenix_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPAdjustDamage");

	APhoenix_Character_BP_C_BPAdjustDamage_Params params;
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


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.ConvertDamageToAffinity
// ()
// Parameters:
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Instigator                     (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::ConvertDamageToAffinity(float DamageAmount, class AController* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.ConvertDamageToAffinity");

	APhoenix_Character_BP_C_ConvertDamageToAffinity_Params params;
	params.DamageAmount = DamageAmount;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.UserConstructionScript
// ()

void APhoenix_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.UserConstructionScript");

	APhoenix_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.UndissolveMoundTimeline__FinishedFunc
// ()

void APhoenix_Character_BP_C::UndissolveMoundTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.UndissolveMoundTimeline__FinishedFunc");

	APhoenix_Character_BP_C_UndissolveMoundTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.UndissolveMoundTimeline__UpdateFunc
// ()

void APhoenix_Character_BP_C::UndissolveMoundTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.UndissolveMoundTimeline__UpdateFunc");

	APhoenix_Character_BP_C_UndissolveMoundTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolveMoundTimeline__FinishedFunc
// ()

void APhoenix_Character_BP_C::DissolveMoundTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolveMoundTimeline__FinishedFunc");

	APhoenix_Character_BP_C_DissolveMoundTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolveMoundTimeline__UpdateFunc
// ()

void APhoenix_Character_BP_C::DissolveMoundTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolveMoundTimeline__UpdateFunc");

	APhoenix_Character_BP_C_DissolveMoundTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolvePhoenixMesh__FinishedFunc
// ()

void APhoenix_Character_BP_C::DissolvePhoenixMesh__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolvePhoenixMesh__FinishedFunc");

	APhoenix_Character_BP_C_DissolvePhoenixMesh__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolvePhoenixMesh__UpdateFunc
// ()

void APhoenix_Character_BP_C::DissolvePhoenixMesh__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolvePhoenixMesh__UpdateFunc");

	APhoenix_Character_BP_C_DissolvePhoenixMesh__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnDied_Event
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::OnDied_Event(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnDied_Event");

	APhoenix_Character_BP_C_OnDied_Event_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.ReceiveBeginPlay
// ()

void APhoenix_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.ReceiveBeginPlay");

	APhoenix_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.rise
// ()
// Parameters:
// bool                           fast                           (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::rise(bool fast)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.rise");

	APhoenix_Character_BP_C_rise_Params params;
	params.fast = fast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnRise
// ()

void APhoenix_Character_BP_C::OnRise()
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnRise");

	APhoenix_Character_BP_C_OnRise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolveMound
// ()
// Parameters:
// bool                           fast                           (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::DissolveMound(bool fast)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolveMound");

	APhoenix_Character_BP_C_DissolveMound_Params params;
	params.fast = fast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.FakeDie
// ()
// Parameters:
// bool                           fast                           (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::FakeDie(bool fast)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.FakeDie");

	APhoenix_Character_BP_C_FakeDie_Params params;
	params.fast = fast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnFakeDie
// ()

void APhoenix_Character_BP_C::OnFakeDie()
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnFakeDie");

	APhoenix_Character_BP_C_OnFakeDie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.Die_AshFireParticles
// ()
// Parameters:
// bool                           fast                           (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::Die_AshFireParticles(bool fast)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.Die_AshFireParticles");

	APhoenix_Character_BP_C_Die_AshFireParticles_Params params;
	params.fast = fast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.PhoenixDie_MeshVisuals
// ()
// Parameters:
// bool                           Dissolve                       (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::PhoenixDie_MeshVisuals(bool Dissolve)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.PhoenixDie_MeshVisuals");

	APhoenix_Character_BP_C_PhoenixDie_MeshVisuals_Params params;
	params.Dissolve = Dissolve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.PhoenixRise_MeshVisuals
// ()

void APhoenix_Character_BP_C::PhoenixRise_MeshVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.PhoenixRise_MeshVisuals");

	APhoenix_Character_BP_C_PhoenixRise_MeshVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPUnstasis
// ()

void APhoenix_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPUnstasis");

	APhoenix_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnPhoenixRise_Multicast
// ()
// Parameters:
// bool                           fast                           (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::OnPhoenixRise_Multicast(bool fast)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnPhoenixRise_Multicast");

	APhoenix_Character_BP_C_OnPhoenixRise_Multicast_Params params;
	params.fast = fast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnPhoenixFakeDies_Multicast
// ()
// Parameters:
// bool                           fast                           (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::OnPhoenixFakeDies_Multicast(bool fast)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnPhoenixFakeDies_Multicast");

	APhoenix_Character_BP_C_OnPhoenixFakeDies_Multicast_Params params;
	params.fast = fast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.KillPhoenix
// ()

void APhoenix_Character_BP_C::KillPhoenix()
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.KillPhoenix");

	APhoenix_Character_BP_C_KillPhoenix_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.RiseFailsafe
// ()

void APhoenix_Character_BP_C::RiseFailsafe()
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.RiseFailsafe");

	APhoenix_Character_BP_C_RiseFailsafe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.FakeDieFailsafe
// ()

void APhoenix_Character_BP_C::FakeDieFailsafe()
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.FakeDieFailsafe");

	APhoenix_Character_BP_C_FakeDieFailsafe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	APhoenix_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.Rise_AshFireParticles
// ()
// Parameters:
// bool                           fast                           (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::Rise_AshFireParticles(bool fast)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.Rise_AshFireParticles");

	APhoenix_Character_BP_C_Rise_AshFireParticles_Params params;
	params.fast = fast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.UndissolveMound
// ()
// Parameters:
// bool                           fast                           (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::UndissolveMound(bool fast)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.UndissolveMound");

	APhoenix_Character_BP_C_UndissolveMound_Params params;
	params.fast = fast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.Rise_AllEffects
// ()
// Parameters:
// bool                           fast                           (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::Rise_AllEffects(bool fast)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.Rise_AllEffects");

	APhoenix_Character_BP_C_Rise_AllEffects_Params params;
	params.fast = fast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.Die_AllEffects
// ()
// Parameters:
// bool                           fast                           (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::Die_AllEffects(bool fast)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.Die_AllEffects");

	APhoenix_Character_BP_C_Die_AllEffects_Params params;
	params.fast = fast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.ChangeChargeState_Server
// ()
// Parameters:
// bool                           Activate                       (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::ChangeChargeState_Server(bool Activate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.ChangeChargeState_Server");

	APhoenix_Character_BP_C_ChangeChargeState_Server_Params params;
	params.Activate = Activate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.StopSuperCharge
// ()

void APhoenix_Character_BP_C::StopSuperCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.StopSuperCharge");

	APhoenix_Character_BP_C_StopSuperCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.StartSuperCharge
// ()

void APhoenix_Character_BP_C::StartSuperCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.StartSuperCharge");

	APhoenix_Character_BP_C_StartSuperCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.Rise_BodyFireParticles
// ()
// Parameters:
// bool                           fast                           (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::Rise_BodyFireParticles(bool fast)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.Rise_BodyFireParticles");

	APhoenix_Character_BP_C_Rise_BodyFireParticles_Params params;
	params.fast = fast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.Die_BodyFireParticles
// ()
// Parameters:
// bool                           fast                           (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::Die_BodyFireParticles(bool fast)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.Die_BodyFireParticles");

	APhoenix_Character_BP_C_Die_BodyFireParticles_Params params;
	params.fast = fast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.DropInventory
// ()

void APhoenix_Character_BP_C::DropInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.DropInventory");

	APhoenix_Character_BP_C_DropInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.DoChargeImpulse
// ()

void APhoenix_Character_BP_C::DoChargeImpulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.DoChargeImpulse");

	APhoenix_Character_BP_C_DoChargeImpulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.BP_OnJumpPressed
// ()

void APhoenix_Character_BP_C::BP_OnJumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.BP_OnJumpPressed");

	APhoenix_Character_BP_C_BP_OnJumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.BP_OnJumpReleased
// ()

void APhoenix_Character_BP_C::BP_OnJumpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.BP_OnJumpReleased");

	APhoenix_Character_BP_C_BP_OnJumpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.AnimNotify_FlyIdle_NoDed
// ()

void APhoenix_Character_BP_C::AnimNotify_FlyIdle_NoDed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.AnimNotify_FlyIdle_NoDed");

	APhoenix_Character_BP_C_AnimNotify_FlyIdle_NoDed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_Character_BP.Phoenix_Character_BP_C.ExecuteUbergraph_Phoenix_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_Character_BP_C::ExecuteUbergraph_Phoenix_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_Character_BP.Phoenix_Character_BP_C.ExecuteUbergraph_Phoenix_Character_BP");

	APhoenix_Character_BP_C_ExecuteUbergraph_Phoenix_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
