#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Megatherium_Energized_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Megatherium_Energized.Buff_Megatherium_Energized_C.BuffAdjustDamage
struct ABuff_Megatherium_Energized_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Megatherium_Energized.Buff_Megatherium_Energized_C.UserConstructionScript
struct ABuff_Megatherium_Energized_C_UserConstructionScript_Params
{
};

// Function Buff_Megatherium_Energized.Buff_Megatherium_Energized_C.ExecuteUbergraph_Buff_Megatherium_Energized
struct ABuff_Megatherium_Energized_C_ExecuteUbergraph_Buff_Megatherium_Energized_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
