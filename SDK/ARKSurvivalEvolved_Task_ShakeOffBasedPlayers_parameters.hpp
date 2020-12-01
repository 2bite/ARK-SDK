#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_ShakeOffBasedPlayers_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_ShakeOffBasedPlayers.Task_ShakeOffBasedPlayers_C.MaybeCutGrapplingHooks
struct UTask_ShakeOffBasedPlayers_C_MaybeCutGrapplingHooks_Params
{
};

// Function Task_ShakeOffBasedPlayers.Task_ShakeOffBasedPlayers_C.ReceiveExecute
struct UTask_ShakeOffBasedPlayers_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_ShakeOffBasedPlayers.Task_ShakeOffBasedPlayers_C.ReceiveAbort
struct UTask_ShakeOffBasedPlayers_C_ReceiveAbort_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_ShakeOffBasedPlayers.Task_ShakeOffBasedPlayers_C.ExecuteUbergraph_Task_ShakeOffBasedPlayers
struct UTask_ShakeOffBasedPlayers_C_ExecuteUbergraph_Task_ShakeOffBasedPlayers_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
