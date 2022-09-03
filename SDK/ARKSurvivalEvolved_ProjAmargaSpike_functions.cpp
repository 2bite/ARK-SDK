// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjAmargaSpike_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjAmargaSpike.ProjAmargaSpike_C.BPProjectileBounced
// ()
// Parameters:
// struct FHitResult              ImpactResult                   (Parm, OutParm, ReferenceParm)
// struct FVector                 ImpactVelocity                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AProjAmargaSpike_C::BPProjectileBounced(struct FHitResult* ImpactResult, struct FVector* ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike.ProjAmargaSpike_C.BPProjectileBounced");

	AProjAmargaSpike_C_BPProjectileBounced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ImpactResult != nullptr)
		*ImpactResult = params.ImpactResult;
	if (ImpactVelocity != nullptr)
		*ImpactVelocity = params.ImpactVelocity;
}


// Function ProjAmargaSpike.ProjAmargaSpike_C.ReceiveHit
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

void AProjAmargaSpike_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike.ProjAmargaSpike_C.ReceiveHit");

	AProjAmargaSpike_C_ReceiveHit_Params params;
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


// Function ProjAmargaSpike.ProjAmargaSpike_C.ReceiveBeginPlay
// ()

void AProjAmargaSpike_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike.ProjAmargaSpike_C.ReceiveBeginPlay");

	AProjAmargaSpike_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjAmargaSpike.ProjAmargaSpike_C.OnExplode
// (Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, NetClient, BlueprintEvent)
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjAmargaSpike_C::STATIC_OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike.ProjAmargaSpike_C.OnExplode");

	AProjAmargaSpike_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjAmargaSpike.ProjAmargaSpike_C.UserConstructionScript
// ()

void AProjAmargaSpike_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike.ProjAmargaSpike_C.UserConstructionScript");

	AProjAmargaSpike_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjAmargaSpike.ProjAmargaSpike_C.Timeline_LerpSpikeMesh__FinishedFunc
// ()

void AProjAmargaSpike_C::Timeline_LerpSpikeMesh__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike.ProjAmargaSpike_C.Timeline_LerpSpikeMesh__FinishedFunc");

	AProjAmargaSpike_C_Timeline_LerpSpikeMesh__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjAmargaSpike.ProjAmargaSpike_C.Timeline_LerpSpikeMesh__UpdateFunc
// ()

void AProjAmargaSpike_C::Timeline_LerpSpikeMesh__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike.ProjAmargaSpike_C.Timeline_LerpSpikeMesh__UpdateFunc");

	AProjAmargaSpike_C_Timeline_LerpSpikeMesh__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjAmargaSpike.ProjAmargaSpike_C.Multi_PostExplode
// ()
// Parameters:
// TArray<struct FVector>         Locs                           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           FailedForInst                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSpawn                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                SpawnRot                       (Parm, ZeroConstructor, IsPlainOldData)

void AProjAmargaSpike_C::Multi_PostExplode(bool FailedForInst, bool IsSpawn, const struct FRotator& SpawnRot, TArray<struct FVector>* Locs)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike.ProjAmargaSpike_C.Multi_PostExplode");

	AProjAmargaSpike_C_Multi_PostExplode_Params params;
	params.FailedForInst = FailedForInst;
	params.IsSpawn = IsSpawn;
	params.SpawnRot = SpawnRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locs != nullptr)
		*Locs = params.Locs;
}


// Function ProjAmargaSpike.ProjAmargaSpike_C.LerpSpikeMesh
// ()

void AProjAmargaSpike_C::LerpSpikeMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike.ProjAmargaSpike_C.LerpSpikeMesh");

	AProjAmargaSpike_C_LerpSpikeMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjAmargaSpike.ProjAmargaSpike_C.Multi_AddMoveIgnoreActor
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void AProjAmargaSpike_C::Multi_AddMoveIgnoreActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike.ProjAmargaSpike_C.Multi_AddMoveIgnoreActor");

	AProjAmargaSpike_C_Multi_AddMoveIgnoreActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjAmargaSpike.ProjAmargaSpike_C.ExecuteUbergraph_ProjAmargaSpike
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjAmargaSpike_C::ExecuteUbergraph_ProjAmargaSpike(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike.ProjAmargaSpike_C.ExecuteUbergraph_ProjAmargaSpike");

	AProjAmargaSpike_C_ExecuteUbergraph_ProjAmargaSpike_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
