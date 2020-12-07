#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_Enforcer_BlinkToTarget_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_Enforcer_BlinkToTarget.Task_Enforcer_BlinkToTarget_C.ReceiveExecute
struct UTask_Enforcer_BlinkToTarget_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_Enforcer_BlinkToTarget.Task_Enforcer_BlinkToTarget_C.ReceiveTick
struct UTask_Enforcer_BlinkToTarget_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_Enforcer_BlinkToTarget.Task_Enforcer_BlinkToTarget_C.ExecuteUbergraph_Task_Enforcer_BlinkToTarget
struct UTask_Enforcer_BlinkToTarget_C_ExecuteUbergraph_Task_Enforcer_BlinkToTarget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
