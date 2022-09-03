#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_GasBagsLaunch_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackState_GasBagsLaunch.DinoAttackState_GasBagsLaunch_C.ShouldSkipRangeCheckEvent
struct UDinoAttackState_GasBagsLaunch_C_ShouldSkipRangeCheckEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackState_GasBagsLaunch.DinoAttackState_GasBagsLaunch_C.OnBeginEvent
struct UDinoAttackState_GasBagsLaunch_C_OnBeginEvent_Params
{
	class UPrimalAIState**                             InParentState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_GasBagsLaunch.DinoAttackState_GasBagsLaunch_C.BPCanAttack
struct UDinoAttackState_GasBagsLaunch_C_BPCanAttack_Params
{
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackState_GasBagsLaunch.DinoAttackState_GasBagsLaunch_C.OnCanUseStateEvent
struct UDinoAttackState_GasBagsLaunch_C_OnCanUseStateEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackState_GasBagsLaunch.DinoAttackState_GasBagsLaunch_C.GetInflation
struct UDinoAttackState_GasBagsLaunch_C_GetInflation_Params
{
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_GasBagsLaunch.DinoAttackState_GasBagsLaunch_C.ExecuteUbergraph_DinoAttackState_GasBagsLaunch
struct UDinoAttackState_GasBagsLaunch_C_ExecuteUbergraph_DinoAttackState_GasBagsLaunch_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
