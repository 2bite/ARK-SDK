#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_Scout_Dash_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_Scout_Dash.Task_Scout_Dash_C.ReceiveTick
struct UTask_Scout_Dash_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_Scout_Dash.Task_Scout_Dash_C.ReceiveExecute
struct UTask_Scout_Dash_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_Scout_Dash.Task_Scout_Dash_C.ExecuteUbergraph_Task_Scout_Dash
struct UTask_Scout_Dash_C_ExecuteUbergraph_Task_Scout_Dash_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
