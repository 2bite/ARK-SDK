#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ChalicoThrowRockState_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ChalicoThrowRockState.ChalicoThrowRockState_C.BPRangedAttack
struct UChalicoThrowRockState_C_BPRangedAttack_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     TargetVelocity;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ChalicoThrowRockState.ChalicoThrowRockState_C.ExecuteUbergraph_ChalicoThrowRockState
struct UChalicoThrowRockState_C_ExecuteUbergraph_ChalicoThrowRockState_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
