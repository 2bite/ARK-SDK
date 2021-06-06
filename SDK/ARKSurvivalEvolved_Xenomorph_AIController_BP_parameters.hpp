#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Xenomorph_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Xenomorph_AIController_BP.Xenomorph_AIController_BP_C.ShouldIgnoreAggression
struct AXenomorph_AIController_BP_C_ShouldIgnoreAggression_Params
{
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_AIController_BP.Xenomorph_AIController_BP_C.BPGetTargetingDesire
struct AXenomorph_AIController_BP_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_AIController_BP.Xenomorph_AIController_BP_C.UserConstructionScript
struct AXenomorph_AIController_BP_C_UserConstructionScript_Params
{
};

// Function Xenomorph_AIController_BP.Xenomorph_AIController_BP_C.ReceiveBeginPlay
struct AXenomorph_AIController_BP_C_ReceiveBeginPlay_Params
{
};

// Function Xenomorph_AIController_BP.Xenomorph_AIController_BP_C.ExecuteUbergraph_Xenomorph_AIController_BP
struct AXenomorph_AIController_BP_C_ExecuteUbergraph_Xenomorph_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
