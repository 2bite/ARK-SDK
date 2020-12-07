#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_KingKaijuHordeMode_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_KingKaijuHordeMode.Task_KingKaijuHordeMode_C.FindFurthestElementNodeSpawnLoc
struct UTask_KingKaijuHordeMode_C_FindFurthestElementNodeSpawnLoc_Params
{
	struct FVector                                     Loc;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Task_KingKaijuHordeMode.Task_KingKaijuHordeMode_C.ReceiveExecute
struct UTask_KingKaijuHordeMode_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_KingKaijuHordeMode.Task_KingKaijuHordeMode_C.ReceiveTick
struct UTask_KingKaijuHordeMode_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_KingKaijuHordeMode.Task_KingKaijuHordeMode_C.ExecuteUbergraph_Task_KingKaijuHordeMode
struct UTask_KingKaijuHordeMode_C_ExecuteUbergraph_Task_KingKaijuHordeMode_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
