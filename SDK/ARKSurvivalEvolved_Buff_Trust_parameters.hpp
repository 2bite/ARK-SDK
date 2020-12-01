#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Trust_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Trust.Buff_Trust_C.BuffAdjustDamage
struct ABuff_Trust_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Trust.Buff_Trust_C.OnCourageRoar
struct ABuff_Trust_C_OnCourageRoar_Params
{
	bool*                                              canSwitchToCourage;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             amountOverride;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              useAmountOverride;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              sendMessageToRider;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Trust.Buff_Trust_C.GetTeamColorForParticles
struct ABuff_Trust_C_GetTeamColorForParticles_Params
{
	struct FVector                                     finalColor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Trust.Buff_Trust_C.BuffTickServer
struct ABuff_Trust_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Trust.Buff_Trust_C.UserConstructionScript
struct ABuff_Trust_C_UserConstructionScript_Params
{
};

// Function Buff_Trust.Buff_Trust_C.ExecuteUbergraph_Buff_Trust
struct ABuff_Trust_C_ExecuteUbergraph_Buff_Trust_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
