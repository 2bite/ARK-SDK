#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Titan_AI_Blueprint_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Titan_AI_Blueprint.Titan_AI_Blueprint_C.BPGetTargetingDesire
struct ATitan_AI_Blueprint_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Titan_AI_Blueprint.Titan_AI_Blueprint_C.UserConstructionScript
struct ATitan_AI_Blueprint_C_UserConstructionScript_Params
{
};

// Function Titan_AI_Blueprint.Titan_AI_Blueprint_C.ExecuteUbergraph_Titan_AI_Blueprint
struct ATitan_AI_Blueprint_C_ExecuteUbergraph_Titan_AI_Blueprint_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
