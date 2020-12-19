#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_Scout_Dash_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackState_Scout_Dash.DinoAttackState_Scout_Dash_C.BPShouldEndAttack
struct UDinoAttackState_Scout_Dash_C_BPShouldEndAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackState_Scout_Dash.DinoAttackState_Scout_Dash_C.OnBeginEvent
struct UDinoAttackState_Scout_Dash_C_OnBeginEvent_Params
{
	class UPrimalAIState**                             InParentState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_Scout_Dash.DinoAttackState_Scout_Dash_C.IsAIControlled
struct UDinoAttackState_Scout_Dash_C_IsAIControlled_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_Scout_Dash.DinoAttackState_Scout_Dash_C.ExecuteUbergraph_DinoAttackState_Scout_Dash
struct UDinoAttackState_Scout_Dash_C_ExecuteUbergraph_DinoAttackState_Scout_Dash_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
