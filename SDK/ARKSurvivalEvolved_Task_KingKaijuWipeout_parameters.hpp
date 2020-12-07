#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_KingKaijuWipeout_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_KingKaijuWipeout.Task_KingKaijuWipeout_C.ReceiveExecute
struct UTask_KingKaijuWipeout_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_KingKaijuWipeout.Task_KingKaijuWipeout_C.ReceiveTick
struct UTask_KingKaijuWipeout_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_KingKaijuWipeout.Task_KingKaijuWipeout_C.ReceiveAbort
struct UTask_KingKaijuWipeout_C_ReceiveAbort_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_KingKaijuWipeout.Task_KingKaijuWipeout_C.ExecuteUbergraph_Task_KingKaijuWipeout
struct UTask_KingKaijuWipeout_C_ExecuteUbergraph_Task_KingKaijuWipeout_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
