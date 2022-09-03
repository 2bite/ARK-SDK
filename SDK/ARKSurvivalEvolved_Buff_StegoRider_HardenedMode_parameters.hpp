#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_StegoRider_HardenedMode_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_StegoRider_HardenedMode.Buff_StegoRider_HardenedMode_C.BuffAdjustDamage
struct ABuff_StegoRider_HardenedMode_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_StegoRider_HardenedMode.Buff_StegoRider_HardenedMode_C.UserConstructionScript
struct ABuff_StegoRider_HardenedMode_C_UserConstructionScript_Params
{
};

// Function Buff_StegoRider_HardenedMode.Buff_StegoRider_HardenedMode_C.ExecuteUbergraph_Buff_StegoRider_HardenedMode
struct ABuff_StegoRider_HardenedMode_C_ExecuteUbergraph_Buff_StegoRider_HardenedMode_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
