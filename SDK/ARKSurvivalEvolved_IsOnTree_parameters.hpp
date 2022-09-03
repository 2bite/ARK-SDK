#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsOnTree_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IsOnTree.IsOnTree_C.ReceiveConditionCheck
struct UIsOnTree_C_ReceiveConditionCheck_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IsOnTree.IsOnTree_C.ExecuteUbergraph_IsOnTree
struct UIsOnTree_C_ExecuteUbergraph_IsOnTree_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
