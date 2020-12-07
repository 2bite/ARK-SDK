#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FindEnemyTargetConditional_SRV_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FindEnemyTargetConditional_SRV.FindEnemyTargetConditional_SRV_C.ReceiveTick
struct UFindEnemyTargetConditional_SRV_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FindEnemyTargetConditional_SRV.FindEnemyTargetConditional_SRV_C.ExecuteUbergraph_FindEnemyTargetConditional_SRV
struct UFindEnemyTargetConditional_SRV_C_ExecuteUbergraph_FindEnemyTargetConditional_SRV_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
