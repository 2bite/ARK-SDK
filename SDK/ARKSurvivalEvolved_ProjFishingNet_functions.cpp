// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjFishingNet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjFishingNet.ProjFishingNet_C.Trace For Fish and Add Them
// (Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)

void AProjFishingNet_C::Trace_For_Fish_and_Add_Them()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFishingNet.ProjFishingNet_C.Trace For Fish and Add Them");

	AProjFishingNet_C_Trace_For_Fish_and_Add_Them_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFishingNet.ProjFishingNet_C.Check For Fish Incrementally
// ()

void AProjFishingNet_C::Check_For_Fish_Incrementally()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFishingNet.ProjFishingNet_C.Check For Fish Incrementally");

	AProjFishingNet_C_Check_For_Fish_Incrementally_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFishingNet.ProjFishingNet_C.BPProjectileBounced
// ()
// Parameters:
// struct FHitResult              ImpactResult                   (Parm, OutParm, ReferenceParm)
// struct FVector                 ImpactVelocity                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AProjFishingNet_C::BPProjectileBounced(struct FHitResult* ImpactResult, struct FVector* ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFishingNet.ProjFishingNet_C.BPProjectileBounced");

	AProjFishingNet_C_BPProjectileBounced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ImpactResult != nullptr)
		*ImpactResult = params.ImpactResult;
	if (ImpactVelocity != nullptr)
		*ImpactVelocity = params.ImpactVelocity;
}


// Function ProjFishingNet.ProjFishingNet_C.ReceiveActorEndOverlap
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjFishingNet_C::ReceiveActorEndOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFishingNet.ProjFishingNet_C.ReceiveActorEndOverlap");

	AProjFishingNet_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFishingNet.ProjFishingNet_C.ReceiveBeginPlay
// (Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)

void AProjFishingNet_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFishingNet.ProjFishingNet_C.ReceiveBeginPlay");

	AProjFishingNet_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFishingNet.ProjFishingNet_C.ReceiveHit
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

void AProjFishingNet_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFishingNet.ProjFishingNet_C.ReceiveHit");

	AProjFishingNet_C_ReceiveHit_Params params;
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


// Function ProjFishingNet.ProjFishingNet_C.ReceiveTick
// (NetRequest, Exec, Native, MulticastDelegate, Public, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AProjFishingNet_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFishingNet.ProjFishingNet_C.ReceiveTick");

	AProjFishingNet_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFishingNet.ProjFishingNet_C.ReceiveActorBeginOverlap
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjFishingNet_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFishingNet.ProjFishingNet_C.ReceiveActorBeginOverlap");

	AProjFishingNet_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFishingNet.ProjFishingNet_C.UserConstructionScript
// ()

void AProjFishingNet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFishingNet.ProjFishingNet_C.UserConstructionScript");

	AProjFishingNet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFishingNet.ProjFishingNet_C.Timeline_0__FinishedFunc
// ()

void AProjFishingNet_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFishingNet.ProjFishingNet_C.Timeline_0__FinishedFunc");

	AProjFishingNet_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFishingNet.ProjFishingNet_C.Timeline_0__UpdateFunc
// ()

void AProjFishingNet_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFishingNet.ProjFishingNet_C.Timeline_0__UpdateFunc");

	AProjFishingNet_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFishingNet.ProjFishingNet_C.Timeline_1__FinishedFunc
// ()

void AProjFishingNet_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFishingNet.ProjFishingNet_C.Timeline_1__FinishedFunc");

	AProjFishingNet_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFishingNet.ProjFishingNet_C.Timeline_1__UpdateFunc
// ()

void AProjFishingNet_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFishingNet.ProjFishingNet_C.Timeline_1__UpdateFunc");

	AProjFishingNet_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFishingNet.ProjFishingNet_C.Timeline_2__FinishedFunc
// ()

void AProjFishingNet_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFishingNet.ProjFishingNet_C.Timeline_2__FinishedFunc");

	AProjFishingNet_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFishingNet.ProjFishingNet_C.Timeline_2__UpdateFunc
// ()

