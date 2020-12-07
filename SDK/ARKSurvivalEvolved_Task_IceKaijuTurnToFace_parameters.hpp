#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_IceKaijuTurnToFace_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_IceKaijuTurnToFace.Task_IceKaijuTurnToFace_C.ReceiveExecute
struct UTask_IceKaijuTurnToFace_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_IceKaijuTurnToFace.Task_IceKaijuTurnToFace_C.ReceiveTick
struct UTask_IceKaijuTurnToFace_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_IceKaijuTurnToFace.Task_IceKaijuTurnToFace_C.ReceiveAbort
struct UTask_IceKaijuTurnToFace_C_ReceiveAbort_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_IceKaijuTurnToFace.Task_IceKaijuTurnToFace_C.ExecuteUbergraph_Task_IceKaijuTurnToFace
struct UTask_IceKaijuTurnToFace_C_ExecuteUbergraph_Task_IceKaijuTurnToFace_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
