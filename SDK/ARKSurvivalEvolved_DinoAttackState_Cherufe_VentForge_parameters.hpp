#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_Cherufe_VentForge_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.BPOnAttackStart
struct UDinoAttackState_Cherufe_VentForge_C_BPOnAttackStart_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.BPCanAttack
struct UDinoAttackState_Cherufe_VentForge_C_BPCanAttack_Params
{
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.OnCanUseStateEvent
struct UDinoAttackState_Cherufe_VentForge_C_OnCanUseStateEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.GetInflationAndStaminaCost
struct UDinoAttackState_Cherufe_VentForge_C_GetInflationAndStaminaCost_Params
{
	float                                              CurrentForgeChargePercent;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentStamina;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentStaminaCost;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.ExecuteUbergraph_DinoAttackState_Cherufe_VentForge
struct UDinoAttackState_Cherufe_VentForge_C_ExecuteUbergraph_DinoAttackState_Cherufe_VentForge_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