void AProjFishingNet_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFishingNet.ProjFishingNet_C.Timeline_2__UpdateFunc");

	AProjFishingNet_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFishingNet.ProjFishingNet_C.Rotate to 0
// ()

void AProjFishingNet_C::Rotate_to_0()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFishingNet.ProjFishingNet_C.Rotate to 0");

	AProjFishingNet_C_Rotate_to_0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFishingNet.ProjFishingNet_C.destroy on clients
// ()

void AProjFishingNet_C::destroy_on_clients()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFishingNet.ProjFishingNet_C.destroy on clients");

	AProjFishingNet_C_destroy_on_clients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFishingNet.ProjFishingNet_C.BndEvt__StaticMesh2_K2Node_ComponentBoundEvent_313_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void AProjFishingNet_C::BndEvt__StaticMesh2_K2Node_ComponentBoundEvent_313_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFishingNet.ProjFishingNet_C.BndEvt__StaticMesh2_K2Node_ComponentBoundEvent_313_ComponentBeginOverlapSignature__DelegateSignature");

	AProjFishingNet_C_BndEvt__StaticMesh2_K2Node_ComponentBoundEvent_313_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function ProjFishingNet.ProjFishingNet_C.scale net on toss
// ()

void AProjFishingNet_C::scale_net_on_toss()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFishingNet.ProjFishingNet_C.scale net on toss");

	AProjFishingNet_C_scale_net_on_toss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFishingNet.ProjFishingNet_C.BndEvt__StaticMesh3_K2Node_ComponentBoundEvent_458_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void AProjFishingNet_C::BndEvt__StaticMesh3_K2Node_ComponentBoundEvent_458_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFishingNet.ProjFishingNet_C.BndEvt__StaticMesh3_K2Node_ComponentBoundEvent_458_ComponentBeginOverlapSignature__DelegateSignature");

	AProjFishingNet_C_BndEvt__StaticMesh3_K2Node_ComponentBoundEvent_458_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function ProjFishingNet.ProjFishingNet_C.try catch fish
// ()
// Parameters:
// class AActor*                  Fish                           (Parm, ZeroConstructor, IsPlainOldData)

void AProjFishingNet_C::try_catch_fish(class AActor* Fish)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFishingNet.ProjFishingNet_C.try catch fish");

	AProjFishingNet_C_try_catch_fish_Params params;
	params.Fish = Fish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFishingNet.ProjFishingNet_C.Stop Projectile on Clients
// ()
// Parameters:
// struct FHitResult              Impact                         (Parm)

void AProjFishingNet_C::Stop_Projectile_on_Clients(const struct FHitResult& Impact)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFishingNet.ProjFishingNet_C.Stop Projectile on Clients");

	AProjFishingNet_C_Stop_Projectile_on_Clients_Params params;
	params.Impact = Impact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFishingNet.ProjFishingNet_C.try add fish to net
// ()
// Parameters:
// class AActor*                  Fish                           (Parm, ZeroConstructor, IsPlainOldData)

void AProjFishingNet_C::try_add_fish_to_net(class AActor* Fish)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFishingNet.ProjFishingNet_C.try add fish to net");

	AProjFishingNet_C_try_add_fish_to_net_Params params;
	params.Fish = Fish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFishingNet.ProjFishingNet_C.Launch a little faster initially
// ()

void AProjFishingNet_C::Launch_a_little_faster_initially()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFishingNet.ProjFishingNet_C.Launch a little faster initially");

	AProjFishingNet_C_Launch_a_little_faster_initially_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFishingNet.ProjFishingNet_C.initial fish trace
// ()

void AProjFishingNet_C::initial_fish_trace()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFishingNet.ProjFishingNet_C.initial fish trace");

	AProjFishingNet_C_initial_fish_trace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFishingNet.ProjFishingNet_C.ExecuteUbergraph_ProjFishingNet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjFishingNet_C::ExecuteUbergraph_ProjFishingNet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFishingNet.ProjFishingNet_C.ExecuteUbergraph_ProjFishingNet");

	AProjFishingNet_C_ExecuteUbergraph_ProjFishingNet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
