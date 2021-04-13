#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjFishingNet_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjFishingNet.ProjFishingNet_C.Trace For Fish and Add Them
struct AProjFishingNet_C_Trace_For_Fish_and_Add_Them_Params
{
};

// Function ProjFishingNet.ProjFishingNet_C.Check For Fish Incrementally
struct AProjFishingNet_C_Check_For_Fish_Incrementally_Params
{
};

// Function ProjFishingNet.ProjFishingNet_C.BPProjectileBounced
struct AProjFishingNet_C_BPProjectileBounced_Params
{
	struct FHitResult                                  ImpactResult;                                             // (Parm, OutParm, ReferenceParm)
	struct FVector                                     ImpactVelocity;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ProjFishingNet.ProjFishingNet_C.ReceiveActorEndOverlap
struct AProjFishingNet_C_ReceiveActorEndOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjFishingNet.ProjFishingNet_C.ReceiveBeginPlay
struct AProjFishingNet_C_ReceiveBeginPlay_Params
{
};

// Function ProjFishingNet.ProjFishingNet_C.ReceiveHit
struct AProjFishingNet_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function ProjFishingNet.ProjFishingNet_C.ReceiveTick
struct AProjFishingNet_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjFishingNet.ProjFishingNet_C.ReceiveActorBeginOverlap
struct AProjFishingNet_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjFishingNet.ProjFishingNet_C.UserConstructionScript
struct AProjFishingNet_C_UserConstructionScript_Params
{
};

// Function ProjFishingNet.ProjFishingNet_C.Timeline_0__FinishedFunc
struct AProjFishingNet_C_Timeline_0__FinishedFunc_Params
{
};

// Function ProjFishingNet.ProjFishingNet_C.Timeline_0__UpdateFunc
struct AProjFishingNet_C_Timeline_0__UpdateFunc_Params
{
};

// Function ProjFishingNet.ProjFishingNet_C.Timeline_1__FinishedFunc
struct AProjFishingNet_C_Timeline_1__FinishedFunc_Params
{
};

// Function ProjFishingNet.ProjFishingNet_C.Timeline_1__UpdateFunc
struct AProjFishingNet_C_Timeline_1__UpdateFunc_Params
{
};

// Function ProjFishingNet.ProjFishingNet_C.Timeline_2__FinishedFunc
struct AProjFishingNet_C_Timeline_2__FinishedFunc_Params
{
};

// Function ProjFishingNet.ProjFishingNet_C.Timeline_2__UpdateFunc
struct AProjFishingNet_C_Timeline_2__UpdateFunc_Params
{
};

// Function ProjFishingNet.ProjFishingNet_C.Rotate to 0
struct AProjFishingNet_C_Rotate_to_0_Params
{
};

// Function ProjFishingNet.ProjFishingNet_C.destroy on clients
struct AProjFishingNet_C_destroy_on_clients_Params
{
};

// Function ProjFishingNet.ProjFishingNet_C.BndEvt__StaticMesh2_K2Node_ComponentBoundEvent_313_ComponentBeginOverlapSignature__DelegateSignature
struct AProjFishingNet_C_BndEvt__StaticMesh2_K2Node_ComponentBoundEvent_313_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function ProjFishingNet.ProjFishingNet_C.scale net on toss
struct AProjFishingNet_C_scale_net_on_toss_Params
{
};

// Function ProjFishingNet.ProjFishingNet_C.BndEvt__StaticMesh3_K2Node_ComponentBoundEvent_458_ComponentBeginOverlapSignature__DelegateSignature
struct AProjFishingNet_C_BndEvt__StaticMesh3_K2Node_ComponentBoundEvent_458_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function ProjFishingNet.ProjFishingNet_C.try catch fish
struct AProjFishingNet_C_try_catch_fish_Params
{
	class AActor*                                      Fish;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjFishingNet.ProjFishingNet_C.Stop Projectile on Clients
struct AProjFishingNet_C_Stop_Projectile_on_Clients_Params
{
	struct FHitResult                                  Impact;                                                   // (Parm)
};

// Function ProjFishingNet.ProjFishingNet_C.try add fish to net
struct AProjFishingNet_C_try_add_fish_to_net_Params
{
	class AActor*                                      Fish;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjFishingNet.ProjFishingNet_C.Launch a little faster initially
struct AProjFishingNet_C_Launch_a_little_faster_initially_Params
{
};

// Function ProjFishingNet.ProjFishingNet_C.initial fish trace
struct AProjFishingNet_C_initial_fish_trace_Params
{
};

// Function ProjFishingNet.ProjFishingNet_C.ExecuteUbergraph_ProjFishingNet
struct AProjFishingNet_C_ExecuteUbergraph_ProjFishingNet_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
