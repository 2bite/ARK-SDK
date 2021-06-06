#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceBreathAttackStateRanged_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IceBreathAttackStateRanged.IceBreathAttackStateRanged_C.BPShouldEndAttack
struct UIceBreathAttackStateRanged_C_BPShouldEndAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceBreathAttackStateRanged.IceBreathAttackStateRanged_C.OnEndEvent
struct UIceBreathAttackStateRanged_C_OnEndEvent_Params
{
};

// Function IceBreathAttackStateRanged.IceBreathAttackStateRanged_C.BPCanAttack
struct UIceBreathAttackStateRanged_C_BPCanAttack_Params
{
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceBreathAttackStateRanged.IceBreathAttackStateRanged_C.OnTickEvent
struct UIceBreathAttackStateRanged_C_OnTickEvent_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceBreathAttackStateRanged.IceBreathAttackStateRanged_C.OnBeginEvent
struct UIceBreathAttackStateRanged_C_OnBeginEvent_Params
{
	class UPrimalAIState**                             InParentState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceBreathAttackStateRanged.IceBreathAttackStateRanged_C.ExecuteUbergraph_IceBreathAttackStateRanged
struct UIceBreathAttackStateRanged_C_ExecuteUbergraph_IceBreathAttackStateRanged_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
