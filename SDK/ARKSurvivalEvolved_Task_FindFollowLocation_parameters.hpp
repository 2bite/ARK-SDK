#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_FindFollowLocation_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_FindFollowLocation.Task_FindFollowLocation_C.ReceiveExecute
struct UTask_FindFollowLocation_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_FindFollowLocation.Task_FindFollowLocation_C.ExecuteUbergraph_Task_FindFollowLocation
struct UTask_FindFollowLocation_C_ExecuteUbergraph_Task_FindFollowLocation_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
