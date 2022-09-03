#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Amargasaurus_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Amargasaurus_AIController_BP.Amargasaurus_AIController_BP_C.BPGetTargetingDesire
struct AAmargasaurus_AIController_BP_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Amargasaurus_AIController_BP.Amargasaurus_AIController_BP_C.UserConstructionScript
struct AAmargasaurus_AIController_BP_C_UserConstructionScript_Params
{
};

// Function Amargasaurus_AIController_BP.Amargasaurus_AIController_BP_C.ExecuteUbergraph_Amargasaurus_AIController_BP
struct AAmargasaurus_AIController_BP_C_ExecuteUbergraph_Amargasaurus_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
