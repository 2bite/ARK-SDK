// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElementWall_Horde_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ElementWall_Horde.ElementWall_Horde_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AElementWall_Horde_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementWall_Horde.ElementWall_Horde_C.BPAdjustDamage");

	AElementWall_Horde_C_BPAdjustDamage_Params params;
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


// Function ElementWall_Horde.ElementWall_Horde_C.BPHitEffect
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

void AElementWall_Horde_C::BPHitEffect(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, class UPrimitiveComponent** HitComponent, struct FVector* DamageLoc, struct FRotator* HitNormal, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementWall_Horde.ElementWall_Horde_C.BPHitEffect");

	AElementWall_Horde_C_BPHitEffect_Params params;
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


// Function ElementWall_Horde.ElementWall_Horde_C.OverrideDestroyedMeshTextures
// ()
// Parameters:
// class UMeshComponent**         MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)

void AElementWall_Horde_C::OverrideDestroyedMeshTextures(class UMeshComponent** MeshComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementWall_Horde.ElementWall_Horde_C.OverrideDestroyedMeshTextures");

	AElementWall_Horde_C_OverrideDestroyedMeshTextures_Params params;
	params.MeshComp = MeshComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementWall_Horde.ElementWall_Horde_C.BPPlayDying
// ()
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AElementWall_Horde_C::BPPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementWall_Horde.ElementWall_Horde_C.BPPlayDying");

	AElementWall_Horde_C_BPPlayDying_Params params;
	params.KillingDamage = KillingDamage;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function ElementWall_Horde.ElementWall_Horde_C.BPPostLoadedFromSaveGame
// ()

void AElementWall_Horde_C::BPPostLoadedFromSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementWall_Horde.ElementWall_Horde_C.BPPostLoadedFromSaveGame");

	AElementWall_Horde_C_BPPostLoadedFromSaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementWall_Horde.ElementWall_Horde_C.SpawnGroundCorruption
// ()

void AElementWall_Horde_C::SpawnGroundCorruption()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementWall_Horde.ElementWall_Horde_C.SpawnGroundCorruption");

	AElementWall_Horde_C_SpawnGroundCorruption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementWall_Horde.ElementWall_Horde_C.BPUnstasis
// ()

void AElementWall_Horde_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementWall_Horde.ElementWall_Horde_C.BPUnstasis");

	AElementWall_Horde_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementWall_Horde.ElementWall_Horde_C.BlueprintDrawHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)

void AElementWall_Horde_C::BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementWall_Horde.ElementWall_Horde_C.BlueprintDrawHUD");

	AElementWall_Horde_C_BlueprintDrawHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementWall_Horde.ElementWall_Horde_C.ReceiveDestroyed
// ()

void AElementWall_Horde_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementWall_Horde.ElementWall_Horde_C.ReceiveDestroyed");

	AElementWall_Horde_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementWall_Horde.ElementWall_Horde_C.UserConstructionScript
// ()

void AElementWall_Horde_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementWall_Horde.ElementWall_Horde_C.UserConstructionScript");

	AElementWall_Horde_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementWall_Horde.ElementWall_Horde_C.ReceiveBeginPlay
// ()

void AElementWall_Horde_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementWall_Horde.ElementWall_Horde_C.ReceiveBeginPlay");

	AElementWall_Horde_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementWall_Horde.ElementWall_Horde_C.DestroySmokeEmitter
// ()

void AElementWall_Horde_C::DestroySmokeEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementWall_Horde.ElementWall_Horde_C.DestroySmokeEmitter");

	AElementWall_Horde_C_DestroySmokeEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementWall_Horde.ElementWall_Horde_C.RaiseStructure
// ()

void AElementWall_Horde_C::RaiseStructure()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementWall_Horde.ElementWall_Horde_C.RaiseStructure");

	AElementWall_Horde_C_RaiseStructure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementWall_Horde.ElementWall_Horde_C.SetDestScale
// ()

void AElementWall_Horde_C::SetDestScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementWall_Horde.ElementWall_Horde_C.SetDestScale");

	AElementWall_Horde_C_SetDestScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementWall_Horde.ElementWall_Horde_C.DelayedDie
// ()

void AElementWall_Horde_C::DelayedDie()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementWall_Horde.ElementWall_Horde_C.DelayedDie");

	AElementWall_Horde_C_DelayedDie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementWall_Horde.ElementWall_Horde_C.ExecuteUbergraph_ElementWall_Horde
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AElementWall_Horde_C::ExecuteUbergraph_ElementWall_Horde(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementWall_Horde.ElementWall_Horde_C.ExecuteUbergraph_ElementWall_Horde");

	AElementWall_Horde_C_ExecuteUbergraph_ElementWall_Horde_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
