#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Pachyrhino_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C.BPOnFleeEvent
struct APachyrhino_AIController_BP_C_BPOnFleeEvent_Params
{
};

// Function Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C.UserConstructionScript
struct APachyrhino_AIController_BP_C_UserConstructionScript_Params
{
};

// Function Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C.ClearAggroAfterTime
struct APachyrhino_AIController_BP_C_ClearAggroAfterTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      targetWhenCalled;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C.ExecuteUbergraph_Pachyrhino_AIController_BP
struct APachyrhino_AIController_BP_C_ExecuteUbergraph_Pachyrhino_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
