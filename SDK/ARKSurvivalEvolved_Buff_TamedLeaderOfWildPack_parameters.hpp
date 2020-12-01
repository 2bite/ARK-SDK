#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TamedLeaderOfWildPack_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.BuffAdjustDamage
struct ABuff_TamedLeaderOfWildPack_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.BPServerHandleNetExecCommand
struct ABuff_TamedLeaderOfWildPack_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.IsFollower
struct ABuff_TamedLeaderOfWildPack_C_IsFollower_Params
{
	class APrimalDinoCharacter*                        DinoCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               characterIsFollower;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.OrderFollowersAttack Target
struct ABuff_TamedLeaderOfWildPack_C_OrderFollowersAttack_Target_Params
{
	class AActor*                                      characterToAttack;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            FromCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canOverrideTarget;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               showArrowEffect;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.ReceiveDestroyed
struct ABuff_TamedLeaderOfWildPack_C_ReceiveDestroyed_Params
{
};

// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.OnBuffDeactivated
struct ABuff_TamedLeaderOfWildPack_C_OnBuffDeactivated_Params
{
};

// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.BPDeactivated
struct ABuff_TamedLeaderOfWildPack_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.OnAddedFollower
struct ABuff_TamedLeaderOfWildPack_C_OnAddedFollower_Params
{
	class APrimalDinoCharacter*                        newFollower;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.InitializeBuff
struct ABuff_TamedLeaderOfWildPack_C_InitializeBuff_Params
{
	TArray<class UClass*>                              classesCanFollow;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                maxNumFollowers;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.TryAdd Follower
struct ABuff_TamedLeaderOfWildPack_C_TryAdd_Follower_Params
{
	class APrimalDinoCharacter*                        newFollower;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               followerAdded;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.PreventActorTargeting
struct ABuff_TamedLeaderOfWildPack_C_PreventActorTargeting_Params
{
	class AActor**                                     ByActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.UserConstructionScript
struct ABuff_TamedLeaderOfWildPack_C_UserConstructionScript_Params
{
};

// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.LinkDamage
struct ABuff_TamedLeaderOfWildPack_C_LinkDamage_Params
{
	class APrimalDinoCharacter*                        follower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.OnTakeAnyDamage_Event
struct ABuff_TamedLeaderOfWildPack_C_OnTakeAnyDamage_Event_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.SpawnParticlesForFollowers_Multicast
struct ABuff_TamedLeaderOfWildPack_C_SpawnParticlesForFollowers_Multicast_Params
{
	class APrimalDinoCharacter*                        follower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.SpawnParticlesForFollowers
struct ABuff_TamedLeaderOfWildPack_C_SpawnParticlesForFollowers_Params
{
	class APrimalDinoCharacter*                        follower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.SpawnInitialParticles
struct ABuff_TamedLeaderOfWildPack_C_SpawnInitialParticles_Params
{
	int                                                numParticlesAlreadySpawned;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.ReceiveBeginPlay
struct ABuff_TamedLeaderOfWildPack_C_ReceiveBeginPlay_Params
{
};

// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.LinkDamageTaken
struct ABuff_TamedLeaderOfWildPack_C_LinkDamageTaken_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.TakePointDamageSignature__DelegateSignature_Event
struct ABuff_TamedLeaderOfWildPack_C_TakePointDamageSignature__DelegateSignature_Event_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ShotFromDirection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.ExecuteUbergraph_Buff_TamedLeaderOfWildPack
struct ABuff_TamedLeaderOfWildPack_C_ExecuteUbergraph_Buff_TamedLeaderOfWildPack_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
