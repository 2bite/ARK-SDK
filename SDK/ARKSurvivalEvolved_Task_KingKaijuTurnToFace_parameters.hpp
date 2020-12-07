#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_KingKaijuTurnToFace_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_KingKaijuTurnToFace.Task_KingKaijuTurnToFace_C.TraceForChargeLocation
struct UTask_KingKaijuTurnToFace_C_TraceForChargeLocation_Params
{
	bool                                               FoundLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Task_KingKaijuTurnToFace.Task_KingKaijuTurnToFace_C.ReceiveExecute
struct UTask_KingKaijuTurnToFace_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_KingKaijuTurnToFace.Task_KingKaijuTurnToFace_C.ReceiveTick
struct UTask_KingKaijuTurnToFace_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_KingKaijuTurnToFace.Task_KingKaijuTurnToFace_C.ReceiveAbort
struct UTask_KingKaijuTurnToFace_C_ReceiveAbort_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_KingKaijuTurnToFace.Task_KingKaijuTurnToFace_C.ExecuteUbergraph_Task_KingKaijuTurnToFace
struct UTask_KingKaijuTurnToFace_C_ExecuteUbergraph_Task_KingKaijuTurnToFace_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
