#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekBedVitals_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekBedVitals.Buff_TekBedVitals_C.PreventActorTargeting
struct ABuff_TekBedVitals_C_PreventActorTargeting_Params
{
	class AActor**                                     ByActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekBedVitals.Buff_TekBedVitals_C.BPCanBeCarried
struct ABuff_TekBedVitals_C_BPCanBeCarried_Params
{
	class APrimalCharacter**                           ByCarrier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekBedVitals.Buff_TekBedVitals_C.BuffAdjustDamage
struct ABuff_TekBedVitals_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekBedVitals.Buff_TekBedVitals_C.BuffTickServer
struct ABuff_TekBedVitals_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekBedVitals.Buff_TekBedVitals_C.BuffTickClient
struct ABuff_TekBedVitals_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekBedVitals.Buff_TekBedVitals_C.UserConstructionScript
struct ABuff_TekBedVitals_C_UserConstructionScript_Params
{
};

// Function Buff_TekBedVitals.Buff_TekBedVitals_C.ExecuteUbergraph_Buff_TekBedVitals
struct ABuff_TekBedVitals_C_ExecuteUbergraph_Buff_TekBedVitals_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
