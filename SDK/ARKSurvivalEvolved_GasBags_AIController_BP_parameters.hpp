#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GasBags_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GasBags_AIController_BP.GasBags_AIController_BP_C.ReceiveTick
struct AGasBags_AIController_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_AIController_BP.GasBags_AIController_BP_C.TickCheckDangerLevels
struct AGasBags_AIController_BP_C_TickCheckDangerLevels_Params
{
};

// Function GasBags_AIController_BP.GasBags_AIController_BP_C.GetDangerLevel
struct AGasBags_AIController_BP_C_GetDangerLevel_Params
{
	float                                              Danger;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_AIController_BP.GasBags_AIController_BP_C.UserConstructionScript
struct AGasBags_AIController_BP_C_UserConstructionScript_Params
{
};

// Function GasBags_AIController_BP.GasBags_AIController_BP_C.ExecuteUbergraph_GasBags_AIController_BP
struct AGasBags_AIController_BP_C_ExecuteUbergraph_GasBags_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
