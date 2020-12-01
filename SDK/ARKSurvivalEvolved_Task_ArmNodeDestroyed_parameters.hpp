#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_ArmNodeDestroyed_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_ArmNodeDestroyed.Task_ArmNodeDestroyed_C.ReceiveExecute
struct UTask_ArmNodeDestroyed_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_ArmNodeDestroyed.Task_ArmNodeDestroyed_C.ReceiveAbort
struct UTask_ArmNodeDestroyed_C_ReceiveAbort_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_ArmNodeDestroyed.Task_ArmNodeDestroyed_C.ExecuteUbergraph_Task_ArmNodeDestroyed
struct UTask_ArmNodeDestroyed_C_ExecuteUbergraph_Task_ArmNodeDestroyed_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
