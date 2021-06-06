#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekPistol_Kill_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.Public Calculate Damage Multiplier
struct ABuff_TekPistol_Kill_C_Public_Calculate_Damage_Multiplier_Params
{
	float                                              Mult;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.CalculateImpactScale
struct ABuff_TekPistol_Kill_C_CalculateImpactScale_Params
{
	float                                              ImpactScale;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.CalculateDamageMultiplier
struct ABuff_TekPistol_Kill_C_CalculateDamageMultiplier_Params
{
	float                                              Mult;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BPAdjustDamage_Ex
struct ABuff_TekPistol_Kill_C_BPAdjustDamage_Ex_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	struct FVector                                     ImpulseDir;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     InDamageCauser;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.CanApplyToTarget
struct ABuff_TekPistol_Kill_C_CanApplyToTarget_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Allowed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BPSetupForInstigator
struct ABuff_TekPistol_Kill_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.CanBeViewed
struct ABuff_TekPistol_Kill_C_CanBeViewed_Params
{
	class AActor**                                     ByActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.GetPointCustomData
struct ABuff_TekPistol_Kill_C_GetPointCustomData_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.GetPointOfInterestData
struct ABuff_TekPistol_Kill_C_GetPointOfInterestData_Params
{
	struct FPointOfInterestData                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BuffTickServer
struct ABuff_TekPistol_Kill_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.ApplyChargeWeight
struct ABuff_TekPistol_Kill_C_ApplyChargeWeight_Params
{
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BPCustomAllowAddBuff
struct ABuff_TekPistol_Kill_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BPReactivateWithDamageCauser
struct ABuff_TekPistol_Kill_C_BPReactivateWithDamageCauser_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     ForDamageCauser;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BuffTickClient
struct ABuff_TekPistol_Kill_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BPActivated
struct ABuff_TekPistol_Kill_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.UserConstructionScript
struct ABuff_TekPistol_Kill_C_UserConstructionScript_Params
{
};

// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.ExecuteUbergraph_Buff_TekPistol_Kill
struct ABuff_TekPistol_Kill_C_ExecuteUbergraph_Buff_TekPistol_Kill_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
