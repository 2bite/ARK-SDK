#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_EnforcerBlink_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.BPDoAttack
struct UDinoAttackState_EnforcerBlink_C_BPDoAttack_Params
{
};

// Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.OnEndEvent
struct UDinoAttackState_EnforcerBlink_C_OnEndEvent_Params
{
};

// Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.OnBeginEvent
struct UDinoAttackState_EnforcerBlink_C_OnBeginEvent_Params
{
	class UPrimalAIState**                             InParentState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.BPShouldEndAttack
struct UDinoAttackState_EnforcerBlink_C_BPShouldEndAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.ExecuteUbergraph_DinoAttackState_EnforcerBlink
struct UDinoAttackState_EnforcerBlink_C_ExecuteUbergraph_DinoAttackState_EnforcerBlink_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
