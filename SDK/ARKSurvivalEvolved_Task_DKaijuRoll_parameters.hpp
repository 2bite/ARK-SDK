#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_DKaijuRoll_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_DKaijuRoll.Task_DKaijuRoll_C.ReceiveExecute
struct UTask_DKaijuRoll_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_DKaijuRoll.Task_DKaijuRoll_C.ReceiveAbort
struct UTask_DKaijuRoll_C_ReceiveAbort_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_DKaijuRoll.Task_DKaijuRoll_C.ExecuteUbergraph_Task_DKaijuRoll
struct UTask_DKaijuRoll_C_ExecuteUbergraph_Task_DKaijuRoll_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
