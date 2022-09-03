#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DinoPackMate_Lionfish_Lion_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_DinoPackMate_Lionfish_Lion.Buff_DinoPackMate_Lionfish_Lion_C.BuffAdjustDamage
struct ABuff_DinoPackMate_Lionfish_Lion_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_DinoPackMate_Lionfish_Lion.Buff_DinoPackMate_Lionfish_Lion_C.UserConstructionScript
struct ABuff_DinoPackMate_Lionfish_Lion_C_UserConstructionScript_Params
{
};

// Function Buff_DinoPackMate_Lionfish_Lion.Buff_DinoPackMate_Lionfish_Lion_C.ReceiveBeginPlay
struct ABuff_DinoPackMate_Lionfish_Lion_C_ReceiveBeginPlay_Params
{
};

// Function Buff_DinoPackMate_Lionfish_Lion.Buff_DinoPackMate_Lionfish_Lion_C.ExecuteUbergraph_Buff_DinoPackMate_Lionfish_Lion
struct ABuff_DinoPackMate_Lionfish_Lion_C_ExecuteUbergraph_Buff_DinoPackMate_Lionfish_Lion_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
