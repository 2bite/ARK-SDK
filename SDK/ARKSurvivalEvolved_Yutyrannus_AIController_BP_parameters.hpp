#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Yutyrannus_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Yutyrannus_AIController_BP.Yutyrannus_AIController_BP_C.BPGetTargetingDesire
struct AYutyrannus_AIController_BP_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Yutyrannus_AIController_BP.Yutyrannus_AIController_BP_C.ChangedAITarget
struct AYutyrannus_AIController_BP_C_ChangedAITarget_Params
{
};

// Function Yutyrannus_AIController_BP.Yutyrannus_AIController_BP_C.UserConstructionScript
struct AYutyrannus_AIController_BP_C_UserConstructionScript_Params
{
};

// Function Yutyrannus_AIController_BP.Yutyrannus_AIController_BP_C.ExecuteUbergraph_Yutyrannus_AIController_BP
struct AYutyrannus_AIController_BP_C_ExecuteUbergraph_Yutyrannus_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
