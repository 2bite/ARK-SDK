#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Desmodus_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Desmodus_AIController_BP.Desmodus_AIController_BP_C.BPGetTargetingDesire
struct ADesmodus_AIController_BP_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Desmodus_AIController_BP.Desmodus_AIController_BP_C.UserConstructionScript
struct ADesmodus_AIController_BP_C_UserConstructionScript_Params
{
};

// Function Desmodus_AIController_BP.Desmodus_AIController_BP_C.ExecuteUbergraph_Desmodus_AIController_BP
struct ADesmodus_AIController_BP_C_ExecuteUbergraph_Desmodus_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
