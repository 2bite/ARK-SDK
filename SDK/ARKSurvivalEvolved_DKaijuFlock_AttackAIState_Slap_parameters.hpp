#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DKaijuFlock_AttackAIState_Slap_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DKaijuFlock_AttackAIState_Slap.DKaijuFlock_AttackAIState_Slap_C.OnBeginEvent
struct UDKaijuFlock_AttackAIState_Slap_C_OnBeginEvent_Params
{
	class UPrimalAIState**                             InParentState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DKaijuFlock_AttackAIState_Slap.DKaijuFlock_AttackAIState_Slap_C.BPOnAttackStart
struct UDKaijuFlock_AttackAIState_Slap_C_BPOnAttackStart_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DKaijuFlock_AttackAIState_Slap.DKaijuFlock_AttackAIState_Slap_C.BPShouldEndAttack
struct UDKaijuFlock_AttackAIState_Slap_C_BPShouldEndAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DKaijuFlock_AttackAIState_Slap.DKaijuFlock_AttackAIState_Slap_C.OnTickEvent
struct UDKaijuFlock_AttackAIState_Slap_C_OnTickEvent_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DKaijuFlock_AttackAIState_Slap.DKaijuFlock_AttackAIState_Slap_C.ExecuteUbergraph_DKaijuFlock_AttackAIState_Slap
struct UDKaijuFlock_AttackAIState_Slap_C_ExecuteUbergraph_DKaijuFlock_AttackAIState_Slap_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
