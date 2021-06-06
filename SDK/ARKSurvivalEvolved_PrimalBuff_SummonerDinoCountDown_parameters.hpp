#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalBuff_SummonerDinoCountDown_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.BuffAdjustDamage
struct APrimalBuff_SummonerDinoCountDown_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.ClearImmobilization
struct APrimalBuff_SummonerDinoCountDown_C_ClearImmobilization_Params
{
};

// Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.SetSuicideTimer
struct APrimalBuff_SummonerDinoCountDown_C_SetSuicideTimer_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.Suicide
struct APrimalBuff_SummonerDinoCountDown_C_Suicide_Params
{
};

// Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.BPSetupForInstigator
struct APrimalBuff_SummonerDinoCountDown_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.UserConstructionScript
struct APrimalBuff_SummonerDinoCountDown_C_UserConstructionScript_Params
{
};

// Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.OnInstigatorDied
struct APrimalBuff_SummonerDinoCountDown_C_OnInstigatorDied_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C.ExecuteUbergraph_PrimalBuff_SummonerDinoCountDown
struct APrimalBuff_SummonerDinoCountDown_C_ExecuteUbergraph_PrimalBuff_SummonerDinoCountDown_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
