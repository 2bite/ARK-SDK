#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_GasBagsInhale_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.OnBeginEvent
struct UDinoAttackState_GasBagsInhale_C_OnBeginEvent_Params
{
	class UPrimalAIState**                             InParentState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.OnEndEvent
struct UDinoAttackState_GasBagsInhale_C_OnEndEvent_Params
{
};

// Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.BPCanAttack
struct UDinoAttackState_GasBagsInhale_C_BPCanAttack_Params
{
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.OnCanUseStateEvent
struct UDinoAttackState_GasBagsInhale_C_OnCanUseStateEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.GetInflation
struct UDinoAttackState_GasBagsInhale_C_GetInflation_Params
{
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.BPShouldEndAttack
struct UDinoAttackState_GasBagsInhale_C_BPShouldEndAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.ExecuteUbergraph_DinoAttackState_GasBagsInhale
struct UDinoAttackState_GasBagsInhale_C_ExecuteUbergraph_DinoAttackState_GasBagsInhale_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
