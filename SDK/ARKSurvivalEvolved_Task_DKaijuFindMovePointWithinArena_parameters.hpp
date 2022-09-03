#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_DKaijuFindMovePointWithinArena_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C.Get Random PointNoMin
struct UTask_DKaijuFindMovePointWithinArena_C_Get_Random_PointNoMin_Params
{
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C.Get Random PointMin
struct UTask_DKaijuFindMovePointWithinArena_C_Get_Random_PointMin_Params
{
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               DidNotFindLoc;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C.ReceiveExecute
struct UTask_DKaijuFindMovePointWithinArena_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C.ExecuteUbergraph_Task_DKaijuFindMovePointWithinArena
struct UTask_DKaijuFindMovePointWithinArena_C_ExecuteUbergraph_Task_DKaijuFindMovePointWithinArena_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
