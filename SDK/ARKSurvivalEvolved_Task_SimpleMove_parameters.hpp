#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_SimpleMove_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_SimpleMove.Task_SimpleMove_C.ReceiveExecute
struct UTask_SimpleMove_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_SimpleMove.Task_SimpleMove_C.ReceiveTick
struct UTask_SimpleMove_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_SimpleMove.Task_SimpleMove_C.ExecuteUbergraph_Task_SimpleMove
struct UTask_SimpleMove_C_ExecuteUbergraph_Task_SimpleMove_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_SimpleMove.Task_SimpleMove_C.MoveCompleted__DelegateSignature
struct UTask_SimpleMove_C_MoveCompleted__DelegateSignature_Params
{
	TEnumAsByte<EPathFollowingRequestResult>           NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
