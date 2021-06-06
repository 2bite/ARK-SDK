#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Megatherium_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Megatherium_AIController_BP.Megatherium_AIController_BP_C.BPOverrideIgnoredByWildDino
struct AMegatherium_AIController_BP_C_BPOverrideIgnoredByWildDino_Params
{
	class AActor**                                     wildDinoToIgnore;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Megatherium_AIController_BP.Megatherium_AIController_BP_C.ChangedAITarget
struct AMegatherium_AIController_BP_C_ChangedAITarget_Params
{
};

// Function Megatherium_AIController_BP.Megatherium_AIController_BP_C.BPGetTargetingDesire
struct AMegatherium_AIController_BP_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Megatherium_AIController_BP.Megatherium_AIController_BP_C.UserConstructionScript
struct AMegatherium_AIController_BP_C_UserConstructionScript_Params
{
};

// Function Megatherium_AIController_BP.Megatherium_AIController_BP_C.ExecuteUbergraph_Megatherium_AIController_BP
struct AMegatherium_AIController_BP_C_ExecuteUbergraph_Megatherium_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
