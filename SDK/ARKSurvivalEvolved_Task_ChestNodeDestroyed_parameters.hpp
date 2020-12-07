#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_ChestNodeDestroyed_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_ChestNodeDestroyed.Task_ChestNodeDestroyed_C.ReceiveExecute
struct UTask_ChestNodeDestroyed_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_ChestNodeDestroyed.Task_ChestNodeDestroyed_C.ReceiveAbort
struct UTask_ChestNodeDestroyed_C_ReceiveAbort_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_ChestNodeDestroyed.Task_ChestNodeDestroyed_C.ExecuteUbergraph_Task_ChestNodeDestroyed
struct UTask_ChestNodeDestroyed_C_ExecuteUbergraph_Task_ChestNodeDestroyed_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
