#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_ShakePlayersOff_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_ShakePlayersOff.Task_ShakePlayersOff_C.ReceiveExecute
struct UTask_ShakePlayersOff_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_ShakePlayersOff.Task_ShakePlayersOff_C.ReceiveAbort
struct UTask_ShakePlayersOff_C_ReceiveAbort_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_ShakePlayersOff.Task_ShakePlayersOff_C.ExecuteUbergraph_Task_ShakePlayersOff
struct UTask_ShakePlayersOff_C_ExecuteUbergraph_Task_ShakePlayersOff_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
