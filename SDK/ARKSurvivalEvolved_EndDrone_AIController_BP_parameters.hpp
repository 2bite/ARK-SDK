#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndDrone_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EndDrone_AIController_BP.EndDrone_AIController_BP_C.BPGetTargetingDesire
struct AEndDrone_AIController_BP_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EndDrone_AIController_BP.EndDrone_AIController_BP_C.UserConstructionScript
struct AEndDrone_AIController_BP_C_UserConstructionScript_Params
{
};

// Function EndDrone_AIController_BP.EndDrone_AIController_BP_C.ReceiveBeginPlay
struct AEndDrone_AIController_BP_C_ReceiveBeginPlay_Params
{
};

// Function EndDrone_AIController_BP.EndDrone_AIController_BP_C.ExecuteUbergraph_EndDrone_AIController_BP
struct AEndDrone_AIController_BP_C_ExecuteUbergraph_EndDrone_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
