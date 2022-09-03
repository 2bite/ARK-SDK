#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Proj_Mjolnir_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_Mjolnir.Proj_Mjolnir_C.TimedExpandingAudio
struct AProj_Mjolnir_C_TimedExpandingAudio_Params
{
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.MulticastSpawnHitEmitter
struct AProj_Mjolnir_C_MulticastSpawnHitEmitter_Params
{
	struct UObject_FTransform                          SpawnTransform;                                           // (Parm, IsPlainOldData)
	class APawn*                                       Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.HasLosFromPosition
struct AProj_Mjolnir_C_HasLosFromPosition_Params
{
	struct FVector                                     FromPosition;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            ToActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasLOS;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.BP_IgnoreProjectileImpact
struct AProj_Mjolnir_C_BP_IgnoreProjectileImpact_Params
{
	struct FHitResult*                                 ImpactHit;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.CheckForHit
struct AProj_Mjolnir_C_CheckForHit_Params
{
	struct FHitResult                                  HitInfo;                                                  // (Parm)
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.GetLosOffsetCheckPosition
struct AProj_Mjolnir_C_GetLosOffsetCheckPosition_Params
{
	struct FVector                                     CheckPOS;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.SetColors
struct AProj_Mjolnir_C_SetColors_Params
{
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.ClientSetLightningPulse
struct AProj_Mjolnir_C_ClientSetLightningPulse_Params
{
	bool                                               IsPulsing;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.TickLightningPulse
struct AProj_Mjolnir_C_TickLightningPulse_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.DoLightningPulse
struct AProj_Mjolnir_C_DoLightningPulse_Params
{
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.GetSquaredDistance
struct AProj_Mjolnir_C_GetSquaredDistance_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SqDistance;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.PickedUp
struct AProj_Mjolnir_C_PickedUp_Params
{
	class AShooterCharacter**                          ByCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.PickUpCheck
struct AProj_Mjolnir_C_PickUpCheck_Params
{
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.Explode
struct AProj_Mjolnir_C_Explode_Params
{
	struct FHitResult                                  Impact;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.OnImpact
struct AProj_Mjolnir_C_OnImpact_Params
{
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm, ReferenceParm)
	bool*                                              bFromReplication;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.ReturnToOwner
struct AProj_Mjolnir_C_ReturnToOwner_Params
{
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.ReceiveBeginPlay
struct AProj_Mjolnir_C_ReceiveBeginPlay_Params
{
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.Init_Projectile
struct AProj_Mjolnir_C_Init_Projectile_Params
{
	class AShooterCharacter*                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterWeapon*                              ForWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalBuff*                                 ForControllingBuff;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.ReceiveTick
struct AProj_Mjolnir_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.UserConstructionScript
struct AProj_Mjolnir_C_UserConstructionScript_Params
{
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.BndEvt__CollisionComp_K2Node_ComponentBoundEvent_535_ComponentBeginOverlapSignature__DelegateSignature
struct AProj_Mjolnir_C_BndEvt__CollisionComp_K2Node_ComponentBoundEvent_535_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.ExecuteUbergraph_Proj_Mjolnir
struct AProj_Mjolnir_C_ExecuteUbergraph_Proj_Mjolnir_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.OnHitForEmitter__DelegateSignature
struct AProj_Mjolnir_C_OnHitForEmitter__DelegateSignature_Params
{
	struct UObject_FTransform                          HitTransform;                                             // (Parm, IsPlainOldData)
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.OnRequestSyncProjectile__DelegateSignature
struct AProj_Mjolnir_C_OnRequestSyncProjectile__DelegateSignature_Params
{
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.OnShieldReflected__DelegateSignature
struct AProj_Mjolnir_C_OnShieldReflected__DelegateSignature_Params
{
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.OnStartReturnToPlayer__DelegateSignature
struct AProj_Mjolnir_C_OnStartReturnToPlayer__DelegateSignature_Params
{
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.OnPulseEnded__DelegateSignature
struct AProj_Mjolnir_C_OnPulseEnded__DelegateSignature_Params
{
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.OnClientMjolnirSpawned__DelegateSignature
struct AProj_Mjolnir_C_OnClientMjolnirSpawned__DelegateSignature_Params
{
	class AProj_Mjolnir_C*                             NewMjolnir;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Mjolnir.Proj_Mjolnir_C.OnReturnedToPlayer__DelegateSignature
struct AProj_Mjolnir_C_OnReturnedToPlayer__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
