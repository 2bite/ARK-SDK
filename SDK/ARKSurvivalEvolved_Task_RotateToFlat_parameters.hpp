#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_RotateToFlat_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_RotateToFlat.Task_RotateToFlat_C.ReceiveExecute
struct UTask_RotateToFlat_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_RotateToFlat.Task_RotateToFlat_C.ReceiveAbort
struct UTask_RotateToFlat_C_ReceiveAbort_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_RotateToFlat.Task_RotateToFlat_C.ExecuteUbergraph_Task_RotateToFlat
struct UTask_RotateToFlat_C_ExecuteUbergraph_Task_RotateToFlat_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
