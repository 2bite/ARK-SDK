#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SummonerTumor_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_SummonerTumor.Buff_SummonerTumor_C.BPDeactivated
struct ABuff_SummonerTumor_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SummonerTumor.Buff_SummonerTumor_C.BuffTickServer
struct ABuff_SummonerTumor_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SummonerTumor.Buff_SummonerTumor_C.BPExcludeAoEActor
struct ABuff_SummonerTumor_C_BPExcludeAoEActor_Params
{
	class AActor**                                     ActorToConsider;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_SummonerTumor.Buff_SummonerTumor_C.UserConstructionScript
struct ABuff_SummonerTumor_C_UserConstructionScript_Params
{
};

// Function Buff_SummonerTumor.Buff_SummonerTumor_C.ExecuteUbergraph_Buff_SummonerTumor
struct ABuff_SummonerTumor_C_ExecuteUbergraph_Buff_SummonerTumor_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
