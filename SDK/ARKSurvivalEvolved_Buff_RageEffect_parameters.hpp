#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RageEffect_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_RageEffect.Buff_RageEffect_C.CanEnrageActor
struct ABuff_RageEffect_C_CanEnrageActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canEnrage;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RageEffect.Buff_RageEffect_C.BPExcludeAoEActor
struct ABuff_RageEffect_C_BPExcludeAoEActor_Params
{
	class AActor**                                     ActorToConsider;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RageEffect.Buff_RageEffect_C.UserConstructionScript
struct ABuff_RageEffect_C_UserConstructionScript_Params
{
};

// Function Buff_RageEffect.Buff_RageEffect_C.ReceiveBeginPlay
struct ABuff_RageEffect_C_ReceiveBeginPlay_Params
{
};

// Function Buff_RageEffect.Buff_RageEffect_C.ExecuteUbergraph_Buff_RageEffect
struct ABuff_RageEffect_C_ExecuteUbergraph_Buff_RageEffect_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
