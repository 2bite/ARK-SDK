#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DinoPackMate_Raptor_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_DinoPackMate_Raptor.Buff_DinoPackMate_Raptor_C.BuffAdjustDamage
struct ABuff_DinoPackMate_Raptor_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_DinoPackMate_Raptor.Buff_DinoPackMate_Raptor_C.UserConstructionScript
struct ABuff_DinoPackMate_Raptor_C_UserConstructionScript_Params
{
};

// Function Buff_DinoPackMate_Raptor.Buff_DinoPackMate_Raptor_C.ReceiveBeginPlay
struct ABuff_DinoPackMate_Raptor_C_ReceiveBeginPlay_Params
{
};

// Function Buff_DinoPackMate_Raptor.Buff_DinoPackMate_Raptor_C.ExecuteUbergraph_Buff_DinoPackMate_Raptor
struct ABuff_DinoPackMate_Raptor_C_ExecuteUbergraph_Buff_DinoPackMate_Raptor_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
