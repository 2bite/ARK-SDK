#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_FKaijuProtect_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_FKaijuProtect.Task_FKaijuProtect_C.ReceiveExecute
struct UTask_FKaijuProtect_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_FKaijuProtect.Task_FKaijuProtect_C.ReceiveAbort
struct UTask_FKaijuProtect_C_ReceiveAbort_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_FKaijuProtect.Task_FKaijuProtect_C.ExecuteUbergraph_Task_FKaijuProtect
struct UTask_FKaijuProtect_C_ExecuteUbergraph_Task_FKaijuProtect_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
