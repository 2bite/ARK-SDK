#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RiderProtection_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_RiderProtection.Buff_RiderProtection_C.BuffTickClient
struct ABuff_RiderProtection_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RiderProtection.Buff_RiderProtection_C.GetBuffPostprocessIntensity
struct ABuff_RiderProtection_C_GetBuffPostprocessIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RiderProtection.Buff_RiderProtection_C.AllowPostProcessEffect
struct ABuff_RiderProtection_C_AllowPostProcessEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RiderProtection.Buff_RiderProtection_C.BPNotifyPreventDismounting
struct ABuff_RiderProtection_C_BPNotifyPreventDismounting_Params
{
	class APrimalDinoCharacter**                       FromDino;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RiderProtection.Buff_RiderProtection_C.BuffTickServer
struct ABuff_RiderProtection_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RiderProtection.Buff_RiderProtection_C.BuffAdjustDamage
struct ABuff_RiderProtection_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RiderProtection.Buff_RiderProtection_C.BPSetupForInstigator
struct ABuff_RiderProtection_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RiderProtection.Buff_RiderProtection_C.UserConstructionScript
struct ABuff_RiderProtection_C_UserConstructionScript_Params
{
};

// Function Buff_RiderProtection.Buff_RiderProtection_C.ExecuteUbergraph_Buff_RiderProtection
struct ABuff_RiderProtection_C_ExecuteUbergraph_Buff_RiderProtection_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
