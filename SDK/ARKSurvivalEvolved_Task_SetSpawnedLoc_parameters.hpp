#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_SetSpawnedLoc_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_SetSpawnedLoc.Task_SetSpawnedLoc_C.ReceiveExecute
struct UTask_SetSpawnedLoc_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_SetSpawnedLoc.Task_SetSpawnedLoc_C.ExecuteUbergraph_Task_SetSpawnedLoc
struct UTask_SetSpawnedLoc_C_ExecuteUbergraph_Task_SetSpawnedLoc_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
