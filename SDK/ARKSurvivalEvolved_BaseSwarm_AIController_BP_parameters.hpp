#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BaseSwarm_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BaseSwarm_AIController_BP.BaseSwarm_AIController_BP_C.GetRandomWanderPoint
struct ABaseSwarm_AIController_BP_C_GetRandomWanderPoint_Params
{
	struct FVector                                     Point;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BaseSwarm_AIController_BP.BaseSwarm_AIController_BP_C.ChangedAITarget
struct ABaseSwarm_AIController_BP_C_ChangedAITarget_Params
{
};

// Function BaseSwarm_AIController_BP.BaseSwarm_AIController_BP_C.UserConstructionScript
struct ABaseSwarm_AIController_BP_C_UserConstructionScript_Params
{
};

// Function BaseSwarm_AIController_BP.BaseSwarm_AIController_BP_C.ReceiveBeginPlay
struct ABaseSwarm_AIController_BP_C_ReceiveBeginPlay_Params
{
};

// Function BaseSwarm_AIController_BP.BaseSwarm_AIController_BP_C.ReceiveTick
struct ABaseSwarm_AIController_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseSwarm_AIController_BP.BaseSwarm_AIController_BP_C.ExecuteUbergraph_BaseSwarm_AIController_BP
struct ABaseSwarm_AIController_BP_C_ExecuteUbergraph_BaseSwarm_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
