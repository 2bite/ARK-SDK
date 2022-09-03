#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PoisonTreeAOE_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.BPDeactivated
struct ABuff_PoisonTreeAOE_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.GetGrowthScale
struct ABuff_PoisonTreeAOE_C_GetGrowthScale_Params
{
	struct FVector                                     Scale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.ReceiveAnyDamage
struct ABuff_PoisonTreeAOE_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.NotifyDamage
struct ABuff_PoisonTreeAOE_C_NotifyDamage_Params
{
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     TheDamageCauser;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.UserConstructionScript
struct ABuff_PoisonTreeAOE_C_UserConstructionScript_Params
{
};

// Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.ReceiveBeginPlay
struct ABuff_PoisonTreeAOE_C_ReceiveBeginPlay_Params
{
};

// Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.ReceiveTick
struct ABuff_PoisonTreeAOE_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.Multi-SetScale
struct ABuff_PoisonTreeAOE_C_Multi_SetScale_Params
{
	struct FVector                                     Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.ExecuteUbergraph_Buff_PoisonTreeAOE
struct ABuff_PoisonTreeAOE_C_ExecuteUbergraph_Buff_PoisonTreeAOE_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
