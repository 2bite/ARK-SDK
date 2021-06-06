#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BaseSwarmChar_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ReceiveTick
struct ABaseSwarmChar_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ThrottledTick
struct ABaseSwarmChar_BP_C_ThrottledTick_Params
{
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Set Material Vector Parameter
struct ABaseSwarmChar_BP_C_Set_Material_Vector_Parameter_Params
{
	class UStaticMeshComponent*                        SM;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Parameter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SendTargetedMessage
struct ABaseSwarmChar_BP_C_SendTargetedMessage_Params
{
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SwarmLifetimeEnded
struct ABaseSwarmChar_BP_C_SwarmLifetimeEnded_Params
{
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SetSwarmLifetime
struct ABaseSwarmChar_BP_C_SetSwarmLifetime_Params
{
	float                                              LifeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.FinishedAttackingTarget
struct ABaseSwarmChar_BP_C_FinishedAttackingTarget_Params
{
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.StartAttackingTarget
struct ABaseSwarmChar_BP_C_StartAttackingTarget_Params
{
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SpottedTarget
struct ABaseSwarmChar_BP_C_SpottedTarget_Params
{
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.CreateBoidSM
struct ABaseSwarmChar_BP_C_CreateBoidSM_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.UpdateDeadBoids
struct ABaseSwarmChar_BP_C_UpdateDeadBoids_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPSetCharacterMeshesMaterialScalarParamValue
struct ABaseSwarmChar_BP_C_BPSetCharacterMeshesMaterialScalarParamValue_Params
{
	struct FName*                                      ParamName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SetMaterialScalarParameter
struct ABaseSwarmChar_BP_C_SetMaterialScalarParameter_Params
{
	class UStaticMeshComponent*                        SM;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Parameter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Kill Boid
struct ABaseSwarmChar_BP_C_Kill_Boid_Params
{
	class UStaticMeshComponent*                        StaticMeshComp;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPOnRefreshColorization
struct ABaseSwarmChar_BP_C_BPOnRefreshColorization_Params
{
	TArray<struct FLinearColor>                        Colors;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Attack Target
struct ABaseSwarmChar_BP_C_Attack_Target_Params
{
	bool                                               StopAttacking_;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.GetDestroyNonCharacterTargetDuration
struct ABaseSwarmChar_BP_C_GetDestroyNonCharacterTargetDuration_Params
{
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.DestroyTarget
struct ABaseSwarmChar_BP_C_DestroyTarget_Params
{
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SetFlockBehavior
struct ABaseSwarmChar_BP_C_SetFlockBehavior_Params
{
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.OnRep_FlockShape
struct ABaseSwarmChar_BP_C_OnRep_FlockShape_Params
{
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Get Damage Type Adjuster
struct ABaseSwarmChar_BP_C_Get_Damage_Type_Adjuster_Params
{
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Kill Boids Based On Health
struct ABaseSwarmChar_BP_C_Kill_Boids_Based_On_Health_Params
{
	float                                              DamageIn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.OnTargetChanged
struct ABaseSwarmChar_BP_C_OnTargetChanged_Params
{
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Can Damage Victim in Radius
struct ABaseSwarmChar_BP_C_Can_Damage_Victim_in_Radius_Params
{
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanDamage;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.CreateFlock
struct ABaseSwarmChar_BP_C_CreateFlock_Params
{
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.TickFlock
struct ABaseSwarmChar_BP_C_TickFlock_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ArrayContainsParentDamageType
struct ABaseSwarmChar_BP_C_ArrayContainsParentDamageType_Params
{
	TArray<class UClass*>                              DamageTypes;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      DamageType;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPAdjustDamage
struct ABaseSwarmChar_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Damage Victim in Radius
struct ABaseSwarmChar_BP_C_Damage_Victim_in_Radius_Params
{
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDidDoDamage;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Damage Victims In Radius
struct ABaseSwarmChar_BP_C_Damage_Victims_In_Radius_Params
{
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPCanCryo
struct ABaseSwarmChar_BP_C_BPCanCryo_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPOnLethalDamage
struct ABaseSwarmChar_BP_C_BPOnLethalDamage_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventDeath;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BlueprintAdjustOutputDamage
struct ABaseSwarmChar_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.UserConstructionScript
struct ABaseSwarmChar_BP_C_UserConstructionScript_Params
{
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ReceiveBeginPlay
struct ABaseSwarmChar_BP_C_ReceiveBeginPlay_Params
{
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.MultiOnLethalDamage
struct ABaseSwarmChar_BP_C_MultiOnLethalDamage_Params
{
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Server_SpottedTargetEvent
struct ABaseSwarmChar_BP_C_Server_SpottedTargetEvent_Params
{
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Multicast_SpottedTargetEvent
struct ABaseSwarmChar_BP_C_Multicast_SpottedTargetEvent_Params
{
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Server_StartAttackingTarget
struct ABaseSwarmChar_BP_C_Server_StartAttackingTarget_Params
{
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Multicast_StartAttackingTarget
struct ABaseSwarmChar_BP_C_Multicast_StartAttackingTarget_Params
{
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Server_FinishedAttackingTarget
struct ABaseSwarmChar_BP_C_Server_FinishedAttackingTarget_Params
{
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Multicast_FinishedAttackingTarget
struct ABaseSwarmChar_BP_C_Multicast_FinishedAttackingTarget_Params
{
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Multi_KillBoidsBasedOnHealth
struct ABaseSwarmChar_BP_C_Multi_KillBoidsBasedOnHealth_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ExecuteUbergraph_BaseSwarmChar_BP
struct ABaseSwarmChar_BP_C_ExecuteUbergraph_BaseSwarmChar_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
