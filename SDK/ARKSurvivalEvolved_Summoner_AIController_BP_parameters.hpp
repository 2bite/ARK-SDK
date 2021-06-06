#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Summoner_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Summoner_AIController_BP.Summoner_AIController_BP_C.BPNotifyTargetSet
struct ASummoner_AIController_BP_C_BPNotifyTargetSet_Params
{
};

// Function Summoner_AIController_BP.Summoner_AIController_BP_C.BPGetTargetingDesire
struct ASummoner_AIController_BP_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Summoner_AIController_BP.Summoner_AIController_BP_C.UserConstructionScript
struct ASummoner_AIController_BP_C_UserConstructionScript_Params
{
};

// Function Summoner_AIController_BP.Summoner_AIController_BP_C.ExecuteUbergraph_Summoner_AIController_BP
struct ASummoner_AIController_BP_C_ExecuteUbergraph_Summoner_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
