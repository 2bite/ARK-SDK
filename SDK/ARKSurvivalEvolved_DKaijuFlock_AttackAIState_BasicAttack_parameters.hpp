#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DKaijuFlock_AttackAIState_BasicAttack_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DKaijuFlock_AttackAIState_BasicAttack.DKaijuFlock_AttackAIState_BasicAttack_C.OnBeginEvent
struct UDKaijuFlock_AttackAIState_BasicAttack_C_OnBeginEvent_Params
{
	class UPrimalAIState**                             InParentState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DKaijuFlock_AttackAIState_BasicAttack.DKaijuFlock_AttackAIState_BasicAttack_C.BPOnAttackStart
struct UDKaijuFlock_AttackAIState_BasicAttack_C_BPOnAttackStart_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DKaijuFlock_AttackAIState_BasicAttack.DKaijuFlock_AttackAIState_BasicAttack_C.BPShouldEndAttack
struct UDKaijuFlock_AttackAIState_BasicAttack_C_BPShouldEndAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DKaijuFlock_AttackAIState_BasicAttack.DKaijuFlock_AttackAIState_BasicAttack_C.OnTickEvent
struct UDKaijuFlock_AttackAIState_BasicAttack_C_OnTickEvent_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DKaijuFlock_AttackAIState_BasicAttack.DKaijuFlock_AttackAIState_BasicAttack_C.ExecuteUbergraph_DKaijuFlock_AttackAIState_BasicAttack
struct UDKaijuFlock_AttackAIState_BasicAttack_C_ExecuteUbergraph_DKaijuFlock_AttackAIState_BasicAttack_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
