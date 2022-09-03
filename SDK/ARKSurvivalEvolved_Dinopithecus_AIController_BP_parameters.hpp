#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dinopithecus_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Dinopithecus_AIController_BP.Dinopithecus_AIController_BP_C.BPGetTargetingDesire
struct ADinopithecus_AIController_BP_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_AIController_BP.Dinopithecus_AIController_BP_C.BPNotifyTargetSet
struct ADinopithecus_AIController_BP_C_BPNotifyTargetSet_Params
{
};

// Function Dinopithecus_AIController_BP.Dinopithecus_AIController_BP_C.UserConstructionScript
struct ADinopithecus_AIController_BP_C_UserConstructionScript_Params
{
};

// Function Dinopithecus_AIController_BP.Dinopithecus_AIController_BP_C.ExecuteUbergraph_Dinopithecus_AIController_BP
struct ADinopithecus_AIController_BP_C_ExecuteUbergraph_Dinopithecus_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
