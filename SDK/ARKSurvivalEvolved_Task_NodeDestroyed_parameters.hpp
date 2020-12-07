#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_NodeDestroyed_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_NodeDestroyed.Task_NodeDestroyed_C.ReceiveExecute
struct UTask_NodeDestroyed_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_NodeDestroyed.Task_NodeDestroyed_C.ReceiveAbort
struct UTask_NodeDestroyed_C_ReceiveAbort_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_NodeDestroyed.Task_NodeDestroyed_C.ExecuteUbergraph_Task_NodeDestroyed
struct UTask_NodeDestroyed_C_ExecuteUbergraph_Task_NodeDestroyed_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
