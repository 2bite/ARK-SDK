#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Microraptor_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Microraptor_AIController_BP.Microraptor_AIController_BP_C.Is Target Good
struct AMicroraptor_AIController_BP_C_Is_Target_Good_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AMicroraptor_Character_BP_C*                 Microraptor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Microraptor_AIController_BP.Microraptor_AIController_BP_C.BPGetTargetingDesire
struct AMicroraptor_AIController_BP_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Microraptor_AIController_BP.Microraptor_AIController_BP_C.UserConstructionScript
struct AMicroraptor_AIController_BP_C_UserConstructionScript_Params
{
};

// Function Microraptor_AIController_BP.Microraptor_AIController_BP_C.ExecuteUbergraph_Microraptor_AIController_BP
struct AMicroraptor_AIController_BP_C_ExecuteUbergraph_Microraptor_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
