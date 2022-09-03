#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_Spindles_MinigunModeDeactivate_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackState_Spindles_MinigunModeDeactivate.DinoAttackState_Spindles_MinigunModeDeactivate_C.OnEndEvent
struct UDinoAttackState_Spindles_MinigunModeDeactivate_C_OnEndEvent_Params
{
};

// Function DinoAttackState_Spindles_MinigunModeDeactivate.DinoAttackState_Spindles_MinigunModeDeactivate_C.BPCanAttack
struct UDinoAttackState_Spindles_MinigunModeDeactivate_C_BPCanAttack_Params
{
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackState_Spindles_MinigunModeDeactivate.DinoAttackState_Spindles_MinigunModeDeactivate_C.OnBeginEvent
struct UDinoAttackState_Spindles_MinigunModeDeactivate_C_OnBeginEvent_Params
{
	class UPrimalAIState**                             InParentState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_Spindles_MinigunModeDeactivate.DinoAttackState_Spindles_MinigunModeDeactivate_C.ExecuteUbergraph_DinoAttackState_Spindles_MinigunModeDeactivate
struct UDinoAttackState_Spindles_MinigunModeDeactivate_C_ExecuteUbergraph_DinoAttackState_Spindles_MinigunModeDeactivate_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
