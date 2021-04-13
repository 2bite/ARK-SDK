#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BeeHive_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BeeHive.BeeHive_C.BlueprintDrawHUD
struct ABeeHive_C_BlueprintDrawHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BeeHive.BeeHive_C.BPAdjustDamage
struct ABeeHive_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BeeHive.BeeHive_C.ReceivePointDamage
struct ABeeHive_C_ReceivePointDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        HitComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotFromDirection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BeeHive.BeeHive_C.BPCanBeActivated
struct ABeeHive_C_BPCanBeActivated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BeeHive.BeeHive_C.TamedHealthUpdate
struct ABeeHive_C_TamedHealthUpdate_Params
{
};

// Function BeeHive.BeeHive_C.AggroNearbyBees
struct ABeeHive_C_AggroNearbyBees_Params
{
	class AActor*                                      AggroTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BeeHive.BeeHive_C.BPTryMultiUse
struct ABeeHive_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BeeHive.BeeHive_C.BPGetMultiUseEntries
struct ABeeHive_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BeeHive.BeeHive_C.BPClientDoMultiUse
struct ABeeHive_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BeeHive.BeeHive_C.Get Closest Hidden Bee
struct ABeeHive_C_Get_Closest_Hidden_Bee_Params
{
	class ABee_Queen_Character_BP_C*                   Queen;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BeeHive.BeeHive_C.BPUnstasis
struct ABeeHive_C_BPUnstasis_Params
{
};

// Function BeeHive.BeeHive_C.ReceiveAnyDamage
struct ABeeHive_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BeeHive.BeeHive_C.BPOverrideAllowStructureAccess
struct ABeeHive_C_BPOverrideAllowStructureAccess_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsAccessAllowed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForInventoryOnly;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BeeHive.BeeHive_C.ReceiveDestroyed
struct ABeeHive_C_ReceiveDestroyed_Params
{
};

// Function BeeHive.BeeHive_C.UserConstructionScript
struct ABeeHive_C_UserConstructionScript_Params
{
};

// Function BeeHive.BeeHive_C.ReceiveBeginPlay
struct ABeeHive_C_ReceiveBeginPlay_Params
{
};

// Function BeeHive.BeeHive_C.UpdateHealthEvent
struct ABeeHive_C_UpdateHealthEvent_Params
{
};

// Function BeeHive.BeeHive_C.PlayMultiCastParticle
struct ABeeHive_C_PlayMultiCastParticle_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Emitter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BeeHive.BeeHive_C.DestroyedParticle
struct ABeeHive_C_DestroyedParticle_Params
{
};

// Function BeeHive.BeeHive_C.CheckUpdateStencilValues
struct ABeeHive_C_CheckUpdateStencilValues_Params
{
};

// Function BeeHive.BeeHive_C.ExecuteUbergraph_BeeHive
struct ABeeHive_C_ExecuteUbergraph_BeeHive_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
