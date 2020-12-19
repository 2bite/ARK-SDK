#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AIStateWanderOnLand_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AIStateWanderOnLand.AIStateWanderOnLand_C.FindTargetAreas
struct UAIStateWanderOnLand_C_FindTargetAreas_Params
{
	bool                                               found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AIStateWanderOnLand.AIStateWanderOnLand_C.OnCanUseStateEvent
struct UAIStateWanderOnLand_C_OnCanUseStateEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIStateWanderOnLand.AIStateWanderOnLand_C.OnEndEvent
struct UAIStateWanderOnLand_C_OnEndEvent_Params
{
};

// Function AIStateWanderOnLand.AIStateWanderOnLand_C.OnTickEvent
struct UAIStateWanderOnLand_C_OnTickEvent_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIStateWanderOnLand.AIStateWanderOnLand_C.UpgradePawnAcceleration
struct UAIStateWanderOnLand_C_UpgradePawnAcceleration_Params
{
	bool                                               Upgrade;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIStateWanderOnLand.AIStateWanderOnLand_C.GetRandomTarget
struct UAIStateWanderOnLand_C_GetRandomTarget_Params
{
	class ATargetArea*                                 returnTarget;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AIStateWanderOnLand.AIStateWanderOnLand_C.OnBeginEvent
struct UAIStateWanderOnLand_C_OnBeginEvent_Params
{
	class UPrimalAIState**                             InParentState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIStateWanderOnLand.AIStateWanderOnLand_C.ExecuteUbergraph_AIStateWanderOnLand
struct UAIStateWanderOnLand_C_ExecuteUbergraph_AIStateWanderOnLand_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
