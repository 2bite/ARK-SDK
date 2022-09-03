#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsFlyingPhysics_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IsFlyingPhysics.IsFlyingPhysics_C.ReceiveConditionCheck
struct UIsFlyingPhysics_C_ReceiveConditionCheck_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IsFlyingPhysics.IsFlyingPhysics_C.ExecuteUbergraph_IsFlyingPhysics
struct UIsFlyingPhysics_C_ExecuteUbergraph_IsFlyingPhysics_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
