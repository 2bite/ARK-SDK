#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_IceJumper_Dash_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.OnCanUseStateEvent
struct UDinoAttackState_IceJumper_Dash_C_OnCanUseStateEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.BPCanAttack
struct UDinoAttackState_IceJumper_Dash_C_BPCanAttack_Params
{
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.OnEndEvent
struct UDinoAttackState_IceJumper_Dash_C_OnEndEvent_Params
{
};

// Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.OnTickEvent
struct UDinoAttackState_IceJumper_Dash_C_OnTickEvent_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.OnBeginEvent
struct UDinoAttackState_IceJumper_Dash_C_OnBeginEvent_Params
{
	class UPrimalAIState**                             InParentState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.IsAIControlled
struct UDinoAttackState_IceJumper_Dash_C_IsAIControlled_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.ExecuteUbergraph_DinoAttackState_IceJumper_Dash
struct UDinoAttackState_IceJumper_Dash_C_ExecuteUbergraph_DinoAttackState_IceJumper_Dash_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
