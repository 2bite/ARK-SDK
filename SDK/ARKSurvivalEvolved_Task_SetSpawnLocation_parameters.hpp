#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_SetSpawnLocation_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_SetSpawnLocation.Task_SetSpawnLocation_C.ReceiveExecute
struct UTask_SetSpawnLocation_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_SetSpawnLocation.Task_SetSpawnLocation_C.ExecuteUbergraph_Task_SetSpawnLocation
struct UTask_SetSpawnLocation_C_ExecuteUbergraph_Task_SetSpawnLocation_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
