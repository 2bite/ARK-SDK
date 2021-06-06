#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsWithinDistanceOfTree_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IsWithinDistanceOfTree.IsWithinDistanceOfTree_C.ReceiveTick
struct UIsWithinDistanceOfTree_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IsWithinDistanceOfTree.IsWithinDistanceOfTree_C.ExecuteUbergraph_IsWithinDistanceOfTree
struct UIsWithinDistanceOfTree_C_ExecuteUbergraph_IsWithinDistanceOfTree_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
