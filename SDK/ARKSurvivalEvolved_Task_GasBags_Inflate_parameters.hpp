#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_GasBags_Inflate_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_GasBags_Inflate.Task_GasBags_Inflate_C.ReceiveExecute
struct UTask_GasBags_Inflate_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_GasBags_Inflate.Task_GasBags_Inflate_C.ReceiveTick
struct UTask_GasBags_Inflate_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_GasBags_Inflate.Task_GasBags_Inflate_C.ReceiveAbort
struct UTask_GasBags_Inflate_C_ReceiveAbort_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_GasBags_Inflate.Task_GasBags_Inflate_C.ExecuteUbergraph_Task_GasBags_Inflate
struct UTask_GasBags_Inflate_C_ExecuteUbergraph_Task_GasBags_Inflate_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
