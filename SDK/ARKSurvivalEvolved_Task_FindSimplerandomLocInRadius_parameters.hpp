#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_FindSimplerandomLocInRadius_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_FindSimplerandomLocInRadius.Task_FindSimplerandomLocInRadius_C.ReceiveTick
struct UTask_FindSimplerandomLocInRadius_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_FindSimplerandomLocInRadius.Task_FindSimplerandomLocInRadius_C.ExecuteUbergraph_Task_FindSimplerandomLocInRadius
struct UTask_FindSimplerandomLocInRadius_C_ExecuteUbergraph_Task_FindSimplerandomLocInRadius_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
