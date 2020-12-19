#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_Spindles_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackState_Spindles_Base.DinoAttackState_Spindles_Base_C.GetDamageClass
struct UDinoAttackState_Spindles_Base_C_GetDamageClass_Params
{
	class UClass*                                      DamageClass;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_Spindles_Base.DinoAttackState_Spindles_Base_C.IsMinigunMode
struct UDinoAttackState_Spindles_Base_C_IsMinigunMode_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_Spindles_Base.DinoAttackState_Spindles_Base_C.IsAIControlled
struct UDinoAttackState_Spindles_Base_C_IsAIControlled_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_Spindles_Base.DinoAttackState_Spindles_Base_C.ExecuteUbergraph_DinoAttackState_Spindles_Base
struct UDinoAttackState_Spindles_Base_C_ExecuteUbergraph_DinoAttackState_Spindles_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
