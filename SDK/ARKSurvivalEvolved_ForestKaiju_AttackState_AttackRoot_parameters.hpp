#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ForestKaiju_AttackState_AttackRoot_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.OnEndEvent
struct UForestKaiju_AttackState_AttackRoot_C_OnEndEvent_Params
{
};

// Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.OnBeginEvent
struct UForestKaiju_AttackState_AttackRoot_C_OnBeginEvent_Params
{
	class UPrimalAIState**                             InParentState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.InitVars
struct UForestKaiju_AttackState_AttackRoot_C_InitVars_Params
{
};

// Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.BPOnClearAttackState
struct UForestKaiju_AttackState_AttackRoot_C_BPOnClearAttackState_Params
{
};

// Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.BPShouldEndAttack
struct UForestKaiju_AttackState_AttackRoot_C_BPShouldEndAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.OnTickEvent
struct UForestKaiju_AttackState_AttackRoot_C_OnTickEvent_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.BPOnAttackStart
struct UForestKaiju_AttackState_AttackRoot_C_BPOnAttackStart_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.ExecuteRoot
struct UForestKaiju_AttackState_AttackRoot_C_ExecuteRoot_Params
{
};

// Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.Delayed_ExecuteRoot
struct UForestKaiju_AttackState_AttackRoot_C_Delayed_ExecuteRoot_Params
{
};

// Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.EndState
struct UForestKaiju_AttackState_AttackRoot_C_EndState_Params
{
};

// Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.ExecuteUbergraph_ForestKaiju_AttackState_AttackRoot
struct UForestKaiju_AttackState_AttackRoot_C_ExecuteUbergraph_ForestKaiju_AttackState_AttackRoot_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
