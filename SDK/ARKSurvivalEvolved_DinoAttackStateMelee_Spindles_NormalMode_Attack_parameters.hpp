#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMelee_Spindles_NormalMode_Attack_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackStateMelee_Spindles_NormalMode_Attack.DinoAttackStateMelee_Spindles_NormalMode_Attack_C.BPCanAttack
struct UDinoAttackStateMelee_Spindles_NormalMode_Attack_C_BPCanAttack_Params
{
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackStateMelee_Spindles_NormalMode_Attack.DinoAttackStateMelee_Spindles_NormalMode_Attack_C.ExecuteUbergraph_DinoAttackStateMelee_Spindles_NormalMode_Attack
struct UDinoAttackStateMelee_Spindles_NormalMode_Attack_C_ExecuteUbergraph_DinoAttackStateMelee_Spindles_NormalMode_Attack_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
