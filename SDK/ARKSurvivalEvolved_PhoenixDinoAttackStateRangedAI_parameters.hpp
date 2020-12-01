#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PhoenixDinoAttackStateRangedAI_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PhoenixDinoAttackStateRangedAI.PhoenixDinoAttackStateRangedAI_C.BPCanAttack
struct UPhoenixDinoAttackStateRangedAI_C_BPCanAttack_Params
{
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhoenixDinoAttackStateRangedAI.PhoenixDinoAttackStateRangedAI_C.ExecuteUbergraph_PhoenixDinoAttackStateRangedAI
struct UPhoenixDinoAttackStateRangedAI_C_ExecuteUbergraph_PhoenixDinoAttackStateRangedAI_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
