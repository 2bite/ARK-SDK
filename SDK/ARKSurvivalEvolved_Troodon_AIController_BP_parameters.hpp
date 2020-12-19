#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Troodon_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Troodon_AIController_BP.Troodon_AIController_BP_C.BPGetTargetingDesire
struct ATroodon_AIController_BP_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Troodon_AIController_BP.Troodon_AIController_BP_C.UserConstructionScript
struct ATroodon_AIController_BP_C_UserConstructionScript_Params
{
};

// Function Troodon_AIController_BP.Troodon_AIController_BP_C.ExecuteUbergraph_Troodon_AIController_BP
struct ATroodon_AIController_BP_C_ExecuteUbergraph_Troodon_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
