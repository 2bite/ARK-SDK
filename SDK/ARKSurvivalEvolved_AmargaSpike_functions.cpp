// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AmargaSpike_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AmargaSpike.AmargaSpike_C.BPOnDemolish
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AAmargaSpike_C::BPOnDemolish(class APlayerController** ForPC, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.BPOnDemolish");

	AAmargaSpike_C_BPOnDemolish_Params params;
	params.ForPC = ForPC;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmargaSpike.AmargaSpike_C.CheckApplySpikeDebuff
// (NetReliable, NetRequest, Native, NetMulticast, Public, NetServer, NetClient, BlueprintEvent)
// Parameters:
// class AActor*                  forActor                       (Parm, ZeroConstructor, IsPlainOldData)

void AAmargaSpike_C::CheckApplySpikeDebuff(class AActor* forActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.CheckApplySpikeDebuff");

	AAmargaSpike_C_CheckApplySpikeDebuff_Params params;
	params.forActor = forActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmargaSpike.AmargaSpike_C.CheckApplySpikeDamage
// (NetReliable, NetResponse, Static, NetMulticast, Public, NetServer, NetClient, BlueprintEvent)
// Parameters:
// class AActor*                  forActor                       (Parm, ZeroConstructor, IsPlainOldData)

void AAmargaSpike_C::STATIC_CheckApplySpikeDamage(class AActor* forActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.CheckApplySpikeDamage");

	AAmargaSpike_C_CheckApplySpikeDamage_Params params;
	params.forActor = forActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmargaSpike.AmargaSpike_C.UpdateSpikeRelLoc
// ()

void AAmargaSpike_C::UpdateSpikeRelLoc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.UpdateSpikeRelLoc");

	AAmargaSpike_C_UpdateSpikeRelLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmargaSpike.AmargaSpike_C.BPUpdatedHealth
// ()
// Parameters:
// bool*                          bDoReplication                 (Parm, ZeroConstructor, IsPlainOldData)

void AAmargaSpike_C::BPUpdatedHealth(bool* bDoReplication)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.BPUpdatedHealth");

	AAmargaSpike_C_BPUpdatedHealth_Params params;
	params.bDoReplication = bDoReplication;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmargaSpike.AmargaSpike_C.InitSpike
// (NetRequest, Public, NetServer, NetClient, BlueprintEvent)

void AAmargaSpike_C::InitSpike()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.InitSpike");

	AAmargaSpike_C_InitSpike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmargaSpike.AmargaSpike_C.RefreshTeamColorVisuals
// ()

void AAmargaSpike_C::RefreshTeamColorVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.RefreshTeamColorVisuals");

	AAmargaSpike_C_RefreshTeamColorVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmargaSpike.AmargaSpike_C.UserConstructionScript
// ()

void AAmargaSpike_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.UserConstructionScript");

	AAmargaSpike_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmargaSpike.AmargaSpike_C.SpikeTick
// ()

void AAmargaSpike_C::SpikeTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.SpikeTick");

	AAmargaSpike_C_SpikeTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmargaSpike.AmargaSpike_C.ReceiveBeginPlay
// ()

void AAmargaSpike_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.ReceiveBeginPlay");

	AAmargaSpike_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmargaSpike.AmargaSpike_C.BndEvt__MyStaticMesh_K2Node_ComponentBoundEvent_276_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void AAmargaSpike_C::BndEvt__MyStaticMesh_K2Node_ComponentBoundEvent_276_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.BndEvt__MyStaticMesh_K2Node_ComponentBoundEvent_276_ComponentBeginOverlapSignature__DelegateSignature");

	AAmargaSpike_C_BndEvt__MyStaticMesh_K2Node_ComponentBoundEvent_276_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function AmargaSpike.AmargaSpike_C.BndEvt__DebuffCollision_K2Node_ComponentBoundEvent_366_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void AAmargaSpike_C::BndEvt__DebuffCollision_K2Node_ComponentBoundEvent_366_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.BndEvt__DebuffCollision_K2Node_ComponentBoundEvent_366_ComponentBeginOverlapSignature__DelegateSignature");

	AAmargaSpike_C_BndEvt__DebuffCollision_K2Node_ComponentBoundEvent_366_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function AmargaSpike.AmargaSpike_C.BndEvt__DebuffCollision_K2Node_ComponentBoundEvent_392_ComponentEndOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AAmargaSpike_C::BndEvt__DebuffCollision_K2Node_ComponentBoundEvent_392_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.BndEvt__DebuffCollision_K2Node_ComponentBoundEvent_392_ComponentEndOverlapSignature__DelegateSignature");

	AAmargaSpike_C_BndEvt__DebuffCollision_K2Node_ComponentBoundEvent_392_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmargaSpike.AmargaSpike_C.BindOnSpawnedOnStructureDestroyed
// ()

void AAmargaSpike_C::BindOnSpawnedOnStructureDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.BindOnSpawnedOnStructureDestroyed");

	AAmargaSpike_C_BindOnSpawnedOnStructureDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmargaSpike.AmargaSpike_C.OnSpawnedOnStructureDestroyed
// ()

void AAmargaSpike_C::OnSpawnedOnStructureDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.OnSpawnedOnStructureDestroyed");

	AAmargaSpike_C_OnSpawnedOnStructureDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmargaSpike.AmargaSpike_C.ExecuteUbergraph_AmargaSpike
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAmargaSpike_C::ExecuteUbergraph_AmargaSpike(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmargaSpike.AmargaSpike_C.ExecuteUbergraph_AmargaSpike");

	AAmargaSpike_C_ExecuteUbergraph_AmargaSpike_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
