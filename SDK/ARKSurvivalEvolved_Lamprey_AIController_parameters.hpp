#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Lamprey_AIController_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lamprey_AIController.Lamprey_AIController_C.BPGetTargetingDesire
struct ALamprey_AIController_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Lamprey_AIController.Lamprey_AIController_C.UserConstructionScript
struct ALamprey_AIController_C_UserConstructionScript_Params
{
};

// Function Lamprey_AIController.Lamprey_AIController_C.ExecuteUbergraph_Lamprey_AIController
struct ALamprey_AIController_C_ExecuteUbergraph_Lamprey_AIController_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
