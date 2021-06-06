#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_InsideTekShield_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_InsideTekShield.Buff_InsideTekShield_C.CheckDeactivate
struct ABuff_InsideTekShield_C_CheckDeactivate_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_InsideTekShield.Buff_InsideTekShield_C.BuffAdjustDamage
struct ABuff_InsideTekShield_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_InsideTekShield.Buff_InsideTekShield_C.BPPreventAddingOtherBuff
struct ABuff_InsideTekShield_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_InsideTekShield.Buff_InsideTekShield_C.BuffTickServer
struct ABuff_InsideTekShield_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_InsideTekShield.Buff_InsideTekShield_C.UserConstructionScript
struct ABuff_InsideTekShield_C_UserConstructionScript_Params
{
};

// Function Buff_InsideTekShield.Buff_InsideTekShield_C.ExecuteUbergraph_Buff_InsideTekShield
struct ABuff_InsideTekShield_C_ExecuteUbergraph_Buff_InsideTekShield_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
