#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_Gacha_FinishEating_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_Gacha_FinishEating.Task_Gacha_FinishEating_C.ReceiveTick
struct UTask_Gacha_FinishEating_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_Gacha_FinishEating.Task_Gacha_FinishEating_C.ReceiveExecute
struct UTask_Gacha_FinishEating_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_Gacha_FinishEating.Task_Gacha_FinishEating_C.ExecuteUbergraph_Task_Gacha_FinishEating
struct UTask_Gacha_FinishEating_C_ExecuteUbergraph_Task_Gacha_FinishEating_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
