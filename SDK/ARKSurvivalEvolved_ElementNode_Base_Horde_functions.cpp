// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElementNode_Base_Horde_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.BPPlayDying
// ()
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AElementNode_Base_Horde_C::BPPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.BPPlayDying");

	AElementNode_Base_Horde_C_BPPlayDying_Params params;
	params.KillingDamage = KillingDamage;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.BPHitEffect
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

void AElementNode_Base_Horde_C::BPHitEffect(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, class UPrimitiveComponent** HitComponent, struct FVector* DamageLoc, struct FRotator* HitNormal, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.BPHitEffect");

	AElementNode_Base_Horde_C_BPHitEffect_Params params;
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


// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.OverrideDestroyedMeshTextures
// ()
// Parameters:
// class UMeshComponent**         MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)

void AElementNode_Base_Horde_C::OverrideDestroyedMeshTextures(class UMeshComponent** MeshComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.OverrideDestroyedMeshTextures");

	AElementNode_Base_Horde_C_OverrideDestroyedMeshTextures_Params params;
	params.MeshComp = MeshComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.DestroyStructuresAtLocation
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void AElementNode_Base_Horde_C::DestroyStructuresAtLocation(const struct FVector& Location, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.DestroyStructuresAtLocation");

	AElementNode_Base_Horde_C_DestroyStructuresAtLocation_Params params;
	params.Location = Location;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.RunLandSequence
// ()

void AElementNode_Base_Horde_C::RunLandSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.RunLandSequence");

	AElementNode_Base_Horde_C_RunLandSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AElementNode_Base_Horde_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ReceiveTick");

	AElementNode_Base_Horde_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.Initiate Horde Mode
// ()

void AElementNode_Base_Horde_C::Initiate_Horde_Mode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.Initiate Horde Mode");

	AElementNode_Base_Horde_C_Initiate_Horde_Mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.OpenCrate
// ()

void AElementNode_Base_Horde_C::OpenCrate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.OpenCrate");

	AElementNode_Base_Horde_C_OpenCrate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ColorizeForHarvest
// ()

void AElementNode_Base_Horde_C::ColorizeForHarvest()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ColorizeForHarvest");

	AElementNode_Base_Horde_C_ColorizeForHarvest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.SpawnSecondarySingle
// (NetReliable, NetRequest, Exec, Native, Event, MulticastDelegate, Public, NetClient, BlueprintCallable, Const)
// Parameters:
// bool                           bIsWallA                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EndTrace                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)

void AElementNode_Base_Horde_C::SpawnSecondarySingle(bool bIsWallA, const struct FVector& StartTrace, const struct FVector& EndTrace, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.SpawnSecondarySingle");

	AElementNode_Base_Horde_C_SpawnSecondarySingle_Params params;
	params.bIsWallA = bIsWallA;
	params.StartTrace = StartTrace;
	params.EndTrace = EndTrace;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.SpawnSecondaryGroup
// ()

void AElementNode_Base_Horde_C::SpawnSecondaryGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.SpawnSecondaryGroup");

	AElementNode_Base_Horde_C_SpawnSecondaryGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ConfigureWaves
// ()

void AElementNode_Base_Horde_C::ConfigureWaves()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ConfigureWaves");

	AElementNode_Base_Horde_C_ConfigureWaves_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.OnRep_bHasLanded
// ()

void AElementNode_Base_Horde_C::OnRep_bHasLanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.OnRep_bHasLanded");

	AElementNode_Base_Horde_C_OnRep_bHasLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.UserConstructionScript
// ()

void AElementNode_Base_Horde_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.UserConstructionScript");

	AElementNode_Base_Horde_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ReceiveBeginPlay
// ()

void AElementNode_Base_Horde_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ReceiveBeginPlay");

	AElementNode_Base_Horde_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ReceiveDestroyed
// ()

void AElementNode_Base_Horde_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ReceiveDestroyed");

	AElementNode_Base_Horde_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.GetLocation
// ()

void AElementNode_Base_Horde_C::GetLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.GetLocation");

	AElementNode_Base_Horde_C_GetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.SpawnSecondaryLayer
// ()

void AElementNode_Base_Horde_C::SpawnSecondaryLayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.SpawnSecondaryLayer");

	AElementNode_Base_Horde_C_SpawnSecondaryLayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ClearCurrentBlockades
// ()

void AElementNode_Base_Horde_C::ClearCurrentBlockades()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ClearCurrentBlockades");

	AElementNode_Base_Horde_C_ClearCurrentBlockades_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.SetBlockadeScale
// ()
// Parameters:
// class AActor*                  ActorToScale                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ScaleToSet                     (Parm, ZeroConstructor, IsPlainOldData)

void AElementNode_Base_Horde_C::SetBlockadeScale(class AActor* ActorToScale, const struct FVector& ScaleToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.SetBlockadeScale");

	AElementNode_Base_Horde_C_SetBlockadeScale_Params params;
	params.ActorToScale = ActorToScale;
	params.ScaleToSet = ScaleToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ROC_ColorizeForHarvest
// ()

void AElementNode_Base_Horde_C::ROC_ColorizeForHarvest()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ROC_ColorizeForHarvest");

	AElementNode_Base_Horde_C_ROC_ColorizeForHarvest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ROC_StartInitiatedEmiiter
// ()

void AElementNode_Base_Horde_C::ROC_StartInitiatedEmiiter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ROC_StartInitiatedEmiiter");

	AElementNode_Base_Horde_C_ROC_StartInitiatedEmiiter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.KillActiveNode
// ()

void AElementNode_Base_Horde_C::KillActiveNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.KillActiveNode");

	AElementNode_Base_Horde_C_KillActiveNode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ExecuteUbergraph_ElementNode_Base_Horde
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AElementNode_Base_Horde_C::ExecuteUbergraph_ElementNode_Base_Horde(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ExecuteUbergraph_ElementNode_Base_Horde");

	AElementNode_Base_Horde_C_ExecuteUbergraph_ElementNode_Base_Horde_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
