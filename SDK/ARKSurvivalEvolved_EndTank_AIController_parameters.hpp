#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndTank_AIController_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EndTank_AIController.EndTank_AIController_C.BPGetTargetingDesire
struct AEndTank_AIController_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EndTank_AIController.EndTank_AIController_C.UserConstructionScript
struct AEndTank_AIController_C_UserConstructionScript_Params
{
};

// Function EndTank_AIController.EndTank_AIController_C.ExecuteUbergraph_EndTank_AIController
struct AEndTank_AIController_C_ExecuteUbergraph_EndTank_AIController_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
