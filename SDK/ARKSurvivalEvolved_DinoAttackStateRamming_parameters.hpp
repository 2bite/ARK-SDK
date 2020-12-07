#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateRamming_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackStateRamming.DinoAttackStateRamming_C.OnTickEvent
struct UDinoAttackStateRamming_C_OnTickEvent_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateRamming.DinoAttackStateRamming_C.BPCanAttack
struct UDinoAttackStateRamming_C_BPCanAttack_Params
{
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackStateRamming.DinoAttackStateRamming_C.OnEndEvent
struct UDinoAttackStateRamming_C_OnEndEvent_Params
{
};

// Function DinoAttackStateRamming.DinoAttackStateRamming_C.ExecuteUbergraph_DinoAttackStateRamming
struct UDinoAttackStateRamming_C_ExecuteUbergraph_DinoAttackStateRamming_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
