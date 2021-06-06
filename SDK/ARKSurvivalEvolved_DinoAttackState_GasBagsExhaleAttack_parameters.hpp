#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_GasBagsExhaleAttack_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.BPOnAttackStart
struct UDinoAttackState_GasBagsExhaleAttack_C_BPOnAttackStart_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.BPCanAttack
struct UDinoAttackState_GasBagsExhaleAttack_C_BPCanAttack_Params
{
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.OnCanUseStateEvent
struct UDinoAttackState_GasBagsExhaleAttack_C_OnCanUseStateEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.GetInflationAndStaminaCost
struct UDinoAttackState_GasBagsExhaleAttack_C_GetInflationAndStaminaCost_Params
{
	float                                              CurrentInflationPercent;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentStamina;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentStaminaCost;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.ExecuteUbergraph_DinoAttackState_GasBagsExhaleAttack
struct UDinoAttackState_GasBagsExhaleAttack_C_ExecuteUbergraph_DinoAttackState_GasBagsExhaleAttack_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
